#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0042[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    7, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0,
    84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0,
    157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183,
    184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 268, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0,
    278, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287,
    0, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0,
    0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384,
    0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0042(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00208000;
    case 2u: goto L_00208018;
    case 3u: goto L_00208020;
    case 4u: goto L_00208028;
    case 5u: goto L_00208040;
    case 6u: goto L_00208074;
    case 7u: goto L_00208080;
    case 8u: goto L_00208084;
    case 9u: goto L_00208098;
    case 10u: goto L_002080B0;
    case 11u: goto L_002080D0;
    case 12u: goto L_00208128;
    case 13u: goto L_0020813C;
    case 14u: goto L_002081D8;
    case 15u: goto L_002081EC;
    case 16u: goto L_0020821C;
    case 17u: goto L_00208240;
    case 18u: goto L_002082BC;
    case 19u: goto L_002082C8;
    case 20u: goto L_002082D4;
    case 21u: goto L_002082F0;
    case 22u: goto L_00208310;
    case 23u: goto L_00208340;
    case 24u: goto L_00208380;
    case 25u: goto L_00208388;
    case 26u: goto L_002083D0;
    case 27u: goto L_002083E0;
    case 28u: goto L_0020840C;
    case 29u: goto L_00208438;
    case 30u: goto L_0020846C;
    case 31u: goto L_002084A0;
    case 32u: goto L_002084D0;
    case 33u: goto L_00208510;
    case 34u: goto L_00208518;
    case 35u: goto L_00208558;
    case 36u: goto L_00208568;
    case 37u: goto L_00208594;
    case 38u: goto L_002085C4;
    case 39u: goto L_002085F4;
    case 40u: goto L_00208630;
    case 41u: goto L_00208650;
    case 42u: goto L_002086E4;
    case 43u: goto L_0020870C;
    case 44u: goto L_00208724;
    case 45u: goto L_00208730;
    case 46u: goto L_0020873C;
    case 47u: goto L_00208748;
    case 48u: goto L_00208750;
    case 49u: goto L_00208758;
    case 50u: goto L_00208760;
    case 51u: goto L_00208768;
    case 52u: goto L_00208770;
    case 53u: goto L_00208788;
    case 54u: goto L_00208794;
    case 55u: goto L_002087BC;
    case 56u: goto L_002087C4;
    case 57u: goto L_002087F0;
    case 58u: goto L_00208818;
    case 59u: goto L_00208820;
    case 60u: goto L_0020882C;
    case 61u: goto L_00208834;
    case 62u: goto L_00208850;
    case 63u: goto L_002088D8;
    case 64u: goto L_00208900;
    case 65u: goto L_0020896C;
    case 66u: goto L_0020897C;
    case 67u: goto L_00208994;
    case 68u: goto L_0020899C;
    case 69u: goto L_002089AC;
    case 70u: goto L_002089B4;
    case 71u: goto L_002089BC;
    case 72u: goto L_00208A2C;
    case 73u: goto L_00208A3C;
    case 74u: goto L_00208A48;
    case 75u: goto L_00208A50;
    case 76u: goto L_00208A60;
    case 77u: goto L_00208A68;
    case 78u: goto L_00208A70;
    case 79u: goto L_00208A90;
    case 80u: goto L_00208AE0;
    case 81u: goto L_00208AF0;
    case 82u: goto L_00208B68;
    case 83u: goto L_00208B70;
    case 84u: goto L_00208B80;
    case 85u: goto L_00208B8C;
    case 86u: goto L_00208B98;
    case 87u: goto L_00208BAC;
    case 88u: goto L_00208BB8;
    case 89u: goto L_00208BCC;
    case 90u: goto L_00208BD4;
    case 91u: goto L_00208BDC;
    case 92u: goto L_00208C74;
    case 93u: goto L_00208C90;
    case 94u: goto L_00208CB4;
    case 95u: goto L_00208D04;
    case 96u: goto L_00208D20;
    case 97u: goto L_00208D40;
    case 98u: goto L_00208DE8;
    case 99u: goto L_00208F68;
    case 100u: goto L_00208F94;
    case 101u: goto L_00208FE4;
    case 102u: goto L_00208FEC;
    case 103u: goto L_00209010;
    case 104u: goto L_002090CC;
    case 105u: goto L_002090E8;
    case 106u: goto L_00209110;
    case 107u: goto L_00209118;
    case 108u: goto L_00209144;
    case 109u: goto L_00209174;
    case 110u: goto L_00209180;
    case 111u: goto L_002091C8;
    case 112u: goto L_00209204;
    case 113u: goto L_00209210;
    case 114u: goto L_00209218;
    case 115u: goto L_00209220;
    case 116u: goto L_00209260;
    case 117u: goto L_00209270;
    case 118u: goto L_00209280;
    case 119u: goto L_002092B8;
    case 120u: goto L_002092C4;
    case 121u: goto L_002092E0;
    case 122u: goto L_00209380;
    case 123u: goto L_0020940C;
    case 124u: goto L_00209490;
    case 125u: goto L_00209520;
    case 126u: goto L_00209584;
    case 127u: goto L_00209598;
    case 128u: goto L_00209650;
    case 129u: goto L_00209670;
    case 130u: goto L_00209678;
    case 131u: goto L_0020969C;
    case 132u: goto L_002096A4;
    case 133u: goto L_002096B4;
    case 134u: goto L_002096C8;
    case 135u: goto L_002096D0;
    case 136u: goto L_002096D8;
    case 137u: goto L_002096E8;
    case 138u: goto L_002096F0;
    case 139u: goto L_002096F8;
    case 140u: goto L_00209710;
    case 141u: goto L_00209780;
    case 142u: goto L_00209808;
    case 143u: goto L_00209818;
    case 144u: goto L_00209824;
    case 145u: goto L_0020986C;
    case 146u: goto L_00209874;
    case 147u: goto L_00209898;
    case 148u: goto L_002098A0;
    case 149u: goto L_002098B0;
    case 150u: goto L_002098C0;
    case 151u: goto L_002098C8;
    case 152u: goto L_002098D0;
    case 153u: goto L_002098E0;
    case 154u: goto L_002098E8;
    case 155u: goto L_002098F0;
    case 156u: goto L_002098F8;
    case 157u: goto L_00209900;
    case 158u: goto L_00209910;
    case 159u: goto L_00209948;
    case 160u: goto L_00209954;
    case 161u: goto L_00209960;
    case 162u: goto L_00209968;
    case 163u: goto L_00209970;
    case 164u: goto L_00209978;
    case 165u: goto L_002099B0;
    case 166u: goto L_002099BC;
    case 167u: goto L_00209B38;
    case 168u: goto L_00209B40;
    case 169u: goto L_00209B50;
    case 170u: goto L_00209B64;
    case 171u: goto L_00209B70;
    case 172u: goto L_00209B7C;
    case 173u: goto L_00209BB0;
    case 174u: goto L_00209BB8;
    case 175u: goto L_00209BC4;
    case 176u: goto L_00209BD0;
    case 177u: goto L_00209C98;
    case 178u: goto L_00209D20;
    case 179u: goto L_00209D4C;
    case 180u: goto L_00209D9C;
    case 181u: goto L_00209DA4;
    case 182u: goto L_00209DDC;
    case 183u: goto L_00209DFC;
    case 184u: goto L_00209E00;
    case 185u: goto L_00209E0C;
    case 186u: goto L_00209E40;
    case 187u: goto L_00209E60;
    case 188u: goto L_00209EB0;
    case 189u: goto L_00209F10;
    case 190u: goto L_00209F5C;
    case 191u: goto L_00209F98;
    case 192u: goto L_00209FB0;
    case 193u: goto L_00209FC0;
    case 194u: goto L_00209FD0;
    case 195u: goto L_0020A014;
    case 196u: goto L_0020A088;
    case 197u: goto L_0020A0A0;
    case 198u: goto L_0020A0C8;
    case 199u: goto L_0020A0E0;
    case 200u: goto L_0020A0E8;
    case 201u: goto L_0020A110;
    case 202u: goto L_0020A1A8;
    case 203u: goto L_0020A1C0;
    case 204u: goto L_0020A230;
    case 205u: goto L_0020A298;
    case 206u: goto L_0020A2EC;
    case 207u: goto L_0020A38C;
    case 208u: goto L_0020A3D0;
    case 209u: goto L_0020A410;
    case 210u: goto L_0020A4B8;
    case 211u: goto L_0020A550;
    case 212u: goto L_0020A5B8;
    case 213u: goto L_0020A64C;
    case 214u: goto L_0020A660;
    case 215u: goto L_0020A67C;
    case 216u: goto L_0020A700;
    case 217u: goto L_0020A710;
    case 218u: goto L_0020A71C;
    case 219u: goto L_0020A728;
    case 220u: goto L_0020A738;
    case 221u: goto L_0020A7C0;
    case 222u: goto L_0020A7CC;
    case 223u: goto L_0020A7D8;
    case 224u: goto L_0020A800;
    case 225u: goto L_0020A83C;
    case 226u: goto L_0020A84C;
    case 227u: goto L_0020A854;
    case 228u: goto L_0020A8B0;
    case 229u: goto L_0020A8F0;
    case 230u: goto L_0020A994;
    case 231u: goto L_0020A9A0;
    case 232u: goto L_0020A9B0;
    case 233u: goto L_0020A9C0;
    case 234u: goto L_0020AA24;
    case 235u: goto L_0020AA30;
    case 236u: goto L_0020AA50;
    case 237u: goto L_0020AACC;
    case 238u: goto L_0020AAD8;
    case 239u: goto L_0020AAEC;
    case 240u: goto L_0020AAF4;
    case 241u: goto L_0020ABE8;
    case 242u: goto L_0020AC3C;
    case 243u: goto L_0020AC48;
    case 244u: goto L_0020AC70;
    case 245u: goto L_0020AC90;
    case 246u: goto L_0020AD4C;
    case 247u: goto L_0020AD58;
    case 248u: goto L_0020ADA8;
    case 249u: goto L_0020ADC4;
    case 250u: goto L_0020ADE0;
    case 251u: goto L_0020AE00;
    case 252u: goto L_0020AE1C;
    case 253u: goto L_0020AEB0;
    case 254u: goto L_0020AED0;
    case 255u: goto L_0020AEE0;
    case 256u: goto L_0020AEE8;
    case 257u: goto L_0020AF20;
    case 258u: goto L_0020AF28;
    case 259u: goto L_0020AF30;
    case 260u: goto L_0020AF38;
    case 261u: goto L_0020AF40;
    case 262u: goto L_0020AF48;
    case 263u: goto L_0020AF6C;
    case 264u: goto L_0020AF90;
    case 265u: goto L_0020AFD8;
    case 266u: goto L_0020AFE8;
    case 267u: goto L_0020AFF0;
    case 268u: goto L_0020AFF8;
    case 269u: goto L_0020B000;
    case 270u: goto L_0020B02C;
    case 271u: goto L_0020B034;
    case 272u: goto L_0020B044;
    case 273u: goto L_0020B04C;
    case 274u: goto L_0020B054;
    case 275u: goto L_0020B05C;
    case 276u: goto L_0020B064;
    case 277u: goto L_0020B078;
    case 278u: goto L_0020B080;
    case 279u: goto L_0020B088;
    case 280u: goto L_0020B090;
    case 281u: goto L_0020B0A0;
    case 282u: goto L_0020B0B0;
    case 283u: goto L_0020B0B8;
    case 284u: goto L_0020B0C0;
    case 285u: goto L_0020B0C8;
    case 286u: goto L_0020B0F4;
    case 287u: goto L_0020B0FC;
    case 288u: goto L_0020B10C;
    case 289u: goto L_0020B114;
    case 290u: goto L_0020B11C;
    case 291u: goto L_0020B124;
    case 292u: goto L_0020B12C;
    case 293u: goto L_0020B160;
    case 294u: goto L_0020B194;
    case 295u: goto L_0020B1BC;
    case 296u: goto L_0020B1D4;
    case 297u: goto L_0020B1DC;
    case 298u: goto L_0020B1E8;
    case 299u: goto L_0020B1F8;
    case 300u: goto L_0020B210;
    case 301u: goto L_0020B250;
    case 302u: goto L_0020B27C;
    case 303u: goto L_0020B28C;
    case 304u: goto L_0020B294;
    case 305u: goto L_0020B29C;
    case 306u: goto L_0020B2A4;
    case 307u: goto L_0020B2B8;
    case 308u: goto L_0020B2C8;
    case 309u: goto L_0020B2D0;
    case 310u: goto L_0020B2D8;
    case 311u: goto L_0020B2F0;
    case 312u: goto L_0020B32C;
    case 313u: goto L_0020B354;
    case 314u: goto L_0020B35C;
    case 315u: goto L_0020B390;
    case 316u: goto L_0020B3C0;
    case 317u: goto L_0020B3CC;
    case 318u: goto L_0020B3EC;
    case 319u: goto L_0020B40C;
    case 320u: goto L_0020B414;
    case 321u: goto L_0020B440;
    case 322u: goto L_0020B450;
    case 323u: goto L_0020B458;
    case 324u: goto L_0020B4D0;
    case 325u: goto L_0020B500;
    case 326u: goto L_0020B520;
    case 327u: goto L_0020B54C;
    case 328u: goto L_0020B5A8;
    case 329u: goto L_0020B5C0;
    case 330u: goto L_0020B5E0;
    case 331u: goto L_0020B600;
    case 332u: goto L_0020B668;
    case 333u: goto L_0020B674;
    case 334u: goto L_0020B688;
    case 335u: goto L_0020B69C;
    case 336u: goto L_0020B6A8;
    case 337u: goto L_0020B6F4;
    case 338u: goto L_0020B710;
    case 339u: goto L_0020B738;
    case 340u: goto L_0020B794;
    case 341u: goto L_0020B85C;
    case 342u: goto L_0020B880;
    case 343u: goto L_0020B890;
    case 344u: goto L_0020B8A0;
    case 345u: goto L_0020B8D4;
    case 346u: goto L_0020B944;
    case 347u: goto L_0020B95C;
    case 348u: goto L_0020B980;
    case 349u: goto L_0020B9A0;
    case 350u: goto L_0020BA0C;
    case 351u: goto L_0020BA24;
    case 352u: goto L_0020BA2C;
    case 353u: goto L_0020BA38;
    case 354u: goto L_0020BA44;
    case 355u: goto L_0020BA4C;
    case 356u: goto L_0020BA54;
    case 357u: goto L_0020BA5C;
    case 358u: goto L_0020BA64;
    case 359u: goto L_0020BA6C;
    case 360u: goto L_0020BA74;
    case 361u: goto L_0020BAD4;
    case 362u: goto L_0020BAE8;
    case 363u: goto L_0020BAF8;
    case 364u: goto L_0020BB0C;
    case 365u: goto L_0020BB14;
    case 366u: goto L_0020BB24;
    case 367u: goto L_0020BB48;
    case 368u: goto L_0020BB80;
    case 369u: goto L_0020BB9C;
    case 370u: goto L_0020BBAC;
    case 371u: goto L_0020BBB4;
    case 372u: goto L_0020BBD0;
    case 373u: goto L_0020BC0C;
    case 374u: goto L_0020BC88;
    case 375u: goto L_0020BCB0;
    case 376u: goto L_0020BD40;
    case 377u: goto L_0020BD50;
    case 378u: goto L_0020BD5C;
    case 379u: goto L_0020BD70;
    case 380u: goto L_0020BDA4;
    case 381u: goto L_0020BDB4;
    case 382u: goto L_0020BDD0;
    case 383u: goto L_0020BDF0;
    case 384u: goto L_0020BDFC;
    case 385u: goto L_0020BE14;
    case 386u: goto L_0020BE24;
    case 387u: goto L_0020BE34;
    case 388u: goto L_0020BE48;
    case 389u: goto L_0020BE58;
    case 390u: goto L_0020BE7C;
    case 391u: goto L_0020BE88;
    case 392u: goto L_0020BE90;
    case 393u: goto L_0020BEA0;
    case 394u: goto L_0020BEA8;
    case 395u: goto L_0020BEB0;
    case 396u: goto L_0020BEE0;
    case 397u: goto L_0020BEF0;
    case 398u: goto L_0020BF00;
    case 399u: goto L_0020BF34;
    case 400u: goto L_0020BF88;
    case 401u: goto L_0020BFA0;
    case 402u: goto L_0020BFC0;
    case 403u: goto L_0020BFE0;
    default: bad_entry(c, 0x00208000u); return;
    }
L_00208000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208018u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00208018u) [[unlikely]] return; }
L_00208018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208020u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00208020u) [[unlikely]] return; }
L_00208020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208028u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00208028u) [[unlikely]] return; }
L_00208028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00208040:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208074u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00208074u) [[unlikely]] return; }
L_00208074:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208084u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00208084u) [[unlikely]] return; }
    goto L_00208084;
L_00208080:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00208084:
    c.r[6].d[0] = c.r[16].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208098u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x00208098u) [[unlikely]] return; }
L_00208098:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002080B0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x002080B0u) [[unlikely]] return; }
L_002080B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002080D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00208160; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 242u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00208160; } }
    st32((c.r[17].w[0] + 508u), 0u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[17].w[0] + 504u), 0u);
    set32(c.r[5], c.r[6].w[0] + 2000u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208128u); st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00208128u) [[unlikely]] return; }
L_00208128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020813Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020813Cu) [[unlikely]] return; }
L_0020813C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00208228; } }
L_00208160:
    set32(c.r[5], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00208220; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002081B8; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002081B8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002081B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002081B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00208210; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00208210; } }
L_002081B8:
    st32((c.r[17].w[0] + 508u), 0u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[17].w[0] + 504u), 0u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[6].w[0] + 2000u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002081D8u); st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002081D8u) [[unlikely]] return; }
L_002081D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002081ECu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002081ECu) [[unlikely]] return; }
L_002081EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00208228; } }
L_00208210:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020821Cu); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020821Cu) [[unlikely]] return; }
L_0020821C:
    c.budget -= 1;
L_00208220:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00208228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[9], 0u + 255u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], 0u + 90u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    st8((c.r[8].w[0] + 54u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    st8((c.r[8].w[0] + 64u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 53u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[6].w[0] + 53u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 571u));
    c.budget -= 26;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002082F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_002082F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002082BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 208u, depth + 1u); else { c.pc = 0x00216100u; return; } if (c.pc != 0x002082BCu) [[unlikely]] return; }
L_002082BC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 14944u);
    c.budget -= 3;
L_002082C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002082D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x002082D4u) [[unlikely]] return; }
L_002082D4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002082C8u | kUnwind; return; } goto L_002082C8; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002082F0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x002082F0u) [[unlikely]] return; }
L_002082F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00208310:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 12;
L_00208340:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + 2u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[5].w[0] + 3u);
    set32(c.r[2], c.r[5].w[0] + 4u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 5u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208340u | kUnwind; return; } goto L_00208340; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_00208380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208388u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00208388u) [[unlikely]] return; }
L_00208388:
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[3].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208380u | kUnwind; return; } goto L_00208380; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 636u)));
    c.budget -= 4;
L_002083D0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002083E0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002083E0u) [[unlikely]] return; }
L_002083E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00208470; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 18u);
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020840Cu); st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0020840Cu) [[unlikely]] return; }
L_0020840C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    st8((c.r[20].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 31184u);
    st32((c.r[20].w[0] + 24u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    st8((c.r[20].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 29968u);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208438u); st32((c.r[20].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00208438u) [[unlikely]] return; }
L_00208438:
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 288u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020846Cu); st32((c.r[20].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020846Cu) [[unlikely]] return; }
L_0020846C:
    c.budget -= 1;
L_00208470:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002083D0u | kUnwind; return; } goto L_002083D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002084A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_002084D0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + 2u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[5].w[0] + 3u);
    set32(c.r[2], c.r[5].w[0] + 4u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 5u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002084D0u | kUnwind; return; } goto L_002084D0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_00208510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208518u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00208518u) [[unlikely]] return; }
L_00208518:
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[3].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208510u | kUnwind; return; } goto L_00208510; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00208558:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208568u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00208568u) [[unlikely]] return; }
L_00208568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002085F8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 18u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208594u); st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00208594u) [[unlikely]] return; }
L_00208594:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[3], c.r[3].w[0] - 31184u);
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 29968u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002085C4u); st32((c.r[19].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002085C4u) [[unlikely]] return; }
L_002085C4:
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002085F4u); st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x002085F4u) [[unlikely]] return; }
L_002085F4:
    c.budget -= 1;
L_002085F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208558u | kUnwind; return; } goto L_00208558; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00208630:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_0042[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00208650:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[7], 0u + 8192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 25600u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[4].w[0] + 120u), c.f[0]);
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002086E4u); c.r[6].d[0] = c.r[2].d[0] & 127ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x002086E4u) [[unlikely]] return; }
L_002086E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00208778; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 6);  if (t) { goto L_00208718; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020870Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020870Cu) [[unlikely]] return; }
L_0020870C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00208728; } }
    c.budget -= 1;
L_00208718:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208724u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00208724u) [[unlikely]] return; }
L_00208724:
    c.budget -= 1;
L_00208728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208730u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00208730u) [[unlikely]] return; }
L_00208730:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020873Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020873Cu) [[unlikely]] return; }
L_0020873C:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208748u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00208748u) [[unlikely]] return; }
L_00208748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208750u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00208750u) [[unlikely]] return; }
L_00208750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208758u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00208758u) [[unlikely]] return; }
L_00208758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208760u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00208760u) [[unlikely]] return; }
L_00208760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208768u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00208768u) [[unlikely]] return; }
L_00208768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208770u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00208770u) [[unlikely]] return; }
L_00208770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002087C8; } }
L_00208778:
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208788u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00208788u) [[unlikely]] return; }
L_00208788:
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208794u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00208794u) [[unlikely]] return; }
L_00208794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002087BCu); st32((c.r[29].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x002087BCu) [[unlikely]] return; }
L_002087BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002087C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002087C4u) [[unlikely]] return; }
L_002087C4:
    c.budget -= 1;
L_002087C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 12);  if (t) { goto L_002087E8; } }
    c.r[2].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_002087E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002087F0u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002087F0u) [[unlikely]] return; }
L_002087F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 8);  if (t) { goto L_00208810; } }
    c.r[2].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_00208810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208818u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00208818u) [[unlikely]] return; }
L_00208818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208820u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00208820u) [[unlikely]] return; }
L_00208820:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020882Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020882Cu) [[unlikely]] return; }
L_0020882C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 62u, depth + 1u); else { c.pc = 0x00208850u; return; } if (c.pc != 0x00208834u) [[unlikely]] return; }
L_00208834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00208850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002088F0; } }
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);  if (t) { goto L_002088C0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002088C0; } }
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002088C0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002088D0; } }
L_002088C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00208A78; } }
L_002088D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002088D8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x002088D8u) [[unlikely]] return; }
L_002088D8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00208928; } }
L_002088F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208900u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00208900u) [[unlikely]] return; }
L_00208900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00208928; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00208A78; } }
L_00208928:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00208958; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00208958; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00208958; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002089C8; } }
    c.budget -= 1;
L_00208958:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 128u);  if (t) { goto L_00208980; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020896Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x0020896Cu) [[unlikely]] return; }
L_0020896C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_00208980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020897Cu);  if (depth < kMaxDepth) unit_001A(c, 61u, depth + 1u); else { c.pc = 0x00168A20u; return; } if (c.pc != 0x0020897Cu) [[unlikely]] return; }
L_0020897C:
    c.budget -= 1;
L_00208980:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208994u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x00208994u) [[unlikely]] return; }
L_00208994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020899Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020899Cu) [[unlikely]] return; }
L_0020899C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089ACu); set32(c.r[4], c.r[4].w[0] - 14800u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x002089ACu) [[unlikely]] return; }
L_002089AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089B4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002089B4u) [[unlikely]] return; }
L_002089B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089BCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002089BCu) [[unlikely]] return; }
L_002089BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00208A78; } }
L_002089C8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[1]);  if (t) { goto L_002089F8; } }
    st32((c.r[17].w[0] + 108u), c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_002089F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.f[2] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A2Cu); st32((c.r[17].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00208A2Cu) [[unlikely]] return; }
L_00208A2C:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A3Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00208A3Cu) [[unlikely]] return; }
L_00208A3C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A48u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00208A48u) [[unlikely]] return; }
L_00208A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A50u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00208A50u) [[unlikely]] return; }
L_00208A50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A60u); set32(c.r[4], c.r[4].w[0] - 14800u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x00208A60u) [[unlikely]] return; }
L_00208A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A68u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00208A68u) [[unlikely]] return; }
L_00208A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A70u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00208A70u) [[unlikely]] return; }
L_00208A70:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00208A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00208A90:
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_00208AD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00208AD8; } }
    c.budget -= 1;
L_00208AD0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00208AD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00208AE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00208AF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 68u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 29024u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00208B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00208B60; } }
L_00208B40:
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], 0u + 2u);  if (t) { goto L_00208B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00208B60; } }
    c.budget -= 1;
L_00208B58:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00208B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B68u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00208B68u) [[unlikely]] return; }
L_00208B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B70u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00208B70u) [[unlikely]] return; }
L_00208B70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B80u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00208B80u) [[unlikely]] return; }
L_00208B80:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B8Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00208B8Cu) [[unlikely]] return; }
L_00208B8C:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B98u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00208B98u) [[unlikely]] return; }
L_00208B98:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208BACu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00208BACu) [[unlikely]] return; }
L_00208BAC:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208BB8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00208BB8u) [[unlikely]] return; }
L_00208BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208BCCu); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00208BCCu) [[unlikely]] return; }
L_00208BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208BD4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00208BD4u) [[unlikely]] return; }
L_00208BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208BDCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x00208BDCu) [[unlikely]] return; }
L_00208BDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14768u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[2], c.r[2].w[0] - 14528u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[1].w[0] + 20244u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20296u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 14576u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208C74u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0067(c, 128u, depth + 1u); else { c.pc = 0x0029E100u; return; } if (c.pc != 0x00208C74u) [[unlikely]] return; }
L_00208C74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00208C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CB4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00208CB4u) [[unlikely]] return; }
L_00208CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00208D08; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] - 29408u);
    set32(c.r[2], c.r[2].w[0] - 28032u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D04u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00208D04u) [[unlikely]] return; }
L_00208D04:
    c.budget -= 1;
L_00208D08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208D20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_0042[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00208D40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u + 8193u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 25600u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], c.r[18].w[0] + 304u);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 320u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[0] = 0u;
    set32(c.r[5], c.r[5].w[0] - 6768u);
    set32(c.r[4], c.r[4].w[0] - 7280u);
    set32(c.r[3], c.r[3].w[0] - 7792u);
    set32(c.r[2], c.r[2].w[0] - 8304u);
    set32(c.r[12], c.r[12].w[0] - 8816u);
    set32(c.r[10], c.r[10].w[0] - 9328u);
    c.budget -= 42;
L_00208DE8:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[8].d[0] = c.r[7].sd[0] < 25ll ? 1ull : 0ull;
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[12].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.budget -= 58;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208DE8u | kUnwind; return; } goto L_00208DE8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[8], c.r[8].w[0] - 9360u);
    set32(c.r[7], c.r[7].w[0] - 9392u);
    set32(c.r[6], c.r[6].w[0] - 9424u);
    set32(c.r[5], c.r[5].w[0] - 9456u);
    set32(c.r[3], c.r[3].w[0] - 9488u);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9520u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[17].w[0] + 2624u);
    st32((c.r[8].w[0]), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208F68u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00208F68u) [[unlikely]] return; }
L_00208F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208F94u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00208F94u) [[unlikely]] return; }
L_00208F94:
    set32(c.r[2], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 26112u);
    set32(c.r[3], c.r[3].w[0] + 24112u);
    set32(c.r[7], c.r[18].w[0] + 32u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FE4u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 351u, depth + 1u); else { c.pc = 0x00123810u; return; } if (c.pc != 0x00208FE4u) [[unlikely]] return; }
L_00208FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 103u, depth + 1u); else { c.pc = 0x00209010u; return; } if (c.pc != 0x00208FECu) [[unlikely]] return; }
L_00208FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00209010:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00209050; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00209068; } }
    c.budget -= 1;
L_00209050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00209230; } }
    c.budget -= 1;
L_00209068:
    set32(c.r[19], ld32((c.r[20].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[18], c.r[20].w[0] + 304u);  if (t) { goto L_002090D8; } }
    set32(c.r[2], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 26112u);
    set32(c.r[3], c.r[3].w[0] + 24112u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090CCu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 351u, depth + 1u); else { c.pc = 0x00123810u; return; } if (c.pc != 0x002090CCu) [[unlikely]] return; }
L_002090CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209230; } }
    c.budget -= 1;
L_002090D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    set32(c.r[4], c.r[5].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090E8u); st8((c.r[20].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002090E8u) [[unlikely]] return; }
L_002090E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[17], c.r[29].w[0] + 116u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    set32(c.r[16], c.r[29].w[0] + 120u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209110u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00209110u) [[unlikely]] return; }
L_00209110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209118u); set32(c.r[4], c.r[19].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00209118u) [[unlikely]] return; }
L_00209118:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209144u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00209144u) [[unlikely]] return; }
L_00209144:
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209174u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00209174u) [[unlikely]] return; }
L_00209174:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209180u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00209180u) [[unlikely]] return; }
L_00209180:
    st32((c.r[18].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002091D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 26112u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002091C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0008(c, 355u, depth + 1u); else { c.pc = 0x001238A0u; return; } if (c.pc != 0x002091C8u) [[unlikely]] return; }
L_002091C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209208; } }
L_002091D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 26112u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209204u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0008(c, 355u, depth + 1u); else { c.pc = 0x001238A0u; return; } if (c.pc != 0x00209204u) [[unlikely]] return; }
L_00209204:
    c.budget -= 1;
L_00209208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209210u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 121u, depth + 1u); else { c.pc = 0x002092E0u; return; } if (c.pc != 0x00209210u) [[unlikely]] return; }
L_00209210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209218u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 128u, depth + 1u); else { c.pc = 0x00209650u; return; } if (c.pc != 0x00209218u) [[unlikely]] return; }
L_00209218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209220u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 140u, depth + 1u); else { c.pc = 0x00209710u; return; } if (c.pc != 0x00209220u) [[unlikely]] return; }
L_00209220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00209230; } }
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00209230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00209260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00209270:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00209280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[4].w[0] + 192u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 26064u);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 608u);
    set32(c.r[6], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002092B8u); set32(c.r[4], c.r[2].w[0] + 20928u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002092B8u) [[unlikely]] return; }
L_002092B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002092C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x002092C4u) [[unlikely]] return; }
L_002092C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002092E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    fpu_div(c, 0u, c.f[0], c.f[12]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_00209388; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00209588; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26112u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 24112u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209380u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0008(c, 351u, depth + 1u); else { c.pc = 0x00123810u; return; } if (c.pc != 0x00209380u) [[unlikely]] return; }
L_00209380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209588; } }
L_00209388:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_002093A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00209418; } }
    c.budget -= 1;
L_002093A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_00209588; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209588; } }
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 26112u);
    set32(c.r[3], c.r[3].w[0] + 24112u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020940Cu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 351u, depth + 1u); else { c.pc = 0x00123810u; return; } if (c.pc != 0x0020940Cu) [[unlikely]] return; }
L_0020940C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209588; } }
    c.budget -= 1;
L_00209418:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00209498; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_00209588; } }
    set32(c.r[3], c.r[5].w[0] - 5u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209588; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26112u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 24112u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209490u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0008(c, 351u, depth + 1u); else { c.pc = 0x00123810u; return; } if (c.pc != 0x00209490u) [[unlikely]] return; }
L_00209490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209588; } }
L_00209498:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002094B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00209588; } }
    c.budget -= 1;
L_002094B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_00209588; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00209528; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 26112u);
    set32(c.r[3], c.r[3].w[0] + 24112u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209520u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 351u, depth + 1u); else { c.pc = 0x00123810u; return; } if (c.pc != 0x00209520u) [[unlikely]] return; }
L_00209520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209588; } }
L_00209528:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00209588; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 26112u);
    set32(c.r[3], c.r[3].w[0] + 24112u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209584u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 351u, depth + 1u); else { c.pc = 0x00123810u; return; } if (c.pc != 0x00209584u) [[unlikely]] return; }
L_00209584:
    c.budget -= 1;
L_00209588:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[7], c.r[7].w[0] + 24112u);
    c.budget -= 4;
L_00209598:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209620; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 30;
L_00209620:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[4].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00209598u | kUnwind; return; } goto L_00209598; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209650:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 304u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209670u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00209670u) [[unlikely]] return; }
L_00209670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209678u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00209678u) [[unlikely]] return; }
L_00209678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_002096C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020969Cu);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020969Cu) [[unlikely]] return; }
L_0020969C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096A4u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002096A4u) [[unlikely]] return; }
L_002096A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096B4u); set32(c.r[4], c.r[4].w[0] - 14512u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x002096B4u) [[unlikely]] return; }
L_002096B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002096C8; } }
    c.budget -= 1;
L_002096C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096C8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002096C8u) [[unlikely]] return; }
L_002096C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096D0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002096D0u) [[unlikely]] return; }
L_002096D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096D8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002096D8u) [[unlikely]] return; }
L_002096D8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096E8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002096E8u) [[unlikely]] return; }
L_002096E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096F0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002096F0u) [[unlikely]] return; }
L_002096F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096F8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002096F8u) [[unlikely]] return; }
L_002096F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00209710:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 360u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 356u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 344u);
    set32(c.r[20], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 28;
L_00209780:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 24112u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[23].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209808u); st32((c.r[30].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00209808u) [[unlikely]] return; }
L_00209808:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209818u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00209818u) [[unlikely]] return; }
L_00209818:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209824u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00209824u) [[unlikely]] return; }
L_00209824:
    c.r[1].d[0] = c.r[21].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002098F0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 24112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020986Cu); set32(c.r[6], c.r[3].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020986Cu) [[unlikely]] return; }
L_0020986C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209874u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00209874u) [[unlikely]] return; }
L_00209874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_002098B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209898u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00209898u) [[unlikely]] return; }
L_00209898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098A0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002098A0u) [[unlikely]] return; }
L_002098A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098B0u); set32(c.r[4], c.r[4].w[0] - 14512u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x002098B0u) [[unlikely]] return; }
L_002098B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002098C0; } }
L_002098B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098C0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002098C0u) [[unlikely]] return; }
L_002098C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098C8u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002098C8u) [[unlikely]] return; }
L_002098C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098D0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002098D0u) [[unlikely]] return; }
L_002098D0:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098E0u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002098E0u) [[unlikely]] return; }
L_002098E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098E8u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002098E8u) [[unlikely]] return; }
L_002098E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098F0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002098F0u) [[unlikely]] return; }
L_002098F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098F8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002098F8u) [[unlikely]] return; }
L_002098F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209900u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00209900u) [[unlikely]] return; }
L_00209900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209910u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x00209910u) [[unlikely]] return; }
L_00209910:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] + 24112u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209948u); set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00209948u) [[unlikely]] return; }
L_00209948:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209954u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00209954u) [[unlikely]] return; }
L_00209954:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209960u); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00209960u) [[unlikely]] return; }
L_00209960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209968u); c.r[22].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00209968u) [[unlikely]] return; }
L_00209968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209970u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00209970u) [[unlikely]] return; }
L_00209970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209978u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00209978u) [[unlikely]] return; }
L_00209978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE440000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E440000u);
    c.r[3].d[0] = c.r[3].d[0] | 39846ull;
    set32(c.r[4], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 39846ull;
    st32((c.r[23].w[0]), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[30].w[0]), 0u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 340u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002099B0u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002099B0u) [[unlikely]] return; }
L_002099B0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002099BCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002099BCu) [[unlikely]] return; }
L_002099BC:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[2] = ld32((c.r[29].w[0] + 320u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 6768u);
    set32(c.r[8], c.r[8].w[0] - 7280u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - 7792u);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] - 8304u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 8816u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] - 9328u);
    set32(c.r[9], c.r[9].w[0] << 2);
    c.r[3].d[0] = c.r[21].sd[0] < 25ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 324u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[23].w[0]));
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 328u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 324u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 340u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 328u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 93;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00209780u | kUnwind; return; } goto L_00209780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B38u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00209B38u) [[unlikely]] return; }
L_00209B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B40u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00209B40u) [[unlikely]] return; }
L_00209B40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B50u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x00209B50u) [[unlikely]] return; }
L_00209B50:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B64u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00209B64u) [[unlikely]] return; }
L_00209B64:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B70u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00209B70u) [[unlikely]] return; }
L_00209B70:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B7Cu); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00209B7Cu) [[unlikely]] return; }
L_00209B7C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE440000u);
    c.r[3].d[0] = c.r[2].d[0] | 39846ull;
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E440000u);
    st32((c.r[23].w[0]), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 39846ull;
    st32((c.r[30].w[0]), 0u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 340u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BB0u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00209BB0u) [[unlikely]] return; }
L_00209BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00209BB8u) [[unlikely]] return; }
L_00209BB8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BC4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00209BC4u) [[unlikely]] return; }
L_00209BC4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BD0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00209BD0u) [[unlikely]] return; }
L_00209BD0:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[10], c.r[10].w[0] - 9360u);
    set32(c.r[9], c.r[9].w[0] - 9392u);
    set32(c.r[8], c.r[8].w[0] - 9424u);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9456u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] - 9488u);
    st32((c.r[10].w[0]), c.f[0]);
    set32(c.r[6], c.r[6].w[0] - 9520u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[0] = ld32((c.r[23].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[9].w[0]), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[8].w[0]), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 340u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[23].w[0]), 0u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209C98u); st32((c.r[30].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00209C98u) [[unlikely]] return; }
L_00209C98:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[5], c.r[5].w[0] + 24080u);
    set32(c.r[4], c.r[4].w[0] + 24048u);
    set32(c.r[3], c.r[3].w[0] + 24016u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[0] = ld32((c.r[23].w[0]));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
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
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00209D20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00209D4Cu) [[unlikely]] return; }
L_00209D4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00209E20; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[3], c.r[3].w[0] - 25024u);
    set32(c.r[2], c.r[2].w[0] - 20128u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D9Cu); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00209D9Cu) [[unlikely]] return; }
L_00209D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209DA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 93u, depth + 1u); else { c.pc = 0x00208C90u; return; } if (c.pc != 0x00209DA4u) [[unlikely]] return; }
L_00209DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00209DB8; } }
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 3;
L_00209DB8:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00209DE8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209DDCu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00209DDCu) [[unlikely]] return; }
L_00209DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209E20; } }
    c.budget -= 1;
L_00209DE8:
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209DFCu); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00209DFCu) [[unlikely]] return; }
L_00209DFC:
    set32(c.r[17], 0u + 267u);
    c.budget -= 1;
L_00209E00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209E0Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 198u, depth + 1u); else { c.pc = 0x0016EDE0u; return; } if (c.pc != 0x00209E0Cu) [[unlikely]] return; }
L_00209E0C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 271ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00209E00u | kUnwind; return; } goto L_00209E00; } }
    c.budget -= 1;
L_00209E20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00209E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_0042[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00209E60:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    set32(c.r[6], 0u + 8193u);
    set32(c.r[5], 0u + 25600u);
    c.r[3].d[0] = c.r[3].d[0] | 63999ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { st32((c.r[4].w[0] + 404u), 0u);  goto L_00209EB0; }
L_00209EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00209F18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00209EF0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00209F18; } }
L_00209EF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F10u); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x00209F10u) [[unlikely]] return; }
L_00209F10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209F98; } }
L_00209F18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] - 14464u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    st32((c.r[17].w[0] + 140u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00209F5Cu) [[unlikely]] return; }
L_00209F5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 757u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209F90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209F90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00209F98; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00209F98; } }
L_00209F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 244u, depth + 1u); else { c.pc = 0x0020AC70u; return; } if (c.pc != 0x00209F98u) [[unlikely]] return; }
L_00209F98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209FB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00209FC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00209FD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 304u);  if (t) { goto L_0020A018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A014u);  if (depth < kMaxDepth) unit_0042(c, 244u, depth + 1u); else { c.pc = 0x0020AC70u; return; } if (c.pc != 0x0020A014u) [[unlikely]] return; }
L_0020A014:
    c.budget -= 1;
L_0020A018:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020A070; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[4].d[0] = 0ull | 57344ull;
    set32(c.r[3], 0u - 3584u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[19].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st16((c.r[19].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0020A098; } }
L_0020A070:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0020A090; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A088u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 245u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x0020A088u) [[unlikely]] return; }
L_0020A088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A098; } }
L_0020A090:
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0020A098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0A0u); set32(c.r[4], c.r[18].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020A0A0u) [[unlikely]] return; }
L_0020A0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0C8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020A0C8u) [[unlikely]] return; }
L_0020A0C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC80000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0E0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020A0E0u) [[unlikely]] return; }
L_0020A0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0E8u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020A0E8u) [[unlikely]] return; }
L_0020A0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020A110:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    set32(c.r[2], ld32((c.r[4].w[0] + 404u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 304u);  if (t) { goto L_0020A1B0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 96u));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 88u));
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 516u));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A1B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020A1B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A1A8u);  if (depth < kMaxDepth) unit_006A(c, 291u, depth + 1u); else { c.pc = 0x002ABC10u; return; } if (c.pc != 0x0020A1A8u) [[unlikely]] return; }
L_0020A1A8:
    st16((c.r[18].w[0] + 556u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0020A1B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A1C0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 264u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x0020A1C0u) [[unlikely]] return; }
L_0020A1C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020A330; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020A250; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020A1E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A380; } }
L_0020A1E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0020A238; } }
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 516u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020A380; } }
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A230u); st16((c.r[19].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020A230u) [[unlikely]] return; }
L_0020A230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A380; } }
L_0020A238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_0020A380; } }
L_0020A250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0020A278; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020A278; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A2F8; } }
    c.budget -= 1;
L_0020A278:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < -1536ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1536u);  if (t) { goto L_0020A2A0; } }
L_0020A298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A2A8; } }
L_0020A2A0:
    set32(c.r[2], c.r[3].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0020A2A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[2].d[0] = 0ull | 42326ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 47787ull;  if (t) { goto L_0020A2D8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020A2D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0020A2D8:
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A2ECu); st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020A2ECu) [[unlikely]] return; }
L_0020A2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A380; } }
    c.budget -= 1;
L_0020A2F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A380; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < -5460ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020A320; } }
    set32(c.r[2], 0u - 5461u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A380; } }
L_0020A320:
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A380; } }
    c.budget -= 1;
L_0020A330:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < -1536ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1536u);  if (t) { goto L_0020A348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A350; } }
L_0020A348:
    set32(c.r[2], c.r[3].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0020A350:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[2].d[0] = 0ull | 42326ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 47787ull;  if (t) { goto L_0020A380; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020A380; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0020A380:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A38Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 325u, depth + 1u); else { c.pc = 0x0020B500u; return; } if (c.pc != 0x0020A38Cu) [[unlikely]] return; }
L_0020A38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A3B0; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020A3B0; } }
    st16((c.r[19].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 4;
L_0020A3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020A3D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 324u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[19].w[0] + 304u);  if (t) { goto L_0020A418; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A410u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 245u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x0020A410u) [[unlikely]] return; }
L_0020A410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A530; } }
L_0020A418:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < -1536ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1536u);  if (t) { goto L_0020A430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A438; } }
L_0020A430:
    set32(c.r[2], c.r[3].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0020A438:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020A458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_0020A470; } }
L_0020A458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_0020A470:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 96u));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 88u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A4B8u); st32((c.r[19].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0042(c, 264u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x0020A4B8u) [[unlikely]] return; }
L_0020A4B8:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020A4F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0020A4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020A4F8; } }
    c.budget -= 1;
L_0020A4F0:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0020A4F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A530; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020A530; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0020A530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020A550:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 304u);  if (t) { goto L_0020A590; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[18].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0020A590:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A730; } }
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A5B8u); st32((c.r[19].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0042(c, 300u, depth + 1u); else { c.pc = 0x0020B210u; return; } if (c.pc != 0x0020A5B8u) [[unlikely]] return; }
L_0020A5B8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A5E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020A5E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A658; } }
    c.budget -= 1;
L_0020A5E8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 68u), c.r[5].w[0]);
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A64Cu); st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020A64Cu) [[unlikely]] return; }
L_0020A64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A710; } }
    c.budget -= 1;
L_0020A658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A660u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0020A660u) [[unlikely]] return; }
L_0020A660:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[19].w[0] + 128u);  if (t) { goto L_0020A710; } }
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A67Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x0020A67Cu) [[unlikely]] return; }
L_0020A67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0020A710; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], 0u + 8u);
    st32((c.r[19].w[0] + 32u), c.f[4]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 36u), c.f[3]);
    st32((c.r[19].w[0] + 40u), c.f[2]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 68u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A700u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0023(c, 56u, depth + 1u); else { c.pc = 0x0018C120u; return; } if (c.pc != 0x0020A700u) [[unlikely]] return; }
L_0020A700:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A710u); st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020A710u) [[unlikely]] return; }
L_0020A710:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A71Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 301u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0020A71Cu) [[unlikely]] return; }
L_0020A71C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A728u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 311u, depth + 1u); else { c.pc = 0x0020B2F0u; return; } if (c.pc != 0x0020A728u) [[unlikely]] return; }
L_0020A728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A7D8; } }
L_0020A730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A738u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 300u, depth + 1u); else { c.pc = 0x0020B210u; return; } if (c.pc != 0x0020A738u) [[unlikely]] return; }
L_0020A738:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A768; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020A768; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A7C0; } }
    c.budget -= 1;
L_0020A768:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[3], 0u + 8u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A7C0u); st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020A7C0u) [[unlikely]] return; }
L_0020A7C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A7CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 301u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0020A7CCu) [[unlikely]] return; }
L_0020A7CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A7D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 311u, depth + 1u); else { c.pc = 0x0020B2F0u; return; } if (c.pc != 0x0020A7D8u) [[unlikely]] return; }
L_0020A7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020A800:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 304u);  if (t) { goto L_0020A9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A83Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 325u, depth + 1u); else { c.pc = 0x0020B500u; return; } if (c.pc != 0x0020A83Cu) [[unlikely]] return; }
L_0020A83C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0020A988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A84Cu);  if (depth < kMaxDepth) unit_0042(c, 300u, depth + 1u); else { c.pc = 0x0020B210u; return; } if (c.pc != 0x0020A84Cu) [[unlikely]] return; }
L_0020A84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A854u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0020A854u) [[unlikely]] return; }
L_0020A854:
    c.f[4] = ld32((c.r[19].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020A8F0; } }
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020A8A0; } }
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 68u), 0u);  if (t) { goto L_0020A8D0; } }
L_0020A8A0:
    set32(c.r[4], c.r[19].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A8B0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x0020A8B0u) [[unlikely]] return; }
L_0020A8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A8D0; } }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 6;
L_0020A8D0:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020A8F0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A8F0u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 56u, depth + 1u); else { c.pc = 0x0018C120u; return; } if (c.pc != 0x0020A8F0u) [[unlikely]] return; }
L_0020A8F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020A910; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A950; } }
L_0020A910:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[4].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0020A988; } }
    c.budget -= 1;
L_0020A950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020A978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 52u), c.f[0]);  if (t) { goto L_0020A988; } }
    c.budget -= 1;
L_0020A978:
    c.f[0] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_0020A988:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A994u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 301u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0020A994u) [[unlikely]] return; }
L_0020A994:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A9A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 311u, depth + 1u); else { c.pc = 0x0020B2F0u; return; } if (c.pc != 0x0020A9A0u) [[unlikely]] return; }
L_0020A9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020AA30; } }
L_0020A9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A9B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 325u, depth + 1u); else { c.pc = 0x0020B500u; return; } if (c.pc != 0x0020A9B0u) [[unlikely]] return; }
L_0020A9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0020AA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A9C0u);  if (depth < kMaxDepth) unit_0042(c, 300u, depth + 1u); else { c.pc = 0x0020B210u; return; } if (c.pc != 0x0020A9C0u) [[unlikely]] return; }
L_0020A9C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020A9E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020AA18; } }
L_0020A9E0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 14;
L_0020AA18:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 301u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0020AA24u) [[unlikely]] return; }
L_0020AA24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 311u, depth + 1u); else { c.pc = 0x0020B2F0u; return; } if (c.pc != 0x0020AA30u) [[unlikely]] return; }
L_0020AA30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020AA50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 116u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[29].w[0] + 120u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[19].w[0] + 304u);
    c.f[0] = ld32((c.r[5].w[0] + 2672u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2676u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2680u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AACCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020AACCu) [[unlikely]] return; }
L_0020AACC:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AAD8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020AAD8u) [[unlikely]] return; }
L_0020AAD8:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AAECu); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020AAECu) [[unlikely]] return; }
L_0020AAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AAF4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020AAF4u) [[unlikely]] return; }
L_0020AAF4:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_0020AB20; } }
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 2;
L_0020AB20:
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 20u), c.f[1]);  if (t) { goto L_0020AB98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020ABA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.f[0]);  if (t) { goto L_0020ABA0; } }
L_0020AB98:
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 2;
L_0020ABA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020ABC0; } }
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_0020ABC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020ABE0; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0020ABE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ABE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 300u, depth + 1u); else { c.pc = 0x0020B210u; return; } if (c.pc != 0x0020ABE8u) [[unlikely]] return; }
L_0020ABE8:
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 128u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC3Cu); st32((c.r[19].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0042(c, 301u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0020AC3Cu) [[unlikely]] return; }
L_0020AC3C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 311u, depth + 1u); else { c.pc = 0x0020B2F0u; return; } if (c.pc != 0x0020AC48u) [[unlikely]] return; }
L_0020AC48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0020AC70:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_006A(c, 143u, depth); }
L_0020AC90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 504u)));
    st32((c.r[4].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 508u)));
    st32((c.r[4].w[0] + 508u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 248u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0020AE78; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020ADF8; } }
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[19], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[3], c.r[29].w[0] + 104u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 72u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD4Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020AD4Cu) [[unlikely]] return; }
L_0020AD4C:
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD58u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0020AD58u) [[unlikely]] return; }
L_0020AD58:
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[19].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_0020AD80; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020AD80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 8192u);  if (t) { goto L_0020ADA0; } }
    c.budget -= 1;
L_0020AD80:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[19].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 57344ull;  if (t) { goto L_0020ADA0; } }
    c.r[1].d[0] = c.r[19].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020ADA0; } }
    c.r[19].d[0] = 0ull | 57344ull;
    c.budget -= 1;
L_0020ADA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADA8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0020ADA8u) [[unlikely]] return; }
L_0020ADA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADC4u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0020ADC4u) [[unlikely]] return; }
L_0020ADC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADE0u); st32((c.r[18].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0020ADE0u) [[unlikely]] return; }
L_0020ADE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.f[0]);  if (t) { goto L_0020AE38; } }
L_0020ADF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AE00u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0020AE00u) [[unlikely]] return; }
L_0020AE00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AE1Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0020AE1Cu) [[unlikely]] return; }
L_0020AE1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 7;
L_0020AE38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].d[0] = 0ull | 49152ull;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0020AF48; } }
    c.budget -= 1;
L_0020AE78:
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020AEA8; } }
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_0020AED0; } }
L_0020AEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AEB0u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020AEB0u) [[unlikely]] return; }
L_0020AEB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AED0u); st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020AED0u) [[unlikely]] return; }
L_0020AED0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AEE0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020AEE0u) [[unlikely]] return; }
L_0020AEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AEE8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020AEE8u) [[unlikely]] return; }
L_0020AEE8:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 8592u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF20u); st32((c.r[18].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020AF20u) [[unlikely]] return; }
L_0020AF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF28u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020AF28u) [[unlikely]] return; }
L_0020AF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF30u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020AF30u) [[unlikely]] return; }
L_0020AF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF38u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0020AF38u) [[unlikely]] return; }
L_0020AF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF40u); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020AF40u) [[unlikely]] return; }
L_0020AF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF48u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020AF48u) [[unlikely]] return; }
L_0020AF48:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 5u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF6Cu); st16((c.r[18].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020AF6Cu) [[unlikely]] return; }
L_0020AF6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0020AF90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020B070; } }
    c.f[21] = ld32((c.r[18].w[0] + 2676u));
    c.f[20] = ld32((c.r[18].w[0] + 2680u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFD8u); c.f[22] = ld32((c.r[18].w[0] + 2672u));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020AFD8u) [[unlikely]] return; }
L_0020AFD8:
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFE8u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020AFE8u) [[unlikely]] return; }
L_0020AFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFF0u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020AFF0u) [[unlikely]] return; }
L_0020AFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFF8u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020AFF8u) [[unlikely]] return; }
L_0020AFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B000u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020B000u) [[unlikely]] return; }
L_0020B000:
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    st32((c.r[29].w[0] + 148u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B02Cu); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020B02Cu) [[unlikely]] return; }
L_0020B02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B034u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020B034u) [[unlikely]] return; }
L_0020B034:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B044u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020B044u) [[unlikely]] return; }
L_0020B044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B04Cu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020B04Cu) [[unlikely]] return; }
L_0020B04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B054u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020B054u) [[unlikely]] return; }
L_0020B054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B05Cu); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0020B05Cu) [[unlikely]] return; }
L_0020B05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B064u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020B064u) [[unlikely]] return; }
L_0020B064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B130; } }
    c.budget -= 1;
L_0020B070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B078u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020B078u) [[unlikely]] return; }
L_0020B078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B080u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020B080u) [[unlikely]] return; }
L_0020B080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B088u); set32(c.r[4], c.r[18].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020B088u) [[unlikely]] return; }
L_0020B088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B090u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x0020B090u) [[unlikely]] return; }
L_0020B090:
    c.f[21] = ld32((c.r[18].w[0] + 2676u));
    c.f[20] = ld32((c.r[18].w[0] + 2680u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0A0u); c.f[22] = ld32((c.r[18].w[0] + 2672u));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020B0A0u) [[unlikely]] return; }
L_0020B0A0:
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0B0u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020B0B0u) [[unlikely]] return; }
L_0020B0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0B8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0020B0B8u) [[unlikely]] return; }
L_0020B0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0C0u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020B0C0u) [[unlikely]] return; }
L_0020B0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0C8u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020B0C8u) [[unlikely]] return; }
L_0020B0C8:
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    st32((c.r[29].w[0] + 148u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0F4u); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020B0F4u) [[unlikely]] return; }
L_0020B0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0FCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020B0FCu) [[unlikely]] return; }
L_0020B0FC:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B10Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020B10Cu) [[unlikely]] return; }
L_0020B10C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B114u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0020B114u) [[unlikely]] return; }
L_0020B114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B11Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020B11Cu) [[unlikely]] return; }
L_0020B11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B124u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0020B124u) [[unlikely]] return; }
L_0020B124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B12Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020B12Cu) [[unlikely]] return; }
L_0020B12C:
    c.budget -= 1;
L_0020B130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0020B160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020B1F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B1F0; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B194u); set32(c.r[4], c.r[16].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020B194u) [[unlikely]] return; }
L_0020B194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1BCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020B1BCu) [[unlikely]] return; }
L_0020B1BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC80000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1D4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020B1D4u) [[unlikely]] return; }
L_0020B1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1DCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020B1DCu) [[unlikely]] return; }
L_0020B1DC:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x0020B1E8u) [[unlikely]] return; }
L_0020B1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B1F8; } }
L_0020B1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1F8u);  if (depth < kMaxDepth) unit_0043(c, 429u, depth + 1u); else { c.pc = 0x0020FFF0u; return; } if (c.pc != 0x0020B1F8u) [[unlikely]] return; }
L_0020B1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B210:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.f[0]);  c.pc = t; return; }
L_0020B250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020B2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B27Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020B27Cu) [[unlikely]] return; }
L_0020B27C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B28Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020B28Cu) [[unlikely]] return; }
L_0020B28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B294u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020B294u) [[unlikely]] return; }
L_0020B294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B29Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020B29Cu) [[unlikely]] return; }
L_0020B29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B2A4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020B2A4u) [[unlikely]] return; }
L_0020B2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B2D8; } }
    c.budget -= 1;
L_0020B2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B2B8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020B2B8u) [[unlikely]] return; }
L_0020B2B8:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B2C8u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020B2C8u) [[unlikely]] return; }
L_0020B2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B2D0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0020B2D0u) [[unlikely]] return; }
L_0020B2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B2D8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020B2D8u) [[unlikely]] return; }
L_0020B2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B2F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B32Cu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020B32Cu) [[unlikely]] return; }
L_0020B32C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 176u), 0u);
    set32(c.r[17], c.r[29].w[0] + 180u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    set32(c.r[22], c.r[29].w[0] + 184u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B354u); st32((c.r[22].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020B354u) [[unlikely]] return; }
L_0020B354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B35Cu); set32(c.r[4], c.r[19].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020B35Cu) [[unlikely]] return; }
L_0020B35C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 164u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B390u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020B390u) [[unlikely]] return; }
L_0020B390:
    c.f[5] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B3C0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020B3C0u) [[unlikely]] return; }
L_0020B3C0:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B3CCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020B3CCu) [[unlikely]] return; }
L_0020B3CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 8u), c.f[0]);  if (t) { goto L_0020B4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B3ECu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020B3ECu) [[unlikely]] return; }
L_0020B3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B40Cu); st32((c.r[22].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020B40Cu) [[unlikely]] return; }
L_0020B40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B414u); set32(c.r[4], c.r[19].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020B414u) [[unlikely]] return; }
L_0020B414:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B440u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020B440u) [[unlikely]] return; }
L_0020B440:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B450u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020B450u) [[unlikely]] return; }
L_0020B450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B458u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020B458u) [[unlikely]] return; }
L_0020B458:
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 148u);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 152u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B4D0u); st32((c.r[21].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0042(c, 301u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0020B4D0u) [[unlikely]] return; }
L_0020B4D0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0020B500:
    set32(c.r[2], ld32((c.r[5].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020B518; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
L_0020B518:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  c.pc = t; return; }
L_0020B520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B54Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0020B54Cu) [[unlikely]] return; }
L_0020B54C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020B5C0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 25u);
    set32(c.r[3], c.r[3].w[0] - 18976u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 515u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5A8u); st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020B5A8u) [[unlikely]] return; }
L_0020B5A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5C0u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0020B5C0u) [[unlikely]] return; }
L_0020B5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020B5E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_0042[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020B600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 14416u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    set32(c.r[6], c.r[6].w[0] - 14400u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 8192u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st128((c.r[9].w[0]) & ~15u, c.r[8]);
    set32(c.r[2], 0u + 25600u);
    ld128((c.r[6].w[0]) & ~15u, c.r[6]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B668u); st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x0020B668u) [[unlikely]] return; }
L_0020B668:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B674u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020B674u) [[unlikely]] return; }
L_0020B674:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0020B690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B688u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020B688u) [[unlikely]] return; }
L_0020B688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B6A0; } }
L_0020B690:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B69Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020B69Cu) [[unlikely]] return; }
L_0020B69C:
    c.budget -= 1;
L_0020B6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B6A8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020B6A8u) [[unlikely]] return; }
L_0020B6A8:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[6], 0u + 256u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 84u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B6F4u); st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0042(c, 338u, depth + 1u); else { c.pc = 0x0020B710u; return; } if (c.pc != 0x0020B6F4u) [[unlikely]] return; }
L_0020B6F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020B710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020B7A0; } }
    c.f[20] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B738u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0020B738u) [[unlikely]] return; }
L_0020B738:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);  if (t) { goto L_0020B770; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020B770; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B770; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020B7A8; } }
L_0020B770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B794u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x0020B794u) [[unlikely]] return; }
L_0020B794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B7A8; } }
    c.budget -= 1;
L_0020B7A0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0020B7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020B7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_0020B7E8; } }
    c.budget -= 1;
L_0020B7D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 6;
L_0020B7E8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B850; } }
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 3;
L_0020B850:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B85Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 451u, depth + 1u); else { c.pc = 0x001C5750u; return; } if (c.pc != 0x0020B85Cu) [[unlikely]] return; }
L_0020B85C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0020B890:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0020B8A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B8D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0020B8D4u) [[unlikely]] return; }
L_0020B8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020B960; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[8], 0u + 17u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 26u);
    set32(c.r[7], c.r[4].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[3], c.r[3].w[0] - 18048u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 636u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B944u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020B944u) [[unlikely]] return; }
L_0020B944:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B95Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0020B95Cu) [[unlikely]] return; }
L_0020B95C:
    c.budget -= 1;
L_0020B960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020B980:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_0042[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020B9A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 8192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 25600u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA0Cu); c.r[6].d[0] = c.r[2].d[0] & 127ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020BA0Cu) [[unlikely]] return; }
L_0020BA0C:
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st32((c.r[18].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA24u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020BA24u) [[unlikely]] return; }
L_0020BA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020BA2Cu) [[unlikely]] return; }
L_0020BA2C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA38u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020BA38u) [[unlikely]] return; }
L_0020BA38:
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA44u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020BA44u) [[unlikely]] return; }
L_0020BA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA4Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020BA4Cu) [[unlikely]] return; }
L_0020BA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0020BA54u) [[unlikely]] return; }
L_0020BA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA5Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020BA5Cu) [[unlikely]] return; }
L_0020BA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA64u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020BA64u) [[unlikely]] return; }
L_0020BA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA6Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0020BA6Cu) [[unlikely]] return; }
L_0020BA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020BA74u) [[unlikely]] return; }
L_0020BA74:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020BAB0; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 30u);
    st16((c.r[17].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
L_0020BAB0:
    st32((c.r[29].w[0] + 96u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st32((c.r[29].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0020BB18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BAD4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020BAD4u) [[unlikely]] return; }
L_0020BAD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 264u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BAE8u); set32(c.r[5], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020BAE8u) [[unlikely]] return; }
L_0020BAE8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BAF8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x0020BAF8u) [[unlikely]] return; }
L_0020BAF8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB0Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x0020BB0Cu) [[unlikely]] return; }
L_0020BB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020BB14u) [[unlikely]] return; }
L_0020BB14:
    c.budget -= 1;
L_0020BB18:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB24u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020BB24u) [[unlikely]] return; }
L_0020BB24:
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_0020BB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB48u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020BB48u) [[unlikely]] return; }
L_0020BB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020BBA0; } }
L_0020BB50:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020BB60; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 1;
L_0020BB60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020BB88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_0020BB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB80u); set32(c.r[5], c.r[3].w[0] + 1360u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020BB80u) [[unlikely]] return; }
L_0020BB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020BBA0; } }
L_0020BB88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB9Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020BB9Cu) [[unlikely]] return; }
L_0020BB9C:
    c.budget -= 1;
L_0020BBA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BBACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 353u, depth + 1u); else { c.pc = 0x0017FCB0u; return; } if (c.pc != 0x0020BBACu) [[unlikely]] return; }
L_0020BBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BBB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 372u, depth + 1u); else { c.pc = 0x0020BBD0u; return; } if (c.pc != 0x0020BBB4u) [[unlikely]] return; }
L_0020BBB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0020BBD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_0020BC10; } }
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC0Cu); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020BC0Cu) [[unlikely]] return; }
L_0020BC0C:
    c.budget -= 1;
L_0020BC10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020BCA0; } }
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);  if (t) { goto L_0020BC70; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020BC70; } }
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020BC70; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020BC80; } }
    c.budget -= 1;
L_0020BC70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020BEB8; } }
L_0020BC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC88u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0020BC88u) [[unlikely]] return; }
L_0020BC88:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020BCF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0020BCF8; } }
L_0020BCA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCB0u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020BCB0u) [[unlikely]] return; }
L_0020BCB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020BCD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020BEB8; } }
L_0020BCD8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 84u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 84u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BCF8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0020BCF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0020BD18; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BD18; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020BD68; } }
L_0020BD18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 144u);  if (t) { goto L_0020BEB8; } }
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD40u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x0020BD40u) [[unlikely]] return; }
L_0020BD40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_0020BEB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD50u);  if (depth < kMaxDepth) unit_001D(c, 32u, depth + 1u); else { c.pc = 0x00174520u; return; } if (c.pc != 0x0020BD50u) [[unlikely]] return; }
L_0020BD50:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD5Cu); set32(c.r[5], 0u + 144u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0020BD5Cu) [[unlikely]] return; }
L_0020BD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020BEB8; } }
    c.budget -= 1;
L_0020BD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD70u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 301u, depth + 1u); else { c.pc = 0x0017EF30u; return; } if (c.pc != 0x0020BD70u) [[unlikely]] return; }
L_0020BD70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020BE70; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020BE68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 40u)));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDA4u); set32(c.r[4], ld32((c.r[19].w[0] + 504u)));  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x0020BDA4u) [[unlikely]] return; }
L_0020BDA4:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDB4u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020BDB4u) [[unlikely]] return; }
L_0020BDB4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020BE60; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDD0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 253u, depth + 1u); else { c.pc = 0x001EEBC0u; return; } if (c.pc != 0x0020BDD0u) [[unlikely]] return; }
L_0020BDD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020BE08; } }
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDF0u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020BDF0u) [[unlikely]] return; }
L_0020BDF0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDFCu); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020BDFCu) [[unlikely]] return; }
L_0020BDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020BE70; } }
    c.budget -= 1;
L_0020BE08:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE14u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020BE14u) [[unlikely]] return; }
L_0020BE14:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE24u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020BE24u) [[unlikely]] return; }
L_0020BE24:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE34u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x0020BE34u) [[unlikely]] return; }
L_0020BE34:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE48u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x0020BE48u) [[unlikely]] return; }
L_0020BE48:
    c.f[12] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE58u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020BE58u) [[unlikely]] return; }
L_0020BE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020BE70; } }
L_0020BE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0020BE70; } }
L_0020BE68:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0020BE70:
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE7Cu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020BE7Cu) [[unlikely]] return; }
L_0020BE7C:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE88u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020BE88u) [[unlikely]] return; }
L_0020BE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE90u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020BE90u) [[unlikely]] return; }
L_0020BE90:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BEA0u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020BEA0u) [[unlikely]] return; }
L_0020BEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BEA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0020BEA8u) [[unlikely]] return; }
L_0020BEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BEB0u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020BEB0u) [[unlikely]] return; }
L_0020BEB0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0020BEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0020BEE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0020BEF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0020BF00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0020BF34u) [[unlikely]] return; }
L_0020BF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020BFA0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 27u);
    set32(c.r[3], c.r[3].w[0] - 16448u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF88u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020BF88u) [[unlikely]] return; }
L_0020BF88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BFA0u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0020BFA0u) [[unlikely]] return; }
L_0020BFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020BFC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14288u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_0042[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020BFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 8192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 25600u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    [[clang::musttail]] return unit_0043(c, 1u, depth);
}

}
