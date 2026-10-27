#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008D[4096] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0,
    78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0,
    281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    290, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 299, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 334,
    0, 335, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0,
    386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394,
    0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00334000;
    case 2u: goto L_00334014;
    case 3u: goto L_0033401C;
    case 4u: goto L_00334030;
    case 5u: goto L_00334054;
    case 6u: goto L_00334070;
    case 7u: goto L_00334090;
    case 8u: goto L_00334098;
    case 9u: goto L_003340B0;
    case 10u: goto L_003340D0;
    case 11u: goto L_003340F0;
    case 12u: goto L_00334100;
    case 13u: goto L_00334134;
    case 14u: goto L_0033413C;
    case 15u: goto L_00334150;
    case 16u: goto L_00334180;
    case 17u: goto L_003341A0;
    case 18u: goto L_003341A8;
    case 19u: goto L_003341C0;
    case 20u: goto L_003341D0;
    case 21u: goto L_00334258;
    case 22u: goto L_00334288;
    case 23u: goto L_003342D8;
    case 24u: goto L_00334308;
    case 25u: goto L_003343A4;
    case 26u: goto L_003343BC;
    case 27u: goto L_0033442C;
    case 28u: goto L_00334444;
    case 29u: goto L_00334480;
    case 30u: goto L_00334508;
    case 31u: goto L_00334538;
    case 32u: goto L_00334588;
    case 33u: goto L_003345B8;
    case 34u: goto L_00334654;
    case 35u: goto L_0033466C;
    case 36u: goto L_003346DC;
    case 37u: goto L_003346F4;
    case 38u: goto L_00334730;
    case 39u: goto L_003347B8;
    case 40u: goto L_00334800;
    case 41u: goto L_00334858;
    case 42u: goto L_003348A0;
    case 43u: goto L_00334944;
    case 44u: goto L_0033495C;
    case 45u: goto L_003349CC;
    case 46u: goto L_003349E4;
    case 47u: goto L_00334A20;
    case 48u: goto L_00334A60;
    case 49u: goto L_00334AA0;
    case 50u: goto L_00334C90;
    case 51u: goto L_00334CB0;
    case 52u: goto L_00334CD0;
    case 53u: goto L_00334CE8;
    case 54u: goto L_00334D00;
    case 55u: goto L_00334D20;
    case 56u: goto L_00334D40;
    case 57u: goto L_00334D60;
    case 58u: goto L_00334D70;
    case 59u: goto L_00334D80;
    case 60u: goto L_00334D98;
    case 61u: goto L_00334DB0;
    case 62u: goto L_00334DD8;
    case 63u: goto L_00334DF0;
    case 64u: goto L_00334E00;
    case 65u: goto L_00334E88;
    case 66u: goto L_00334EA0;
    case 67u: goto L_00334ED0;
    case 68u: goto L_00334EDC;
    case 69u: goto L_00334EE8;
    case 70u: goto L_00334F14;
    case 71u: goto L_00334F2C;
    case 72u: goto L_00334F38;
    case 73u: goto L_00334F44;
    case 74u: goto L_00334F50;
    case 75u: goto L_00334F5C;
    case 76u: goto L_00334F68;
    case 77u: goto L_00334F74;
    case 78u: goto L_00334F80;
    case 79u: goto L_00334F8C;
    case 80u: goto L_00334F98;
    case 81u: goto L_00334FA4;
    case 82u: goto L_00334FA8;
    case 83u: goto L_00334FC0;
    case 84u: goto L_00334FE0;
    case 85u: goto L_00335000;
    case 86u: goto L_00335020;
    case 87u: goto L_00335040;
    case 88u: goto L_00335050;
    case 89u: goto L_00335060;
    case 90u: goto L_003350B0;
    case 91u: goto L_003350DC;
    case 92u: goto L_00335134;
    case 93u: goto L_00335150;
    case 94u: goto L_00335170;
    case 95u: goto L_00335198;
    case 96u: goto L_003351A8;
    case 97u: goto L_003351C0;
    case 98u: goto L_003351D0;
    case 99u: goto L_003351E0;
    case 100u: goto L_00335270;
    case 101u: goto L_00335290;
    case 102u: goto L_003352A0;
    case 103u: goto L_003352BC;
    case 104u: goto L_003352F0;
    case 105u: goto L_00335308;
    case 106u: goto L_00335330;
    case 107u: goto L_00335340;
    case 108u: goto L_00335380;
    case 109u: goto L_003353B0;
    case 110u: goto L_003353C8;
    case 111u: goto L_00335410;
    case 112u: goto L_00335420;
    case 113u: goto L_00335428;
    case 114u: goto L_00335440;
    case 115u: goto L_00335470;
    case 116u: goto L_00335480;
    case 117u: goto L_00335490;
    case 118u: goto L_00335498;
    case 119u: goto L_003354C0;
    case 120u: goto L_003354D0;
    case 121u: goto L_003354E0;
    case 122u: goto L_00335500;
    case 123u: goto L_00335530;
    case 124u: goto L_00335540;
    case 125u: goto L_00335550;
    case 126u: goto L_00335558;
    case 127u: goto L_00335580;
    case 128u: goto L_00335590;
    case 129u: goto L_003355A0;
    case 130u: goto L_003355C0;
    case 131u: goto L_003355F8;
    case 132u: goto L_00335608;
    case 133u: goto L_00335610;
    case 134u: goto L_00335618;
    case 135u: goto L_00335620;
    case 136u: goto L_00335630;
    case 137u: goto L_00335638;
    case 138u: goto L_00335648;
    case 139u: goto L_00335650;
    case 140u: goto L_00335658;
    case 141u: goto L_00335660;
    case 142u: goto L_00335670;
    case 143u: goto L_00335678;
    case 144u: goto L_00335690;
    case 145u: goto L_003356B8;
    case 146u: goto L_003356D0;
    case 147u: goto L_003356E0;
    case 148u: goto L_00335710;
    case 149u: goto L_00335720;
    case 150u: goto L_00335730;
    case 151u: goto L_00335740;
    case 152u: goto L_00335750;
    case 153u: goto L_00335760;
    case 154u: goto L_00335798;
    case 155u: goto L_003357D0;
    case 156u: goto L_003359D8;
    case 157u: goto L_00335C30;
    case 158u: goto L_00335C58;
    case 159u: goto L_00335C70;
    case 160u: goto L_00335C88;
    case 161u: goto L_00335CA0;
    case 162u: goto L_00335CF0;
    case 163u: goto L_00335D10;
    case 164u: goto L_00335D74;
    case 165u: goto L_00335DA4;
    case 166u: goto L_00335DB8;
    case 167u: goto L_00335DC0;
    case 168u: goto L_00335DD4;
    case 169u: goto L_00335DE8;
    case 170u: goto L_00335DF0;
    case 171u: goto L_00335E30;
    case 172u: goto L_00335F00;
    case 173u: goto L_00335F70;
    case 174u: goto L_00336070;
    case 175u: goto L_00336090;
    case 176u: goto L_003360A0;
    case 177u: goto L_003360C0;
    case 178u: goto L_003360D0;
    case 179u: goto L_003360E4;
    case 180u: goto L_00336108;
    case 181u: goto L_00336114;
    case 182u: goto L_0033612C;
    case 183u: goto L_00336138;
    case 184u: goto L_00336144;
    case 185u: goto L_00336158;
    case 186u: goto L_00336160;
    case 187u: goto L_0033616C;
    case 188u: goto L_00336194;
    case 189u: goto L_003361A0;
    case 190u: goto L_003361B4;
    case 191u: goto L_003361D0;
    case 192u: goto L_003361EC;
    case 193u: goto L_00336228;
    case 194u: goto L_00336238;
    case 195u: goto L_00336270;
    case 196u: goto L_003362D8;
    case 197u: goto L_00336320;
    case 198u: goto L_00336338;
    case 199u: goto L_0033636C;
    case 200u: goto L_00336388;
    case 201u: goto L_003363B0;
    case 202u: goto L_003363D0;
    case 203u: goto L_00336414;
    case 204u: goto L_00336438;
    case 205u: goto L_00336468;
    case 206u: goto L_00336478;
    case 207u: goto L_00336490;
    case 208u: goto L_003364A8;
    case 209u: goto L_003364C8;
    case 210u: goto L_003364DC;
    case 211u: goto L_00336580;
    case 212u: goto L_003365C8;
    case 213u: goto L_003365F8;
    case 214u: goto L_00336610;
    case 215u: goto L_00336620;
    case 216u: goto L_00336680;
    case 217u: goto L_003366B4;
    case 218u: goto L_003366D0;
    case 219u: goto L_003366E4;
    case 220u: goto L_00336750;
    case 221u: goto L_00336788;
    case 222u: goto L_003367A0;
    case 223u: goto L_003367B0;
    case 224u: goto L_00336818;
    case 225u: goto L_00336884;
    case 226u: goto L_003368A0;
    case 227u: goto L_003368C4;
    case 228u: goto L_003368E0;
    case 229u: goto L_00336910;
    case 230u: goto L_00336990;
    case 231u: goto L_00336A04;
    case 232u: goto L_00336A18;
    case 233u: goto L_00336A20;
    case 234u: goto L_00336A54;
    case 235u: goto L_00336A6C;
    case 236u: goto L_00336A84;
    case 237u: goto L_00336AA0;
    case 238u: goto L_00336AB4;
    case 239u: goto L_00336ABC;
    case 240u: goto L_00336AC4;
    case 241u: goto L_00336AF0;
    case 242u: goto L_00336B04;
    case 243u: goto L_00336B18;
    case 244u: goto L_00336B8C;
    case 245u: goto L_00336BB4;
    case 246u: goto L_00336BDC;
    case 247u: goto L_00336BF8;
    case 248u: goto L_00336C00;
    case 249u: goto L_00336C10;
    case 250u: goto L_00336C3C;
    case 251u: goto L_00336C50;
    case 252u: goto L_00336CB8;
    case 253u: goto L_00336CD8;
    case 254u: goto L_00336CF4;
    case 255u: goto L_00336D0C;
    case 256u: goto L_00336D14;
    case 257u: goto L_00336D38;
    case 258u: goto L_00336D50;
    case 259u: goto L_00336D6C;
    case 260u: goto L_00336DA8;
    case 261u: goto L_00336DCC;
    case 262u: goto L_00336E18;
    case 263u: goto L_00336E38;
    case 264u: goto L_00336E58;
    case 265u: goto L_00336E74;
    case 266u: goto L_00336E8C;
    case 267u: goto L_00336E94;
    case 268u: goto L_00336EC0;
    case 269u: goto L_00336F00;
    case 270u: goto L_00336F38;
    case 271u: goto L_00336F48;
    case 272u: goto L_00336F68;
    case 273u: goto L_00336F84;
    case 274u: goto L_00336FB0;
    case 275u: goto L_00337010;
    case 276u: goto L_00337048;
    case 277u: goto L_00337050;
    case 278u: goto L_00337058;
    case 279u: goto L_00337068;
    case 280u: goto L_00337078;
    case 281u: goto L_00337080;
    case 282u: goto L_00337098;
    case 283u: goto L_003370A0;
    case 284u: goto L_003370B0;
    case 285u: goto L_003370B8;
    case 286u: goto L_003370D0;
    case 287u: goto L_003370D8;
    case 288u: goto L_003370E0;
    case 289u: goto L_003370F0;
    case 290u: goto L_00337100;
    case 291u: goto L_00337108;
    case 292u: goto L_00337118;
    case 293u: goto L_00337120;
    case 294u: goto L_00337138;
    case 295u: goto L_00337140;
    case 296u: goto L_00337150;
    case 297u: goto L_00337158;
    case 298u: goto L_00337170;
    case 299u: goto L_00337178;
    case 300u: goto L_00337180;
    case 301u: goto L_003371B0;
    case 302u: goto L_003371C8;
    case 303u: goto L_003371D0;
    case 304u: goto L_003371D8;
    case 305u: goto L_00337208;
    case 306u: goto L_00337250;
    case 307u: goto L_00337260;
    case 308u: goto L_00337270;
    case 309u: goto L_00337280;
    case 310u: goto L_00337288;
    case 311u: goto L_003372AC;
    case 312u: goto L_003372B8;
    case 313u: goto L_00337348;
    case 314u: goto L_0033735C;
    case 315u: goto L_00337364;
    case 316u: goto L_00337380;
    case 317u: goto L_0033739C;
    case 318u: goto L_003373A4;
    case 319u: goto L_003373B0;
    case 320u: goto L_003373D0;
    case 321u: goto L_003373E0;
    case 322u: goto L_003374B0;
    case 323u: goto L_003374D0;
    case 324u: goto L_00337514;
    case 325u: goto L_0033751C;
    case 326u: goto L_003375B0;
    case 327u: goto L_003375B8;
    case 328u: goto L_003375C0;
    case 329u: goto L_003375C8;
    case 330u: goto L_003375D0;
    case 331u: goto L_003375E8;
    case 332u: goto L_00337660;
    case 333u: goto L_00337668;
    case 334u: goto L_0033767C;
    case 335u: goto L_00337684;
    case 336u: goto L_0033768C;
    case 337u: goto L_00337694;
    case 338u: goto L_0033769C;
    case 339u: goto L_003376B0;
    case 340u: goto L_003376C0;
    case 341u: goto L_003376E0;
    case 342u: goto L_00337730;
    case 343u: goto L_00337738;
    case 344u: goto L_00337758;
    case 345u: goto L_00337790;
    case 346u: goto L_003377B0;
    case 347u: goto L_003377C8;
    case 348u: goto L_003377E0;
    case 349u: goto L_00337800;
    case 350u: goto L_00337820;
    case 351u: goto L_00337840;
    case 352u: goto L_00337848;
    case 353u: goto L_00337858;
    case 354u: goto L_00337860;
    case 355u: goto L_00337868;
    case 356u: goto L_00337880;
    case 357u: goto L_00337940;
    case 358u: goto L_003379CC;
    case 359u: goto L_00337A00;
    case 360u: goto L_00337A0C;
    case 361u: goto L_00337A38;
    case 362u: goto L_00337A44;
    case 363u: goto L_00337A50;
    case 364u: goto L_00337A6C;
    case 365u: goto L_00337A78;
    case 366u: goto L_00337ABC;
    case 367u: goto L_00337ADC;
    case 368u: goto L_00337B30;
    case 369u: goto L_00337B68;
    case 370u: goto L_00337B80;
    case 371u: goto L_00337B90;
    case 372u: goto L_00337BA0;
    case 373u: goto L_00337BB0;
    case 374u: goto L_00337BCC;
    case 375u: goto L_00337BE0;
    case 376u: goto L_00337C0C;
    case 377u: goto L_00337C2C;
    case 378u: goto L_00337C4C;
    case 379u: goto L_00337C58;
    case 380u: goto L_00337C74;
    case 381u: goto L_00337CA0;
    case 382u: goto L_00337CBC;
    case 383u: goto L_00337CDC;
    case 384u: goto L_00337D00;
    case 385u: goto L_00337D64;
    case 386u: goto L_00337D80;
    case 387u: goto L_00337D88;
    case 388u: goto L_00337DB0;
    case 389u: goto L_00337DC0;
    case 390u: goto L_00337E00;
    case 391u: goto L_00337EE0;
    case 392u: goto L_00337F38;
    case 393u: goto L_00337F54;
    case 394u: goto L_00337F7C;
    case 395u: goto L_00337F9C;
    case 396u: goto L_00337FBC;
    case 397u: goto L_00337FDC;
    default: bad_entry(c, 0x00334000u); return;
    }
L_00334000:
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334014u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00334014u) [[unlikely]] return; }
L_00334014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033401Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0033401Cu) [[unlikely]] return; }
L_0033401C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334030u); c.f[12] = ld32((c.r[18].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00334030u) [[unlikely]] return; }
L_00334030:
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334054u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 38u, depth + 1u); else { c.pc = 0x002D8A30u; return; } if (c.pc != 0x00334054u) [[unlikely]] return; }
L_00334054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00334070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334090u); set32(c.r[16], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00334090u) [[unlikely]] return; }
L_00334090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334098u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00334098u) [[unlikely]] return; }
L_00334098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[18].w[0] + 116u));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 6u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003340B0u); c.f[12] = ld32((c.r[18].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003340B0u) [[unlikely]] return; }
L_003340B0:
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[6], ld32((c.r[18].w[0] + 276u)));
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003340D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x003340D0u) [[unlikely]] return; }
L_003340D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003340F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00334100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 22628u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334134u); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00334134u) [[unlikely]] return; }
L_00334134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033413Cu);  if (depth < kMaxDepth) unit_0098(c, 547u, depth + 1u); else { c.pc = 0x00363910u; return; } if (c.pc != 0x0033413Cu) [[unlikely]] return; }
L_0033413C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00334150:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 255u);
    st8((c.r[28].w[0] - 22628u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[3].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3418u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3416u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00334180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003341A0u); st64((c.r[3].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x003341A0u) [[unlikely]] return; }
L_003341A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003341A8u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003341A8u) [[unlikely]] return; }
L_003341A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003341C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00C1(c, 212u, depth); }
L_003341D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[16].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00334238; } }
    set32(c.r[18], 0u + 8192u);
    set32(c.r[17], 0u + 4096u);
    set32(c.r[22], 0u + 82u);
    set32(c.r[23], 0u + 81u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[28].w[0] - 22600u);  if (t) { goto L_00334250; } }
    c.budget -= 1;
L_00334238:
    set32(c.r[18], 0u + 2048u);
    set32(c.r[17], 0u + 1024u);
    set32(c.r[22], 0u + 80u);
    set32(c.r[23], 0u + 79u);
    set32(c.r[19], c.r[28].w[0] - 22598u);
    c.budget -= 6;
L_00334250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334258u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00334258u) [[unlikely]] return; }
L_00334258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334270; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1630u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00334280; } }
L_00334270:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003343C8; } }
    c.budget -= 1;
L_00334280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00334288u) [[unlikely]] return; }
L_00334288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003342A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1630u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_003342B0; } }
L_003342A0:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00334338; } }
    c.budget -= 1;
L_003342B0:
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_003342D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00334450; } }
    c.budget -= 1;
L_003342D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003342D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x003342D8u) [[unlikely]] return; }
L_003342D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003342F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00334300; } }
L_003342F0:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003343C8; } }
    c.budget -= 1;
L_00334300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334308u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x00334308u) [[unlikely]] return; }
L_00334308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334320; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_00334330; } }
L_00334320:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00334338; } }
    c.budget -= 1;
L_00334330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00334450; } }
L_00334338:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00334370; } }
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00334360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00334390; } }
    c.budget -= 1;
L_00334360:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00334390; } }
    c.budget -= 1;
L_00334370:
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00334388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334450; } }
L_00334388:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00334390:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003343B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003343A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003343A4u) [[unlikely]] return; }
L_003343A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003343C0; } }
    c.budget -= 1;
L_003343B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003343BCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003343BCu) [[unlikely]] return; }
L_003343BC:
    c.budget -= 1;
L_003343C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334450; } }
L_003343C8:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003343F8; } }
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003343E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_00334418; } }
L_003343E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00334418; } }
    c.budget -= 1;
L_003343F8:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00334450; } }
    c.budget -= 1;
L_00334410:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00334418:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00334438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033442Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0033442Cu) [[unlikely]] return; }
L_0033442C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334448; } }
    c.budget -= 1;
L_00334438:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334444u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00334444u) [[unlikely]] return; }
L_00334444:
    c.budget -= 1;
L_00334448:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00334450:
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
L_00334480:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[16].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003344E8; } }
    set32(c.r[18], 0u + 8192u);
    set32(c.r[17], 0u + 4096u);
    set32(c.r[22], 0u + 82u);
    set32(c.r[23], 0u + 81u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[28].w[0] - 22596u);  if (t) { goto L_00334500; } }
    c.budget -= 1;
L_003344E8:
    set32(c.r[18], 0u + 2048u);
    set32(c.r[17], 0u + 1024u);
    set32(c.r[22], 0u + 80u);
    set32(c.r[23], 0u + 79u);
    set32(c.r[19], c.r[28].w[0] - 22594u);
    c.budget -= 6;
L_00334500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334508u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00334508u) [[unlikely]] return; }
L_00334508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334520; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1630u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00334530; } }
L_00334520:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00334678; } }
    c.budget -= 1;
L_00334530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334538u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00334538u) [[unlikely]] return; }
L_00334538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334550; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1630u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_00334560; } }
L_00334550:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003345E8; } }
    c.budget -= 1;
L_00334560:
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00334580; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00334700; } }
    c.budget -= 1;
L_00334580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334588u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x00334588u) [[unlikely]] return; }
L_00334588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003345A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_003345B0; } }
L_003345A0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00334678; } }
    c.budget -= 1;
L_003345B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003345B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x003345B8u) [[unlikely]] return; }
L_003345B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003345D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_003345E0; } }
L_003345D0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003345E8; } }
    c.budget -= 1;
L_003345E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00334700; } }
L_003345E8:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00334620; } }
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00334610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00334640; } }
    c.budget -= 1;
L_00334610:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00334640; } }
    c.budget -= 1;
L_00334620:
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00334638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334700; } }
L_00334638:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00334640:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00334660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334654u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00334654u) [[unlikely]] return; }
L_00334654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334670; } }
    c.budget -= 1;
L_00334660:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033466Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0033466Cu) [[unlikely]] return; }
L_0033466C:
    c.budget -= 1;
L_00334670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334700; } }
L_00334678:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003346A8; } }
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_003346C8; } }
L_00334698:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003346C8; } }
    c.budget -= 1;
L_003346A8:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003346C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00334700; } }
    c.budget -= 1;
L_003346C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003346C8:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003346E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003346DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003346DCu) [[unlikely]] return; }
L_003346DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003346F8; } }
    c.budget -= 1;
L_003346E8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003346F4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003346F4u) [[unlikely]] return; }
L_003346F4:
    c.budget -= 1;
L_003346F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00334700:
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
L_00334730:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[16].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00334798; } }
    set32(c.r[18], 0u + 8192u);
    set32(c.r[17], 0u + 4096u);
    set32(c.r[22], 0u + 82u);
    set32(c.r[23], 0u + 81u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[28].w[0] - 22592u);  if (t) { goto L_003347B0; } }
    c.budget -= 1;
L_00334798:
    set32(c.r[18], 0u + 2048u);
    set32(c.r[17], 0u + 1024u);
    set32(c.r[22], 0u + 80u);
    set32(c.r[23], 0u + 79u);
    set32(c.r[19], c.r[28].w[0] - 22590u);
    c.budget -= 6;
L_003347B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003347B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003347B8u) [[unlikely]] return; }
L_003347B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003347E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1630u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[22].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_003347E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003347F8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1631u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003347F8; } }
L_003347E8:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00334968; } }
    c.budget -= 1;
L_003347F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334800u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00334800u) [[unlikely]] return; }
L_00334800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334820; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1630u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[23].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_00334820; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00334830; } }
L_00334820:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003348D8; } }
    c.budget -= 1;
L_00334830:
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00334850; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003349F0; } }
    c.budget -= 1;
L_00334850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334858u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x00334858u) [[unlikely]] return; }
L_00334858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334888; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[22].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_00334888; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00334898; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1631u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334898; } }
L_00334888:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00334968; } }
    c.budget -= 1;
L_00334898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003348A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x003348A0u) [[unlikely]] return; }
L_003348A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003348C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[23].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_003348C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003348D0; } }
L_003348C0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003348D8; } }
    c.budget -= 1;
L_003348D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003349F0; } }
L_003348D8:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00334910; } }
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00334900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00334930; } }
    c.budget -= 1;
L_00334900:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00334930; } }
    c.budget -= 1;
L_00334910:
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00334928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003349F0; } }
L_00334928:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00334930:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00334950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334944u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00334944u) [[unlikely]] return; }
L_00334944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334960; } }
    c.budget -= 1;
L_00334950:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033495Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0033495Cu) [[unlikely]] return; }
L_0033495C:
    c.budget -= 1;
L_00334960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003349F0; } }
L_00334968:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00334998; } }
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_003349B8; } }
L_00334988:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003349B8; } }
    c.budget -= 1;
L_00334998:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003349B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003349F0; } }
    c.budget -= 1;
L_003349B0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003349B8:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003349D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003349CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003349CCu) [[unlikely]] return; }
L_003349CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003349E8; } }
    c.budget -= 1;
L_003349D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003349E4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003349E4u) [[unlikely]] return; }
L_003349E4:
    c.budget -= 1;
L_003349E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003349F0:
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
L_00334A20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2376u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334A48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 40u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00334A50; } }
L_00334A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334A58; } }
L_00334A50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00334A58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00334A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2376u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334A88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 41u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00334A90; } }
L_00334A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334A98; } }
L_00334A90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00334A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00334AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2376u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
    c.budget -= 1;
L_00334AC0:
    c.r[2].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334AE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 40u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334AE8:
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334B10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 41u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334B10:
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334B38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 80u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334B38:
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334B60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 79u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334B60:
    c.r[2].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334B88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 82u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334B88:
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334BB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 81u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334BB0:
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334BD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 78u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334BD8:
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334C00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 75u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334C00:
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334C28; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 58u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334C28:
    c.r[2].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334C50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 59u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334C50:
    c.r[2].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334C78; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 66u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334C78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00334C80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00334C90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2384u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00334CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 19440u);
    set32(c.r[6], 0u + 2400u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334CD0u); c.r[5].d[0] = c.r[2].d[0] | 57344ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00334CD0u) [[unlikely]] return; }
L_00334CD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334CE8u); set32(c.r[6], 0u + 2400u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00334CE8u) [[unlikely]] return; }
L_00334CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00334D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = c.r[2].d[0] | 57344ull;
    set32(c.r[5], c.r[5].w[0] + 17040u);
    c.budget -= 6;
    { set32(c.r[6], 0u + 2400u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_00334D20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 19440u);
    set32(c.r[5], c.r[5].w[0] + 17040u);
    c.budget -= 6;
    { set32(c.r[6], 0u + 2400u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_00334D40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[5], c.r[5].w[0] + 19440u);
    c.budget -= 6;
    { set32(c.r[6], 0u + 2400u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_00334D60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238470u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 43u, depth); }
L_00334D70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238490u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 44u, depth); }
L_00334D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334D98u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00334D98u) [[unlikely]] return; }
L_00334D98:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 9847u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00334DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9847u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00334DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334DD8u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x00334DD8u) [[unlikely]] return; }
L_00334DD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 9847u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_00334DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00334DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334E00u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x00334E00u) [[unlikely]] return; }
L_00334E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334E90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 9850u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 9850u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00334E90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 2944u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9848u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st8((c.r[4].w[0] + 9848u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00334E80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9848u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9848u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st8((c.r[4].w[0] + 9848u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
L_00334E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334E88u);  if (depth < kMaxDepth) unit_008D(c, 61u, depth + 1u); else { c.pc = 0x00334DB0u; return; } if (c.pc != 0x00334E88u) [[unlikely]] return; }
L_00334E88:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[3].w[0] + 9850u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00334E90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00334EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00334FA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 2912u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00334000u < 16384u) { entry = entries_008D[(t - 0x00334000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00334ED0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334EDCu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00334EDCu) [[unlikely]] return; }
L_00334EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334FA8; } }
    c.budget -= 1;
L_00334EE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25879u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00334F08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00334F20; } }
    c.budget -= 1;
L_00334F08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334F14u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00334F14u) [[unlikely]] return; }
L_00334F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334FA8; } }
    c.budget -= 1;
L_00334F20:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334F2Cu); set32(c.r[5], 0u + 193u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00334F2Cu) [[unlikely]] return; }
L_00334F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334FA8; } }
    c.budget -= 1;
L_00334F38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334F44u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00334F44u) [[unlikely]] return; }
L_00334F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334FA8; } }
    c.budget -= 1;
L_00334F50:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334F5Cu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00334F5Cu) [[unlikely]] return; }
L_00334F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334FA8; } }
    c.budget -= 1;
L_00334F68:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334F74u); set32(c.r[5], 0u + 150u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00334F74u) [[unlikely]] return; }
L_00334F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334FA8; } }
    c.budget -= 1;
L_00334F80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334F8Cu); set32(c.r[5], 0u + 149u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00334F8Cu) [[unlikely]] return; }
L_00334F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334FA8; } }
    c.budget -= 1;
L_00334F98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334FA4u); set32(c.r[5], 0u + 152u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00334FA4u) [[unlikely]] return; }
L_00334FA4:
    c.budget -= 1;
L_00334FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00334FC0:
    set32(c.r[2], 0u + 256u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334FE0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00334FE0u) [[unlikely]] return; }
L_00334FE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[28].w[0] - 22588u), 0u);
    st8((c.r[3].w[0] + 9853u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00335000:
    set32(c.r[2], 0u + 256u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335020u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00335020u) [[unlikely]] return; }
L_00335020:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[28].w[0] - 22588u), c.r[4].w[0]);
    st8((c.r[3].w[0] + 9853u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00335040:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B4E0u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 201u, depth); }
L_00335050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335060u); set32(c.r[4], ld32((c.r[28].w[0] - 22588u)));  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00335060u) [[unlikely]] return; }
L_00335060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335088; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22588u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00335080; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9853u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00335080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00335098; } }
L_00335088:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 9853u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00335098:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003350B0:
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.f[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[13]);
    set32(c.r[5], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003350DCu); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003350DCu) [[unlikely]] return; }
L_003350DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00335104; } }
    c.f[20] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00335120; } }
L_00335104:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[20] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[20]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_00335120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00335140; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335134u); set32(c.r[4], c.r[4].w[0] - 2864u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00335134u) [[unlikely]] return; }
L_00335134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335150; } }
    c.budget -= 1;
L_00335140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335150u); set32(c.r[4], c.r[4].w[0] - 2864u);  if (depth < kMaxDepth) unit_00AA(c, 53u, depth + 1u); else { c.pc = 0x003A8940u; return; } if (c.pc != 0x00335150u) [[unlikely]] return; }
L_00335150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00335170:
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[13]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335198u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00335198u) [[unlikely]] return; }
L_00335198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003351A8u); set32(c.r[4], c.r[4].w[0] - 2864u);  if (depth < kMaxDepth) unit_00AA(c, 53u, depth + 1u); else { c.pc = 0x003A8940u; return; } if (c.pc != 0x003351A8u) [[unlikely]] return; }
L_003351A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003351C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AA(c, 48u, depth); }
L_003351D0:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[5].d[0] = c.r[4].d[0] + 0ull;  [[clang::musttail]] return unit_00AA(c, 45u, depth); }
L_003351E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.f[12];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00335208; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00335224; } }
L_00335208:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_00335224:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00335248; } }
    c.f[12] = fp::cvt_w_s(c.f[12]);
    set32(c.r[5], c.f[12]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335260; } }
L_00335248:
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[12] = fp::cvt_w_s(c.f[12]);
    set32(c.r[5], c.f[12]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00335260:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AA(c, 45u, depth); }
L_00335270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15600u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 1440u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00335290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_003352A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { goto L_003352C8; } }
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003352BCu); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003352BCu) [[unlikely]] return; }
L_003352BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003352E0; } }
    c.budget -= 1;
L_003352C8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003352A0u | kUnwind; return; } goto L_003352A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003352E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003352F0:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00335328; } }
    c.budget -= 1;
L_00335308:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00335328; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335308u | kUnwind; return; } goto L_00335308; } }
L_00335328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00335330:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00335368; } }
L_00335340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00335358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335370; } }
    c.budget -= 1;
L_00335358:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335340u | kUnwind; return; } goto L_00335340; } }
L_00335368:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00335370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00335380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003353E8; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003353B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003353D8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003353C8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x003353C8u) [[unlikely]] return; }
L_003353C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003353D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003353F0; } }
L_003353D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003353B0u | kUnwind; return; } goto L_003353B0; } }
L_003353E8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003353F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00335410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335420u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00382700u; return; } if (c.pc != 0x00335420u) [[unlikely]] return; }
L_00335420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335428u);  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x00335428u) [[unlikely]] return; }
L_00335428:
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23736u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00335440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23732u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003354E8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 2848u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00334000u < 16384u) { entry = entries_008D[(t - 0x00334000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00335470:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003354E8; } }
L_00335480:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003354E8; } }
L_00335490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335498u);  if (depth < kMaxDepth) unit_00A0(c, 271u, depth + 1u); else { c.pc = 0x00382720u; return; } if (c.pc != 0x00335498u) [[unlikely]] return; }
L_00335498:
    st8((c.r[28].w[0] - 23736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23736u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003354B8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23732u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003354B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003354E8; } }
L_003354C0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003354E8; } }
L_003354D0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003354E8; } }
L_003354E0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23736u));
    c.budget -= 2;
L_003354E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00335500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23732u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003355A8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 2816u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00334000u < 16384u) { entry = entries_008D[(t - 0x00334000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00335530:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003355A8; } }
L_00335540:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003355A8; } }
L_00335550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335558u);  if (depth < kMaxDepth) unit_00A0(c, 22u, depth + 1u); else { c.pc = 0x00380120u; return; } if (c.pc != 0x00335558u) [[unlikely]] return; }
L_00335558:
    st8((c.r[28].w[0] - 23736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23736u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335578; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23732u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00335578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003355A8; } }
L_00335580:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003355A8; } }
L_00335590:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003355A8; } }
L_003355A0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23736u));
    c.budget -= 2;
L_003355A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003355C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00335640; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_00335600; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003355F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335678; } }
    c.budget -= 1;
L_003355F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003355F8u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x003355F8u) [[unlikely]] return; }
L_003355F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335678; } }
L_00335600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335608u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x00335608u) [[unlikely]] return; }
L_00335608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335610u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x00335610u) [[unlikely]] return; }
L_00335610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335618u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00335618u) [[unlikely]] return; }
L_00335618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335620u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x00335620u) [[unlikely]] return; }
L_00335620:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335630u); st8((c.r[2].w[0] + 2535u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0081(c, 274u, depth + 1u); else { c.pc = 0x00307150u; return; } if (c.pc != 0x00335630u) [[unlikely]] return; }
L_00335630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335638u);  if (depth < kMaxDepth) unit_0099(c, 41u, depth + 1u); else { c.pc = 0x00364740u; return; } if (c.pc != 0x00335638u) [[unlikely]] return; }
L_00335638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335678; } }
L_00335640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335648u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x00335648u) [[unlikely]] return; }
L_00335648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335650u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x00335650u) [[unlikely]] return; }
L_00335650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335658u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00335658u) [[unlikely]] return; }
L_00335658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335660u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x00335660u) [[unlikely]] return; }
L_00335660:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335670u); st8((c.r[2].w[0] + 2535u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0081(c, 253u, depth + 1u); else { c.pc = 0x00306F90u; return; } if (c.pc != 0x00335670u) [[unlikely]] return; }
L_00335670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335678u);  if (depth < kMaxDepth) unit_0099(c, 41u, depth + 1u); else { c.pc = 0x00364740u; return; } if (c.pc != 0x00335678u) [[unlikely]] return; }
L_00335678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00335690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003356B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003356D8; } }
    c.budget -= 1;
L_003356B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003356B8u);  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364540u; return; } if (c.pc != 0x003356B8u) [[unlikely]] return; }
L_003356B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003356C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003356F8; } }
L_003356C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003356D0u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x003356D0u) [[unlikely]] return; }
L_003356D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003356F8; } }
L_003356D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003356E0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003356E0u) [[unlikely]] return; }
L_003356E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003356F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003356F8; } }
L_003356F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003356F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00335710:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23716u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00335720:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23716u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00335730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335740u);  if (depth < kMaxDepth) unit_008F(c, 82u, depth + 1u); else { c.pc = 0x0033D340u; return; } if (c.pc != 0x00335740u) [[unlikely]] return; }
L_00335740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00335750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 26395u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00335760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 2568u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 4);  if (t) { goto L_00335790; } }
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003357B8; } }
L_00335790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335798u);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x00335798u) [[unlikely]] return; }
L_00335798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_003357B0; } }
    c.r[3].d[0] = c.r[3].d[0] | 42464ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003357B8; } }
    c.budget -= 1;
L_003357B0:
    c.r[3].d[0] = 0ull | 54000ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003357B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003357D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23060u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[1].w[0] + 10304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2608u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 10305u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10270u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[1].w[0] + 11200u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10276u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11202u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10274u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11214u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10272u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11215u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10273u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11216u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10275u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11217u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10192u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11203u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10262u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[1].w[0] + 11204u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10264u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[1].w[0] + 11206u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[1].w[0] + 11210u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10266u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[1].w[0] + 11212u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10277u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11196u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10261u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 10842u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10193u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 10846u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10194u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 10844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10195u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 10845u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10290u));
    c.budget -= 69;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[23], c.r[23].w[0] + 10304u);  if (t) { goto L_003358F0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033590C; } }
L_003358F0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0033590C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 10848u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10291u));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_0033593C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00335954; } }
L_0033593C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00335954:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 10852u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10292u));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_00335984; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033599C; } }
L_00335984:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0033599C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = c.r[4].w[0];
    c.r[3].d[0] = 0ull + 0ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 10856u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 10293u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 10847u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 10288u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11218u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10289u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 11219u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
L_003359D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10196u));
    st8((c.r[2].w[0] + 474u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10228u));
    st8((c.r[2].w[0] + 490u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10212u));
    st8((c.r[2].w[0] + 506u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10244u));
    st8((c.r[2].w[0] + 522u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10197u));
    st8((c.r[2].w[0] + 475u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10229u));
    st8((c.r[2].w[0] + 491u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10213u));
    st8((c.r[2].w[0] + 507u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10245u));
    st8((c.r[2].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10198u));
    st8((c.r[2].w[0] + 476u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10230u));
    st8((c.r[2].w[0] + 492u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10214u));
    st8((c.r[2].w[0] + 508u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10246u));
    st8((c.r[2].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10199u));
    st8((c.r[2].w[0] + 477u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10231u));
    st8((c.r[2].w[0] + 493u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10215u));
    st8((c.r[2].w[0] + 509u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10247u));
    st8((c.r[2].w[0] + 525u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10200u));
    st8((c.r[2].w[0] + 478u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10232u));
    st8((c.r[2].w[0] + 494u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10216u));
    st8((c.r[2].w[0] + 510u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10248u));
    st8((c.r[2].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10201u));
    st8((c.r[2].w[0] + 479u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10233u));
    st8((c.r[2].w[0] + 495u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10217u));
    st8((c.r[2].w[0] + 511u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10249u));
    st8((c.r[2].w[0] + 527u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10202u));
    st8((c.r[2].w[0] + 480u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10234u));
    st8((c.r[2].w[0] + 496u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10218u));
    st8((c.r[2].w[0] + 512u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10250u));
    st8((c.r[2].w[0] + 528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10203u));
    st8((c.r[2].w[0] + 481u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10235u));
    st8((c.r[2].w[0] + 497u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10219u));
    st8((c.r[2].w[0] + 513u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 10251u));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[4].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 132;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[2].w[0] + 529u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003359D8u | kUnwind; return; } goto L_003359D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10260u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00335C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[23].w[0] + 539u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00335C10; } }
    c.budget -= 1;
L_00335C08:
    st8((c.r[23].w[0] + 539u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00335C10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2608u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00335D48; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.r[21].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
L_00335C30:
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 898u));
    set32(c.r[4], c.r[18].w[0] + 3u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335C58u); set32(c.r[5], c.r[2].w[0] + 672u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00335C58u) [[unlikely]] return; }
L_00335C58:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[18].w[0] + 24u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335C70u); set32(c.r[5], c.r[2].w[0] + 792u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00335C70u) [[unlikely]] return; }
L_00335C70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335C88u); set32(c.r[5], c.r[2].w[0] + 800u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00335C88u) [[unlikely]] return; }
L_00335C88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[18].w[0] + 49u);
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335CA0u); set32(c.r[5], c.r[2].w[0] + 817u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00335CA0u) [[unlikely]] return; }
L_00335CA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 881u));
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 882u));
    st16((c.r[18].w[0] + 114u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 884u));
    st16((c.r[18].w[0] + 116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 888u));
    st16((c.r[18].w[0] + 118u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 20;
L_00335CF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[17].w[0] + 22u);
    set32(c.r[4], c.r[16].w[0] + 556u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335D10u); set32(c.r[5], c.r[2].w[0] + 672u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00335D10u) [[unlikely]] return; }
L_00335D10:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 22u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335CF0u | kUnwind; return; } goto L_00335CF0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 232u);
    set32(c.r[18], c.r[18].w[0] + 118u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2608u));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335C30u | kUnwind; return; } goto L_00335C30; } }
    c.budget -= 1;
L_00335D48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23060u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 898u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335D74u); st8((c.r[4].w[0] + 666u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 171u, depth + 1u); else { c.pc = 0x00335E30u; return; } if (c.pc != 0x00335D74u) [[unlikely]] return; }
L_00335D74:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 199u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DA4u); st8((c.r[2].w[0] + 200u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00335DA4u) [[unlikely]] return; }
L_00335DA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DB8u); set32(c.r[5], c.r[2].w[0] + 10353u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00335DB8u) [[unlikely]] return; }
L_00335DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DC0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x00335DC0u) [[unlikely]] return; }
L_00335DC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DD4u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00335DD4u) [[unlikely]] return; }
L_00335DD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DE8u); set32(c.r[5], c.r[2].w[0] + 10359u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00335DE8u) [[unlikely]] return; }
L_00335DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DF0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x00335DF0u) [[unlikely]] return; }
L_00335DF0:
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    st16((c.r[23].w[0] + 894u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00335E30:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10296u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00335E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00335E50; } }
L_00335E48:
    set32(c.r[3], 0u + 360u);
    st16((c.r[28].w[0] - 22880u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00335E50:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10298u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00335E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22884u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00335E70; } }
    c.budget -= 1;
L_00335E68:
    set32(c.r[3], 0u + 540u);
    st16((c.r[28].w[0] - 22884u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00335E70:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10300u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00335E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22888u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00335E90; } }
    c.budget -= 1;
L_00335E88:
    set32(c.r[3], 0u + 1200u);
    st16((c.r[28].w[0] - 22888u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00335E90:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10302u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00335EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22892u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00335EB0; } }
    c.budget -= 1;
L_00335EA8:
    set32(c.r[3], 0u + 3600u);
    st16((c.r[28].w[0] - 22892u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00335EB0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10304u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00335EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22896u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00335ED0; } }
    c.budget -= 1;
L_00335EC8:
    set32(c.r[3], 0u + 30u);
    st16((c.r[28].w[0] - 22896u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00335ED0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10306u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00335EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22900u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00335EF0; } }
    c.budget -= 1;
L_00335EE8:
    set32(c.r[3], 0u + 20u);
    st16((c.r[28].w[0] - 22900u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00335EF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00335F00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[28].w[0] - 22992u));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_00335F70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11278u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00335F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335F70u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x003360C0u; return; } if (c.pc != 0x00335F70u) [[unlikely]] return; }
L_00335F70:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2608u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00336000; } }
    st8((c.r[5].w[0] + 10315u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.r[6].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = c.r[21].d[0] & 255ull;
    c.r[4].d[0] = c.r[20].d[0] & 255ull;
    st8((c.r[3].w[0] + 10316u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10317u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10320u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10324u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10332u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10336u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10328u), c.r[23].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 664u));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[7].w[0] + 664u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 658u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[6].w[0] + 658u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 660u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 660u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00336040; } }
L_00336000:
    st32((c.r[5].w[0] + 10328u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10336u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10332u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10324u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 10320u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10317u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10316u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10315u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_00336040:
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
L_00336070:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22956u));
    st8((c.r[28].w[0] - 22960u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] & 191ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 22956u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00336090:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22956u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 22956u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003360A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22960u));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003360C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 22992u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003360D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003360E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 325u, depth + 1u); else { c.pc = 0x0038ACF0u; return; } if (c.pc != 0x003360E4u) [[unlikely]] return; }
L_003360E4:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003361B8; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 2784u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00334000u < 16384u) { entry = entries_008D[(t - 0x00334000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00336108:
    set32(c.r[4], 0u + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336114u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x00336114u) [[unlikely]] return; }
L_00336114:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 6u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033612Cu); set32(c.r[7], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x0033612Cu) [[unlikely]] return; }
L_0033612C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003361B8; } }
    c.budget -= 1;
L_00336138:
    set32(c.r[4], 0u + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336144u); set32(c.r[5], 0u + 304u);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x00336144u) [[unlikely]] return; }
L_00336144:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 38u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336158u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x00336158u) [[unlikely]] return; }
L_00336158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003361B8; } }
L_00336160:
    set32(c.r[4], 0u + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033616Cu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x0033616Cu) [[unlikely]] return; }
L_0033616C:
    set32(c.r[3], c.r[16].w[0] - 2u);
    set32(c.r[2], 0u + 154u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 6u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336194u); set32(c.r[7], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x00336194u) [[unlikely]] return; }
L_00336194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003361B8; } }
    c.budget -= 1;
L_003361A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003361B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x003361B4u) [[unlikely]] return; }
L_003361B4:
    c.budget -= 1;
L_003361B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003361D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003361ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 326u, depth + 1u); else { c.pc = 0x0038AD10u; return; } if (c.pc != 0x003361ECu) [[unlikely]] return; }
L_003361EC:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00336248; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336240; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336248; } }
    c.budget -= 1;
L_00336220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336228u);  if (depth < kMaxDepth) unit_00A2(c, 335u, depth + 1u); else { c.pc = 0x0038AE00u; return; } if (c.pc != 0x00336228u) [[unlikely]] return; }
L_00336228:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336238u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00336238u) [[unlikely]] return; }
L_00336238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336250; } }
L_00336240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336250; } }
L_00336248:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00336250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00336270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 8u)));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22476u)));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003362D0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003362D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336308; } }
    c.budget -= 1;
L_003362D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003362D8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0084(c, 128u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x003362D8u) [[unlikely]] return; }
L_003362D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00336308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00336320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00336358; } }
    c.budget -= 1;
L_00336338:
    c.budget -= 8;
L_00336358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033636Cu); set32(c.r[7], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0002(c, 443u, depth + 1u); else { c.pc = 0x0010BE08u; return; } if (c.pc != 0x0033636Cu) [[unlikely]] return; }
L_0033636C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336338u | kUnwind; return; } goto L_00336338; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003363B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003363A8; } }
    c.budget -= 1;
L_00336388:
    c.budget -= 8;
L_003363A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003363B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 2u, depth + 1u); else { c.pc = 0x0010C010u; return; } if (c.pc != 0x003363B0u) [[unlikely]] return; }
L_003363B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336388u | kUnwind; return; } goto L_00336388; } }
L_003363B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003363D0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    set32(c.r[2], 0u + 251u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00336430; } }
L_00336414:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336414u | kUnwind; return; } goto L_00336414; } }
L_00336430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336438u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00336438u) [[unlikely]] return; }
L_00336438:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(251ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336550; } }
L_00336458:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336468u); set32(c.r[6], 0u + 251u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00336468u) [[unlikely]] return; }
L_00336468:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336478u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00336478u) [[unlikely]] return; }
L_00336478:
    set32(c.r[20], c.r[21].w[0] + 1u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336490u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00336490u) [[unlikely]] return; }
L_00336490:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_003364A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[17].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_003364A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00336520; } }
L_003364A8:
    c.budget -= 8;
L_003364C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 27836u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003364DCu); set32(c.r[7], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_0003(c, 29u, depth + 1u); else { c.pc = 0x0010C458u; return; } if (c.pc != 0x003364DCu) [[unlikely]] return; }
L_003364DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003364A8u | kUnwind; return; } goto L_003364A8; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[3], 0u - 4u);
    set32(c.r[2], 0u - 4u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00336530; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00336520:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003364C8u | kUnwind; return; } goto L_003364C8; } }
    c.budget -= 1;
L_00336530:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u - 8u);  if (t) { goto L_00336548; } }
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 3);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00336548:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00336550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_00336580:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[21].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00336670; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00336608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003365E8; } }
L_003365C8:
    c.budget -= 8;
L_003365E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003365F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 27u, depth + 1u); else { c.pc = 0x0010C438u; return; } if (c.pc != 0x003365F8u) [[unlikely]] return; }
L_003365F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003365C8u | kUnwind; return; } goto L_003365C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336728; } }
L_00336608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00336658; } }
L_00336610:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336620u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 27u, depth + 1u); else { c.pc = 0x0010C438u; return; } if (c.pc != 0x00336620u) [[unlikely]] return; }
L_00336620:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00336638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336728; } }
    c.budget -= 1;
L_00336638:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 8;
L_00336658:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336610u | kUnwind; return; } goto L_00336610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336728; } }
    c.budget -= 1;
L_00336670:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_003366C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003366A0; } }
L_00336680:
    c.budget -= 8;
L_003366A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003366B4u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 29u, depth + 1u); else { c.pc = 0x0010C458u; return; } if (c.pc != 0x003366B4u) [[unlikely]] return; }
L_003366B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336680u | kUnwind; return; } goto L_00336680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336728; } }
    c.budget -= 1;
L_003366C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00336718; } }
L_003366D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003366E4u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 29u, depth + 1u); else { c.pc = 0x0010C458u; return; } if (c.pc != 0x003366E4u) [[unlikely]] return; }
L_003366E4:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003366F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336728; } }
L_003366F8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 8;
L_00336718:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003366D0u | kUnwind; return; } goto L_003366D0; } }
    c.budget -= 1;
L_00336728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00336750:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[7], c.r[7].w[0] - 128u);
    set32(c.r[8], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 64u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336788u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x00336788u) [[unlikely]] return; }
L_00336788:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00336794; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00336794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003367A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 1024u);
    c.budget -= 4;
L_003367B0:
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336810; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00336808; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00336808; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00336888; } }
    c.budget -= 1;
L_00336808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003367B0u | kUnwind; return; } goto L_003367B0; } }
L_00336810:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] - 912u);
    c.budget -= 2;
L_00336818:
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336878; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00336870; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00336870; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00336888; } }
    c.budget -= 1;
L_00336870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336818u | kUnwind; return; } goto L_00336818; } }
L_00336878:
    set32(c.r[5], 0u + 255u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336884u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00336884u) [[unlikely]] return; }
L_00336884:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00336888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003368A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003368D0; } }
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + 12592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368C4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003368C4u) [[unlikely]] return; }
L_003368C4:
    set32(c.r[3], 0u - 1u);
    st32((c.r[28].w[0] - 22816u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 22820u), c.r[3].w[0]);
    c.budget -= 3;
L_003368D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003368E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003368F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336980; } }
    c.budget -= 1;
L_003368F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12592u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_00336910:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00336950; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00336948; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22812u), c.r[2].w[0]);  if (t) { goto L_00336960; } }
    c.budget -= 1;
L_00336948:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_00336950:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336910u | kUnwind; return; } goto L_00336910; } }
L_00336960:
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336980; } }
    c.budget -= 1;
L_00336978:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00336980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00336990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22812u)));
    st32((c.r[28].w[0] - 22584u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336AD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003369D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003369D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336AD8; } }
L_003369D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336AE0; } }
L_003369D8:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003369F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003369F8; } }
    c.budget -= 1;
L_003369F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336AE0; } }
L_003369F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A04u); set32(c.r[4], c.r[4].w[0] - 2592u);  if (depth < kMaxDepth) unit_0003(c, 6u, depth + 1u); else { c.pc = 0x0010C0A0u; return; } if (c.pc != 0x00336A04u) [[unlikely]] return; }
L_00336A04:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00336A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A18u);  if (depth < kMaxDepth) unit_008D(c, 197u, depth + 1u); else { c.pc = 0x00336320u; return; } if (c.pc != 0x00336A18u) [[unlikely]] return; }
L_00336A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A20u); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_0083(c, 399u, depth + 1u); else { c.pc = 0x0030FB40u; return; } if (c.pc != 0x00336A20u) [[unlikely]] return; }
L_00336A20:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00336A60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336A70; } }
    c.budget -= 1;
L_00336A48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A54u); set32(c.r[4], c.r[4].w[0] - 2560u);  if (depth < kMaxDepth) unit_0003(c, 6u, depth + 1u); else { c.pc = 0x0010C0A0u; return; } if (c.pc != 0x00336A54u) [[unlikely]] return; }
L_00336A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00336A70; } }
    c.budget -= 1;
L_00336A60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A6Cu); set32(c.r[4], c.r[4].w[0] - 2528u);  if (depth < kMaxDepth) unit_0003(c, 6u, depth + 1u); else { c.pc = 0x0010C0A0u; return; } if (c.pc != 0x00336A6Cu) [[unlikely]] return; }
L_00336A6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00336A70:
    c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00336A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A84u);  if (depth < kMaxDepth) unit_008D(c, 197u, depth + 1u); else { c.pc = 0x00336320u; return; } if (c.pc != 0x00336A84u) [[unlikely]] return; }
L_00336A84:
    c.budget -= 1;
L_00336A88:
    set32(c.r[4], ld32((c.r[28].w[0] - 27840u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336AA0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 202u, depth + 1u); else { c.pc = 0x003363D0u; return; } if (c.pc != 0x00336AA0u) [[unlikely]] return; }
L_00336AA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01270000u);
    set32(c.r[4], c.r[4].w[0] - 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336AB4u); c.r[5].d[0] = c.r[2].d[0] | 16ull;  if (depth < kMaxDepth) unit_008D(c, 301u, depth + 1u); else { c.pc = 0x003371B0u; return; } if (c.pc != 0x00336AB4u) [[unlikely]] return; }
L_00336AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336ABCu); st32((c.r[28].w[0] - 22812u), 0u);  if (depth < kMaxDepth) unit_008D(c, 226u, depth + 1u); else { c.pc = 0x003368A0u; return; } if (c.pc != 0x00336ABCu) [[unlikely]] return; }
L_00336ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336AC4u);  if (depth < kMaxDepth) unit_008D(c, 268u, depth + 1u); else { c.pc = 0x00336EC0u; return; } if (c.pc != 0x00336AC4u) [[unlikely]] return; }
L_00336AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336AD8; } }
    c.budget -= 1;
L_00336AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336AE0; } }
L_00336AD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00336AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00336AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336B04u); set32(c.r[4], c.r[4].w[0] - 2496u);  if (depth < kMaxDepth) unit_0003(c, 6u, depth + 1u); else { c.pc = 0x0010C0A0u; return; } if (c.pc != 0x00336B04u) [[unlikely]] return; }
L_00336B04:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00336B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336B18u);  if (depth < kMaxDepth) unit_008D(c, 197u, depth + 1u); else { c.pc = 0x00336320u; return; } if (c.pc != 0x00336B18u) [[unlikely]] return; }
L_00336B18:
    set32(c.r[5], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00336C00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00336B48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336C00; } }
    c.budget -= 1;
L_00336B48:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00336BC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336B98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00336B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336BE0; } }
L_00336B70:
    set32(c.r[4], ld32((c.r[28].w[0] - 27820u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 2464u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336B8Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 202u, depth + 1u); else { c.pc = 0x003363D0u; return; } if (c.pc != 0x00336B8Cu) [[unlikely]] return; }
L_00336B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336BE0; } }
    c.budget -= 1;
L_00336B98:
    set32(c.r[4], ld32((c.r[28].w[0] - 27816u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 2464u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BB4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 202u, depth + 1u); else { c.pc = 0x003363D0u; return; } if (c.pc != 0x00336BB4u) [[unlikely]] return; }
L_00336BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336BE0; } }
    c.budget -= 1;
L_00336BC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 27800u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], c.r[6].w[0] - 2456u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BDCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 202u, depth + 1u); else { c.pc = 0x003363D0u; return; } if (c.pc != 0x00336BDCu) [[unlikely]] return; }
L_00336BDC:
    c.budget -= 1;
L_00336BE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 27832u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BF8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 202u, depth + 1u); else { c.pc = 0x003363D0u; return; } if (c.pc != 0x00336BF8u) [[unlikely]] return; }
L_00336BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C00u);  if (depth < kMaxDepth) unit_008D(c, 306u, depth + 1u); else { c.pc = 0x00337250u; return; } if (c.pc != 0x00336C00u) [[unlikely]] return; }
L_00336C00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00336C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22584u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336EA8; } }
    c.budget -= 1;
L_00336C30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C3Cu); set32(c.r[4], c.r[4].w[0] - 2496u);  if (depth < kMaxDepth) unit_0003(c, 6u, depth + 1u); else { c.pc = 0x0010C0A0u; return; } if (c.pc != 0x00336C3Cu) [[unlikely]] return; }
L_00336C3C:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00336C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C50u);  if (depth < kMaxDepth) unit_008D(c, 197u, depth + 1u); else { c.pc = 0x00336320u; return; } if (c.pc != 0x00336C50u) [[unlikely]] return; }
L_00336C50:
    set32(c.r[6], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00336D78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00336D20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00336C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336EA0; } }
    c.budget -= 1;
L_00336C80:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336CC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00336CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336CD8; } }
L_00336CA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 27860u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CB8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336CB8u) [[unlikely]] return; }
L_00336CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336CD8; } }
L_00336CC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 27856u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CD8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336CD8u) [[unlikely]] return; }
L_00336CD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 27848u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 2440u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336CF4u) [[unlikely]] return; }
L_00336CF4:
    set32(c.r[4], ld32((c.r[28].w[0] - 27844u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D0Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336D0Cu) [[unlikely]] return; }
L_00336D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D14u);  if (depth < kMaxDepth) unit_008D(c, 306u, depth + 1u); else { c.pc = 0x00337250u; return; } if (c.pc != 0x00336D14u) [[unlikely]] return; }
L_00336D14:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22824u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00336EA0; } }
L_00336D20:
    set32(c.r[4], ld32((c.r[28].w[0] - 27824u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2440u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D38u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336D38u) [[unlikely]] return; }
L_00336D38:
    set32(c.r[4], ld32((c.r[28].w[0] - 27828u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D50u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336D50u) [[unlikely]] return; }
L_00336D50:
    set32(c.r[4], ld32((c.r[28].w[0] - 27848u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 2440u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D6Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336D6Cu) [[unlikely]] return; }
L_00336D6C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22824u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00336EA0; } }
L_00336D78:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336DB0; } }
L_00336D90:
    set32(c.r[4], ld32((c.r[28].w[0] - 27856u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336DA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336DA8u) [[unlikely]] return; }
L_00336DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336E58; } }
L_00336DB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 27824u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 2440u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336DCCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336DCCu) [[unlikely]] return; }
L_00336DCC:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_00336E40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336E20; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336E58; } }
    c.budget -= 1;
L_00336E00:
    set32(c.r[4], ld32((c.r[28].w[0] - 27812u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E18u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336E18u) [[unlikely]] return; }
L_00336E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336E58; } }
L_00336E20:
    set32(c.r[4], ld32((c.r[28].w[0] - 27808u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E38u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336E38u) [[unlikely]] return; }
L_00336E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336E58; } }
L_00336E40:
    set32(c.r[4], ld32((c.r[28].w[0] - 27804u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E58u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336E58u) [[unlikely]] return; }
L_00336E58:
    set32(c.r[4], ld32((c.r[28].w[0] - 27848u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 2440u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E74u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336E74u) [[unlikely]] return; }
L_00336E74:
    set32(c.r[4], ld32((c.r[28].w[0] - 27844u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E8Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x00336E8Cu) [[unlikely]] return; }
L_00336E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E94u);  if (depth < kMaxDepth) unit_008D(c, 306u, depth + 1u); else { c.pc = 0x00337250u; return; } if (c.pc != 0x00336E94u) [[unlikely]] return; }
L_00336E94:
    set32(c.r[2], 0u + 2u);
    st8((c.r[28].w[0] - 22824u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00336EA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00336EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00336EC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00336EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336FE8; } }
    c.budget -= 1;
L_00336EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 220u, depth + 1u); else { c.pc = 0x00336750u; return; } if (c.pc != 0x00336F00u) [[unlikely]] return; }
L_00336F00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22816u)));
    set32(c.r[21], ld32((c.r[1].w[0] - 128u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[19].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00336FE0; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 12592u);
    set32(c.r[18], c.r[18].w[0] - 116u);
    set32(c.r[17], c.r[17].w[0] - 120u);
    set32(c.r[16], c.r[16].w[0] - 124u);
    c.budget -= 9;
L_00336F38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F48u); st32((c.r[1].w[0] - 128u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_008D(c, 220u, depth + 1u); else { c.pc = 0x00336750u; return; } if (c.pc != 0x00336F48u) [[unlikely]] return; }
L_00336F48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[1].w[0] - 128u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00336F70; } }
    set32(c.r[5], 0u + 255u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F68u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00336F68u) [[unlikely]] return; }
L_00336F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336F88; } }
L_00336F70:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[8], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F84u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 222u, depth + 1u); else { c.pc = 0x003367A0u; return; } if (c.pc != 0x00336F84u) [[unlikely]] return; }
L_00336F84:
    c.budget -= 1;
L_00336F88:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336F38u | kUnwind; return; } goto L_00336F38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[28].w[0] - 22816u), c.r[21].w[0]);
    set32(c.r[4], 0u + 32u);
    st32((c.r[28].w[0] - 22820u), c.r[21].w[0]);
    set32(c.r[5], c.r[5].w[0] + 13488u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_00336FB0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00336FC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22820u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 22820u), c.r[2].w[0]);
    c.budget -= 3;
L_00336FC8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336FB0u | kUnwind; return; } goto L_00336FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336FE8; } }
L_00336FE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00336FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00337010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00337190; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 2432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00334000u < 16384u) { entry = entries_008D[(t - 0x00334000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00337048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337050u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 408u, depth + 1u); else { c.pc = 0x0030FC20u; return; } if (c.pc != 0x00337050u) [[unlikely]] return; }
L_00337050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337058u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0083(c, 404u, depth + 1u); else { c.pc = 0x0030FBC0u; return; } if (c.pc != 0x00337058u) [[unlikely]] return; }
L_00337058:
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337068u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0083(c, 415u, depth + 1u); else { c.pc = 0x0030FD90u; return; } if (c.pc != 0x00337068u) [[unlikely]] return; }
L_00337068:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_00337078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337080u);  if (depth < kMaxDepth) unit_0083(c, 402u, depth + 1u); else { c.pc = 0x0030FB90u; return; } if (c.pc != 0x00337080u) [[unlikely]] return; }
L_00337080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337190; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_00337098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370A0u);  if (depth < kMaxDepth) unit_0084(c, 102u, depth + 1u); else { c.pc = 0x003104F0u; return; } if (c.pc != 0x003370A0u) [[unlikely]] return; }
L_003370A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_003370B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370B8u);  if (depth < kMaxDepth) unit_0083(c, 402u, depth + 1u); else { c.pc = 0x0030FB90u; return; } if (c.pc != 0x003370B8u) [[unlikely]] return; }
L_003370B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337190; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_003370D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 404u, depth + 1u); else { c.pc = 0x0030FBC0u; return; } if (c.pc != 0x003370D8u) [[unlikely]] return; }
L_003370D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370E0u);  if (depth < kMaxDepth) unit_0084(c, 115u, depth + 1u); else { c.pc = 0x00310700u; return; } if (c.pc != 0x003370E0u) [[unlikely]] return; }
L_003370E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370F0u); st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 404u, depth + 1u); else { c.pc = 0x0030FBC0u; return; } if (c.pc != 0x003370F0u) [[unlikely]] return; }
L_003370F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_00337100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337108u);  if (depth < kMaxDepth) unit_0084(c, 156u, depth + 1u); else { c.pc = 0x00310CA0u; return; } if (c.pc != 0x00337108u) [[unlikely]] return; }
L_00337108:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_00337118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337120u);  if (depth < kMaxDepth) unit_0083(c, 402u, depth + 1u); else { c.pc = 0x0030FB90u; return; } if (c.pc != 0x00337120u) [[unlikely]] return; }
L_00337120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337190; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_00337138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337140u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x003102D0u; return; } if (c.pc != 0x00337140u) [[unlikely]] return; }
L_00337140:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_00337150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337158u);  if (depth < kMaxDepth) unit_0083(c, 402u, depth + 1u); else { c.pc = 0x0030FB90u; return; } if (c.pc != 0x00337158u) [[unlikely]] return; }
L_00337158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337190; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337190; } }
L_00337170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337178u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 404u, depth + 1u); else { c.pc = 0x0030FBC0u; return; } if (c.pc != 0x00337178u) [[unlikely]] return; }
L_00337178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337180u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0083(c, 408u, depth + 1u); else { c.pc = 0x0030FC20u; return; } if (c.pc != 0x00337180u) [[unlikely]] return; }
L_00337180:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00337198; } }
    c.budget -= 1;
L_00337190:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00337198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003371B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_003371C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003371D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003371D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x003371D8u) [[unlikely]] return; }
L_003371D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003371F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00337230; } }
    c.budget -= 1;
L_003371F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003371C8u | kUnwind; return; } goto L_003371C8; } }
    c.budget -= 1;
L_00337208:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337208u | kUnwind; return; } goto L_00337208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003371C8u | kUnwind; return; } goto L_003371C8; } }
    c.budget -= 1;
L_00337230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00337250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337260u);  if (depth < kMaxDepth) unit_0083(c, 397u, depth + 1u); else { c.pc = 0x0030FB00u; return; } if (c.pc != 0x00337260u) [[unlikely]] return; }
L_00337260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00337270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337280u);  if (depth < kMaxDepth) unit_0084(c, 325u, depth + 1u); else { c.pc = 0x00312440u; return; } if (c.pc != 0x00337280u) [[unlikely]] return; }
L_00337280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337288u);  if (depth < kMaxDepth) unit_008D(c, 226u, depth + 1u); else { c.pc = 0x003368A0u; return; } if (c.pc != 0x00337288u) [[unlikely]] return; }
L_00337288:
    set32(c.r[4], ld32((c.r[28].w[0] - 27852u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 2440u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 22584u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372ACu); st32((c.r[28].w[0] - 22580u), 0u);  if (depth < kMaxDepth) unit_008D(c, 211u, depth + 1u); else { c.pc = 0x00336580u; return; } if (c.pc != 0x003372ACu) [[unlikely]] return; }
L_003372AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372B8u); set32(c.r[4], c.r[4].w[0] - 2392u);  if (depth < kMaxDepth) unit_0003(c, 6u, depth + 1u); else { c.pc = 0x0010C0A0u; return; } if (c.pc != 0x003372B8u) [[unlikely]] return; }
L_003372B8:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_00337330; } }
    set32(c.r[2], 0u + 33u);
    set32(c.r[7], ld32((c.r[1].w[0] - 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 13560u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 812u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 808u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 804u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 796u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 13544u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 792u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 13548u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 13552u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 13556u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 13564u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 13568u), c.r[2].w[0]);
    c.budget -= 27;
L_00337330:
    set32(c.r[4], ld32((c.r[28].w[0] - 27840u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337348u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 202u, depth + 1u); else { c.pc = 0x003363D0u; return; } if (c.pc != 0x00337348u) [[unlikely]] return; }
L_00337348:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01270000u);
    set32(c.r[4], c.r[4].w[0] - 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033735Cu); c.r[5].d[0] = c.r[2].d[0] | 16ull;  if (depth < kMaxDepth) unit_008D(c, 301u, depth + 1u); else { c.pc = 0x003371B0u; return; } if (c.pc != 0x0033735Cu) [[unlikely]] return; }
L_0033735C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337364u);  if (depth < kMaxDepth) unit_008D(c, 268u, depth + 1u); else { c.pc = 0x00336EC0u; return; } if (c.pc != 0x00337364u) [[unlikely]] return; }
L_00337364:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00337380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033739Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 286u, depth + 1u); else { c.pc = 0x00302FE0u; return; } if (c.pc != 0x0033739Cu) [[unlikely]] return; }
L_0033739C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003373A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003373A4u) [[unlikely]] return; }
L_003373A4:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003373B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 388u, depth + 1u); else { c.pc = 0x00337DB0u; return; } if (c.pc != 0x003373B0u) [[unlikely]] return; }
L_003373B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u - 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003373D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003373E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 36u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 37u));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[5].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 46u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 46u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00337470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    set32(c.r[2], c.r[2].w[0] - 12u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00337478; } }
    c.budget -= 1;
L_00337470:
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 2;
L_00337478:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_00337498; } }
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00337498:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 46u)));  c.pc = t; return; }
L_003374B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[28].w[0] - 22568u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 6;
    { st8((c.r[2].w[0] + 55u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_00A2(c, 303u, depth); }
L_003374D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 368u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337514u); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008E(c, 164u, depth + 1u); else { c.pc = 0x00339C10u; return; } if (c.pc != 0x00337514u) [[unlikely]] return; }
L_00337514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033751Cu);  if (depth < kMaxDepth) unit_008E(c, 162u, depth + 1u); else { c.pc = 0x00339BE0u; return; } if (c.pc != 0x0033751Cu) [[unlikely]] return; }
L_0033751C:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00337530; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(256ll);
    c.budget -= 1;
L_00337530:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 42u);
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st8((c.r[28].w[0] - 22576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1628u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 41u);  if (t) { goto L_00337570; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00337570; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00337570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337578; } }
L_00337570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22572u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00337580; } }
L_00337578:
    st8((c.r[28].w[0] - 22572u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00337580:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    st8((c.r[3].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 52u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003375B0u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 341u, depth + 1u); else { c.pc = 0x003376E0u; return; } if (c.pc != 0x003375B0u) [[unlikely]] return; }
L_003375B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003375B8u);  if (depth < kMaxDepth) unit_008E(c, 188u, depth + 1u); else { c.pc = 0x0033A0D0u; return; } if (c.pc != 0x003375B8u) [[unlikely]] return; }
L_003375B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003375C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 82u, depth + 1u); else { c.pc = 0x00338A40u; return; } if (c.pc != 0x003375C0u) [[unlikely]] return; }
L_003375C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003375C8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_008E(c, 82u, depth + 1u); else { c.pc = 0x00338A40u; return; } if (c.pc != 0x003375C8u) [[unlikely]] return; }
L_003375C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003375D0u);  if (depth < kMaxDepth) unit_008E(c, 83u, depth + 1u); else { c.pc = 0x00338B50u; return; } if (c.pc != 0x003375D0u) [[unlikely]] return; }
L_003375D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003375E8u); st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 321u, depth + 1u); else { c.pc = 0x003373E0u; return; } if (c.pc != 0x003375E8u) [[unlikely]] return; }
L_003375E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 50u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 39u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[2].w[0] + 44u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 18;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[2].w[0] + 60u), 0u);  if (t) { goto L_00337650; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u - 1u);
    st16((c.r[2].w[0] + 42u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00337670; } }
L_00337650:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337660u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00337660u) [[unlikely]] return; }
L_00337660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337668u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00337668u) [[unlikely]] return; }
L_00337668:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00337670:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033767Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x0033767Cu) [[unlikely]] return; }
L_0033767C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337684u);  if (depth < kMaxDepth) unit_008E(c, 161u, depth + 1u); else { c.pc = 0x00339BC0u; return; } if (c.pc != 0x00337684u) [[unlikely]] return; }
L_00337684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033768Cu);  if (depth < kMaxDepth) unit_008E(c, 163u, depth + 1u); else { c.pc = 0x00339C00u; return; } if (c.pc != 0x0033768Cu) [[unlikely]] return; }
L_0033768C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337694u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 259u, depth + 1u); else { c.pc = 0x00395E60u; return; } if (c.pc != 0x00337694u) [[unlikely]] return; }
L_00337694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033769Cu);  if (depth < kMaxDepth) unit_00A5(c, 393u, depth + 1u); else { c.pc = 0x003970F0u; return; } if (c.pc != 0x0033769Cu) [[unlikely]] return; }
L_0033769C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003376B0u); set32(c.r[4], c.r[2].w[0] + 1628u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003376B0u) [[unlikely]] return; }
L_003376B0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003376C0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0065(c, 326u, depth + 1u); else { c.pc = 0x00297C78u; return; } if (c.pc != 0x003376C0u) [[unlikely]] return; }
L_003376C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003376E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], c.r[2].w[0] - 176u);
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 29u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00337848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] - 1168u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00334000u < 16384u) { entry = entries_008D[(t - 0x00334000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00337730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337738u);  if (depth < kMaxDepth) unit_00A5(c, 409u, depth + 1u); else { c.pc = 0x00397450u; return; } if (c.pc != 0x00337738u) [[unlikely]] return; }
L_00337738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337748; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00337748:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00337850; } }
    c.budget -= 1;
L_00337758:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 30u));
    set32(c.r[5], c.r[2].w[0] + 30u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337780; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00337780:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00337850; } }
    c.budget -= 1;
L_00337790:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 15u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00337850; } }
    c.budget -= 1;
L_003377B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00337850; } }
L_003377C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 16u);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00337850; } }
L_003377E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 76u);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00337850; } }
    c.budget -= 1;
L_00337800:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], 0u + 137u);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00337850; } }
    c.budget -= 1;
L_00337820:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00337850; } }
    c.budget -= 1;
L_00337840:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00337848:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00337850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337858u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00337858u) [[unlikely]] return; }
L_00337858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337860u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00337860u) [[unlikely]] return; }
L_00337860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337868u);  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x00337868u) [[unlikely]] return; }
L_00337868:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00337880:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 15612ull;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003378C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = c.r[5].d[0] << 48;
    set32(c.r[4], 0u + 30u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00337938; } }
    c.budget -= 1;
L_003378C0:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 15612ull;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003378F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = 0ull << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00337938; } }
L_003378F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[3].w[0] + 28u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00337938; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 26u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
L_00337938:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], c.r[2].w[0] + 68u);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003379A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003379A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22576u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003379E8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22572u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[28].w[0] - 22576u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003379F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003379CCu); set32(c.r[4], c.r[2].w[0] + 1628u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003379CCu) [[unlikely]] return; }
L_003379CC:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22572u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 1628u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 1630u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22572u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003379F8; } }
L_003379E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[28].w[0] - 22576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00337D90; } }
L_003379F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 234u, depth + 1u); else { c.pc = 0x00392E60u; return; } if (c.pc != 0x00337A00u) [[unlikely]] return; }
L_00337A00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A0Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x00337A0Cu) [[unlikely]] return; }
L_00337A0C:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00337A58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A38u);  if (depth < kMaxDepth) unit_008E(c, 161u, depth + 1u); else { c.pc = 0x00339BC0u; return; } if (c.pc != 0x00337A38u) [[unlikely]] return; }
L_00337A38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x00337A44u) [[unlikely]] return; }
L_00337A44:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A50u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00337A50u) [[unlikely]] return; }
L_00337A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00337D90; } }
L_00337A58:
    c.r[2].d[0] = c.r[16].d[0] & 15360ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00337A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A6Cu);  if (depth < kMaxDepth) unit_008D(c, 389u, depth + 1u); else { c.pc = 0x00337DC0u; return; } if (c.pc != 0x00337A6Cu) [[unlikely]] return; }
L_00337A6C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A78u); set32(c.r[5], 0u + 191u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00337A78u) [[unlikely]] return; }
L_00337A78:
    c.r[2].d[0] = c.r[16].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337BF0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00337BD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 48u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00337AC8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 38u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00337AC8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337ABCu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00337ABCu) [[unlikely]] return; }
L_00337ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337AC8:
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00337AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337ADCu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00337ADCu) [[unlikely]] return; }
L_00337ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337AE8:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00337BB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00337BA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00337B38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00337B28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337BD8; } }
    c.budget -= 1;
L_00337B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B30u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 122u, depth + 1u); else { c.pc = 0x00339950u; return; } if (c.pc != 0x00337B30u) [[unlikely]] return; }
L_00337B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
L_00337B38:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00337B98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00337B70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B68u);  if (depth < kMaxDepth) unit_008E(c, 56u, depth + 1u); else { c.pc = 0x00338660u; return; } if (c.pc != 0x00337B68u) [[unlikely]] return; }
L_00337B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
L_00337B70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00337B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B80u);  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x00337B80u) [[unlikely]] return; }
L_00337B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
L_00337B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B90u);  if (depth < kMaxDepth) unit_00A5(c, 297u, depth + 1u); else { c.pc = 0x003962C0u; return; } if (c.pc != 0x00337B90u) [[unlikely]] return; }
L_00337B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
L_00337B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337BA0u);  if (depth < kMaxDepth) unit_008E(c, 65u, depth + 1u); else { c.pc = 0x00338800u; return; } if (c.pc != 0x00337BA0u) [[unlikely]] return; }
L_00337BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
L_00337BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337BB0u);  if (depth < kMaxDepth) unit_008E(c, 44u, depth + 1u); else { c.pc = 0x00338520u; return; } if (c.pc != 0x00337BB0u) [[unlikely]] return; }
L_00337BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
L_00337BB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[4], c.r[2].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337BCCu); set32(c.r[5], c.r[2].w[0] + 42u);  if (depth < kMaxDepth) unit_008D(c, 320u, depth + 1u); else { c.pc = 0x003373D0u; return; } if (c.pc != 0x00337BCCu) [[unlikely]] return; }
L_00337BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337BE0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x00337BE0u) [[unlikely]] return; }
L_00337BE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337BF0:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337C0Cu);  if (depth < kMaxDepth) unit_008E(c, 65u, depth + 1u); else { c.pc = 0x00338800u; return; } if (c.pc != 0x00337C0Cu) [[unlikely]] return; }
L_00337C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337C18:
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00337C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337C2Cu);  if (depth < kMaxDepth) unit_008E(c, 56u, depth + 1u); else { c.pc = 0x00338660u; return; } if (c.pc != 0x00337C2Cu) [[unlikely]] return; }
L_00337C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337C38:
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00337C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337C4Cu);  if (depth < kMaxDepth) unit_00A4(c, 306u, depth + 1u); else { c.pc = 0x00393B70u; return; } if (c.pc != 0x00337C4Cu) [[unlikely]] return; }
L_00337C4C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337C58u); set32(c.r[5], 0u + 194u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00337C58u) [[unlikely]] return; }
L_00337C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
L_00337C60:
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337C74u);  if (depth < kMaxDepth) unit_008E(c, 65u, depth + 1u); else { c.pc = 0x00338800u; return; } if (c.pc != 0x00337C74u) [[unlikely]] return; }
L_00337C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337C80:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] & 16ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00337CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337CA0u);  if (depth < kMaxDepth) unit_008E(c, 70u, depth + 1u); else { c.pc = 0x003388A0u; return; } if (c.pc != 0x00337CA0u) [[unlikely]] return; }
L_00337CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
L_00337CA8:
    c.r[2].d[0] = c.r[16].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337CBCu);  if (depth < kMaxDepth) unit_008E(c, 179u, depth + 1u); else { c.pc = 0x00339FA0u; return; } if (c.pc != 0x00337CBCu) [[unlikely]] return; }
L_00337CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 1;
L_00337CC8:
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337CDCu);  if (depth < kMaxDepth) unit_008E(c, 48u, depth + 1u); else { c.pc = 0x003385C0u; return; } if (c.pc != 0x00337CDCu) [[unlikely]] return; }
L_00337CDC:
    c.budget -= 1;
L_00337CE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00337D88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 72u);  if (t) { goto L_00337D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337D00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00337D00u) [[unlikely]] return; }
L_00337D00:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00337D70; } }
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st32((c.r[3].w[0] + 60u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[3].w[0] + 50u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00337D88; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337D64u); st8((c.r[2].w[0] + 50u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 259u, depth + 1u); else { c.pc = 0x00395E60u; return; } if (c.pc != 0x00337D64u) [[unlikely]] return; }
L_00337D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337D88; } }
    c.budget -= 1;
L_00337D70:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337D80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 326u, depth + 1u); else { c.pc = 0x00297C78u; return; } if (c.pc != 0x00337D80u) [[unlikely]] return; }
L_00337D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337D88u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 42u, depth + 1u); else { c.pc = 0x002989F0u; return; } if (c.pc != 0x00337D88u) [[unlikely]] return; }
L_00337D88:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 50u)));
    c.budget -= 2;
L_00337D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00337DB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 41u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00337DC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 38u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 46u)));  if (t) { goto L_00337EF8; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 8u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337F08; } }
L_00337E00:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00337E30; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], c.r[7].w[0] + 36u);  if (t) { goto L_00337E20; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00337E60; } }
L_00337E20:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00337E60; } }
    c.budget -= 1;
L_00337E30:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00337E60; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[3].w[0] + 36u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 36u));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00337E60; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00337E60:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00337EA0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 37u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 37u);  if (t) { goto L_00337E90; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
    c.budget -= 1;
L_00337E90:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00337ED8; } }
    c.budget -= 1;
L_00337EA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00337ED8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 37u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 37u);  if (t) { goto L_00337ED0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
L_00337ED0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00337ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337EE0u);  if (depth < kMaxDepth) unit_008D(c, 321u, depth + 1u); else { c.pc = 0x003373E0u; return; } if (c.pc != 0x00337EE0u) [[unlikely]] return; }
L_00337EE0:
    set32(c.r[7], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 46u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337E00u | kUnwind; return; } goto L_00337E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
L_00337EF8:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00337FE8; } }
    c.budget -= 1;
L_00337F08:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00337F60; } }
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00337F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F38u);  if (depth < kMaxDepth) unit_00A5(c, 362u, depth + 1u); else { c.pc = 0x00396C00u; return; } if (c.pc != 0x00337F38u) [[unlikely]] return; }
L_00337F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
L_00337F40:
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F54u);  if (depth < kMaxDepth) unit_00A5(c, 371u, depth + 1u); else { c.pc = 0x00396CE0u; return; } if (c.pc != 0x00337F54u) [[unlikely]] return; }
L_00337F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
    c.budget -= 1;
L_00337F60:
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00337F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F7Cu);  if (depth < kMaxDepth) unit_00A5(c, 79u, depth + 1u); else { c.pc = 0x00394820u; return; } if (c.pc != 0x00337F7Cu) [[unlikely]] return; }
L_00337F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
    c.budget -= 1;
L_00337F88:
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00337FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F9Cu);  if (depth < kMaxDepth) unit_00A5(c, 99u, depth + 1u); else { c.pc = 0x00394A00u; return; } if (c.pc != 0x00337F9Cu) [[unlikely]] return; }
L_00337F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
    c.budget -= 1;
L_00337FA8:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00337FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337FBCu);  if (depth < kMaxDepth) unit_00A5(c, 350u, depth + 1u); else { c.pc = 0x00396930u; return; } if (c.pc != 0x00337FBCu) [[unlikely]] return; }
L_00337FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
    c.budget -= 1;
L_00337FC8:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337FDCu);  if (depth < kMaxDepth) unit_00A5(c, 356u, depth + 1u); else { c.pc = 0x00396AB0u; return; } if (c.pc != 0x00337FDCu) [[unlikely]] return; }
L_00337FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 7u, depth); } }
    c.budget -= 1;
L_00337FE8:
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 3u, depth); } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
    [[clang::musttail]] return unit_008E(c, 1u, depth);
}

}
