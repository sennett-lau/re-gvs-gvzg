#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002C[4096] = {
    1, 2, 3, 4, 0, 5, 6, 7, 8, 0, 9, 0, 0, 10, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 15, 16,
    0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0,
    0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0,
};

void unit_002C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B0000;
    case 2u: goto L_001B0004;
    case 3u: goto L_001B0008;
    case 4u: goto L_001B000C;
    case 5u: goto L_001B0014;
    case 6u: goto L_001B0018;
    case 7u: goto L_001B001C;
    case 8u: goto L_001B0020;
    case 9u: goto L_001B0028;
    case 10u: goto L_001B0034;
    case 11u: goto L_001B0038;
    case 12u: goto L_001B004C;
    case 13u: goto L_001B0060;
    case 14u: goto L_001B0074;
    case 15u: goto L_001B0078;
    case 16u: goto L_001B007C;
    case 17u: goto L_001B008C;
    case 18u: goto L_001B00A0;
    case 19u: goto L_001B00F0;
    case 20u: goto L_001B0100;
    case 21u: goto L_001B0130;
    case 22u: goto L_001B014C;
    case 23u: goto L_001B0150;
    case 24u: goto L_001B0168;
    case 25u: goto L_001B019C;
    case 26u: goto L_001B01D4;
    case 27u: goto L_001B01E4;
    case 28u: goto L_001B0200;
    case 29u: goto L_001B0230;
    case 30u: goto L_001B0238;
    case 31u: goto L_001B02B4;
    case 32u: goto L_001B02F0;
    case 33u: goto L_001B0310;
    case 34u: goto L_001B0344;
    case 35u: goto L_001B0390;
    case 36u: goto L_001B03C0;
    case 37u: goto L_001B03F0;
    case 38u: goto L_001B0400;
    case 39u: goto L_001B0404;
    case 40u: goto L_001B0430;
    case 41u: goto L_001B0438;
    case 42u: goto L_001B0444;
    case 43u: goto L_001B0450;
    case 44u: goto L_001B045C;
    case 45u: goto L_001B04A0;
    case 46u: goto L_001B04AC;
    case 47u: goto L_001B04B8;
    case 48u: goto L_001B04C4;
    case 49u: goto L_001B04E8;
    case 50u: goto L_001B0530;
    case 51u: goto L_001B0554;
    case 52u: goto L_001B055C;
    case 53u: goto L_001B058C;
    case 54u: goto L_001B05A4;
    case 55u: goto L_001B05C0;
    case 56u: goto L_001B05EC;
    case 57u: goto L_001B0610;
    case 58u: goto L_001B061C;
    case 59u: goto L_001B0634;
    case 60u: goto L_001B0650;
    case 61u: goto L_001B067C;
    case 62u: goto L_001B0710;
    case 63u: goto L_001B0748;
    case 64u: goto L_001B076C;
    case 65u: goto L_001B0774;
    case 66u: goto L_001B07A8;
    case 67u: goto L_001B0824;
    case 68u: goto L_001B0840;
    case 69u: goto L_001B0880;
    case 70u: goto L_001B0894;
    case 71u: goto L_001B089C;
    case 72u: goto L_001B08C8;
    case 73u: goto L_001B08D4;
    case 74u: goto L_001B0930;
    case 75u: goto L_001B0940;
    case 76u: goto L_001B0954;
    case 77u: goto L_001B095C;
    case 78u: goto L_001B0964;
    case 79u: goto L_001B098C;
    case 80u: goto L_001B0998;
    case 81u: goto L_001B09B0;
    case 82u: goto L_001B09CC;
    case 83u: goto L_001B09D4;
    case 84u: goto L_001B0A88;
    case 85u: goto L_001B0A98;
    case 86u: goto L_001B0ABC;
    case 87u: goto L_001B0AE0;
    case 88u: goto L_001B0B00;
    case 89u: goto L_001B0C74;
    case 90u: goto L_001B0CB8;
    case 91u: goto L_001B0CE0;
    case 92u: goto L_001B0DA4;
    case 93u: goto L_001B0DC8;
    case 94u: goto L_001B0DE4;
    case 95u: goto L_001B0E20;
    case 96u: goto L_001B0E74;
    case 97u: goto L_001B0E98;
    case 98u: goto L_001B0EBC;
    case 99u: goto L_001B0EF0;
    case 100u: goto L_001B0F28;
    case 101u: goto L_001B0FD8;
    case 102u: goto L_001B0FF8;
    case 103u: goto L_001B10A4;
    case 104u: goto L_001B1260;
    case 105u: goto L_001B12E8;
    case 106u: goto L_001B1370;
    case 107u: goto L_001B1390;
    case 108u: goto L_001B13B8;
    case 109u: goto L_001B1458;
    case 110u: goto L_001B1550;
    case 111u: goto L_001B15AC;
    case 112u: goto L_001B1618;
    case 113u: goto L_001B1658;
    case 114u: goto L_001B16A4;
    case 115u: goto L_001B1730;
    case 116u: goto L_001B1790;
    case 117u: goto L_001B17E0;
    case 118u: goto L_001B1930;
    case 119u: goto L_001B1970;
    case 120u: goto L_001B1A08;
    case 121u: goto L_001B1A78;
    case 122u: goto L_001B1B48;
    case 123u: goto L_001B1B7C;
    case 124u: goto L_001B1C90;
    case 125u: goto L_001B1CD0;
    case 126u: goto L_001B1CE0;
    case 127u: goto L_001B1D30;
    case 128u: goto L_001B1D44;
    case 129u: goto L_001B1D4C;
    case 130u: goto L_001B1D54;
    case 131u: goto L_001B1D70;
    case 132u: goto L_001B1D90;
    case 133u: goto L_001B1DA0;
    case 134u: goto L_001B1DB0;
    case 135u: goto L_001B1E18;
    case 136u: goto L_001B1E4C;
    case 137u: goto L_001B1E60;
    case 138u: goto L_001B1E78;
    case 139u: goto L_001B1E84;
    case 140u: goto L_001B1E90;
    case 141u: goto L_001B1EA0;
    case 142u: goto L_001B1ED8;
    case 143u: goto L_001B1F5C;
    case 144u: goto L_001B1F68;
    case 145u: goto L_001B1FBC;
    case 146u: goto L_001B1FD4;
    case 147u: goto L_001B2024;
    case 148u: goto L_001B203C;
    case 149u: goto L_001B20B0;
    case 150u: goto L_001B20C8;
    case 151u: goto L_001B20E0;
    case 152u: goto L_001B217C;
    case 153u: goto L_001B21C8;
    case 154u: goto L_001B2210;
    case 155u: goto L_001B2230;
    case 156u: goto L_001B2248;
    case 157u: goto L_001B2280;
    case 158u: goto L_001B2290;
    case 159u: goto L_001B22DC;
    case 160u: goto L_001B2304;
    case 161u: goto L_001B2330;
    case 162u: goto L_001B2374;
    case 163u: goto L_001B2380;
    case 164u: goto L_001B2394;
    case 165u: goto L_001B23BC;
    case 166u: goto L_001B23F0;
    case 167u: goto L_001B2410;
    case 168u: goto L_001B2450;
    case 169u: goto L_001B2464;
    case 170u: goto L_001B247C;
    case 171u: goto L_001B2490;
    case 172u: goto L_001B2508;
    case 173u: goto L_001B2520;
    case 174u: goto L_001B252C;
    case 175u: goto L_001B256C;
    case 176u: goto L_001B2580;
    case 177u: goto L_001B2594;
    case 178u: goto L_001B25B0;
    case 179u: goto L_001B25F8;
    case 180u: goto L_001B2608;
    case 181u: goto L_001B2678;
    case 182u: goto L_001B26E0;
    case 183u: goto L_001B26FC;
    case 184u: goto L_001B2774;
    case 185u: goto L_001B27B0;
    case 186u: goto L_001B280C;
    case 187u: goto L_001B2834;
    case 188u: goto L_001B2880;
    case 189u: goto L_001B2890;
    case 190u: goto L_001B2898;
    case 191u: goto L_001B28AC;
    case 192u: goto L_001B2924;
    case 193u: goto L_001B2948;
    case 194u: goto L_001B2970;
    case 195u: goto L_001B29D0;
    case 196u: goto L_001B2A08;
    case 197u: goto L_001B2A20;
    case 198u: goto L_001B2A2C;
    case 199u: goto L_001B2A44;
    case 200u: goto L_001B2A84;
    case 201u: goto L_001B2A8C;
    case 202u: goto L_001B2AA0;
    case 203u: goto L_001B2B68;
    case 204u: goto L_001B2BAC;
    case 205u: goto L_001B2BE0;
    case 206u: goto L_001B2BEC;
    case 207u: goto L_001B2C00;
    case 208u: goto L_001B2C14;
    case 209u: goto L_001B2C30;
    case 210u: goto L_001B2C6C;
    case 211u: goto L_001B2C7C;
    case 212u: goto L_001B2C90;
    case 213u: goto L_001B2CD4;
    case 214u: goto L_001B2CE0;
    case 215u: goto L_001B2D58;
    case 216u: goto L_001B2D68;
    case 217u: goto L_001B2D70;
    case 218u: goto L_001B2D84;
    case 219u: goto L_001B2DD4;
    case 220u: goto L_001B2E14;
    case 221u: goto L_001B2E38;
    case 222u: goto L_001B2E50;
    case 223u: goto L_001B2EC4;
    case 224u: goto L_001B2ED8;
    case 225u: goto L_001B2EE4;
    case 226u: goto L_001B2F08;
    case 227u: goto L_001B2F30;
    case 228u: goto L_001B2F38;
    case 229u: goto L_001B2F50;
    case 230u: goto L_001B3040;
    case 231u: goto L_001B3050;
    case 232u: goto L_001B3090;
    case 233u: goto L_001B30A0;
    case 234u: goto L_001B30DC;
    case 235u: goto L_001B30F0;
    case 236u: goto L_001B30F8;
    case 237u: goto L_001B3110;
    case 238u: goto L_001B3180;
    case 239u: goto L_001B318C;
    case 240u: goto L_001B31A0;
    case 241u: goto L_001B31A8;
    case 242u: goto L_001B31B0;
    case 243u: goto L_001B31C0;
    case 244u: goto L_001B3278;
    case 245u: goto L_001B3284;
    case 246u: goto L_001B32A8;
    case 247u: goto L_001B32B0;
    case 248u: goto L_001B32C0;
    case 249u: goto L_001B3384;
    case 250u: goto L_001B33A4;
    case 251u: goto L_001B33FC;
    case 252u: goto L_001B3414;
    case 253u: goto L_001B3420;
    case 254u: goto L_001B3438;
    case 255u: goto L_001B3450;
    case 256u: goto L_001B3498;
    case 257u: goto L_001B34A8;
    case 258u: goto L_001B3518;
    case 259u: goto L_001B3580;
    case 260u: goto L_001B359C;
    case 261u: goto L_001B362C;
    case 262u: goto L_001B3668;
    case 263u: goto L_001B36C4;
    case 264u: goto L_001B36EC;
    case 265u: goto L_001B3700;
    case 266u: goto L_001B3714;
    case 267u: goto L_001B378C;
    case 268u: goto L_001B37B0;
    case 269u: goto L_001B37B8;
    case 270u: goto L_001B37E0;
    case 271u: goto L_001B383C;
    case 272u: goto L_001B3850;
    case 273u: goto L_001B3868;
    case 274u: goto L_001B38A4;
    case 275u: goto L_001B38AC;
    case 276u: goto L_001B38B4;
    case 277u: goto L_001B38D0;
    case 278u: goto L_001B399C;
    case 279u: goto L_001B39BC;
    case 280u: goto L_001B39D8;
    case 281u: goto L_001B39E8;
    case 282u: goto L_001B3A28;
    case 283u: goto L_001B3A38;
    case 284u: goto L_001B3A48;
    case 285u: goto L_001B3A60;
    case 286u: goto L_001B3A9C;
    case 287u: goto L_001B3AAC;
    case 288u: goto L_001B3AC0;
    case 289u: goto L_001B3AF0;
    case 290u: goto L_001B3AFC;
    case 291u: goto L_001B3B90;
    case 292u: goto L_001B3BA0;
    case 293u: goto L_001B3BA8;
    case 294u: goto L_001B3BBC;
    case 295u: goto L_001B3C0C;
    case 296u: goto L_001B3C4C;
    case 297u: goto L_001B3C70;
    case 298u: goto L_001B3C90;
    case 299u: goto L_001B3CF8;
    case 300u: goto L_001B3D0C;
    case 301u: goto L_001B3D20;
    case 302u: goto L_001B3D38;
    case 303u: goto L_001B3D60;
    case 304u: goto L_001B3D68;
    case 305u: goto L_001B3D70;
    case 306u: goto L_001B3D80;
    case 307u: goto L_001B3D98;
    case 308u: goto L_001B3EA4;
    case 309u: goto L_001B3F04;
    case 310u: goto L_001B3F2C;
    case 311u: goto L_001B3F44;
    case 312u: goto L_001B3F60;
    case 313u: goto L_001B3F68;
    case 314u: goto L_001B3F70;
    case 315u: goto L_001B3FE0;
    case 316u: goto L_001B3FF4;
    default: bad_entry(c, 0x001B0000u); return;
    }
L_001B0000:
    c.f[2] = ld32((c.r[4].w[0] + 712u));
    c.budget -= 1;
L_001B0004:
    c.f[1] = 0u;
    c.budget -= 1;
L_001B0008:
    c.budget -= 1;
L_001B000C:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B0030; } }
    goto L_001B0018;
L_001B0014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001B0018:
    c.f[0] = c.r[3].w[0];
    c.budget -= 1;
L_001B001C:
    c.budget -= 1;
L_001B0020:
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 2;
L_001B0028:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[0]);  if (t) { goto L_001B0058; } }
L_001B0030:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 1;
L_001B0034:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001B0038:
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001B0058; } }
L_001B004C:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001B0058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
L_001B0074:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001B0078:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_001B007C:
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B008Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0150u; return; } if (c.pc != 0x001B008Cu) [[unlikely]] return; }
L_001B008C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B0118; } }
    c.budget -= 1;
L_001B00A0:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 127ull;  if (t) { goto L_001B00D0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1236u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_001B0108; } }
    c.budget -= 1;
L_001B00D0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[19], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], ld32((c.r[18].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B00F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B00F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 6u, depth + 1u); else { c.pc = 0x0017C0F0u; return; } if (c.pc != 0x001B00F0u) [[unlikely]] return; }
L_001B00F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 1236u)));
    c.r[4].d[0] = ~(c.r[19].d[0] | 0ull);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
L_001B0100:
    st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 2;
L_001B0108:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B00A0u | kUnwind; return; } goto L_001B00A0; } }
L_001B0118:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B0130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0130u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B0130u) [[unlikely]] return; }
L_001B0130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B014C:
    c.budget -= 1;
L_001B0150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[5].w[0] << 6);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_001B0168:
    c.f[0] = ld32((c.r[3].w[0] + 2032u));
    set32(c.r[2], c.r[2].w[0] - 10528u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2036u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2040u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B019Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001B019Cu) [[unlikely]] return; }
L_001B019C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B01D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B01D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B01D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01D4u);  if (depth < kMaxDepth) unit_004D(c, 64u, depth + 1u); else { c.pc = 0x00235140u; return; } if (c.pc != 0x001B01D4u) [[unlikely]] return; }
L_001B01D4:
    c.budget -= 1;
L_001B01D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01E4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001B01E4u) [[unlikely]] return; }
L_001B01E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B0200:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0230u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001B0230u) [[unlikely]] return; }
L_001B0230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0238u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 44u, depth + 1u); else { c.pc = 0x002D5100u; return; } if (c.pc != 0x001B0238u) [[unlikely]] return; }
L_001B0238:
    set32(c.r[18], ld32((c.r[21].w[0] + 600u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 744u)));
    set32(c.r[19], ld32((c.r[20].w[0] + 264u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_001B0260; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_001B0260:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B0270; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_001B0270:
    st8((c.r[21].w[0] + 570u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 570u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001B0290; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    st8((c.r[2].w[0] + 570u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B0290:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_001B02C0; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[21].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 578u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[21].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B02B4u); st8((c.r[21].w[0] + 8327u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002B(c, 336u, depth + 1u); else { c.pc = 0x001AF120u; return; } if (c.pc != 0x001B02B4u) [[unlikely]] return; }
L_001B02B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0500; } }
    c.budget -= 1;
L_001B02C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1625u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B02F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 834u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001B02F8; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B02F0u); set32(c.r[17], 0u + 15u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001B02F0u) [[unlikely]] return; }
L_001B02F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0308; } }
L_001B02F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 832u)));
    st16((c.r[21].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[21].w[0] + 830u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_001B0308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0310u);  if (depth < kMaxDepth) unit_00AC(c, 34u, depth + 1u); else { c.pc = 0x003B0320u; return; } if (c.pc != 0x001B0310u) [[unlikely]] return; }
L_001B0310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0320; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], 0u + 15u);
    c.budget -= 2;
L_001B0320:
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_001B0500; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8693u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0344u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 87u, depth + 1u); else { c.pc = 0x001B0AE0u; return; } if (c.pc != 0x001B0344u) [[unlikely]] return; }
L_001B0344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0500; } }
    c.budget -= 1;
L_001B0350:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B0378; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 64u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 514ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B03C8; } }
L_001B0378:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B0390; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0390u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001B0390u) [[unlikely]] return; }
L_001B0390:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1625u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_001B03B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st8((c.r[21].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[21].w[0] + 1088u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1625u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 1625u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001B03B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B03C0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 87u, depth + 1u); else { c.pc = 0x001B0AE0u; return; } if (c.pc != 0x001B03C0u) [[unlikely]] return; }
L_001B03C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0500; } }
L_001B03C8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B03F8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[21].d[0];  if (t) { goto L_001B03F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001B03F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B03F0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001B03F0u) [[unlikely]] return; }
L_001B03F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0408; } }
L_001B03F8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0404u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001B0404u) [[unlikely]] return; }
    goto L_001B0404;
L_001B0400:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_001B0404:
    c.budget -= 1;
L_001B0408:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 808u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B0438; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[21].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[21].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[21].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 6;
L_001B0430:
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_001B0438:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0444u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001B0444u) [[unlikely]] return; }
L_001B0444:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0450u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001B0450u) [[unlikely]] return; }
L_001B0450:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B045Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001B045Cu) [[unlikely]] return; }
L_001B045C:
    st8((c.r[21].w[0] + 568u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[21].w[0] + 578u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 822u)));
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[3].d[0] & 3584ull;
    st16((c.r[21].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[21].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    st32((c.r[21].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B04A0u); st32((c.r[21].w[0] + 1220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B04A0u) [[unlikely]] return; }
L_001B04A0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B04ACu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001B04ACu) [[unlikely]] return; }
L_001B04AC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B04B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B04B8u) [[unlikely]] return; }
L_001B04B8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B04C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 50u, depth + 1u); else { c.pc = 0x001D9100u; return; } if (c.pc != 0x001B04C4u) [[unlikely]] return; }
L_001B04C4:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 568u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10328u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B04E8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B04E8u) [[unlikely]] return; }
L_001B04E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001B0500; } }
    st8((c.r[21].w[0] + 1625u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B0500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B0530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
L_001B0554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B055Cu); set32(c.r[16], 0u + 16u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001B055Cu) [[unlikely]] return; }
L_001B055C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B0578; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B0578:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B058Cu); st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001B058Cu) [[unlikely]] return; }
L_001B058C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B05A4u) [[unlikely]] return; }
L_001B05A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B05C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05ECu); set32(c.r[16], 0u + 16u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001B05ECu) [[unlikely]] return; }
L_001B05EC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B0608; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B0608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0610u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001B0610u) [[unlikely]] return; }
L_001B0610:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B061Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001B061Cu) [[unlikely]] return; }
L_001B061C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0634u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B0634u) [[unlikely]] return; }
L_001B0634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B0650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10320u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B067Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B067Cu) [[unlikely]] return; }
L_001B067C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B06A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 808u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B06A0; } }
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001B06A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1625u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B0700; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B06D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B06F0; } }
L_001B06D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1625u)));
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1625u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);  if (t) { goto L_001B0700; } }
L_001B06F0:
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.budget -= 4;
L_001B0700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B0710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B0740; } }
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 5;
L_001B0740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B0748u) [[unlikely]] return; }
L_001B0748:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B07B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B076Cu);  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001B076Cu) [[unlikely]] return; }
L_001B076C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001B0774u) [[unlikely]] return; }
L_001B0774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B07B0; } }
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07A8u); st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001B07A8u) [[unlikely]] return; }
L_001B07A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0828; } }
L_001B07B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[4].d[0] = c.r[3].d[0] | 60293ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_001B07F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 5120u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
L_001B07F8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B0810; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_001B0810:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B0828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0824u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x001B0824u) [[unlikely]] return; }
L_001B0824:
    c.budget -= 1;
L_001B0828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B0840:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_001B0860; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_001B0860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B0000u < 16384u) { entry = entries_002C[(t - 0x001B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B0880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001B0894u) [[unlikely]] return; }
L_001B0894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B089Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001B089Cu) [[unlikely]] return; }
L_001B089C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B08E0; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    st32((c.r[16].w[0] + 728u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08C8u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001B08C8u) [[unlikely]] return; }
L_001B08C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08D4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B08D4u) [[unlikely]] return; }
L_001B08D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0930; } }
    c.budget -= 1;
L_001B08E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001B0900; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B0900:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B0920; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_001B0920:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B0930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B0930u) [[unlikely]] return; }
L_001B0930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B0940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0954u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B0954u) [[unlikely]] return; }
L_001B0954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B095Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001B095Cu) [[unlikely]] return; }
L_001B095C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001B0964u) [[unlikely]] return; }
L_001B0964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0998; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B098Cu); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001B098Cu) [[unlikely]] return; }
L_001B098C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0998u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B0998u) [[unlikely]] return; }
L_001B0998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B09B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B09CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001B09CCu) [[unlikely]] return; }
L_001B09CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B09D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B09D4u) [[unlikely]] return; }
L_001B09D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B09E0; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_001B09E0:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B0A10; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_001B0A10:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 128u);  if (t) { goto L_001B0A40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[17].d[0] = c.r[17].d[0] | 4ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);  if (t) { goto L_001B0A50; } }
    c.budget -= 1;
L_001B0A40:
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 4;
L_001B0A50:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 128u);  if (t) { goto L_001B0A90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1072u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A88u); st32((c.r[16].w[0] + 1220u), 0u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x001B0A88u) [[unlikely]] return; }
L_001B0A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0AC0; } }
L_001B0A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001B0A98u) [[unlikely]] return; }
L_001B0A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B0AC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0ABCu); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001B0ABCu) [[unlikely]] return; }
L_001B0ABC:
    c.budget -= 1;
L_001B0AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B0AE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 832u)));
    st16((c.r[4].w[0] + 834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 830u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1216u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1220u), 0u);  c.pc = t; return; }
L_001B0B00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 8248u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[19].w[0] + 8288u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8520u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001B0B58; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 10544u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001B0B68; } }
L_001B0B58:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 8325u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 8285u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B0CB8; } }
L_001B0B68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_001B0B9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 10480u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001B0BAC; } }
L_001B0B9C:
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001B0BAC:
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 255u);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1u));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 2u));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st8((c.r[19].w[0] + 8566u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 4u));
    st8((c.r[19].w[0] + 8567u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    st8((c.r[19].w[0] + 8565u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 8564u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.budget -= 43;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B0C60; } }
    st8((c.r[19].w[0] + 767u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001B0C60:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001B0C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C74u);  if (depth < kMaxDepth) unit_000D(c, 225u, depth + 1u); else { c.pc = 0x00137300u; return; } if (c.pc != 0x001B0C74u) [[unlikely]] return; }
L_001B0C74:
    c.budget -= 1;
L_001B0C78:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001B0C98; } }
    st32((c.r[16].w[0] + 20u), c.f[20]);
    st32((c.r[17].w[0] + 20u), c.f[20]);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B0CA8; } }
    c.budget -= 1;
L_001B0C98:
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[17].w[0] + 38u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 4;
L_001B0CA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CB8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 95u, depth + 1u); else { c.pc = 0x001B0E20u; return; } if (c.pc != 0x001B0CB8u) [[unlikely]] return; }
L_001B0CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B0CE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 10144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[18].w[0] + 8248u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[17], c.r[18].w[0] + 8288u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8520u)));
    set32(c.r[4], c.r[5].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] << 5);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001B0D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B0E00; } }
    c.budget -= 1;
L_001B0D30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 37u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B0D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0E00; } }
L_001B0D48:
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 38u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B0D98; } }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 9;
L_001B0D98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0DA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 115u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001B0DA4u) [[unlikely]] return; }
L_001B0DA4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 21392u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B0DF8; } }
L_001B0DC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001B0DF8; } }
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0DE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 119u, depth + 1u); else { c.pc = 0x001B1970u; return; } if (c.pc != 0x001B0DE4u) [[unlikely]] return; }
L_001B0DE4:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0DC8u | kUnwind; return; } goto L_001B0DC8; } }
L_001B0DF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 37u)));
    c.budget -= 2;
L_001B0E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B0E20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.f[20] = c.f[12];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 64u);
    st8((c.r[4].w[0] + 8325u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] << 5);
    st8((c.r[4].w[0] + 8285u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E74u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 99u, depth + 1u); else { c.pc = 0x001B0EF0u; return; } if (c.pc != 0x001B0E74u) [[unlikely]] return; }
L_001B0E74:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B0ED0; } }
L_001B0E98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001B0ED0; } }
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0EBCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 104u, depth + 1u); else { c.pc = 0x001B1260u; return; } if (c.pc != 0x001B0EBCu) [[unlikely]] return; }
L_001B0EBC:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0E98u | kUnwind; return; } goto L_001B0E98; } }
L_001B0ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B0EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[13], c.r[4].w[0] + 8248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[12], c.r[4].w[0] + 8288u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8300u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 8288u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[14], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[14].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 14;
L_001B0F28:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0F28u | kUnwind; return; } goto L_001B0F28; } }
    c.f[0] = ld32((c.r[8].w[0] - 8u));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B0F90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B0F88; } }
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[12], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[12] = fp::sub(c.f[12], c.f[0]);  if (t) { goto L_001B0F90; } }
L_001B0F88:
    c.f[12] = c.f[1];
    c.budget -= 2;
L_001B0F90:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[3].w[0] + 5440u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[6].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u + 2u);
    c.f[3] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], 0u + 1u);
    c.r[25].d[0] = c.r[10].d[0] | 15360ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 18;
L_001B0FD8:
    set32(c.r[15], ld32((c.r[14].w[0])));
    set32(c.r[11], ld32((c.r[12].w[0])));
    set32(c.r[10], c.r[8].w[0] + 5728u);
    set32(c.r[17], c.r[11].w[0] + c.r[15].w[0]);
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { goto L_001B1000; } }
    c.budget -= 1;
L_001B0FF8:
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 2;
L_001B1000:
    set32(c.r[24], ld32((c.r[17].w[0])));
    c.f[0] = c.r[24].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[15], 0u + 1u);  if (t) { goto L_001B1020; } }
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B1020:
    c.r[15].d[0] = c.r[15].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_001B1038; } }
    c.budget -= 2;
    { const bool t = c.r[24].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0FF8u | kUnwind; return; } goto L_001B0FF8; } }
    c.budget -= 1;
L_001B1038:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001B1190; } }
    st16((c.r[10].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[24], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[24].d[0] == c.r[5].d[0];  if (t) { goto L_001B10C8; } }
    set32(c.r[15], ld32((c.r[11].w[0])));
    set32(c.r[15], c.r[24].w[0] - c.r[15].w[0]);
    c.f[0] = c.r[15].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[10].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    st32((c.r[10].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = ld32((c.r[10].w[0] + 16u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    st32((c.r[10].w[0] + 8u), c.f[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 21;
L_001B10A4:
    st32((c.r[10].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[10].w[0] + 12u));
    c.f[1] = ld32((c.r[10].w[0] + 20u));
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_001B1228; } }
    c.budget -= 1;
L_001B10C8:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_001B10E0; } }
    st8((c.r[12].w[0] + 37u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 37u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001B10E8; } }
L_001B10E0:
    st8((c.r[12].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[13].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B10E8:
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[12].w[0] + 20u), c.f[0]);
    st32((c.r[13].w[0] + 20u), c.f[0]);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_001B1160; } }
    set32(c.r[24], ld32((c.r[14].w[0])));
    set32(c.r[15], ld32((c.r[12].w[0])));
    st32((c.r[10].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    st32((c.r[10].w[0] + 20u), c.f[0]);
    st32((c.r[10].w[0] + 24u), 0u);
    c.f[1] = ld32((c.r[15].w[0] + 4u));
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    st32((c.r[10].w[0] + 8u), c.f[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    c.f[2] = ld32((c.r[10].w[0] + 12u));
    c.f[1] = ld32((c.r[10].w[0] + 20u));
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_001B1228; } }
L_001B1160:
    st32((c.r[10].w[0] + 16u), c.r[25].w[0]);
    st32((c.r[10].w[0] + 20u), 0u);
    st32((c.r[10].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    st32((c.r[10].w[0] + 8u), c.f[0]);
    st32((c.r[10].w[0]), c.r[11].w[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[10].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_001B1228; } }
L_001B1190:
    st16((c.r[10].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[15], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[5].d[0];  if (t) { goto L_001B11B0; } }
    set32(c.r[24], ld32((c.r[14].w[0])));
    set32(c.r[15], ld32((c.r[12].w[0])));
    set32(c.r[17], c.r[15].w[0] + c.r[24].w[0]);
    c.budget -= 4;
L_001B11B0:
    st32((c.r[10].w[0] + 16u), c.f[3]);
    st32((c.r[10].w[0] + 20u), 0u);
    set32(c.r[15], ld32((c.r[17].w[0])));
    set32(c.r[24], ld32((c.r[11].w[0])));
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == c.r[24].d[0];  if (t) { goto L_001B1200; } }
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[15], c.r[15].w[0] - c.r[24].w[0]);
    c.f[4] = ld32((c.r[11].w[0] + 4u));
    c.f[1] = c.r[15].w[0];
    c.f[0] = c.r[24].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[1] = fp::add(c.f[4], c.f[0]);  if (t) { goto L_001B1208; } }
L_001B1200:
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.budget -= 2;
L_001B1208:
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[10].w[0] + 24u), c.f[12]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 16u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_001B1228:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.r[10].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 28u);
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0FD8u | kUnwind; return; } goto L_001B0FD8; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B1260:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 12192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[4].w[0] + 8248u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[6], 0u - 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[4].w[0] + 8288u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.f[20] = c.f[12];  if (t) { goto L_001B16F0; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[8], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[9], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[9].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], 0u - 1u);
    c.budget -= 9;
L_001B12E8:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B12E8u | kUnwind; return; } goto L_001B12E8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] - 4u)));
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B1358; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B1350; } }
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[20], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_001B1358; } }
L_001B1350:
    c.f[20] = c.f[1];
    c.budget -= 2;
L_001B1358:
    set32(c.r[7], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
L_001B1370:
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[22], c.r[9].w[0] + 8u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[30].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 8;
L_001B1390:
    set32(c.r[5], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], c.r[3].w[0] + 5728u);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_001B13C0; } }
    c.budget -= 1;
L_001B13B8:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 2;
L_001B13C0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001B13E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B13E0:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001B1400; } }
    c.r[4].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B13B8u | kUnwind; return; } goto L_001B13B8; } }
    c.budget -= 1;
L_001B1400:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001B15D0; } }
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B14C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1458u); c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));  if (depth < kMaxDepth) unit_002C(c, 125u, depth + 1u); else { c.pc = 0x001B1CD0u; return; } if (c.pc != 0x001B1458u) [[unlikely]] return; }
L_001B1458:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5056u), c.r[3].w[0]);  if (t) { goto L_001B16C8; } }
    c.budget -= 1;
L_001B14C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B14E0; } }
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[23].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B14F0; } }
L_001B14E0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[23].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B14F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[23].w[0] + 20u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B1590; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1550u); c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));  if (depth < kMaxDepth) unit_002C(c, 125u, depth + 1u); else { c.pc = 0x001B1CD0u; return; } if (c.pc != 0x001B1550u) [[unlikely]] return; }
L_001B1550:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5056u), c.r[3].w[0]);  if (t) { goto L_001B16C8; } }
    c.budget -= 1;
L_001B1590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
L_001B15AC:
    st32((c.r[18].w[0]), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5056u), c.r[3].w[0]);  if (t) { goto L_001B16C8; } }
L_001B15D0:
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B15F8; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001B15F8:
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1618u); c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));  if (depth < kMaxDepth) unit_002C(c, 125u, depth + 1u); else { c.pc = 0x001B1CD0u; return; } if (c.pc != 0x001B1618u) [[unlikely]] return; }
L_001B1618:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B1688; } }
    goto L_001B165C;
L_001B1658:
    c.budget -= 1;
L_001B165C:
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = ld16((c.r[19].w[0] + 2u));
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001B168C; } }
L_001B1688:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 2u));
    c.budget -= 1;
L_001B168C:
    st32((c.r[18].w[0]), c.r[19].w[0]);
    st32((c.r[18].w[0] + 24u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 5056u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16A4u); set32(c.r[5], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_002C(c, 125u, depth + 1u); else { c.pc = 0x001B1CD0u; return; } if (c.pc != 0x001B16A4u) [[unlikely]] return; }
L_001B16A4:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 9;
L_001B16C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], c.r[30].w[0] + 1u);
    c.r[30].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[30].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1390u | kUnwind; return; } goto L_001B1390; } }
    c.budget -= 1;
L_001B16F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001B1730:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[9], c.r[3].w[0] - c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[12], c.r[4].w[0] + 8248u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[11], c.r[4].w[0] + 8288u);
    set32(c.r[6], c.r[3].w[0] + 5440u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[9].w[0] << 2);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[15], 0u + 2u);
    set32(c.r[24], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    c.r[13].d[0] = c.r[9].d[0] | 15360ull;
    c.budget -= 24;
L_001B1790:
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 5748u));
    c.f[2] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 5748u), c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 5744u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[9], c.r[4].w[0] + 5728u);  if (t) { goto L_001B1928; } }
    set32(c.r[10], ld32((c.r[9].w[0])));
    set32(c.r[17], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0]), c.r[17].w[0]);
    c.f[3] = ld32((c.r[9].w[0] + 20u));
    c.f[2] = ld32((c.r[9].w[0] + 16u));
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[1] = ld32((c.r[9].w[0] + 24u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
L_001B17E0:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001B1800; } }
    set32(c.r[14], ld32((c.r[10].w[0])));
    set32(c.r[14], c.r[16].w[0] - c.r[14].w[0]);
    c.f[0] = c.r[14].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B1850; } }
L_001B1800:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_001B1840; } }
    set32(c.r[14], ld32((c.r[11].w[0] + 12u)));
    c.f[1] = c.r[25].w[0];
    set32(c.r[16], ld32((c.r[11].w[0])));
    set32(c.r[14], c.r[5].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    set32(c.r[14], c.r[16].w[0] + c.r[14].w[0]);
    set32(c.r[14], c.r[7].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st8((c.r[11].w[0] + 37u), static_cast<std::uint8_t>(c.r[24].w[0]));
    set32(c.r[17], c.r[16].w[0] + c.r[14].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0] + 37u), static_cast<std::uint8_t>(c.r[24].w[0]));  if (t) { goto L_001B1850; } }
    c.budget -= 1;
L_001B1840:
    st8((c.r[11].w[0] + 37u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.f[2] = 0u;
    st8((c.r[12].w[0] + 37u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.f[1] = c.r[25].w[0];
    c.budget -= 4;
L_001B1850:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B1870; } }
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B17E0u | kUnwind; return; } goto L_001B17E0; } }
    c.budget -= 1;
L_001B1870:
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[11].w[0] + 20u), c.f[0]);
    st32((c.r[12].w[0] + 20u), c.f[0]);
    set32(c.r[14], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { const bool t = c.r[14].d[0] == c.r[3].d[0];  if (t) { goto L_001B18E8; } }
    st32((c.r[9].w[0] + 20u), c.f[2]);
    st32((c.r[9].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[9].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[9].w[0] + 8u), c.f[0]);
    st32((c.r[9].w[0]), c.r[17].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[9].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[9].w[0] + 12u));
    c.f[1] = ld32((c.r[9].w[0] + 20u));
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_001B1918; } }
    c.budget -= 1;
L_001B18E8:
    st32((c.r[9].w[0] + 16u), c.r[13].w[0]);
    st32((c.r[9].w[0] + 20u), 0u);
    st32((c.r[9].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[9].w[0] + 8u), c.f[0]);
    st32((c.r[9].w[0]), c.r[10].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[9].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 12;
L_001B1918:
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st8((c.r[11].w[0] + 38u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B1940; } }
L_001B1928:
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.budget -= 2;
L_001B1930:
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 4;
L_001B1940:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    c.r[9].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1790u | kUnwind; return; } goto L_001B1790; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B1970:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 12192u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[3], 0u - 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[4].w[0] + 8248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 22;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[20], c.r[4].w[0] + 8288u);  if (t) { goto L_001B1C58; } }
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[22], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 3);
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[16], 0u + 8u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[23], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 16;
L_001B1A08:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 5748u));
    set32(c.r[17], c.r[3].w[0] + 5728u);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 5748u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.f[0] = ld32((c.r[3].w[0] + 5744u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B1C08; } }
    set32(c.r[19], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[19].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 17;
L_001B1A78:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_001B1A98; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[6], c.r[8].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[6].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B1AE8; } }
L_001B1A98:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B1AD8; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    c.f[1] = c.r[5].w[0];
    set32(c.r[8], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[22].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 37u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001B1AE8; } }
    c.budget -= 1;
L_001B1AD8:
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = 0u;
    st8((c.r[21].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = c.r[5].w[0];
    c.budget -= 4;
L_001B1AE8:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B1B08; } }
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1A78u | kUnwind; return; } goto L_001B1A78; } }
    c.budget -= 1;
L_001B1B08:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], 0u - 1u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[21].w[0] + 20u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B1BB8; } }
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B48u); c.r[4].d[0] = ld16((c.r[18].w[0] + 2u));  if (depth < kMaxDepth) unit_002C(c, 125u, depth + 1u); else { c.pc = 0x001B1CD0u; return; } if (c.pc != 0x001B1B48u) [[unlikely]] return; }
L_001B1B48:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = c.r[3].w[0];
    c.budget -= 13;
L_001B1B7C:
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0] + 5056u), c.r[3].w[0]);  if (t) { goto L_001B1BF8; } }
    c.budget -= 1;
L_001B1BB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st32((c.r[23].w[0] + 5056u), c.r[3].w[0]);
    c.budget -= 16;
L_001B1BF8:
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B1C30; } }
L_001B1C08:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[23].w[0] + 5056u), c.r[3].w[0]);
    c.budget -= 10;
L_001B1C30:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[23], c.r[23].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], c.r[30].w[0] + 1u);
    c.r[30].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[30].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1A08u | kUnwind; return; } goto L_001B1A08; } }
    c.budget -= 1;
L_001B1C58:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001B1C90:
    set32(c.r[6], ld32((c.r[4].w[0] + 8520u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st32((c.r[4].w[0] + 8288u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 984u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 988u), c.f[0]);
    st32((c.r[4].w[0] + 1016u), c.f[0]);
    st32((c.r[4].w[0] + 8292u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8252u), c.f[0]);  c.pc = t; return; }
L_001B1CD0:
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  c.pc = t; return; }
L_001B1CE0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 10232u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4036u));
    st32((c.r[4].w[0] + 8576u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 5440u));
    c.f[2] = ld32((c.r[4].w[0] + 5444u));
    c.f[1] = ld32((c.r[4].w[0] + 5448u));
    c.f[0] = ld32((c.r[4].w[0] + 5452u));
    st32((c.r[3].w[0] + 4032u), c.f[3]);
    st32((c.r[3].w[0] + 4036u), c.f[2]);
    st32((c.r[3].w[0] + 4040u), c.f[1]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4044u), c.f[0]);  c.pc = t; return; }
L_001B1D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 126u, depth + 1u); else { c.pc = 0x001B1CE0u; return; } if (c.pc != 0x001B1D44u) [[unlikely]] return; }
L_001B1D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x001B1D4Cu) [[unlikely]] return; }
L_001B1D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x001B1D54u) [[unlikely]] return; }
L_001B1D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B1D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B1D98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8327u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B1D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D90u); set32(c.r[6], c.r[6].w[0] + 6u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B1D90u) [[unlikely]] return; }
L_001B1D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1DA0; } }
L_001B1D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DA0u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B1DA0u) [[unlikely]] return; }
L_001B1DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B1E10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B1E10; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_001B1E00; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B1E10; } }
    c.budget -= 1;
L_001B1E00:
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001B1E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B1E18u) [[unlikely]] return; }
L_001B1E18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B1E50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B1E50; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E4Cu); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B1E4Cu) [[unlikely]] return; }
L_001B1E4C:
    c.budget -= 1;
L_001B1E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B1E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 680u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E78u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 56u, depth + 1u); else { c.pc = 0x001E4A50u; return; } if (c.pc != 0x001B1E78u) [[unlikely]] return; }
L_001B1E78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B1E84u) [[unlikely]] return; }
L_001B1E84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E90u); st32((c.r[16].w[0] + 8328u), 0u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B1E90u) [[unlikely]] return; }
L_001B1E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B1EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1ED8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001B1ED8u) [[unlikely]] return; }
L_001B1ED8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[0];  if (t) { goto L_001B1F50; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 7u);
    c.f[20] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[3], 0u - 65u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1080u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B1F50; } }
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001B1F50:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 56u, depth + 1u); else { c.pc = 0x001E4A50u; return; } if (c.pc != 0x001B1F5Cu) [[unlikely]] return; }
L_001B1F5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B1F70; } }
L_001B1F68:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_001B1F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = ld32((c.r[16].w[0] + 1260u));
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 8332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 8332u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FBCu); set32(c.r[4], ld32((c.r[16].w[0] + 8328u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B1FBCu) [[unlikely]] return; }
L_001B1FBC:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8328u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FD4u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B1FD4u) [[unlikely]] return; }
L_001B1FD4:
    c.f[2] = ld32((c.r[16].w[0] + 1084u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2018; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_001B2018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2024u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B2024u) [[unlikely]] return; }
L_001B2024:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B203Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E53B0u; return; } if (c.pc != 0x001B203Cu) [[unlikely]] return; }
L_001B203C:
    c.f[2] = ld32((c.r[16].w[0] + 1080u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B20A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_001B20A0; } }
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2090; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_001B20A8; } }
L_001B2090:
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 1080u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_001B20A8; } }
L_001B20A0:
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 2;
L_001B20A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001B20B0u) [[unlikely]] return; }
L_001B20B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B20C0; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_001B20C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B20C8u) [[unlikely]] return; }
L_001B20C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B20E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2150; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 7u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 65u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
L_001B2150:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));  if (t) { goto L_001B2174; } }
L_001B2164:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], 0u - 15361u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_001B2174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B217Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 56u, depth + 1u); else { c.pc = 0x001E4A50u; return; } if (c.pc != 0x001B217Cu) [[unlikely]] return; }
L_001B217C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[3].d[0] = c.r[2].d[0] | 13107ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 1260u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21C8u); st32((c.r[16].w[0] + 8332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B21C8u) [[unlikely]] return; }
L_001B21C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1084u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B21F8; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_001B21F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E53B0u; return; } if (c.pc != 0x001B2210u) [[unlikely]] return; }
L_001B2210:
    c.f[1] = ld32((c.r[16].w[0] + 1080u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2228; } }
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.budget -= 1;
L_001B2228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001B2230u) [[unlikely]] return; }
L_001B2230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2250; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2248u); st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B2248u) [[unlikely]] return; }
L_001B2248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2278; } }
L_001B2250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 791u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2270; } }
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_001B2278; } }
    c.budget -= 1;
L_001B2270:
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001B2278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2280u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2280u) [[unlikely]] return; }
L_001B2280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B2290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 1156u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 84u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22DCu); st32((c.r[4].w[0] + 1268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B22DCu) [[unlikely]] return; }
L_001B22DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8327u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B22F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B22F8; } }
L_001B22F0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B22F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2304u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B2304u) [[unlikely]] return; }
L_001B2304:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8327u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 8327u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 732u), 0u);
    st32((c.r[17].w[0] + 728u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B2330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2368; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 7;
L_001B2368:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2374u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B2374u) [[unlikely]] return; }
L_001B2374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B2380u) [[unlikely]] return; }
L_001B2380:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2394u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B2394u) [[unlikely]] return; }
L_001B2394:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B23E8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23BCu); set32(c.r[17], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B23BCu) [[unlikely]] return; }
L_001B23BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8327u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B23D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B23D8; } }
L_001B23D0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B23D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8327u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8327u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B23F0; } }
L_001B23E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B23F0u) [[unlikely]] return; }
L_001B23F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B2410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2448; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.budget -= 8;
L_001B2448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2450u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2450u) [[unlikely]] return; }
L_001B2450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B2470; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2464u); st8((c.r[16].w[0] + 307u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 83u, depth + 1u); else { c.pc = 0x001B9280u; return; } if (c.pc != 0x001B2464u) [[unlikely]] return; }
L_001B2464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2480; } }
    c.budget -= 1;
L_001B2470:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B247Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B247Cu) [[unlikely]] return; }
L_001B247C:
    c.budget -= 1;
L_001B2480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B2490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2578; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001B2518; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B24C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2598; } }
L_001B24C8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2510; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2508u); st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B2508u) [[unlikely]] return; }
L_001B2508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2598; } }
L_001B2510:
    st8((c.r[16].w[0] + 307u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001B2518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2520u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2520u) [[unlikely]] return; }
L_001B2520:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B252Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B252Cu) [[unlikely]] return; }
L_001B252C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u - 5u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B256Cu); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B256Cu) [[unlikely]] return; }
L_001B256C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2598; } }
    c.budget -= 1;
L_001B2578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2580u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2580u) [[unlikely]] return; }
L_001B2580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B2598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2594u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B2594u) [[unlikely]] return; }
L_001B2594:
    c.budget -= 1;
L_001B2598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B25B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B25F8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001B25F8u) [[unlikely]] return; }
L_001B25F8:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2608u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B2608u) [[unlikely]] return; }
L_001B2608:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_001B2800; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001B2788; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2840; } }
    c.budget -= 1;
L_001B2638:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 7u);
    st8((c.r[19].w[0] + 744u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 32u);
    st8((c.r[19].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[19].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 307u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 680u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2678u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B2678u) [[unlikely]] return; }
L_001B2678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B26B0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_001B2694; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_001B2694:
    c.f[0] = ld32((c.r[19].w[0] + 1156u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { goto L_001B26C0; } }
    c.budget -= 1;
L_001B26B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B26C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.r[16].d[0] = c.r[18].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B26E0u) [[unlikely]] return; }
L_001B26E0:
    c.f[2] = ld32((c.r[19].w[0] + 1000u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26FCu); st32((c.r[19].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B26FCu) [[unlikely]] return; }
L_001B26FC:
    c.f[1] = ld32((c.r[19].w[0] + 1000u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1260u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B2750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9348u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9316u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 740u), c.f[0]);  if (t) { goto L_001B2760; } }
L_001B2750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 728u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 740u), 0u);
    c.budget -= 4;
L_001B2760:
    c.f[0] = ld32((c.r[19].w[0] + 728u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2774u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 107u, depth + 1u); else { c.pc = 0x001EA6B0u; return; } if (c.pc != 0x001B2774u) [[unlikely]] return; }
L_001B2774:
    c.f[20] = ld32((c.r[19].w[0] + 104u));
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001B2840; } }
L_001B2788:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = ld32((c.r[19].w[0] + 1016u));  if (t) { goto L_001B27A8; } }
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[19].w[0] + 1016u), c.f[0]);
    c.budget -= 4;
L_001B27A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 108u, depth + 1u); else { c.pc = 0x001EA6F0u; return; } if (c.pc != 0x001B27B0u) [[unlikely]] return; }
L_001B27B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 856u)));
    c.f[2] = ld32((c.r[19].w[0] + 1016u));
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.f[1] = ld32((c.r[19].w[0] + 728u));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 728u), c.f[1]);
    st32((c.r[19].w[0] + 1016u), c.f[21]);
    c.f[1] = ld32((c.r[19].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B2840; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B2840; } }
    c.budget -= 1;
L_001B2800:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B280Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B280Cu) [[unlikely]] return; }
L_001B280C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2820; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));  if (t) { goto L_001B2828; } }
L_001B2820:
    set32(c.r[17], 0u + 16384u);
    c.budget -= 2;
L_001B2828:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2834u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B2834u) [[unlikely]] return; }
L_001B2834:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[19].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 3;
L_001B2840:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 709u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2888; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2890; } }
L_001B2860:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[19].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2880u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B2880u) [[unlikely]] return; }
L_001B2880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2890; } }
L_001B2888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2890u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2890u) [[unlikely]] return; }
L_001B2890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2898u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B2898u) [[unlikely]] return; }
L_001B2898:
    c.f[1] = ld32((c.r[19].w[0] + 1004u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28ACu); st32((c.r[19].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B28ACu) [[unlikely]] return; }
L_001B28AC:
    c.f[2] = ld32((c.r[19].w[0] + 1004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B28F0; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_001B28F0:
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 1084u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2918; } }
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_001B2918:
    set32(c.r[5], ld32((c.r[19].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2924u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B2924u) [[unlikely]] return; }
L_001B2924:
    c.f[1] = ld32((c.r[19].w[0] + 1080u));
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2940; } }
    st32((c.r[19].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_001B2940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2948u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B2948u) [[unlikely]] return; }
L_001B2948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B2970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B29A8; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001B29A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2A18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B29C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2A20; } }
L_001B29C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B29D0u) [[unlikely]] return; }
L_001B29D0:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B2A20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A08u); st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B2A08u) [[unlikely]] return; }
L_001B2A08:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 307u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B2A20; } }
    c.budget -= 1;
L_001B2A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2A20u) [[unlikely]] return; }
L_001B2A20:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B2A2Cu) [[unlikely]] return; }
L_001B2A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2A48; } }
    c.f[12] = ld32((c.r[16].w[0] + 1040u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 81u, depth + 1u); else { c.pc = 0x001E5080u; return; } if (c.pc != 0x001B2A44u) [[unlikely]] return; }
L_001B2A44:
    c.budget -= 1;
L_001B2A48:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2A78; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_001B2A78:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B2A84u) [[unlikely]] return; }
L_001B2A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B2A8Cu) [[unlikely]] return; }
L_001B2A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B2AA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2BF8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 8u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u - 9u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 63999ull;
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B2B40; } }
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001B2B50; } }
L_001B2B40:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B2B50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B2B68u) [[unlikely]] return; }
L_001B2B68:
    set32(c.r[2], 0u + 4u);
    set32(c.r[18], c.r[29].w[0] + 68u);
    st8((c.r[16].w[0] + 307u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.f[0] = ld32((c.r[16].w[0] + 2352u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2356u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2360u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BACu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B2BACu) [[unlikely]] return; }
L_001B2BAC:
    c.f[0] = ld32((c.r[16].w[0] + 2544u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2548u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2552u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BE0u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B2BE0u) [[unlikely]] return; }
L_001B2BE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BECu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001B2BECu) [[unlikely]] return; }
L_001B2BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C18; } }
    c.budget -= 1;
L_001B2BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C00u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2C00u) [[unlikely]] return; }
L_001B2C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B2C18; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C14u); st8((c.r[16].w[0] + 307u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 83u, depth + 1u); else { c.pc = 0x001B9280u; return; } if (c.pc != 0x001B2C14u) [[unlikely]] return; }
L_001B2C14:
    c.budget -= 1;
L_001B2C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B2C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C6Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001B2C6Cu) [[unlikely]] return; }
L_001B2C6C:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B2C7Cu) [[unlikely]] return; }
L_001B2C7C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B2C90u) [[unlikely]] return; }
L_001B2C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 16384u);  if (t) { goto L_001B2CA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 2;
L_001B2CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2D60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2D68; } }
L_001B2CC0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B2CD4u) [[unlikely]] return; }
L_001B2CD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B2CE0u) [[unlikely]] return; }
L_001B2CE0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 7u);
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 256u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 307u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1268u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B2D38; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 2;
L_001B2D38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D58u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B2D58u) [[unlikely]] return; }
L_001B2D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2D68; } }
L_001B2D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2D68u) [[unlikely]] return; }
L_001B2D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B2D70u) [[unlikely]] return; }
L_001B2D70:
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D84u); st32((c.r[17].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B2D84u) [[unlikely]] return; }
L_001B2D84:
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2DC8; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_001B2DC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B2DD4u) [[unlikely]] return; }
L_001B2DD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 1268u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1084u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2E08; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 2;
L_001B2E08:
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B2E14u) [[unlikely]] return; }
L_001B2E14:
    c.f[1] = ld32((c.r[17].w[0] + 1080u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2E30; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_001B2E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B2E38u) [[unlikely]] return; }
L_001B2E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B2E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2ED0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], 0u + 2u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], 0u + 7u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[16].w[0] + 1264u), 0u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1260u), 0u);
    set32(c.r[3], 0u - 5u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[7], 0u + 20u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2EC4u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B2EC4u) [[unlikely]] return; }
L_001B2EC4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 307u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B2ED8; } }
L_001B2ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2ED8u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B2ED8u) [[unlikely]] return; }
L_001B2ED8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2EE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B2EE4u) [[unlikely]] return; }
L_001B2EE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2F08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2F08; } }
    c.f[12] = ld32((c.r[16].w[0] + 1040u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 81u, depth + 1u); else { c.pc = 0x001E5080u; return; } if (c.pc != 0x001B2F08u) [[unlikely]] return; }
L_001B2F08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 57672ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B2F30u) [[unlikely]] return; }
L_001B2F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B2F38u) [[unlikely]] return; }
L_001B2F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B2F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B3058; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_001B2F90; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_001B2F90:
    c.r[8].d[0] = c.r[2].d[0] & 255ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9472u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], 0u + 16u);
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9312u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 276u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 740u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3040u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 107u, depth + 1u); else { c.pc = 0x001EA6B0u; return; } if (c.pc != 0x001B3040u) [[unlikely]] return; }
L_001B3040:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3050u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001B3050u) [[unlikely]] return; }
L_001B3050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B30E8; } }
L_001B3058:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.f[20] = ld32((c.r[16].w[0] + 8292u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = ld32((c.r[16].w[0] + 1016u));  if (t) { goto L_001B3088; } }
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 8292u), c.f[0]);
    c.budget -= 7;
L_001B3088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 108u, depth + 1u); else { c.pc = 0x001EA6F0u; return; } if (c.pc != 0x001B3090u) [[unlikely]] return; }
L_001B3090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B30A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30A0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B30A0u) [[unlikely]] return; }
L_001B30A0:
    st32((c.r[16].w[0] + 8292u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B30D0; } }
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 728u), c.f[0]);  if (t) { goto L_001B30E0; } }
    c.budget -= 1;
L_001B30D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B30DCu) [[unlikely]] return; }
L_001B30DC:
    c.budget -= 1;
L_001B30E0:
    st32((c.r[16].w[0] + 1016u), c.f[21]);
    c.budget -= 2;
L_001B30E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B30F0u) [[unlikely]] return; }
L_001B30F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B30F8u) [[unlikely]] return; }
L_001B30F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B3110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 746u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B3168; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 276u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_001B3168:
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3180u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B3180u) [[unlikely]] return; }
L_001B3180:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B318Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B318Cu) [[unlikely]] return; }
L_001B318C:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B31A0u) [[unlikely]] return; }
L_001B31A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B31A8u) [[unlikely]] return; }
L_001B31A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B31B0u) [[unlikely]] return; }
L_001B31B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B31C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B3248; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 18u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1264u), 0u);
    c.f[3] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1260u), 0u);
    set32(c.r[3], c.r[3].w[0] - 9512u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 728u), c.f[2]);  if (t) { goto L_001B3278; } }
    c.budget -= 1;
L_001B3248:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B3278; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3278u); st32((c.r[16].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 83u, depth + 1u); else { c.pc = 0x001B9280u; return; } if (c.pc != 0x001B3278u) [[unlikely]] return; }
L_001B3278:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B3284u) [[unlikely]] return; }
L_001B3284:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B32A0; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 1;
L_001B32A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B32A8u) [[unlikely]] return; }
L_001B32A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B32B0u) [[unlikely]] return; }
L_001B32B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B32C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B32E8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B32E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B33F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B3388; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B3310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3418; } }
L_001B3310:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B3328; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_001B3328:
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u - 389u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9552u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3384u); st32((c.r[16].w[0] + 728u), c.f[0]);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B3384u) [[unlikely]] return; }
L_001B3384:
    c.budget -= 1;
L_001B3388:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B33A8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B33A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B33A4u) [[unlikely]] return; }
L_001B33A4:
    c.budget -= 1;
L_001B33A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B3418; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B33F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B33FCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B33FCu) [[unlikely]] return; }
L_001B33FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B3418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3414u);  if (depth < kMaxDepth) unit_0039(c, 136u, depth + 1u); else { c.pc = 0x001E5C20u; return; } if (c.pc != 0x001B3414u) [[unlikely]] return; }
L_001B3414:
    c.budget -= 1;
L_001B3418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B3420u) [[unlikely]] return; }
L_001B3420:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B3438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3438u);  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B3438u) [[unlikely]] return; }
L_001B3438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B3450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3498u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001B3498u) [[unlikely]] return; }
L_001B3498:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B34A8u) [[unlikely]] return; }
L_001B34A8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_001B36B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001B3640; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B34D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B36F8; } }
    c.budget -= 1;
L_001B34D8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 7u);
    st8((c.r[19].w[0] + 744u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 32u);
    st8((c.r[19].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[19].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 285u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 680u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3518u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B3518u) [[unlikely]] return; }
L_001B3518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3550; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_001B3534; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_001B3534:
    c.f[0] = ld32((c.r[19].w[0] + 1156u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { goto L_001B3560; } }
    c.budget -= 1;
L_001B3550:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B3560:
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.r[16].d[0] = c.r[18].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3580u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B3580u) [[unlikely]] return; }
L_001B3580:
    c.f[2] = ld32((c.r[19].w[0] + 1000u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B359Cu); st32((c.r[19].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B359Cu) [[unlikely]] return; }
L_001B359C:
    c.f[1] = ld32((c.r[19].w[0] + 1000u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1260u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B3608; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9474u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9316u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 740u), c.f[0]);  if (t) { goto L_001B3618; } }
    c.budget -= 1;
L_001B3608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 728u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 740u), 0u);
    c.budget -= 4;
L_001B3618:
    c.f[0] = ld32((c.r[19].w[0] + 728u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B362Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 107u, depth + 1u); else { c.pc = 0x001EA6B0u; return; } if (c.pc != 0x001B362Cu) [[unlikely]] return; }
L_001B362C:
    c.f[20] = ld32((c.r[19].w[0] + 104u));
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001B36F8; } }
L_001B3640:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = ld32((c.r[19].w[0] + 1016u));  if (t) { goto L_001B3660; } }
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[19].w[0] + 1016u), c.f[0]);
    c.budget -= 4;
L_001B3660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3668u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 108u, depth + 1u); else { c.pc = 0x001EA6F0u; return; } if (c.pc != 0x001B3668u) [[unlikely]] return; }
L_001B3668:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 856u)));
    c.f[2] = ld32((c.r[19].w[0] + 1016u));
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.f[1] = ld32((c.r[19].w[0] + 728u));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 728u), c.f[1]);
    st32((c.r[19].w[0] + 1016u), c.f[21]);
    c.f[1] = ld32((c.r[19].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B36F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B36F8; } }
    c.budget -= 1;
L_001B36B8:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B36C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B36C4u) [[unlikely]] return; }
L_001B36C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B36D8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));  if (t) { goto L_001B36E0; } }
L_001B36D8:
    set32(c.r[17], 0u + 16384u);
    c.budget -= 2;
L_001B36E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B36ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B36ECu) [[unlikely]] return; }
L_001B36EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[19].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 3;
L_001B36F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3700u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B3700u) [[unlikely]] return; }
L_001B3700:
    c.f[1] = ld32((c.r[19].w[0] + 1004u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3714u); st32((c.r[19].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B3714u) [[unlikely]] return; }
L_001B3714:
    c.f[2] = ld32((c.r[19].w[0] + 1004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B3758; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_001B3758:
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 1084u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B3780; } }
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_001B3780:
    set32(c.r[5], ld32((c.r[19].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B378Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B378Cu) [[unlikely]] return; }
L_001B378C:
    c.f[1] = ld32((c.r[19].w[0] + 1080u));
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B37A8; } }
    st32((c.r[19].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_001B37A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001B37B0u) [[unlikely]] return; }
L_001B37B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B37B8u) [[unlikely]] return; }
L_001B37B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B37E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B3828; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], 0u - 65u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_001B3828:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001B3868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B383Cu);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001B383Cu) [[unlikely]] return; }
L_001B383C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3868; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3850u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B3850u) [[unlikely]] return; }
L_001B3850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3868; } }
    c.f[12] = ld32((c.r[16].w[0] + 1040u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 81u, depth + 1u); else { c.pc = 0x001E5080u; return; } if (c.pc != 0x001B3868u) [[unlikely]] return; }
L_001B3868:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3898; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_001B3898:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B38A4u) [[unlikely]] return; }
L_001B38A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B38ACu) [[unlikely]] return; }
L_001B38AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B38B4u) [[unlikely]] return; }
L_001B38B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B38D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B38F8; } }
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B38F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001B3A30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001B39E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B3920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3A48; } }
L_001B3920:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 8u);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], 0u - 73u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[2], 0u + 32u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001B39A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B399Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B399Cu) [[unlikely]] return; }
L_001B399C:
    c.budget -= 1;
L_001B39A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B39C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39BCu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001B39BCu) [[unlikely]] return; }
L_001B39BC:
    c.budget -= 1;
L_001B39C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B39D8u) [[unlikely]] return; }
L_001B39D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3A48; } }
L_001B39E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B39E8u) [[unlikely]] return; }
L_001B39E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3A48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9551u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B3A28u) [[unlikely]] return; }
L_001B3A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3A48; } }
L_001B3A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B3A38u) [[unlikely]] return; }
L_001B3A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B3A48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 83u, depth + 1u); else { c.pc = 0x001B9280u; return; } if (c.pc != 0x001B3A48u) [[unlikely]] return; }
L_001B3A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B3A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A9Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001B3A9Cu) [[unlikely]] return; }
L_001B3A9C:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3AACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B3AACu) [[unlikely]] return; }
L_001B3AAC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3AC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B3AC0u) [[unlikely]] return; }
L_001B3AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 16384u);  if (t) { goto L_001B3AD0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 2;
L_001B3AD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3B98; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3AF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B3AF0u) [[unlikely]] return; }
L_001B3AF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3AFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B3AFCu) [[unlikely]] return; }
L_001B3AFC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 65u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 256u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1268u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B3B60; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 2;
L_001B3B60:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9552u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B90u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B3B90u) [[unlikely]] return; }
L_001B3B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3BA0; } }
L_001B3B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B3BA0u) [[unlikely]] return; }
L_001B3BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B3BA8u) [[unlikely]] return; }
L_001B3BA8:
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BBCu); st32((c.r[17].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B3BBCu) [[unlikely]] return; }
L_001B3BBC:
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B3C00; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_001B3C00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B3C0Cu) [[unlikely]] return; }
L_001B3C0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 1268u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1084u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B3C40; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 2;
L_001B3C40:
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B3C4Cu) [[unlikely]] return; }
L_001B3C4C:
    c.f[1] = ld32((c.r[17].w[0] + 1080u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B3C68; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_001B3C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001B3C70u) [[unlikely]] return; }
L_001B3C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B3C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B3CF8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 2u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], 0u - 453u);
    st32((c.r[16].w[0] + 1264u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 1260u), 0u);
    set32(c.r[6], 0u + 3u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3CF8u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001B3CF8u) [[unlikely]] return; }
L_001B3CF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001B3D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D0Cu);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001B3D0Cu) [[unlikely]] return; }
L_001B3D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3D38; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B3D20u) [[unlikely]] return; }
L_001B3D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3D38; } }
    c.f[12] = ld32((c.r[16].w[0] + 1040u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 81u, depth + 1u); else { c.pc = 0x001E5080u; return; } if (c.pc != 0x001B3D38u) [[unlikely]] return; }
L_001B3D38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 57672ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B3D60u) [[unlikely]] return; }
L_001B3D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B3D68u) [[unlikely]] return; }
L_001B3D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B3D70u) [[unlikely]] return; }
L_001B3D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B3D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D98u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B3D98u) [[unlikely]] return; }
L_001B3D98:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3E08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B3DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3E98; } }
L_001B3DC0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 1052u));
    st32((c.r[16].w[0] + 728u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 18;
L_001B3E08:
    c.f[1] = ld32((c.r[16].w[0] + 1044u));
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 48u), c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 1048u));
    c.f[2] = ld32((c.r[16].w[0] + 1044u));
    c.f[1] = ld32((c.r[16].w[0] + 1052u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B3E50; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 4;
L_001B3E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B3E98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 9;
L_001B3E98:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 56u, depth + 1u); else { c.pc = 0x001E4A50u; return; } if (c.pc != 0x001B3EA4u) [[unlikely]] return; }
L_001B3EA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3EB8; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_001B3EB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = ld32((c.r[16].w[0] + 1260u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    c.f[3] = ld32((c.r[16].w[0] + 8332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F04u); st32((c.r[16].w[0] + 8332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B3F04u) [[unlikely]] return; }
L_001B3F04:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8328u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B3F2Cu) [[unlikely]] return; }
L_001B3F2C:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8328u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F44u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B3F44u) [[unlikely]] return; }
L_001B3F44:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[12] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E53B0u; return; } if (c.pc != 0x001B3F60u) [[unlikely]] return; }
L_001B3F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001B3F68u) [[unlikely]] return; }
L_001B3F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B3F70u) [[unlikely]] return; }
L_001B3F70:
    c.f[1] = ld32((c.r[16].w[0] + 1044u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B3F98; } }
    st32((c.r[16].w[0] + 48u), c.f[1]);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), 0u);  if (t) { goto L_001B3FC8; } }
    c.budget -= 1;
L_001B3F98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B3FC8; } }
    st32((c.r[16].w[0] + 48u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 1048u));
    c.f[1] = ld32((c.r[16].w[0] + 1044u));
    c.f[0] = ld32((c.r[16].w[0] + 1052u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 8;
L_001B3FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B3FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3FF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B3FF4u) [[unlikely]] return; }
L_001B3FF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4000u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B4000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_002D(c, 1u, depth);
}

}
