#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BC[4096] = {
    1, 0, 2, 3, 4, 0, 5, 0, 0, 6, 7, 0, 0, 8, 9, 10, 11, 12, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 16, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 20, 0, 21, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142,
    0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0,
    0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F0000;
    case 2u: goto L_003F0008;
    case 3u: goto L_003F000C;
    case 4u: goto L_003F0010;
    case 5u: goto L_003F0018;
    case 6u: goto L_003F0024;
    case 7u: goto L_003F0028;
    case 8u: goto L_003F0034;
    case 9u: goto L_003F0038;
    case 10u: goto L_003F003C;
    case 11u: goto L_003F0040;
    case 12u: goto L_003F0044;
    case 13u: goto L_003F0048;
    case 14u: goto L_003F0054;
    case 15u: goto L_003F006C;
    case 16u: goto L_003F0070;
    case 17u: goto L_003F0074;
    case 18u: goto L_003F00A0;
    case 19u: goto L_003F00AC;
    case 20u: goto L_003F00B0;
    case 21u: goto L_003F00B8;
    case 22u: goto L_003F00C8;
    case 23u: goto L_003F00CC;
    case 24u: goto L_003F0114;
    case 25u: goto L_003F0144;
    case 26u: goto L_003F0150;
    case 27u: goto L_003F0158;
    case 28u: goto L_003F01C8;
    case 29u: goto L_003F01E0;
    case 30u: goto L_003F01EC;
    case 31u: goto L_003F01F8;
    case 32u: goto L_003F0200;
    case 33u: goto L_003F0224;
    case 34u: goto L_003F0228;
    case 35u: goto L_003F0250;
    case 36u: goto L_003F02BC;
    case 37u: goto L_003F02E8;
    case 38u: goto L_003F0304;
    case 39u: goto L_003F0320;
    case 40u: goto L_003F0338;
    case 41u: goto L_003F0348;
    case 42u: goto L_003F0354;
    case 43u: goto L_003F035C;
    case 44u: goto L_003F036C;
    case 45u: goto L_003F03F0;
    case 46u: goto L_003F0444;
    case 47u: goto L_003F0454;
    case 48u: goto L_003F0460;
    case 49u: goto L_003F0468;
    case 50u: goto L_003F047C;
    case 51u: goto L_003F0488;
    case 52u: goto L_003F04F0;
    case 53u: goto L_003F05D8;
    case 54u: goto L_003F0650;
    case 55u: goto L_003F065C;
    case 56u: goto L_003F0668;
    case 57u: goto L_003F06C0;
    case 58u: goto L_003F06D8;
    case 59u: goto L_003F0748;
    case 60u: goto L_003F07B4;
    case 61u: goto L_003F07BC;
    case 62u: goto L_003F07CC;
    case 63u: goto L_003F07D8;
    case 64u: goto L_003F07E0;
    case 65u: goto L_003F07F8;
    case 66u: goto L_003F0804;
    case 67u: goto L_003F08A0;
    case 68u: goto L_003F08B0;
    case 69u: goto L_003F08BC;
    case 70u: goto L_003F08C4;
    case 71u: goto L_003F08D0;
    case 72u: goto L_003F08DC;
    case 73u: goto L_003F0A48;
    case 74u: goto L_003F0A54;
    case 75u: goto L_003F0A70;
    case 76u: goto L_003F0AA0;
    case 77u: goto L_003F0B28;
    case 78u: goto L_003F0B94;
    case 79u: goto L_003F0B9C;
    case 80u: goto L_003F0BAC;
    case 81u: goto L_003F0BB8;
    case 82u: goto L_003F0BC0;
    case 83u: goto L_003F0BD8;
    case 84u: goto L_003F0BE4;
    case 85u: goto L_003F0C80;
    case 86u: goto L_003F0C90;
    case 87u: goto L_003F0C9C;
    case 88u: goto L_003F0CA4;
    case 89u: goto L_003F0CB0;
    case 90u: goto L_003F0E28;
    case 91u: goto L_003F0E34;
    case 92u: goto L_003F0E80;
    case 93u: goto L_003F0EA8;
    case 94u: goto L_003F0EB4;
    case 95u: goto L_003F0EC0;
    case 96u: goto L_003F0ECC;
    case 97u: goto L_003F0FB0;
    case 98u: goto L_003F0FF8;
    case 99u: goto L_003F1020;
    case 100u: goto L_003F1038;
    case 101u: goto L_003F1068;
    case 102u: goto L_003F1080;
    case 103u: goto L_003F10F0;
    case 104u: goto L_003F1104;
    case 105u: goto L_003F1150;
    case 106u: goto L_003F11A0;
    case 107u: goto L_003F11F0;
    case 108u: goto L_003F1230;
    case 109u: goto L_003F124C;
    case 110u: goto L_003F1288;
    case 111u: goto L_003F1294;
    case 112u: goto L_003F12C0;
    case 113u: goto L_003F12E8;
    case 114u: goto L_003F1344;
    case 115u: goto L_003F139C;
    case 116u: goto L_003F13F4;
    case 117u: goto L_003F144C;
    case 118u: goto L_003F14A4;
    case 119u: goto L_003F14FC;
    case 120u: goto L_003F1554;
    case 121u: goto L_003F15B4;
    case 122u: goto L_003F1614;
    case 123u: goto L_003F1674;
    case 124u: goto L_003F16B0;
    case 125u: goto L_003F16D4;
    case 126u: goto L_003F1734;
    case 127u: goto L_003F1794;
    case 128u: goto L_003F17F4;
    case 129u: goto L_003F1854;
    case 130u: goto L_003F18B4;
    case 131u: goto L_003F1914;
    case 132u: goto L_003F1978;
    case 133u: goto L_003F19E0;
    case 134u: goto L_003F1A04;
    case 135u: goto L_003F1AC0;
    case 136u: goto L_003F1AE0;
    case 137u: goto L_003F1B4C;
    case 138u: goto L_003F1B64;
    case 139u: goto L_003F1BD8;
    case 140u: goto L_003F1BE8;
    case 141u: goto L_003F1BF4;
    case 142u: goto L_003F1BFC;
    case 143u: goto L_003F1C14;
    case 144u: goto L_003F1C20;
    case 145u: goto L_003F1CC0;
    case 146u: goto L_003F1CD0;
    case 147u: goto L_003F1CDC;
    case 148u: goto L_003F1CE4;
    case 149u: goto L_003F1CF0;
    case 150u: goto L_003F1E64;
    case 151u: goto L_003F1E70;
    case 152u: goto L_003F1E7C;
    case 153u: goto L_003F1EC0;
    case 154u: goto L_003F1F44;
    case 155u: goto L_003F1F8C;
    case 156u: goto L_003F1FB8;
    case 157u: goto L_003F1FC8;
    case 158u: goto L_003F1FD4;
    case 159u: goto L_003F1FDC;
    case 160u: goto L_003F1FF4;
    case 161u: goto L_003F2000;
    case 162u: goto L_003F20A0;
    case 163u: goto L_003F20B0;
    case 164u: goto L_003F20BC;
    case 165u: goto L_003F20C4;
    case 166u: goto L_003F20D0;
    case 167u: goto L_003F2240;
    case 168u: goto L_003F224C;
    case 169u: goto L_003F2258;
    case 170u: goto L_003F22A0;
    case 171u: goto L_003F2328;
    case 172u: goto L_003F2398;
    case 173u: goto L_003F23A8;
    case 174u: goto L_003F23B4;
    case 175u: goto L_003F23BC;
    case 176u: goto L_003F23D4;
    case 177u: goto L_003F23E0;
    case 178u: goto L_003F2480;
    case 179u: goto L_003F2490;
    case 180u: goto L_003F249C;
    case 181u: goto L_003F24A4;
    case 182u: goto L_003F24B0;
    case 183u: goto L_003F2624;
    case 184u: goto L_003F2630;
    case 185u: goto L_003F2670;
    case 186u: goto L_003F26F8;
    case 187u: goto L_003F2768;
    case 188u: goto L_003F2778;
    case 189u: goto L_003F2784;
    case 190u: goto L_003F278C;
    case 191u: goto L_003F279C;
    case 192u: goto L_003F2840;
    case 193u: goto L_003F2850;
    case 194u: goto L_003F285C;
    case 195u: goto L_003F2864;
    case 196u: goto L_003F2878;
    case 197u: goto L_003F2888;
    case 198u: goto L_003F2A04;
    case 199u: goto L_003F2A10;
    case 200u: goto L_003F2A50;
    case 201u: goto L_003F2AD8;
    case 202u: goto L_003F2B48;
    case 203u: goto L_003F2B58;
    case 204u: goto L_003F2B64;
    case 205u: goto L_003F2B6C;
    case 206u: goto L_003F2B84;
    case 207u: goto L_003F2B94;
    case 208u: goto L_003F2C30;
    case 209u: goto L_003F2C40;
    case 210u: goto L_003F2C4C;
    case 211u: goto L_003F2C54;
    case 212u: goto L_003F2C60;
    case 213u: goto L_003F2DE4;
    case 214u: goto L_003F2DF0;
    case 215u: goto L_003F2E30;
    case 216u: goto L_003F2EB8;
    case 217u: goto L_003F2F28;
    case 218u: goto L_003F2F38;
    case 219u: goto L_003F2F44;
    case 220u: goto L_003F2F4C;
    case 221u: goto L_003F2F64;
    case 222u: goto L_003F2F74;
    case 223u: goto L_003F3010;
    case 224u: goto L_003F3020;
    case 225u: goto L_003F302C;
    case 226u: goto L_003F3034;
    case 227u: goto L_003F3040;
    case 228u: goto L_003F31C4;
    case 229u: goto L_003F31D0;
    case 230u: goto L_003F3210;
    case 231u: goto L_003F3298;
    case 232u: goto L_003F3308;
    case 233u: goto L_003F3318;
    case 234u: goto L_003F3324;
    case 235u: goto L_003F332C;
    case 236u: goto L_003F3344;
    case 237u: goto L_003F3350;
    case 238u: goto L_003F33F0;
    case 239u: goto L_003F3400;
    case 240u: goto L_003F340C;
    case 241u: goto L_003F3414;
    case 242u: goto L_003F3420;
    case 243u: goto L_003F3594;
    case 244u: goto L_003F35A0;
    case 245u: goto L_003F35E0;
    case 246u: goto L_003F3688;
    case 247u: goto L_003F3708;
    case 248u: goto L_003F3718;
    case 249u: goto L_003F3724;
    case 250u: goto L_003F372C;
    case 251u: goto L_003F373C;
    case 252u: goto L_003F37FC;
    case 253u: goto L_003F380C;
    case 254u: goto L_003F3818;
    case 255u: goto L_003F3820;
    case 256u: goto L_003F3834;
    case 257u: goto L_003F3844;
    case 258u: goto L_003F39F4;
    case 259u: goto L_003F3A80;
    case 260u: goto L_003F3B28;
    case 261u: goto L_003F3BA8;
    case 262u: goto L_003F3BB8;
    case 263u: goto L_003F3BC4;
    case 264u: goto L_003F3BCC;
    case 265u: goto L_003F3BDC;
    case 266u: goto L_003F3CA4;
    case 267u: goto L_003F3CB4;
    case 268u: goto L_003F3CC0;
    case 269u: goto L_003F3CC8;
    case 270u: goto L_003F3CDC;
    case 271u: goto L_003F3CE8;
    case 272u: goto L_003F3E00;
    case 273u: goto L_003F3E94;
    case 274u: goto L_003F3F30;
    case 275u: goto L_003F3FD0;
    default: bad_entry(c, 0x003F0000u); return;
    }
L_003F0000:
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F000Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F000Cu) [[unlikely]] return; }
    goto L_003F000C;
L_003F0008:
    c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.budget -= 1;
L_003F000C:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 1;
L_003F0010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0018u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F0018u) [[unlikely]] return; }
L_003F0018:
    set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[3].w[0] + 5076u);
    c.budget -= 3;
L_003F0024:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_003F0028:
    set32(c.r[3], ld32((c.r[3].w[0] + 5076u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_003F0034:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 48u));
    c.budget -= 1;
L_003F0038:
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 1;
L_003F003C:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 1;
L_003F0040:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003F0044:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 48u);  if (t) { goto L_003F0058; } }
    goto L_003F004C;
L_003F0048:
    set32(c.r[5], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_003F004C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_003F0078; } }
L_003F0054:
    c.budget -= 1;
L_003F0058:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 5462ll ? 1ull : 0ull;  if (t) { goto L_003F0078; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 5461u);  if (t) { goto L_003F0078; } }
    goto L_003F0070;
L_003F006C:
    set32(c.r[3], 0u + 5461u);
    c.budget -= 1;
L_003F0070:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003F0074:
    c.budget -= 1;
L_003F0078:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_003F00A8; } }
    set32(c.r[4], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), c.r[4].w[0]);  if (t) { goto L_003F0228; } }
    goto L_003F00A4;
L_003F00A0:
    st32((c.r[3].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 1;
L_003F00A4:
    c.budget -= 1;
L_003F00A8:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003F00AC:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_003F00B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), c.r[4].w[0]);  if (t) { goto L_003F0228; } }
L_003F00B8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F0228; } }
    c.budget -= 1;
L_003F00C8:
    c.r[5].d[0] = c.r[21].d[0] << 56;
    c.budget -= 1;
L_003F00CC:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[11], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[11].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[9], c.r[4].w[0] + 5060u);
    set32(c.r[4], c.r[10].w[0] - c.r[5].w[0]);
    c.r[8].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F0118; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F0130; } }
    goto L_003F0118;
L_003F0114:
    c.budget -= 1;
L_003F0118:
    set32(c.r[4], c.r[18].w[0] << 2);
    st32((c.r[9].w[0]), c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 72u), 0u);  if (t) { goto L_003F0148; } }
L_003F0130:
    set32(c.r[4], ld32((c.r[6].w[0] + 72u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    st32((c.r[9].w[0]), c.r[4].w[0]);
    c.budget -= 5;
L_003F0144:
    c.budget -= 1;
L_003F0148:
    set32(c.r[4], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[11].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_003F0150:
    set32(c.r[5], ld32((c.r[4].w[0] + 5076u)));
    set32(c.r[9], ld32((c.r[6].w[0] + 48u)));
    c.budget -= 2;
L_003F0158:
    set32(c.r[8], c.r[4].w[0] + 5076u);
    set32(c.r[4], c.r[9].w[0] - c.r[5].w[0]);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 65504ull;  if (t) { goto L_003F0180; } }
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F0198; } }
    c.budget -= 1;
L_003F0180:
    set32(c.r[4], c.r[18].w[0] << 2);
    st32((c.r[8].w[0]), c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), 0u);  if (t) { goto L_003F01B0; } }
L_003F0198:
    set32(c.r[4], ld32((c.r[6].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F01B0:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0228; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F0228; } }
L_003F01C8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 30u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F01E0u); st8((c.r[6].w[0] + 138u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F01E0u) [[unlikely]] return; }
L_003F01E0:
    set32(c.r[5], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F01ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F01ECu) [[unlikely]] return; }
L_003F01EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F01F8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F01F8u) [[unlikely]] return; }
L_003F01F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0228; } }
L_003F0200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 138u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[6].w[0] + 138u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], c.r[6].w[0] + 138u);  if (t) { goto L_003F0228; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003F0224:
    c.budget -= 1;
L_003F0228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003F0250:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[6], c.r[18].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 132u)));
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[19], c.r[6].w[0] + 132u);  if (t) { goto L_003F0670; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F0638; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003F0538; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F02C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0698; } }
    goto L_003F02C0;
L_003F02BC:
    c.budget -= 1;
L_003F02C0:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] + 120u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 120u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0528; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
L_003F02E8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 128u);
    c.r[7].d[0] = 0ull | 49152ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0304u); c.r[10].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F0304u) [[unlikely]] return; }
L_003F0304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 32u);  if (t) { goto L_003F0698; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0320u); st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003F0320u) [[unlikely]] return; }
L_003F0320:
    c.r[20].d[0] = c.r[21].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    set32(c.r[2], c.r[20].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0338u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F0338u) [[unlikely]] return; }
L_003F0338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0348u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F0348u) [[unlikely]] return; }
L_003F0348:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0354u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F0354u) [[unlikely]] return; }
L_003F0354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F035Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F035Cu) [[unlikely]] return; }
L_003F035C:
    set32(c.r[19], c.r[29].w[0] + 120u);
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F036Cu); c.f[12] = ld32((c.r[29].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F036Cu) [[unlikely]] return; }
L_003F036C:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[18], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[21], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 24u);
    set32(c.r[2], c.r[21].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[5], c.r[2].w[0] + 5060u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5060u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F03D0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F03D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003F03F0; } }
L_003F03D0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003F03F0; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003F03F0; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F03F0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003F0420; } }
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003F0430; } }
    c.budget -= 1;
L_003F0420:
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 4;
L_003F0430:
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0444u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F0444u) [[unlikely]] return; }
L_003F0444:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0454u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F0454u) [[unlikely]] return; }
L_003F0454:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0460u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F0460u) [[unlikely]] return; }
L_003F0460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0468u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F0468u) [[unlikely]] return; }
L_003F0468:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F047Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F047Cu) [[unlikely]] return; }
L_003F047C:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0488u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F0488u) [[unlikely]] return; }
L_003F0488:
    set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[3].w[0] + 5076u);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 5076u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 48u));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 48u);  if (t) { goto L_003F04C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_003F04E8; } }
    c.budget -= 1;
L_003F04C8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 5462ll ? 1ull : 0ull;  if (t) { goto L_003F04E8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 5461u);  if (t) { goto L_003F04E8; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003F04E8:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_003F04F0:
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_003F0518; } }
    set32(c.r[4], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), c.r[4].w[0]);  if (t) { goto L_003F0698; } }
    c.budget -= 1;
L_003F0518:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), c.r[4].w[0]);  if (t) { goto L_003F0698; } }
L_003F0528:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F0698; } }
    c.budget -= 1;
L_003F0538:
    c.r[5].d[0] = c.r[21].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[11], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[11].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[9], c.r[4].w[0] + 5060u);
    set32(c.r[4], c.r[10].w[0] - c.r[5].w[0]);
    c.r[8].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F0588; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F05A0; } }
L_003F0588:
    set32(c.r[4], c.r[18].w[0] << 2);
    st32((c.r[9].w[0]), c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 72u), 0u);  if (t) { goto L_003F05B8; } }
L_003F05A0:
    set32(c.r[4], ld32((c.r[6].w[0] + 72u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    st32((c.r[9].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F05B8:
    set32(c.r[4], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[11].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5076u)));
    set32(c.r[9], ld32((c.r[6].w[0] + 48u)));
    set32(c.r[8], c.r[4].w[0] + 5076u);
    set32(c.r[4], c.r[9].w[0] - c.r[5].w[0]);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
L_003F05D8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 65504ull;  if (t) { goto L_003F05F0; } }
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F0608; } }
    c.budget -= 1;
L_003F05F0:
    set32(c.r[4], c.r[18].w[0] << 2);
    st32((c.r[8].w[0]), c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), 0u);  if (t) { goto L_003F0620; } }
L_003F0608:
    set32(c.r[4], ld32((c.r[6].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F0620:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0698; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F0698; } }
L_003F0638:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 30u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0650u); st8((c.r[6].w[0] + 138u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F0650u) [[unlikely]] return; }
L_003F0650:
    set32(c.r[5], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F065Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F065Cu) [[unlikely]] return; }
L_003F065C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0668u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F0668u) [[unlikely]] return; }
L_003F0668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0698; } }
L_003F0670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 138u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[6].w[0] + 138u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], c.r[6].w[0] + 138u);  if (t) { goto L_003F0698; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003F0698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003F06C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_003F06D8:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 136u);  if (t) { goto L_003F0A60; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F0A30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003F0970; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F0710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0A80; } }
L_003F0710:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0960; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5632u);
    c.r[7].d[0] = 0ull | 65408ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0748u); set32(c.r[10], 0u + 11u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F0748u) [[unlikely]] return; }
L_003F0748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F0A80; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0790; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F07A8; } }
L_003F0790:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F07A8:
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07B4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003F07B4u) [[unlikely]] return; }
L_003F07B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07BCu); set32(c.r[4], c.r[18].w[0] + 2688u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F07BCu) [[unlikely]] return; }
L_003F07BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07CCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F07CCu) [[unlikely]] return; }
L_003F07CC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07D8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F07D8u) [[unlikely]] return; }
L_003F07D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07E0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F07E0u) [[unlikely]] return; }
L_003F07E0:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07F8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F07F8u) [[unlikely]] return; }
L_003F07F8:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0804u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F0804u) [[unlikely]] return; }
L_003F0804:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5196u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 64u));
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F0848; } }
    c.r[2].d[0] = c.r[3].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_003F0848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003F0868; } }
L_003F0848:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 57345ull;  if (t) { goto L_003F0868; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 57344ull;  if (t) { goto L_003F0868; } }
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_003F0868:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5196u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F0890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_003F0898; } }
L_003F0890:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 2;
L_003F0898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08A0u); set32(c.r[4], c.r[18].w[0] + 2752u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F08A0u) [[unlikely]] return; }
L_003F08A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F08B0u) [[unlikely]] return; }
L_003F08B0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08BCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F08BCu) [[unlikely]] return; }
L_003F08BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F08C4u) [[unlikely]] return; }
L_003F08C4:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08D0u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F08D0u) [[unlikely]] return; }
L_003F08D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 5204u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 3;
L_003F08DC:
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 40u));
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 5462ll ? 1ull : 0ull;  if (t) { goto L_003F0910; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 5461u);  if (t) { goto L_003F0910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_003F0928; } }
L_003F0910:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0928; } }
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 2;
L_003F0928:
    set32(c.r[4], ld32((c.r[18].w[0] + 5204u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F0950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_003F0A80; } }
L_003F0950:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_003F0A80; } }
    c.budget -= 1;
L_003F0960:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F0A80; } }
    c.budget -= 1;
L_003F0970:
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5196u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F09A0; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F09B0; } }
    c.budget -= 1;
L_003F09A0:
    st32((c.r[18].w[0] + 5196u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 112u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F09C8; } }
L_003F09B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5196u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5196u));
    st32((c.r[18].w[0] + 5196u), c.r[3].w[0]);
    c.budget -= 6;
L_003F09C8:
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5204u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003F09F0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0A00; } }
L_003F09F0:
    st32((c.r[18].w[0] + 5204u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F0A18; } }
L_003F0A00:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5204u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5204u));
    st32((c.r[18].w[0] + 5204u), c.r[3].w[0]);
    c.budget -= 6;
L_003F0A18:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F0A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F0A80; } }
    c.budget -= 1;
L_003F0A30:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], 0u + 30u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A48u); st8((c.r[17].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F0A48u) [[unlikely]] return; }
L_003F0A48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A54u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F0A54u) [[unlikely]] return; }
L_003F0A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0A80; } }
    c.budget -= 1;
L_003F0A60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.budget -= 4;
L_003F0A70:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F0A80; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003F0A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F0AA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 441u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 137u);  if (t) { goto L_003F0E40; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F0E10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003F0D50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F0AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0E60; } }
L_003F0AF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 130u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0D40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 130u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 128u);
    c.r[7].d[0] = 0ull | 59904ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0B28u); set32(c.r[10], 0u + 13u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F0B28u) [[unlikely]] return; }
L_003F0B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F0E60; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0B70; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F0B88; } }
L_003F0B70:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F0B88:
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0B94u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003F0B94u) [[unlikely]] return; }
L_003F0B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0B9Cu); set32(c.r[4], c.r[18].w[0] + 2816u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F0B9Cu) [[unlikely]] return; }
L_003F0B9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F0BACu) [[unlikely]] return; }
L_003F0BAC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BB8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F0BB8u) [[unlikely]] return; }
L_003F0BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BC0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F0BC0u) [[unlikely]] return; }
L_003F0BC0:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BD8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F0BD8u) [[unlikely]] return; }
L_003F0BD8:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BE4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F0BE4u) [[unlikely]] return; }
L_003F0BE4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5220u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 68u));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F0C28; } }
    c.r[2].d[0] = c.r[3].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_003F0C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_003F0C48; } }
L_003F0C28:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 57345ull;  if (t) { goto L_003F0C48; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 57344ull;  if (t) { goto L_003F0C48; } }
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_003F0C48:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5220u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F0C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_003F0C78; } }
L_003F0C70:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_003F0C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C80u); set32(c.r[4], c.r[18].w[0] + 2880u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F0C80u) [[unlikely]] return; }
L_003F0C80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C90u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F0C90u) [[unlikely]] return; }
L_003F0C90:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C9Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F0C9Cu) [[unlikely]] return; }
L_003F0C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0CA4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F0CA4u) [[unlikely]] return; }
L_003F0CA4:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0CB0u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F0CB0u) [[unlikely]] return; }
L_003F0CB0:
    set32(c.r[3], ld32((c.r[18].w[0] + 5228u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F0CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), 0u);  if (t) { goto L_003F0D08; } }
L_003F0CE8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 60076ull;  if (t) { goto L_003F0D08; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 60075ull;  if (t) { goto L_003F0D08; } }
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 1;
L_003F0D08:
    set32(c.r[4], ld32((c.r[18].w[0] + 5228u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F0D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F0E60; } }
L_003F0D30:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F0E60; } }
    c.budget -= 1;
L_003F0D40:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 130u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F0E60; } }
    c.budget -= 1;
L_003F0D50:
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5220u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F0D80; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0D90; } }
    c.budget -= 1;
L_003F0D80:
    st32((c.r[18].w[0] + 5220u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 116u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F0DA8; } }
L_003F0D90:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5220u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5220u));
    st32((c.r[18].w[0] + 5220u), c.r[3].w[0]);
    c.budget -= 6;
L_003F0DA8:
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5228u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003F0DD0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F0DE0; } }
L_003F0DD0:
    st32((c.r[18].w[0] + 5228u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F0DF8; } }
L_003F0DE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5228u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5228u));
    st32((c.r[18].w[0] + 5228u), c.r[3].w[0]);
    c.budget -= 6;
L_003F0DF8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F0E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F0E60; } }
    c.budget -= 1;
L_003F0E10:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], 0u + 30u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E28u); st8((c.r[17].w[0] + 149u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F0E28u) [[unlikely]] return; }
L_003F0E28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E34u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F0E34u) [[unlikely]] return; }
L_003F0E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0E60; } }
    c.budget -= 1;
L_003F0E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 149u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 149u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F0E60; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003F0E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F0E80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003F0EA8u) [[unlikely]] return; }
L_003F0EA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EB4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003F0EB4u) [[unlikely]] return; }
L_003F0EB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EC0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003F0EC0u) [[unlikely]] return; }
L_003F0EC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0ECCu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003F0ECCu) [[unlikely]] return; }
L_003F0ECC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);  if (t) { goto L_003F0EE8; } }
    set32(c.r[2], c.r[2].w[0] + 5792u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003F0EF8; } }
L_003F0EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] + 3392u);
    st32((c.r[17].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003F0EF8:
    st8((c.r[17].w[0] + 8392u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003F0F20; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003F0F20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003F0FB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F0F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F1040; } }
L_003F0F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] + 3312u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] + 3376u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F0F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003F0F80; } }
    c.budget -= 1;
L_003F0F78:
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003F0F80:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st8((c.r[16].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[17].w[0] + 32u);
    st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0FB0u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F0FB0u) [[unlikely]] return; }
L_003F0FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F1068; } }
L_003F0FB8:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 142u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 141u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 143u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0FF8u); st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003F0FF8u) [[unlikely]] return; }
L_003F0FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F1010; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003F1018; } }
L_003F1010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_003F1018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003F1020u) [[unlikely]] return; }
L_003F1020:
    st32((c.r[16].w[0] + 136u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1038u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F1038u) [[unlikely]] return; }
L_003F1038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F1068; } }
L_003F1040:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st8((c.r[16].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[17].w[0] + 32u);
    st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1068u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F1068u) [[unlikely]] return; }
L_003F1068:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1080; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1080u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F1080u) [[unlikely]] return; }
L_003F1080:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);  if (t) { goto L_003F10D8; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1856u), c.f[3]);
    st32((c.r[17].w[0] + 1860u), c.f[2]);
    st32((c.r[17].w[0] + 1864u), c.f[1]);
    st32((c.r[17].w[0] + 1868u), c.f[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_003F10D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_003F10F0:
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1104u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_003D(c, 283u, depth + 1u); else { c.pc = 0x001F6BC0u; return; } if (c.pc != 0x003F1104u) [[unlikely]] return; }
L_003F1104:
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[19].sd[0] < 17ll ? 1ull : 0ull;
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 120u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F10F0u | kUnwind; return; } goto L_003F10F0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F1150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8250u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003F11F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F1190; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F1190:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F12E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11A0u);  if (depth < kMaxDepth) unit_00BD(c, 29u, depth + 1u); else { c.pc = 0x003F46E0u; return; } if (c.pc != 0x003F11A0u) [[unlikely]] return; }
L_003F11A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11F0u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003F11F0u) [[unlikely]] return; }
L_003F11F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F12E8; } }
L_003F11F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F12C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F1220; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F1220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1230u);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003F1230u) [[unlikely]] return; }
L_003F1230:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 143u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F1258; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F124Cu); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003F124Cu) [[unlikely]] return; }
L_003F124C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F12E8; } }
    c.budget -= 1;
L_003F1258:
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1288u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F1288u) [[unlikely]] return; }
L_003F1288:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1294u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F1294u) [[unlikely]] return; }
L_003F1294:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F12E8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F12C0u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003F12C0u) [[unlikely]] return; }
L_003F12C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F1AA8; } }
L_003F12C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F12E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F12E8u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003F12E8u) [[unlikely]] return; }
L_003F12E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1918; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1348; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1330; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1330; } }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 7u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1348; } }
L_003F1330:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1344u);  if (depth < kMaxDepth) unit_00BC(c, 136u, depth + 1u); else { c.pc = 0x003F1AE0u; return; } if (c.pc != 0x003F1344u) [[unlikely]] return; }
L_003F1344:
    c.budget -= 1;
L_003F1348:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F13A0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1388; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1388; } }
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], 0u - 25u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F13A0; } }
    c.budget -= 1;
L_003F1388:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F13A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F139Cu);  if (depth < kMaxDepth) unit_00BC(c, 153u, depth + 1u); else { c.pc = 0x003F1EC0u; return; } if (c.pc != 0x003F139Cu) [[unlikely]] return; }
L_003F139C:
    c.budget -= 1;
L_003F13A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F13F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F13E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F13E0; } }
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], 0u - 97u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F13F8; } }
    c.budget -= 1;
L_003F13E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F13F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F13F4u);  if (depth < kMaxDepth) unit_00BC(c, 170u, depth + 1u); else { c.pc = 0x003F22A0u; return; } if (c.pc != 0x003F13F4u) [[unlikely]] return; }
L_003F13F4:
    c.budget -= 1;
L_003F13F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1450; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1438; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1438; } }
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], 0u - 385u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1450; } }
    c.budget -= 1;
L_003F1438:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F144Cu);  if (depth < kMaxDepth) unit_00BC(c, 185u, depth + 1u); else { c.pc = 0x003F2670u; return; } if (c.pc != 0x003F144Cu) [[unlikely]] return; }
L_003F144C:
    c.budget -= 1;
L_003F1450:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F14A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1490; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1490; } }
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[3], 0u - 1537u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F14A8; } }
    c.budget -= 1;
L_003F1490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F14A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F14A4u);  if (depth < kMaxDepth) unit_00BC(c, 200u, depth + 1u); else { c.pc = 0x003F2A50u; return; } if (c.pc != 0x003F14A4u) [[unlikely]] return; }
L_003F14A4:
    c.budget -= 1;
L_003F14A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1500; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F14E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F14E8; } }
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[3], 0u - 6145u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1500; } }
    c.budget -= 1;
L_003F14E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F14FCu);  if (depth < kMaxDepth) unit_00BC(c, 215u, depth + 1u); else { c.pc = 0x003F2E30u; return; } if (c.pc != 0x003F14FCu) [[unlikely]] return; }
L_003F14FC:
    c.budget -= 1;
L_003F1500:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1558; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1540; } }
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[3], 0u - 24577u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1558; } }
    c.budget -= 1;
L_003F1540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1554u);  if (depth < kMaxDepth) unit_00BC(c, 230u, depth + 1u); else { c.pc = 0x003F3210u; return; } if (c.pc != 0x003F1554u) [[unlikely]] return; }
L_003F1554:
    c.budget -= 1;
L_003F1558:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F15B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1598; } }
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F15B8; } }
L_003F1598:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F15B8; } }
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F15B4u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00BC(c, 245u, depth + 1u); else { c.pc = 0x003F35E0u; return; } if (c.pc != 0x003F15B4u) [[unlikely]] return; }
L_003F15B4:
    c.budget -= 1;
L_003F15B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1618; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F15F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F15F8; } }
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1618; } }
L_003F15F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1618; } }
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1614u); set32(c.r[7], 0u + 13u);  if (depth < kMaxDepth) unit_00BC(c, 259u, depth + 1u); else { c.pc = 0x003F3A80u; return; } if (c.pc != 0x003F1614u) [[unlikely]] return; }
L_003F1614:
    c.budget -= 1;
L_003F1618:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1678; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1658; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1658; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFE70000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1678; } }
L_003F1658:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1678; } }
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1674u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00BC(c, 245u, depth + 1u); else { c.pc = 0x003F35E0u; return; } if (c.pc != 0x003F1674u) [[unlikely]] return; }
L_003F1674:
    c.budget -= 1;
L_003F1678:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F16D8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F16B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F16B8; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
L_003F16B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F16D8; } }
L_003F16B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F16D8; } }
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F16D4u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_00BC(c, 259u, depth + 1u); else { c.pc = 0x003F3A80u; return; } if (c.pc != 0x003F16D4u) [[unlikely]] return; }
L_003F16D4:
    c.budget -= 1;
L_003F16D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1738; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1718; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1718; } }
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1738; } }
L_003F1718:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1738; } }
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1734u); set32(c.r[7], 0u + 17u);  if (depth < kMaxDepth) unit_00BC(c, 274u, depth + 1u); else { c.pc = 0x003F3F30u; return; } if (c.pc != 0x003F1734u) [[unlikely]] return; }
L_003F1734:
    c.budget -= 1;
L_003F1738:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1798; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1778; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1778; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1798; } }
L_003F1778:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1798; } }
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1794u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_00BD(c, 14u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003F1794u) [[unlikely]] return; }
L_003F1794:
    c.budget -= 1;
L_003F1798:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F17F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F17D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F17D8; } }
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F17F8; } }
L_003F17D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F17F8; } }
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F17F4u); set32(c.r[7], 0u + 19u);  if (depth < kMaxDepth) unit_00BC(c, 274u, depth + 1u); else { c.pc = 0x003F3F30u; return; } if (c.pc != 0x003F17F4u) [[unlikely]] return; }
L_003F17F4:
    c.budget -= 1;
L_003F17F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1858; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1838; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1838; } }
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1858; } }
L_003F1838:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1858; } }
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1854u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_00BD(c, 14u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003F1854u) [[unlikely]] return; }
L_003F1854:
    c.budget -= 1;
L_003F1858:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F18B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F1898; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1898; } }
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xE7FF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F18B8; } }
L_003F1898:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F18B8; } }
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 27u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F18B4u); set32(c.r[7], 0u + 21u);  if (depth < kMaxDepth) unit_00BD(c, 15u, depth + 1u); else { c.pc = 0x003F4280u; return; } if (c.pc != 0x003F18B4u) [[unlikely]] return; }
L_003F18B4:
    c.budget -= 1;
L_003F18B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1918; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F18F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F18F8; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F1918; } }
L_003F18F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1918; } }
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1914u); set32(c.r[7], 0u + 23u);  if (depth < kMaxDepth) unit_00BD(c, 15u, depth + 1u); else { c.pc = 0x003F4280u; return; } if (c.pc != 0x003F1914u) [[unlikely]] return; }
L_003F1914:
    c.budget -= 1;
L_003F1918:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003F1AA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F1AA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F1AA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 141u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F1A10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F1990; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F1968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F1AA8; } }
L_003F1968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1978u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003F1978u) [[unlikely]] return; }
L_003F1978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F1AA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 141u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F1AA8; } }
L_003F1990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F19B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F19D0; } }
L_003F19B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003F19D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F19E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003F19E0u) [[unlikely]] return; }
L_003F19E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F1AA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 141u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1A04u); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x003F1A04u) [[unlikely]] return; }
L_003F1A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F1AA8; } }
    c.budget -= 1;
L_003F1A10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F1A68; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F1A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F1AA8; } }
    c.budget -= 1;
L_003F1A48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F1AA8; } }
    c.budget -= 1;
L_003F1A68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F1A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F1AA8; } }
L_003F1A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003F1AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F1AC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A1C0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 153u, depth); }
L_003F1AE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8260u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003F1E88; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[10], 0u + 1u);  if (t) { goto L_003F1E50; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[10].d[0];  if (t) { goto L_003F1D90; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F1B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F1EA8; } }
L_003F1B30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F1D80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003F1B4C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8192u);
    c.r[7].d[0] = 0ull | 65408ull;
    c.r[8].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1B64u); set32(c.r[9], 0u + 24576u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F1B64u) [[unlikely]] return; }
L_003F1B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F1EA8; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F1BB8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F1BD0; } }
    c.budget -= 1;
L_003F1BB8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F1BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1BD8u); set32(c.r[4], c.r[18].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F1BD8u) [[unlikely]] return; }
L_003F1BD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1BE8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F1BE8u) [[unlikely]] return; }
L_003F1BE8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1BF4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F1BF4u) [[unlikely]] return; }
L_003F1BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1BFCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F1BFCu) [[unlikely]] return; }
L_003F1BFC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1C14u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F1C14u) [[unlikely]] return; }
L_003F1C14:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1C20u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F1C20u) [[unlikely]] return; }
L_003F1C20:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5076u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F1C68; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F1C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003F1C88; } }
    c.budget -= 1;
L_003F1C68:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003F1C88; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003F1C88; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003F1C88:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5076u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F1CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003F1CB8; } }
L_003F1CB0:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003F1CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CC0u); set32(c.r[4], c.r[18].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F1CC0u) [[unlikely]] return; }
L_003F1CC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CD0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F1CD0u) [[unlikely]] return; }
L_003F1CD0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CDCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F1CDCu) [[unlikely]] return; }
L_003F1CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CE4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F1CE4u) [[unlikely]] return; }
L_003F1CE4:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CF0u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F1CF0u) [[unlikely]] return; }
L_003F1CF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 5084u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 4097ll ? 1ull : 0ull;  if (t) { goto L_003F1D30; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 4096u);  if (t) { goto L_003F1D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003F1D48; } }
L_003F1D30:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F1D48; } }
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 2;
L_003F1D48:
    set32(c.r[4], ld32((c.r[18].w[0] + 5084u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F1D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F1EA8; } }
L_003F1D70:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F1EA8; } }
    c.budget -= 1;
L_003F1D80:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F1EA8; } }
    c.budget -= 1;
L_003F1D90:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5076u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F1DC0; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F1DD0; } }
    c.budget -= 1;
L_003F1DC0:
    st32((c.r[18].w[0] + 5076u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F1DE8; } }
L_003F1DD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5076u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5076u));
    st32((c.r[18].w[0] + 5076u), c.r[3].w[0]);
    c.budget -= 6;
L_003F1DE8:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5084u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003F1E10; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F1E20; } }
L_003F1E10:
    st32((c.r[18].w[0] + 5084u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F1E38; } }
L_003F1E20:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5084u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5084u));
    st32((c.r[18].w[0] + 5084u), c.r[3].w[0]);
    c.budget -= 6;
L_003F1E38:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F1EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F1EA8; } }
    c.budget -= 1;
L_003F1E50:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E64u); st8((c.r[7].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F1E64u) [[unlikely]] return; }
L_003F1E64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F1E70u) [[unlikely]] return; }
L_003F1E70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E7Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F1E7Cu) [[unlikely]] return; }
L_003F1E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F1EA8; } }
    c.budget -= 1;
L_003F1E88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F1EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F1EA8; } }
    c.budget -= 1;
L_003F1EA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F1EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F1EC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[10], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8264u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[10].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003F2260; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F2230; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F2170; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F1F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2280; } }
L_003F1F10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 128u);
    c.r[7].d[0] = 0ull | 57344ull;
    c.r[8].d[0] = 0ull | 65535ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1F44u); set32(c.r[9], 0u + 24576u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F1F44u) [[unlikely]] return; }
L_003F1F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F2280; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F1F98; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 9;
L_003F1F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F1FB0; } }
    c.budget -= 1;
L_003F1F98:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F1FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FB8u); set32(c.r[4], c.r[18].w[0] + 2176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F1FB8u) [[unlikely]] return; }
L_003F1FB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F1FC8u) [[unlikely]] return; }
L_003F1FC8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FD4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F1FD4u) [[unlikely]] return; }
L_003F1FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FDCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F1FDCu) [[unlikely]] return; }
L_003F1FDC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FF4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F1FF4u) [[unlikely]] return; }
L_003F1FF4:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2000u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F2000u) [[unlikely]] return; }
L_003F2000:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5100u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2048; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F2048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003F2068; } }
    c.budget -= 1;
L_003F2048:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003F2068; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003F2068; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003F2068:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5100u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F2090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003F2098; } }
L_003F2090:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003F2098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F20A0u); set32(c.r[4], c.r[18].w[0] + 2240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F20A0u) [[unlikely]] return; }
L_003F20A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F20B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F20B0u) [[unlikely]] return; }
L_003F20B0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F20BCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F20BCu) [[unlikely]] return; }
L_003F20BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F20C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F20C4u) [[unlikely]] return; }
L_003F20C4:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F20D0u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F20D0u) [[unlikely]] return; }
L_003F20D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 5108u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_003F2128; } }
L_003F2108:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_003F2128; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 61440ull;  if (t) { goto L_003F2128; } }
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 1;
L_003F2128:
    set32(c.r[4], ld32((c.r[18].w[0] + 5108u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F2150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F2280; } }
L_003F2150:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F2280; } }
    c.budget -= 1;
L_003F2160:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F2280; } }
    c.budget -= 1;
L_003F2170:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5100u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F21A0; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F21B0; } }
    c.budget -= 1;
L_003F21A0:
    st32((c.r[18].w[0] + 5100u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F21C8; } }
L_003F21B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5100u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5100u));
    st32((c.r[18].w[0] + 5100u), c.r[3].w[0]);
    c.budget -= 6;
L_003F21C8:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5108u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003F21F0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2200; } }
L_003F21F0:
    st32((c.r[18].w[0] + 5108u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F2218; } }
L_003F2200:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5108u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5108u));
    st32((c.r[18].w[0] + 5108u), c.r[3].w[0]);
    c.budget -= 6;
L_003F2218:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F2280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F2280; } }
    c.budget -= 1;
L_003F2230:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2240u); st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F2240u) [[unlikely]] return; }
L_003F2240:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F224Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F224Cu) [[unlikely]] return; }
L_003F224C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2258u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F2258u) [[unlikely]] return; }
L_003F2258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2280; } }
L_003F2260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 81u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F2280; } }
    c.budget -= 1;
L_003F2278:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F2280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F22A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8268u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003F2638; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F2610; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F2550; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F22F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2658; } }
L_003F22F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2540; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12288u);
    c.r[7].d[0] = 0ull | 65408ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 24576u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2328u); set32(c.r[10], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F2328u) [[unlikely]] return; }
L_003F2328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F2658; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2378; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F2390; } }
L_003F2378:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F2390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2398u); set32(c.r[4], c.r[18].w[0] + 2304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F2398u) [[unlikely]] return; }
L_003F2398:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F23A8u) [[unlikely]] return; }
L_003F23A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F23B4u) [[unlikely]] return; }
L_003F23B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F23BCu) [[unlikely]] return; }
L_003F23BC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23D4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F23D4u) [[unlikely]] return; }
L_003F23D4:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23E0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F23E0u) [[unlikely]] return; }
L_003F23E0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5124u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2428; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F2428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003F2448; } }
    c.budget -= 1;
L_003F2428:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003F2448; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003F2448; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003F2448:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5124u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F2470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003F2478; } }
L_003F2470:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003F2478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2480u); set32(c.r[4], c.r[18].w[0] + 2368u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F2480u) [[unlikely]] return; }
L_003F2480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2490u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F2490u) [[unlikely]] return; }
L_003F2490:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F249Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F249Cu) [[unlikely]] return; }
L_003F249C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F24A4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F24A4u) [[unlikely]] return; }
L_003F24A4:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F24B0u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F24B0u) [[unlikely]] return; }
L_003F24B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 5132u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 9103ll ? 1ull : 0ull;  if (t) { goto L_003F24F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 9102u);  if (t) { goto L_003F24F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003F2508; } }
L_003F24F0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2508; } }
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 2;
L_003F2508:
    set32(c.r[4], ld32((c.r[18].w[0] + 5132u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F2530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F2658; } }
L_003F2530:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F2658; } }
    c.budget -= 1;
L_003F2540:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F2658; } }
    c.budget -= 1;
L_003F2550:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5124u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F2580; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2590; } }
    c.budget -= 1;
L_003F2580:
    st32((c.r[18].w[0] + 5124u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F25A8; } }
L_003F2590:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5124u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5124u));
    st32((c.r[18].w[0] + 5124u), c.r[3].w[0]);
    c.budget -= 6;
L_003F25A8:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5132u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003F25D0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F25E0; } }
L_003F25D0:
    st32((c.r[18].w[0] + 5132u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F25F8; } }
L_003F25E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5132u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5132u));
    st32((c.r[18].w[0] + 5132u), c.r[3].w[0]);
    c.budget -= 6;
L_003F25F8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F2658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F2658; } }
    c.budget -= 1;
L_003F2610:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2624u); st8((c.r[7].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F2624u) [[unlikely]] return; }
L_003F2624:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2630u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F2630u) [[unlikely]] return; }
L_003F2630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2658; } }
L_003F2638:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F2658; } }
    c.budget -= 1;
L_003F2650:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F2658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F2670:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8272u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003F2A18; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F29F0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F2930; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F26C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2A38; } }
L_003F26C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2920; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    set32(c.r[5], 0u + 16384u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[8].d[0] = 0ull | 49152ull;
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F26F8u); set32(c.r[10], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F26F8u) [[unlikely]] return; }
L_003F26F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F2A38; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2748; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F2760; } }
L_003F2748:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F2760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2768u); set32(c.r[4], c.r[18].w[0] + 2432u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F2768u) [[unlikely]] return; }
L_003F2768:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2778u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F2778u) [[unlikely]] return; }
L_003F2778:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2784u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F2784u) [[unlikely]] return; }
L_003F2784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F278Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F278Cu) [[unlikely]] return; }
L_003F278C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F279Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F279Cu) [[unlikely]] return; }
L_003F279C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5144u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F27E8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F27E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003F2808; } }
L_003F27E8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003F2808; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003F2808; } }
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_003F2808:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5144u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 64u);  if (t) { goto L_003F2830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003F2838; } }
L_003F2830:
    set32(c.r[2], 0u + 64u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003F2838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2840u); set32(c.r[4], c.r[18].w[0] + 2496u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F2840u) [[unlikely]] return; }
L_003F2840:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2850u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F2850u) [[unlikely]] return; }
L_003F2850:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F285Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F285Cu) [[unlikely]] return; }
L_003F285C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2864u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F2864u) [[unlikely]] return; }
L_003F2864:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2878u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F2878u) [[unlikely]] return; }
L_003F2878:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2888u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F2888u) [[unlikely]] return; }
L_003F2888:
    set32(c.r[3], ld32((c.r[18].w[0] + 5160u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 9102ll ? 1ull : 0ull;  if (t) { goto L_003F28D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F28D0; } }
    set32(c.r[3], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003F28E8; } }
    c.budget -= 1;
L_003F28D0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F28E8; } }
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 2;
L_003F28E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5160u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003F2910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F2A38; } }
L_003F2910:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F2A38; } }
    c.budget -= 1;
L_003F2920:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F2A38; } }
    c.budget -= 1;
L_003F2930:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5144u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F2960; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2970; } }
    c.budget -= 1;
L_003F2960:
    st32((c.r[18].w[0] + 5144u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F2988; } }
L_003F2970:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5144u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5144u));
    st32((c.r[18].w[0] + 5144u), c.r[3].w[0]);
    c.budget -= 6;
L_003F2988:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5160u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003F29B0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F29C0; } }
L_003F29B0:
    st32((c.r[18].w[0] + 5160u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F29D8; } }
L_003F29C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5160u));
    st32((c.r[18].w[0] + 5160u), c.r[3].w[0]);
    c.budget -= 6;
L_003F29D8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F2A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F2A38; } }
    c.budget -= 1;
L_003F29F0:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A04u); st8((c.r[7].w[0] + 83u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F2A04u) [[unlikely]] return; }
L_003F2A04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A10u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F2A10u) [[unlikely]] return; }
L_003F2A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2A38; } }
L_003F2A18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 83u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F2A38; } }
    c.budget -= 1;
L_003F2A30:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F2A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F2A50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8276u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003F2DF8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F2DD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F2D10; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F2AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2E18; } }
L_003F2AA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2D00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 22528u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[8].d[0] = 0ull | 32896ull;
    set32(c.r[9], 0u + 24576u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2AD8u); set32(c.r[10], 0u + 9u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F2AD8u) [[unlikely]] return; }
L_003F2AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F2E18; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2B28; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F2B40; } }
L_003F2B28:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F2B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B48u); set32(c.r[4], c.r[18].w[0] + 2560u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F2B48u) [[unlikely]] return; }
L_003F2B48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B58u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F2B58u) [[unlikely]] return; }
L_003F2B58:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B64u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F2B64u) [[unlikely]] return; }
L_003F2B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B6Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F2B6Cu) [[unlikely]] return; }
L_003F2B6C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B84u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F2B84u) [[unlikely]] return; }
L_003F2B84:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B94u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F2B94u) [[unlikely]] return; }
L_003F2B94:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5172u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2BD8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F2BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003F2BF8; } }
L_003F2BD8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003F2BF8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003F2BF8; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003F2BF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5172u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F2C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003F2C28; } }
L_003F2C20:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003F2C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C30u); set32(c.r[4], c.r[18].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F2C30u) [[unlikely]] return; }
L_003F2C30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C40u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F2C40u) [[unlikely]] return; }
L_003F2C40:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C4Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F2C4Cu) [[unlikely]] return; }
L_003F2C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C54u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F2C54u) [[unlikely]] return; }
L_003F2C54:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C60u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F2C60u) [[unlikely]] return; }
L_003F2C60:
    set32(c.r[3], ld32((c.r[18].w[0] + 5180u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[4], c.r[4].w[0] + 32767u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_003F2CC8; } }
L_003F2CA0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 56435ull;  if (t) { goto L_003F2CC8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2CC8; } }
    c.r[3].d[0] = 0ull | 56434ull;
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_003F2CC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5180u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F2CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F2E18; } }
L_003F2CF0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F2E18; } }
    c.budget -= 1;
L_003F2D00:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F2E18; } }
    c.budget -= 1;
L_003F2D10:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5172u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F2D40; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2D50; } }
    c.budget -= 1;
L_003F2D40:
    st32((c.r[18].w[0] + 5172u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F2D68; } }
L_003F2D50:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5172u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5172u));
    st32((c.r[18].w[0] + 5172u), c.r[3].w[0]);
    c.budget -= 6;
L_003F2D68:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5180u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003F2D90; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2DA0; } }
L_003F2D90:
    st32((c.r[18].w[0] + 5180u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F2DB8; } }
L_003F2DA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5180u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5180u));
    st32((c.r[18].w[0] + 5180u), c.r[3].w[0]);
    c.budget -= 6;
L_003F2DB8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F2E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F2E18; } }
    c.budget -= 1;
L_003F2DD0:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DE4u); st8((c.r[7].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F2DE4u) [[unlikely]] return; }
L_003F2DE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DF0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F2DF0u) [[unlikely]] return; }
L_003F2DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2E18; } }
L_003F2DF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F2E18; } }
    c.budget -= 1;
L_003F2E10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F2E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F2E30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8280u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003F31D8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F31B0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F30F0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F2E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F31F8; } }
L_003F2E80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F30E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 32640u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[8].d[0] = 0ull | 38912ull;
    set32(c.r[9], 0u + 24576u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2EB8u); set32(c.r[10], 0u + 11u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F2EB8u) [[unlikely]] return; }
L_003F2EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F31F8; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2F08; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F2F20; } }
L_003F2F08:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F2F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F28u); set32(c.r[4], c.r[18].w[0] + 2688u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F2F28u) [[unlikely]] return; }
L_003F2F28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F38u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F2F38u) [[unlikely]] return; }
L_003F2F38:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F44u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F2F44u) [[unlikely]] return; }
L_003F2F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F4Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F2F4Cu) [[unlikely]] return; }
L_003F2F4C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F64u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F2F64u) [[unlikely]] return; }
L_003F2F64:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F74u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F2F74u) [[unlikely]] return; }
L_003F2F74:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5196u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2FB8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F2FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003F2FD8; } }
L_003F2FB8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003F2FD8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003F2FD8; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003F2FD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5196u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F3000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003F3008; } }
L_003F3000:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003F3008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3010u); set32(c.r[4], c.r[18].w[0] + 2752u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F3010u) [[unlikely]] return; }
L_003F3010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3020u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F3020u) [[unlikely]] return; }
L_003F3020:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F302Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F302Cu) [[unlikely]] return; }
L_003F302C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3034u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F3034u) [[unlikely]] return; }
L_003F3034:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3040u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F3040u) [[unlikely]] return; }
L_003F3040:
    set32(c.r[3], ld32((c.r[18].w[0] + 5204u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[4].w[0] + 32767u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 9102ll ? 1ull : 0ull;  if (t) { goto L_003F3090; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3090; } }
    set32(c.r[3], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003F30A8; } }
    c.budget -= 1;
L_003F3090:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F30A8; } }
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 2;
L_003F30A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5204u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F30D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F31F8; } }
L_003F30D0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F31F8; } }
    c.budget -= 1;
L_003F30E0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F31F8; } }
    c.budget -= 1;
L_003F30F0:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5196u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F3120; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3130; } }
    c.budget -= 1;
L_003F3120:
    st32((c.r[18].w[0] + 5196u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F3148; } }
L_003F3130:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5196u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5196u));
    st32((c.r[18].w[0] + 5196u), c.r[3].w[0]);
    c.budget -= 6;
L_003F3148:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5204u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003F3170; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3180; } }
L_003F3170:
    st32((c.r[18].w[0] + 5204u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F3198; } }
L_003F3180:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5204u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5204u));
    st32((c.r[18].w[0] + 5204u), c.r[3].w[0]);
    c.budget -= 6;
L_003F3198:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F31F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F31F8; } }
    c.budget -= 1;
L_003F31B0:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F31C4u); st8((c.r[7].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F31C4u) [[unlikely]] return; }
L_003F31C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F31D0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F31D0u) [[unlikely]] return; }
L_003F31D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F31F8; } }
L_003F31D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 85u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F31F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F31F8; } }
    c.budget -= 1;
L_003F31F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F31F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F3210:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8284u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003F35A8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F3580; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F34C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F3260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F35C8; } }
L_003F3260:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F34B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 128u);
    c.r[7].d[0] = 0ull | 53248ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 24576u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3298u); set32(c.r[10], 0u + 13u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F3298u) [[unlikely]] return; }
L_003F3298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F35C8; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F32E8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F3300; } }
L_003F32E8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F3300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3308u); set32(c.r[4], c.r[18].w[0] + 2816u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F3308u) [[unlikely]] return; }
L_003F3308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3318u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F3318u) [[unlikely]] return; }
L_003F3318:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3324u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F3324u) [[unlikely]] return; }
L_003F3324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F332Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F332Cu) [[unlikely]] return; }
L_003F332C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3344u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F3344u) [[unlikely]] return; }
L_003F3344:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3350u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F3350u) [[unlikely]] return; }
L_003F3350:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5220u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F3398; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F3398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003F33B8; } }
    c.budget -= 1;
L_003F3398:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003F33B8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003F33B8; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003F33B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5220u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F33E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003F33E8; } }
L_003F33E0:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003F33E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F33F0u); set32(c.r[4], c.r[18].w[0] + 2880u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F33F0u) [[unlikely]] return; }
L_003F33F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3400u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F3400u) [[unlikely]] return; }
L_003F3400:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F340Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F340Cu) [[unlikely]] return; }
L_003F340C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3414u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F3414u) [[unlikely]] return; }
L_003F3414:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3420u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F3420u) [[unlikely]] return; }
L_003F3420:
    set32(c.r[3], ld32((c.r[18].w[0] + 5228u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F3458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_003F3478; } }
L_003F3458:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 56434ull;  if (t) { goto L_003F3478; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 56433ull;  if (t) { goto L_003F3478; } }
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 1;
L_003F3478:
    set32(c.r[4], ld32((c.r[18].w[0] + 5228u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F34A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F35C8; } }
L_003F34A0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F35C8; } }
    c.budget -= 1;
L_003F34B0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F35C8; } }
    c.budget -= 1;
L_003F34C0:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5220u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F34F0; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3500; } }
    c.budget -= 1;
L_003F34F0:
    st32((c.r[18].w[0] + 5220u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F3518; } }
L_003F3500:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5220u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5220u));
    st32((c.r[18].w[0] + 5220u), c.r[3].w[0]);
    c.budget -= 6;
L_003F3518:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5228u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003F3540; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3550; } }
L_003F3540:
    st32((c.r[18].w[0] + 5228u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003F3568; } }
L_003F3550:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5228u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5228u));
    st32((c.r[18].w[0] + 5228u), c.r[3].w[0]);
    c.budget -= 6;
L_003F3568:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F35C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F35C8; } }
    c.budget -= 1;
L_003F3580:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3594u); st8((c.r[7].w[0] + 86u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F3594u) [[unlikely]] return; }
L_003F3594:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F35A0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F35A0u) [[unlikely]] return; }
L_003F35A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F35C8; } }
L_003F35A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 86u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F35C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F35C8; } }
    c.budget -= 1;
L_003F35C0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 86u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F35C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F35E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 8248u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F3A38; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F39D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003F38E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F3650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F3A60; } }
    c.budget -= 1;
L_003F3650:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F38D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[3], 0u + 1200u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[8].d[0] = 0ull | 32896ull;
    set32(c.r[9], 0u + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3688u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F3688u) [[unlikely]] return; }
L_003F3688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F3A60; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F36D8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_003F36F0; } }
L_003F36D8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 6;
L_003F36F0:
    c.r[19].d[0] = c.r[20].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3708u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F3708u) [[unlikely]] return; }
L_003F3708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3718u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F3718u) [[unlikely]] return; }
L_003F3718:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3724u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F3724u) [[unlikely]] return; }
L_003F3724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F372Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F372Cu) [[unlikely]] return; }
L_003F372C:
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F373Cu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F373Cu) [[unlikely]] return; }
L_003F373C:
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = 0ull | 49152ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[20], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] + 5060u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5060u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F3798; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F3798; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003F37B8; } }
L_003F3798:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;  if (t) { goto L_003F37B8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003F37B8; } }
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_003F37B8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F37E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003F37E8; } }
L_003F37E0:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003F37E8:
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F37FCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F37FCu) [[unlikely]] return; }
L_003F37FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F380Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F380Cu) [[unlikely]] return; }
L_003F380C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3818u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F3818u) [[unlikely]] return; }
L_003F3818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3820u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F3820u) [[unlikely]] return; }
L_003F3820:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3834u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F3834u) [[unlikely]] return; }
L_003F3834:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3844u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F3844u) [[unlikely]] return; }
L_003F3844:
    set32(c.r[3], c.r[2].w[0] + 3095u);
    set32(c.r[5], c.r[20].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 5068u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 88u));
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] + 5068u);  if (t) { goto L_003F3880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), 0u);  if (t) { goto L_003F38A0; } }
L_003F3880:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_003F38A0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 8192u);  if (t) { goto L_003F38A0; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 2;
L_003F38A0:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F38C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F3A60; } }
L_003F38C8:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F3A60; } }
    c.budget -= 1;
L_003F38D8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3A60; } }
    c.budget -= 1;
L_003F38E8:
    c.r[5].d[0] = c.r[20].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[9], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[8], c.r[4].w[0] + 5060u);
    set32(c.r[4], c.r[9].w[0] - c.r[5].w[0]);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F3930; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F3940; } }
L_003F3930:
    st32((c.r[8].w[0]), c.r[9].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003F3958; } }
L_003F3940:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F3958:
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5068u)));
    set32(c.r[7], c.r[4].w[0] + 5068u);
    set32(c.r[8], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], c.r[8].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 65504ull;  if (t) { goto L_003F3988; } }
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F3998; } }
L_003F3988:
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003F39B0; } }
L_003F3998:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F39B0:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003F3A60; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F3A60; } }
L_003F39D0:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3A28; } }
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39F4u); st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F39F4u) [[unlikely]] return; }
L_003F39F4:
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003F3A60; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F3A60; } }
    c.budget -= 1;
L_003F3A28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F3A60; } }
    c.budget -= 1;
L_003F3A38:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F3A60; } }
    c.budget -= 1;
L_003F3A58:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F3A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F3A80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 8248u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F3ED8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F3E70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003F3D88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F3AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F3F00; } }
L_003F3AF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3D78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[3], 0u + 1200u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 128u);
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3B28u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F3B28u) [[unlikely]] return; }
L_003F3B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F3F00; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3B78; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_003F3B90; } }
L_003F3B78:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 6;
L_003F3B90:
    c.r[19].d[0] = c.r[20].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3BA8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F3BA8u) [[unlikely]] return; }
L_003F3BA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3BB8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F3BB8u) [[unlikely]] return; }
L_003F3BB8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3BC4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F3BC4u) [[unlikely]] return; }
L_003F3BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3BCCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F3BCCu) [[unlikely]] return; }
L_003F3BCC:
    set32(c.r[16], c.r[29].w[0] + 120u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3BDCu); c.f[12] = ld32((c.r[29].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F3BDCu) [[unlikely]] return; }
L_003F3BDC:
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = 0ull | 49152ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[21], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] + 5060u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5060u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F3C38; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[20].d[0] = 0ull | 32768ull;  if (t) { goto L_003F3C38; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003F3C60; } }
L_003F3C38:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull | 32768ull;  if (t) { goto L_003F3C60; } }
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F3C60; } }
    set32(c.r[2], 0u + 16384u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_003F3C60:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003F3C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003F3C90; } }
    c.budget -= 1;
L_003F3C88:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003F3C90:
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CA4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F3CA4u) [[unlikely]] return; }
L_003F3CA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CB4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F3CB4u) [[unlikely]] return; }
L_003F3CB4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CC0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F3CC0u) [[unlikely]] return; }
L_003F3CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CC8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F3CC8u) [[unlikely]] return; }
L_003F3CC8:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CDCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F3CDCu) [[unlikely]] return; }
L_003F3CDC:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CE8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F3CE8u) [[unlikely]] return; }
L_003F3CE8:
    set32(c.r[3], c.r[2].w[0] - 3095u);
    set32(c.r[5], c.r[21].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 5068u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 88u));
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 5068u);  if (t) { goto L_003F3D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), 0u);  if (t) { goto L_003F3D40; } }
L_003F3D20:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 57344ull;  if (t) { goto L_003F3D40; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 57344ull;  if (t) { goto L_003F3D40; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 2;
L_003F3D40:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F3D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F3F00; } }
    c.budget -= 1;
L_003F3D68:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F3F00; } }
    c.budget -= 1;
L_003F3D78:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3F00; } }
    c.budget -= 1;
L_003F3D88:
    c.r[5].d[0] = c.r[20].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[9], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[8], c.r[4].w[0] + 5060u);
    set32(c.r[4], c.r[9].w[0] - c.r[5].w[0]);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F3DD0; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F3DE0; } }
L_003F3DD0:
    st32((c.r[8].w[0]), c.r[9].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003F3DF8; } }
L_003F3DE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F3DF8:
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5068u)));
    c.budget -= 2;
L_003F3E00:
    set32(c.r[7], c.r[4].w[0] + 5068u);
    set32(c.r[8], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], c.r[8].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 65504ull;  if (t) { goto L_003F3E28; } }
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F3E38; } }
L_003F3E28:
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003F3E50; } }
L_003F3E38:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F3E50:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003F3F00; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F3F00; } }
L_003F3E70:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3EC8; } }
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E94u); st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F3E94u) [[unlikely]] return; }
L_003F3E94:
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003F3F00; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F3F00; } }
    c.budget -= 1;
L_003F3EC8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F3F00; } }
    c.budget -= 1;
L_003F3ED8:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F3F00; } }
    c.budget -= 1;
L_003F3EF8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F3F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003F3F30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + 8248u);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[18], ld32((c.r[6].w[0] + 12u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 17;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_00BD(c, 12u, depth); } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 1u);  if (t) { [[clang::musttail]] return unit_00BD(c, 11u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { [[clang::musttail]] return unit_00BD(c, 10u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003F3F98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00BD(c, 13u, depth); } }
L_003F3F98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BD(c, 9u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[3], 0u + 1200u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8192u);
    c.r[7].d[0] = 0ull | 57344ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3FD0u); c.r[10].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F3FD0u) [[unlikely]] return; }
L_003F3FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BD(c, 13u, depth); } }
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BD(c, 2u, depth); } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    [[clang::musttail]] return unit_00BD(c, 1u, depth);
}

}
