#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0,
    58, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0,
    95, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0,
    111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0,
    0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 269, 0, 0, 0, 270, 0, 0, 0,
};

void unit_006B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002AC000;
    case 2u: goto L_002AC020;
    case 3u: goto L_002AC028;
    case 4u: goto L_002AC030;
    case 5u: goto L_002AC040;
    case 6u: goto L_002AC108;
    case 7u: goto L_002AC110;
    case 8u: goto L_002AC120;
    case 9u: goto L_002AC1A0;
    case 10u: goto L_002AC1D8;
    case 11u: goto L_002AC240;
    case 12u: goto L_002AC268;
    case 13u: goto L_002AC290;
    case 14u: goto L_002AC2D0;
    case 15u: goto L_002AC300;
    case 16u: goto L_002AC308;
    case 17u: goto L_002AC350;
    case 18u: goto L_002AC380;
    case 19u: goto L_002AC3A8;
    case 20u: goto L_002AC480;
    case 21u: goto L_002AC490;
    case 22u: goto L_002AC4E0;
    case 23u: goto L_002AC4F8;
    case 24u: goto L_002AC518;
    case 25u: goto L_002AC52C;
    case 26u: goto L_002AC550;
    case 27u: goto L_002AC568;
    case 28u: goto L_002AC588;
    case 29u: goto L_002AC5B0;
    case 30u: goto L_002AC5C0;
    case 31u: goto L_002AC5D0;
    case 32u: goto L_002AC630;
    case 33u: goto L_002AC740;
    case 34u: goto L_002AC74C;
    case 35u: goto L_002AC774;
    case 36u: goto L_002AC780;
    case 37u: goto L_002AC8A0;
    case 38u: goto L_002AC8E0;
    case 39u: goto L_002AC8F0;
    case 40u: goto L_002AC92C;
    case 41u: goto L_002AC938;
    case 42u: goto L_002AC95C;
    case 43u: goto L_002AC970;
    case 44u: goto L_002AC9AC;
    case 45u: goto L_002AC9DC;
    case 46u: goto L_002AC9F0;
    case 47u: goto L_002ACA00;
    case 48u: goto L_002ACA10;
    case 49u: goto L_002ACA20;
    case 50u: goto L_002ACA30;
    case 51u: goto L_002ACA38;
    case 52u: goto L_002ACA50;
    case 53u: goto L_002ACA68;
    case 54u: goto L_002ACA78;
    case 55u: goto L_002ACAB0;
    case 56u: goto L_002ACADC;
    case 57u: goto L_002ACAF4;
    case 58u: goto L_002ACB00;
    case 59u: goto L_002ACB08;
    case 60u: goto L_002ACB10;
    case 61u: goto L_002ACB1C;
    case 62u: goto L_002ACB28;
    case 63u: goto L_002ACB40;
    case 64u: goto L_002ACB50;
    case 65u: goto L_002ACBC0;
    case 66u: goto L_002ACBCC;
    case 67u: goto L_002ACBE0;
    case 68u: goto L_002ACC08;
    case 69u: goto L_002ACC30;
    case 70u: goto L_002ACC4C;
    case 71u: goto L_002ACC5C;
    case 72u: goto L_002ACCA0;
    case 73u: goto L_002ACCB0;
    case 74u: goto L_002ACCE0;
    case 75u: goto L_002ACD30;
    case 76u: goto L_002ACD54;
    case 77u: goto L_002ACD68;
    case 78u: goto L_002ACD70;
    case 79u: goto L_002ACDCC;
    case 80u: goto L_002ACE50;
    case 81u: goto L_002ACE98;
    case 82u: goto L_002ACEA8;
    case 83u: goto L_002ACEE4;
    case 84u: goto L_002ACF00;
    case 85u: goto L_002ACF30;
    case 86u: goto L_002ACF50;
    case 87u: goto L_002ACF68;
    case 88u: goto L_002ACFAC;
    case 89u: goto L_002ACFB4;
    case 90u: goto L_002AD054;
    case 91u: goto L_002AD060;
    case 92u: goto L_002AD068;
    case 93u: goto L_002AD070;
    case 94u: goto L_002AD078;
    case 95u: goto L_002AD080;
    case 96u: goto L_002AD088;
    case 97u: goto L_002AD090;
    case 98u: goto L_002AD0A0;
    case 99u: goto L_002AD0B0;
    case 100u: goto L_002AD0F0;
    case 101u: goto L_002AD100;
    case 102u: goto L_002AD110;
    case 103u: goto L_002AD168;
    case 104u: goto L_002AD180;
    case 105u: goto L_002AD190;
    case 106u: goto L_002AD1A0;
    case 107u: goto L_002AD1B0;
    case 108u: goto L_002AD1E8;
    case 109u: goto L_002AD1F0;
    case 110u: goto L_002AD1F8;
    case 111u: goto L_002AD200;
    case 112u: goto L_002AD208;
    case 113u: goto L_002AD210;
    case 114u: goto L_002AD218;
    case 115u: goto L_002AD220;
    case 116u: goto L_002AD230;
    case 117u: goto L_002AD270;
    case 118u: goto L_002AD2C4;
    case 119u: goto L_002AD2CC;
    case 120u: goto L_002AD2E0;
    case 121u: goto L_002AD320;
    case 122u: goto L_002AD330;
    case 123u: goto L_002AD360;
    case 124u: goto L_002AD3B0;
    case 125u: goto L_002AD3E4;
    case 126u: goto L_002AD450;
    case 127u: goto L_002AD4A0;
    case 128u: goto L_002AD5A4;
    case 129u: goto L_002AD5D0;
    case 130u: goto L_002AD610;
    case 131u: goto L_002AD650;
    case 132u: goto L_002AD6B0;
    case 133u: goto L_002AD6C4;
    case 134u: goto L_002AD6D0;
    case 135u: goto L_002AD6DC;
    case 136u: goto L_002AD6E8;
    case 137u: goto L_002AD730;
    case 138u: goto L_002AD758;
    case 139u: goto L_002AD7A0;
    case 140u: goto L_002AD7D8;
    case 141u: goto L_002AD810;
    case 142u: goto L_002AD848;
    case 143u: goto L_002AD8A0;
    case 144u: goto L_002AD8F8;
    case 145u: goto L_002AD930;
    case 146u: goto L_002AD970;
    case 147u: goto L_002AD9D8;
    case 148u: goto L_002ADA10;
    case 149u: goto L_002ADB00;
    case 150u: goto L_002ADB2C;
    case 151u: goto L_002ADB60;
    case 152u: goto L_002ADB8C;
    case 153u: goto L_002ADBC0;
    case 154u: goto L_002ADC20;
    case 155u: goto L_002ADC90;
    case 156u: goto L_002ADD40;
    case 157u: goto L_002ADD50;
    case 158u: goto L_002ADF30;
    case 159u: goto L_002ADF5C;
    case 160u: goto L_002ADF90;
    case 161u: goto L_002ADFF0;
    case 162u: goto L_002AE030;
    case 163u: goto L_002AE05C;
    case 164u: goto L_002AE090;
    case 165u: goto L_002AE0F0;
    case 166u: goto L_002AE120;
    case 167u: goto L_002AE160;
    case 168u: goto L_002AE1A8;
    case 169u: goto L_002AE1C0;
    case 170u: goto L_002AE210;
    case 171u: goto L_002AE230;
    case 172u: goto L_002AE250;
    case 173u: goto L_002AE270;
    case 174u: goto L_002AE540;
    case 175u: goto L_002AE5B4;
    case 176u: goto L_002AE5D0;
    case 177u: goto L_002AE660;
    case 178u: goto L_002AE720;
    case 179u: goto L_002AE75C;
    case 180u: goto L_002AE780;
    case 181u: goto L_002AE810;
    case 182u: goto L_002AE8D0;
    case 183u: goto L_002AE90C;
    case 184u: goto L_002AE930;
    case 185u: goto L_002AE9D4;
    case 186u: goto L_002AE9F0;
    case 187u: goto L_002AEB00;
    case 188u: goto L_002AEB0C;
    case 189u: goto L_002AEB18;
    case 190u: goto L_002AEB20;
    case 191u: goto L_002AEB28;
    case 192u: goto L_002AEB34;
    case 193u: goto L_002AEB40;
    case 194u: goto L_002AEB4C;
    case 195u: goto L_002AEB58;
    case 196u: goto L_002AEB64;
    case 197u: goto L_002AEB70;
    case 198u: goto L_002AEB78;
    case 199u: goto L_002AEB90;
    case 200u: goto L_002AEC98;
    case 201u: goto L_002AECB0;
    case 202u: goto L_002AECC0;
    case 203u: goto L_002AECD0;
    case 204u: goto L_002AECE0;
    case 205u: goto L_002AED04;
    case 206u: goto L_002AED24;
    case 207u: goto L_002AED40;
    case 208u: goto L_002AED5C;
    case 209u: goto L_002AED70;
    case 210u: goto L_002AEDA0;
    case 211u: goto L_002AEDD0;
    case 212u: goto L_002AEDDC;
    case 213u: goto L_002AEDE8;
    case 214u: goto L_002AEE00;
    case 215u: goto L_002AEE24;
    case 216u: goto L_002AEE30;
    case 217u: goto L_002AEE3C;
    case 218u: goto L_002AEE50;
    case 219u: goto L_002AEEB8;
    case 220u: goto L_002AEF40;
    case 221u: goto L_002AEF7C;
    case 222u: goto L_002AEFB4;
    case 223u: goto L_002AF000;
    case 224u: goto L_002AF038;
    case 225u: goto L_002AF070;
    case 226u: goto L_002AF0E8;
    case 227u: goto L_002AF5E0;
    case 228u: goto L_002AF718;
    case 229u: goto L_002AF728;
    case 230u: goto L_002AF734;
    case 231u: goto L_002AF738;
    case 232u: goto L_002AF748;
    case 233u: goto L_002AFC20;
    case 234u: goto L_002AFC50;
    case 235u: goto L_002AFC60;
    case 236u: goto L_002AFC70;
    case 237u: goto L_002AFC80;
    case 238u: goto L_002AFCB4;
    case 239u: goto L_002AFCBC;
    case 240u: goto L_002AFCE4;
    case 241u: goto L_002AFCF0;
    case 242u: goto L_002AFCF8;
    case 243u: goto L_002AFD04;
    case 244u: goto L_002AFD20;
    case 245u: goto L_002AFD4C;
    case 246u: goto L_002AFD60;
    case 247u: goto L_002AFD84;
    case 248u: goto L_002AFD8C;
    case 249u: goto L_002AFD94;
    case 250u: goto L_002AFD9C;
    case 251u: goto L_002AFDA8;
    case 252u: goto L_002AFDB0;
    case 253u: goto L_002AFEB4;
    case 254u: goto L_002AFED0;
    case 255u: goto L_002AFEE0;
    case 256u: goto L_002AFEF0;
    case 257u: goto L_002AFEF8;
    case 258u: goto L_002AFF04;
    case 259u: goto L_002AFF0C;
    case 260u: goto L_002AFF3C;
    case 261u: goto L_002AFF44;
    case 262u: goto L_002AFF54;
    case 263u: goto L_002AFF64;
    case 264u: goto L_002AFF70;
    case 265u: goto L_002AFF80;
    case 266u: goto L_002AFFB0;
    case 267u: goto L_002AFFB4;
    case 268u: goto L_002AFFDC;
    case 269u: goto L_002AFFE0;
    case 270u: goto L_002AFFF0;
    default: bad_entry(c, 0x002AC000u); return;
    }
L_002AC000:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 23408u), c.r[2].w[0]);  if (t) { goto L_002AC010; } }
    st32((c.r[28].w[0] - 23392u), 0u);
    c.budget -= 1;
L_002AC010:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC020u); set32(c.r[6], 0u + 688u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002AC020u) [[unlikely]] return; }
L_002AC020:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002AC028:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002AC030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_002AC098; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AC098; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[3], c.r[3].w[0] - 6128u);
    set32(c.r[2], c.r[2].w[0] - 6176u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002AC100; } }
L_002AC098:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002AC0C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AC0C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[2], c.r[2].w[0] - 6128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), 0u);  if (t) { goto L_002AC100; } }
L_002AC0C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AC0F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AC0F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[2], c.r[2].w[0] - 6176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 20u), 0u);  if (t) { goto L_002AC100; } }
L_002AC0F8:
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 2;
L_002AC100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x002AC108u) [[unlikely]] return; }
L_002AC108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC120u; return; } if (c.pc != 0x002AC110u) [[unlikely]] return; }
L_002AC110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC120:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC160; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC148; } }
    st32((c.r[28].w[0] - 23360u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23376u), c.r[4].w[0]);  if (t) { goto L_002AC150; } }
    c.budget -= 1;
L_002AC148:
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 23360u), c.r[4].w[0]);
    c.budget -= 2;
L_002AC150:
    set32(c.r[3], ld32((c.r[28].w[0] - 23824u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23824u), c.r[3].w[0]);  if (t) { goto L_002AC190; } }
L_002AC160:
    set32(c.r[3], ld32((c.r[28].w[0] - 23392u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC178; } }
    st32((c.r[28].w[0] - 23392u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23408u), c.r[4].w[0]);  if (t) { goto L_002AC180; } }
L_002AC178:
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 23392u), c.r[4].w[0]);
    c.budget -= 2;
L_002AC180:
    set32(c.r[3], ld32((c.r[28].w[0] - 23828u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23828u), c.r[3].w[0]);
    c.budget -= 4;
L_002AC190:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_002AC1A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 6128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AC2B0; } }
L_002AC1D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC2A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));  if (t) { goto L_002AC208; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC218; } }
L_002AC208:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AC230; } }
    c.budget -= 1;
L_002AC218:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_002AC230; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_002AC240; } }
    c.budget -= 1;
L_002AC230:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC240u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC240u) [[unlikely]] return; }
L_002AC240:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_002AC290; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002AC290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC268u);  if (depth < kMaxDepth) unit_006A(c, 154u, depth + 1u); else { c.pc = 0x002AA550u; return; } if (c.pc != 0x002AC268u) [[unlikely]] return; }
L_002AC268:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC290; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002AC290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC290u);  if (depth < kMaxDepth) unit_0012(c, 139u, depth + 1u); else { c.pc = 0x001496C0u; return; } if (c.pc != 0x002AC290u) [[unlikely]] return; }
L_002AC290:
    set32(c.r[3], ld32((c.r[28].w[0] - 23832u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23832u), c.r[3].w[0]);
    c.budget -= 4;
L_002AC2A0:
    set32(c.r[18], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC1D8u | kUnwind; return; } goto L_002AC1D8; } }
    c.budget -= 1;
L_002AC2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AC2D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 6128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AC320; } }
L_002AC300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC308u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x002AC308u) [[unlikely]] return; }
L_002AC308:
    set32(c.r[18], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC300u | kUnwind; return; } goto L_002AC300; } }
    c.budget -= 1;
L_002AC320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[3], c.r[3].w[0] - 6176u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AC350:
    st32((c.r[28].w[0] - 23428u), 0u);
    st32((c.r[28].w[0] - 23424u), 0u);
    st32((c.r[28].w[0] - 23436u), 0u);
    st32((c.r[28].w[0] - 23432u), 0u);
    st32((c.r[28].w[0] - 23444u), 0u);
    st32((c.r[28].w[0] - 23440u), 0u);
    st32((c.r[28].w[0] - 23452u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23448u), 0u);  c.pc = t; return; }
L_002AC380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 6128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AC478; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_002AC3A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002AC3D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23428u)));
    st32((c.r[6].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23428u), c.r[6].w[0]);  if (t) { goto L_002AC3D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23424u), c.r[6].w[0]);  if (t) { goto L_002AC468; } }
    c.budget -= 1;
L_002AC3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 172u), c.r[6].w[0]);  if (t) { goto L_002AC468; } }
L_002AC3D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AC468; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 273u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002AC448; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002AC428; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC468; } }
    c.budget -= 1;
L_002AC408:
    set32(c.r[3], ld32((c.r[28].w[0] - 23436u)));
    st32((c.r[6].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23436u), c.r[6].w[0]);  if (t) { goto L_002AC420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23432u), c.r[6].w[0]);  if (t) { goto L_002AC468; } }
L_002AC420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 172u), c.r[6].w[0]);  if (t) { goto L_002AC468; } }
L_002AC428:
    set32(c.r[3], ld32((c.r[28].w[0] - 23444u)));
    st32((c.r[6].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23444u), c.r[6].w[0]);  if (t) { goto L_002AC440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23440u), c.r[6].w[0]);  if (t) { goto L_002AC468; } }
L_002AC440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 172u), c.r[6].w[0]);  if (t) { goto L_002AC468; } }
L_002AC448:
    set32(c.r[3], ld32((c.r[28].w[0] - 23452u)));
    st32((c.r[6].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23452u), c.r[6].w[0]);  if (t) { goto L_002AC460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23448u), c.r[6].w[0]);  if (t) { goto L_002AC468; } }
L_002AC460:
    st32((c.r[3].w[0] + 172u), c.r[6].w[0]);
    c.budget -= 2;
L_002AC468:
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC3A8u | kUnwind; return; } goto L_002AC3A8; } }
    c.budget -= 1;
L_002AC478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC480:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.budget -= 4;
L_002AC490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC4C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23428u)));
    st32((c.r[5].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23428u), c.r[5].w[0]);  if (t) { goto L_002AC4B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23424u), c.r[5].w[0]);  if (t) { goto L_002AC4C0; } }
    c.budget -= 1;
L_002AC4B8:
    st32((c.r[3].w[0] + 172u), c.r[5].w[0]);
    c.budget -= 2;
L_002AC4C0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC490u | kUnwind; return; } goto L_002AC490; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 23424u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AC540; } }
L_002AC4F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC530; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AC530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC518u);  if (depth < kMaxDepth) unit_006B(c, 32u, depth + 1u); else { c.pc = 0x002AC630u; return; } if (c.pc != 0x002AC518u) [[unlikely]] return; }
L_002AC518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC530; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC52Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC52Cu) [[unlikely]] return; }
L_002AC52C:
    c.budget -= 1;
L_002AC530:
    set32(c.r[16], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC4F8u | kUnwind; return; } goto L_002AC4F8; } }
    c.budget -= 1;
L_002AC540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 23432u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AC598; } }
L_002AC568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC588; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AC588; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC588u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC588u) [[unlikely]] return; }
L_002AC588:
    set32(c.r[16], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC568u | kUnwind; return; } goto L_002AC568; } }
    c.budget -= 1;
L_002AC598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC5D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    st32((c.r[5].w[0] + 264u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 270u)));
    st8((c.r[5].w[0] + 270u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    st8((c.r[5].w[0] + 268u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 269u)));
    st8((c.r[5].w[0] + 269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    st32((c.r[5].w[0] + 504u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 508u)));
    st32((c.r[5].w[0] + 508u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 271u)));
    st8((c.r[5].w[0] + 271u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    st8((c.r[5].w[0] + 515u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    st32((c.r[5].w[0] + 624u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 628u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 628u), c.r[3].w[0]);  c.pc = t; return; }
L_002AC630:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 256u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AC660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AC888; } }
L_002AC660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC6E8; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC6E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC6A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC6A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC728; } }
    c.budget -= 1;
L_002AC6A8:
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.f[0] = ld32((c.r[18].w[0] + 2032u));
    set32(c.r[17], c.r[29].w[0] + 88u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2036u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2040u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2000u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2004u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2008u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_002AC730; } }
    c.budget -= 1;
L_002AC6E8:
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.f[0] = ld32((c.r[18].w[0] + 240u));
    set32(c.r[17], c.r[29].w[0] + 88u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 244u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 208u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 212u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 216u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_002AC730; } }
    c.budget -= 1;
L_002AC728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AC888; } }
L_002AC730:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = ld32((c.r[18].w[0] + 260u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC740u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AC740u) [[unlikely]] return; }
L_002AC740:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC74Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002AC74Cu) [[unlikely]] return; }
L_002AC74C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC774u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002AC774u) [[unlikely]] return; }
L_002AC774:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC780u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AC780u) [[unlikely]] return; }
L_002AC780:
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[5]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AC7A8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AC7B0; } }
    c.budget -= 1;
L_002AC7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AC888; } }
L_002AC7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[4] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[5], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AC7F8; } }
    c.f[0] = ld32((c.r[18].w[0] + 256u));
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002AC888; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC888; } }
L_002AC7F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = ld32((c.r[18].w[0] + 256u));
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    fpu_div(c, 4u, c.f[1], c.f[5]);
    c.f[1] = fp::add(c.f[0], c.f[4]);
    fpu_div(c, 3u, c.f[3], c.f[5]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; fpu_div(c, 2u, c.f[2], c.f[5]);  if (t) { goto L_002AC880; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AC880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[0], c.f[4]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AC880; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AC880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AC888; } }
    c.budget -= 1;
L_002AC880:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002AC888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002AC8A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00B10000u);  if (t) { goto L_002AC8C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6128u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002AC8D0; } }
L_002AC8C0:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6176u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_002AC8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_002AC938; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 20416u);
    st32((c.r[28].w[0] - 23356u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC92Cu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002AC92Cu) [[unlikely]] return; }
L_002AC92C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC938u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 159u, depth + 1u); else { c.pc = 0x0033DE10u; return; } if (c.pc != 0x002AC938u) [[unlikely]] return; }
L_002AC938:
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 26048u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC95Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC95Cu) [[unlikely]] return; }
L_002AC95C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AC970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_002AC9B8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 20416u);
    st32((c.r[28].w[0] - 23356u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9ACu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002AC9ACu) [[unlikely]] return; }
L_002AC9AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002AC9B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 26064u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC9DCu) [[unlikely]] return; }
L_002AC9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AC9F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002ACA00:
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));  c.pc = t; return; }
L_002ACA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA20u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002ACA20u) [[unlikely]] return; }
L_002ACA20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 46u);  if (t) { goto L_002ACA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA30u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002ACA30u) [[unlikely]] return; }
L_002ACA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA38u);  if (depth < kMaxDepth) unit_0044(c, 91u, depth + 1u); else { c.pc = 0x002107C0u; return; } if (c.pc != 0x002ACA38u) [[unlikely]] return; }
L_002ACA38:
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACA50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA50u);  if (depth < kMaxDepth) unit_0048(c, 276u, depth + 1u); else { c.pc = 0x00223E60u; return; } if (c.pc != 0x002ACA50u) [[unlikely]] return; }
L_002ACA50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01630000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018F0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA68u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_008B(c, 55u, depth + 1u); else { c.pc = 0x0032C470u; return; } if (c.pc != 0x002ACA68u) [[unlikely]] return; }
L_002ACA68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA78u); set32(c.r[4], c.r[4].w[0] - 13840u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002ACA78u) [[unlikely]] return; }
L_002ACA78:
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ACAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 26080u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACADCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACADCu) [[unlikely]] return; }
L_002ACADC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACAF4u);  if (depth < kMaxDepth) unit_008B(c, 62u, depth + 1u); else { c.pc = 0x0032C500u; return; } if (c.pc != 0x002ACAF4u) [[unlikely]] return; }
L_002ACAF4:
    c.budget -= 1;
L_002ACAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB00u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002ACB00u) [[unlikely]] return; }
L_002ACB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB08u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002ACB08u) [[unlikely]] return; }
L_002ACB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB10u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002ACB10u) [[unlikely]] return; }
L_002ACB10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB1Cu); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002ACB1Cu) [[unlikely]] return; }
L_002ACB1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB28u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002ACB28u) [[unlikely]] return; }
L_002ACB28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ACB40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB40u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x002ACB40u) [[unlikely]] return; }
L_002ACB40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ACB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    set32(c.r[5], c.r[4].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002ACCA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACC68; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002ACC00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACBD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ACBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACCD0; } }
    c.budget -= 1;
L_002ACBA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 600u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ACCD0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACBC0u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 110u, depth + 1u); else { c.pc = 0x00210940u; return; } if (c.pc != 0x002ACBC0u) [[unlikely]] return; }
L_002ACBC0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACBCCu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002ACBCCu) [[unlikely]] return; }
L_002ACBCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACCD0; } }
    c.budget -= 1;
L_002ACBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACBE0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002ACBE0u) [[unlikely]] return; }
L_002ACBE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACCD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ACCD0; } }
    c.budget -= 1;
L_002ACC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC08u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002ACC08u) [[unlikely]] return; }
L_002ACC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACCD0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC30u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x002ACC30u) [[unlikely]] return; }
L_002ACC30:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC4Cu); st8((c.r[2].w[0] + 629u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x002ACC4Cu) [[unlikely]] return; }
L_002ACC4C:
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC5Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x002ACC5Cu) [[unlikely]] return; }
L_002ACC5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 601u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002ACCD0; } }
L_002ACC68:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 629u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACCD0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACCA0u); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x002ACCA0u) [[unlikely]] return; }
L_002ACCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACCD0; } }
L_002ACCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACCB0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002ACCB0u) [[unlikely]] return; }
L_002ACCB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACCD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002ACCD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ACCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    set32(c.r[5], c.r[4].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACD68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ACD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACE40; } }
    c.budget -= 1;
L_002ACD18:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD30u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0033E840u; return; } if (c.pc != 0x002ACD30u) [[unlikely]] return; }
L_002ACD30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACD60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD54u);  if (depth < kMaxDepth) unit_0090(c, 186u, depth + 1u); else { c.pc = 0x00341600u; return; } if (c.pc != 0x002ACD54u) [[unlikely]] return; }
L_002ACD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACD68; } }
    c.budget -= 1;
L_002ACD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD68u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 276u, depth + 1u); else { c.pc = 0x0033E9C0u; return; } if (c.pc != 0x002ACD68u) [[unlikely]] return; }
L_002ACD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD70u);  if (depth < kMaxDepth) unit_008F(c, 277u, depth + 1u); else { c.pc = 0x0033E9D0u; return; } if (c.pc != 0x002ACD70u) [[unlikely]] return; }
L_002ACD70:
    set32(c.r[7], ld32((c.r[28].w[0] - 23356u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ACE00; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002ACDD8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ACDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACE28; } }
    c.budget -= 1;
L_002ACDA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACDCCu); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002ACDCCu) [[unlikely]] return; }
L_002ACDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACE28; } }
    c.budget -= 1;
L_002ACDD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002ACE28; } }
    c.budget -= 1;
L_002ACE00:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_002ACE28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_002ACE28:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_002ACE40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 601u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002ACE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ACE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 2u);  if (t) { goto L_002ACEC8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002ACEA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ACE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACEE8; } }
L_002ACE88:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACE98u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002ACE98u) [[unlikely]] return; }
L_002ACE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACEE8; } }
L_002ACEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACEA8u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002ACEA8u) [[unlikely]] return; }
L_002ACEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACEE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23356u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ACEE8; } }
    c.budget -= 1;
L_002ACEC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACEE4u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002ACEE4u) [[unlikely]] return; }
L_002ACEE4:
    c.budget -= 1;
L_002ACEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ACF00:
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 26096u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002AC000u < 16384u) { entry = entries_006B[(t - 0x002AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002ACF30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF50u); st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x002ACF50u) [[unlikely]] return; }
L_002ACF50:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 321u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF68u); st8((c.r[2].w[0] + 322u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 224u, depth + 1u); else { c.pc = 0x003AA8E0u; return; } if (c.pc != 0x002ACF68u) [[unlikely]] return; }
L_002ACF68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 102u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
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
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACFACu); st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002ACFACu) [[unlikely]] return; }
L_002ACFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACFB4u);  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7C90u; return; } if (c.pc != 0x002ACFB4u) [[unlikely]] return; }
L_002ACFB4:
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
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD018; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 314u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002AD018:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002AD048; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD048; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_002AD048:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD054u); st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002AD054u) [[unlikely]] return; }
L_002AD054:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD060u); st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0032(c, 37u, depth + 1u); else { c.pc = 0x001C89F0u; return; } if (c.pc != 0x002AD060u) [[unlikely]] return; }
L_002AD060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD068u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002AD068u) [[unlikely]] return; }
L_002AD068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD070u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002AD070u) [[unlikely]] return; }
L_002AD070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD078u);  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6AB0u; return; } if (c.pc != 0x002AD078u) [[unlikely]] return; }
L_002AD078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD080u);  if (depth < kMaxDepth) unit_006F(c, 28u, depth + 1u); else { c.pc = 0x002BC580u; return; } if (c.pc != 0x002AD080u) [[unlikely]] return; }
L_002AD080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD088u);  if (depth < kMaxDepth) unit_006D(c, 318u, depth + 1u); else { c.pc = 0x002B7580u; return; } if (c.pc != 0x002AD088u) [[unlikely]] return; }
L_002AD088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD090u);  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7D40u; return; } if (c.pc != 0x002AD090u) [[unlikely]] return; }
L_002AD090:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AD0A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD0B0u);  if (depth < kMaxDepth) unit_004D(c, 136u, depth + 1u); else { c.pc = 0x00236320u; return; } if (c.pc != 0x002AD0B0u) [[unlikely]] return; }
L_002AD0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD0F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
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
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD0F0u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AA(c, 236u, depth + 1u); else { c.pc = 0x003AAE30u; return; } if (c.pc != 0x002AD0F0u) [[unlikely]] return; }
L_002AD0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AD100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD110u);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002B19F0u; return; } if (c.pc != 0x002AD110u) [[unlikely]] return; }
L_002AD110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD150; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23356u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AD168; } }
L_002AD150:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD168u);  if (depth < kMaxDepth) unit_006B(c, 107u, depth + 1u); else { c.pc = 0x002AD1B0u; return; } if (c.pc != 0x002AD168u) [[unlikely]] return; }
L_002AD168:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AD180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD190u);  if (depth < kMaxDepth) unit_006C(c, 323u, depth + 1u); else { c.pc = 0x002B2640u; return; } if (c.pc != 0x002AD190u) [[unlikely]] return; }
L_002AD190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD1A0u);  if (depth < kMaxDepth) unit_006B(c, 107u, depth + 1u); else { c.pc = 0x002AD1B0u; return; } if (c.pc != 0x002AD1A0u) [[unlikely]] return; }
L_002AD1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AD1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 42u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD1E8u); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002AD1E8u) [[unlikely]] return; }
L_002AD1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD1F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002AD1F0u) [[unlikely]] return; }
L_002AD1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD1F8u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002AD1F8u) [[unlikely]] return; }
L_002AD1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD200u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002AD200u) [[unlikely]] return; }
L_002AD200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD208u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002AD208u) [[unlikely]] return; }
L_002AD208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD210u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002AD210u) [[unlikely]] return; }
L_002AD210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD218u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002AD218u) [[unlikely]] return; }
L_002AD218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD220u);  if (depth < kMaxDepth) unit_0044(c, 394u, depth + 1u); else { c.pc = 0x002137E0u; return; } if (c.pc != 0x002AD220u) [[unlikely]] return; }
L_002AD220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AD230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23356u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD268; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_002AD268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD270u);  if (depth < kMaxDepth) unit_008F(c, 165u, depth + 1u); else { c.pc = 0x0033DF10u; return; } if (c.pc != 0x002AD270u) [[unlikely]] return; }
L_002AD270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD2D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2C4u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002AD2C4u) [[unlikely]] return; }
L_002AD2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2CCu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002AD2CCu) [[unlikely]] return; }
L_002AD2CC:
    c.budget -= 1;
L_002AD2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AD2E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002AD320:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], c.r[7].w[0] - 20400u);
    c.budget -= 4;
L_002AD330:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD330u | kUnwind; return; } goto L_002AD330; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD360:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_002AD418; } }
    c.budget -= 1;
L_002AD3B0:
    c.r[16].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[16].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_002AD3F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002AD3F0; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD3E4u); set32(c.r[11], 0u + 16u);  if (depth < kMaxDepth) unit_006B(c, 126u, depth + 1u); else { c.pc = 0x002AD450u; return; } if (c.pc != 0x002AD3E4u) [[unlikely]] return; }
L_002AD3E4:
    set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);
    c.r[21].d[0] = c.r[3].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 3;
L_002AD3F0:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);  if (t) { goto L_002AD408; } }
    c.r[21].d[0] = c.r[3].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 3;
L_002AD408:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD3B0u | kUnwind; return; } goto L_002AD3B0; } }
L_002AD418:
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
L_002AD450:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD4A0u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0066(c, 385u, depth + 1u); else { c.pc = 0x0029ADD0u; return; } if (c.pc != 0x002AD4A0u) [[unlikely]] return; }
L_002AD4A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_002AD598; } }
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[7], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[19].d[0] << 48;
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[6].d[0] = c.r[16].d[0] << 48;
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 26112u);
    c.r[4].d[0] = c.r[23].d[0] << 48;
    set32(c.r[9], c.r[5].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[7].d[0] = c.r[21].d[0] << 48;
    c.r[5].d[0] = c.r[20].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[8].d[0] = c.r[8].d[0] | 34ull;
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[22].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] & 15ull;
    c.r[8].d[0] = c.r[8].d[0] | 64ull;
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[9].w[0]));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1u));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 2u));
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 3u));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[2].w[0] + 30u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 43;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[2].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_002AD560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[22].d[0] & 255ull;  if (t) { goto L_002AD564; } }
    set32(c.r[4], c.r[4].w[0] - 16u);
    c.budget -= 1;
L_002AD560:
    c.r[3].d[0] = c.r[22].d[0] & 255ull;
    c.budget -= 1;
L_002AD564:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] >> 4);
    st16((c.r[2].w[0] + 24u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[3].w[0] << 4);
    st16((c.r[2].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 16u);
    st16((c.r[2].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st16((c.r[2].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 20400u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 13;
L_002AD598:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD5A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 189u, depth + 1u); else { c.pc = 0x0029F2A0u; return; } if (c.pc != 0x002AD5A4u) [[unlikely]] return; }
L_002AD5A4:
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
L_002AD5D0:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 7u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 2u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 4u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 5u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002AD610:
    c.budget -= 2;
    {  goto L_002AD620; }
L_002AD620:
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 8624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] + 28u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 26176u);
    c.budget -= 12;
L_002AD650:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD678; } }
    c.r[2].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
L_002AD678:
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[2].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD650u | kUnwind; return; } goto L_002AD650; } }
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & 48128ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_002AD6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23908u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6C4u); set32(c.r[4], ld32((c.r[2].w[0] + 816u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x002AD730u; return; } if (c.pc != 0x002AD6C4u) [[unlikely]] return; }
L_002AD6C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23908u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6D0u); set32(c.r[4], ld32((c.r[2].w[0] + 816u)));  if (depth < kMaxDepth) unit_006B(c, 139u, depth + 1u); else { c.pc = 0x002AD7A0u; return; } if (c.pc != 0x002AD6D0u) [[unlikely]] return; }
L_002AD6D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23908u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6DCu); set32(c.r[4], ld32((c.r[2].w[0] + 816u)));  if (depth < kMaxDepth) unit_006B(c, 141u, depth + 1u); else { c.pc = 0x002AD810u; return; } if (c.pc != 0x002AD6DCu) [[unlikely]] return; }
L_002AD6DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23908u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6E8u); set32(c.r[4], ld32((c.r[2].w[0] + 816u)));  if (depth < kMaxDepth) unit_006B(c, 145u, depth + 1u); else { c.pc = 0x002AD930u; return; } if (c.pc != 0x002AD6E8u) [[unlikely]] return; }
L_002AD6E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23908u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], c.r[3].w[0] - 18816u);
    set32(c.r[5], ld32((c.r[4].w[0] + 816u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    st32((c.r[28].w[0] - 22652u), 0u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 23344u), 0u);
    set32(c.r[4], c.r[4].w[0] << 13);
    st32((c.r[28].w[0] - 23348u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 23352u), 0u);
    st32((c.r[28].w[0] - 23340u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AD730:
    set32(c.r[5], c.r[4].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17024u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 512u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 10;
L_002AD758:
    set32(c.r[3], c.r[5].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[5].w[0]), c.r[3].d[0]);
    st64((c.r[5].w[0] + 8u), 0ull);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD758u | kUnwind; return; } goto L_002AD758; } }
    c.r[3].d[0] = 0ull | 61440ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0] + 8u), 0ull);  c.pc = t; return; }
L_002AD7A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 15968u);
    set32(c.r[6], 0u + 1024u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 10);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[3].w[0] - 15872u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 16384u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 14;
L_002AD7D8:
    set32(c.r[3], c.r[5].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[5].w[0]), c.r[3].d[0]);
    st64((c.r[5].w[0] + 8u), 0ull);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD7D8u | kUnwind; return; } goto L_002AD7D8; } }
    st64((c.r[5].w[0]), 0ull);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0] + 8u), 0ull);  c.pc = t; return; }
L_002AD810:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 16608u);
    set32(c.r[8], 0u + 16u);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - 16512u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[4].w[0] + 256u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 14;
L_002AD848:
    set32(c.r[4], c.r[7].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st64((c.r[7].w[0]), c.r[4].d[0]);
    st64((c.r[7].w[0] + 8u), 0ull);
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD848u | kUnwind; return; } goto L_002AD848; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[7].w[0]), 0ull);
    set32(c.r[4], c.r[4].w[0] - 17248u);
    set32(c.r[8], 0u + 16u);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    st64((c.r[7].w[0] + 8u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] - 17152u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[4].w[0] + 256u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 12;
L_002AD8A0:
    set32(c.r[4], c.r[7].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st64((c.r[7].w[0]), c.r[4].d[0]);
    st64((c.r[7].w[0] + 8u), 0ull);
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD8A0u | kUnwind; return; } goto L_002AD8A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[7].w[0]), 0ull);
    set32(c.r[4], c.r[4].w[0] - 17888u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st64((c.r[7].w[0] + 8u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 17792u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 12;
L_002AD8F8:
    set32(c.r[3], c.r[5].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[5].w[0]), c.r[3].d[0]);
    st64((c.r[5].w[0] + 8u), 0ull);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD8F8u | kUnwind; return; } goto L_002AD8F8; } }
    st64((c.r[5].w[0]), 0ull);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0] + 8u), 0ull);  c.pc = t; return; }
L_002AD930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B80000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 30496u);
    set32(c.r[6], 0u + 2560u);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull | 40960ull;
    set32(c.r[3], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B80000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 30592u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 16;
L_002AD970:
    set32(c.r[3], c.r[8].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[8].w[0]), c.r[3].d[0]);
    st64((c.r[8].w[0] + 8u), 0ull);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD970u | kUnwind; return; } goto L_002AD970; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[8].w[0]), 0ull);
    set32(c.r[3], c.r[3].w[0] + 30336u);
    set32(c.r[6], 0u + 2048u);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    st64((c.r[8].w[0] + 8u), 0ull);
    set32(c.r[3], c.r[4].w[0] << 11);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], c.r[3].w[0] + 30464u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 16;
L_002AD9D8:
    set32(c.r[3], c.r[5].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[5].w[0]), c.r[3].d[0]);
    st64((c.r[5].w[0] + 8u), 0ull);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD9D8u | kUnwind; return; } goto L_002AD9D8; } }
    st64((c.r[5].w[0]), 0ull);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0] + 8u), 0ull);  c.pc = t; return; }
L_002ADA10:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002ADA98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ADA68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ADA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADAA0; } }
    c.budget -= 1;
L_002ADA38:
    set32(c.r[4], ld32((c.r[28].w[0] - 23908u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], 0u + 31u);
    set32(c.r[3], c.r[3].w[0] - 15872u);
    set32(c.r[5], ld32((c.r[4].w[0] + 816u)));
    set32(c.r[4], c.r[5].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[9], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[9].w[0] + 16384u);  if (t) { goto L_002ADAA0; } }
    c.budget -= 1;
L_002ADA68:
    set32(c.r[4], ld32((c.r[28].w[0] - 23908u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], 0u + 29u);
    set32(c.r[3], c.r[3].w[0] - 18432u);
    set32(c.r[5], ld32((c.r[4].w[0] + 816u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[9], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[9].w[0] + 256u);  if (t) { goto L_002ADAA0; } }
    c.budget -= 1;
L_002ADA98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADAF8; } }
L_002ADAA0:
    set32(c.r[7], ld32((c.r[28].w[0] - 23908u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    set32(c.r[5], c.r[6].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[6], c.r[6].w[0] + 17024u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[8], ld32((c.r[7].w[0] + 816u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld64((c.r[6].w[0]));
    st64((c.r[6].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[9].w[0]), c.r[3].d[0]);
    c.budget -= 22;
L_002ADAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ADB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 15968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB2Cu); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006B(c, 153u, depth + 1u); else { c.pc = 0x002ADBC0u; return; } if (c.pc != 0x002ADB2Cu) [[unlikely]] return; }
L_002ADB2C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ADB50; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_002ADB50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ADB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 15968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB8Cu); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006B(c, 154u, depth + 1u); else { c.pc = 0x002ADC20u; return; } if (c.pc != 0x002ADB8Cu) [[unlikely]] return; }
L_002ADB8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ADBB0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_002ADBB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ADBC0:
    set32(c.r[8], ld32((c.r[28].w[0] - 23908u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[7], c.r[7].w[0] - 15872u);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[9], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[8], c.r[9].w[0] << 10);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_002ADC20:
    set32(c.r[8], ld32((c.r[28].w[0] - 23908u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], c.r[5].w[0] << 4);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[7], c.r[7].w[0] - 15872u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[9], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[8], c.r[9].w[0] << 10);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = c.r[6].d[0] >> 32;
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0]), c.r[6].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_002ADC90:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002ADD08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002ADCE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ADCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADD30; } }
    c.budget -= 1;
L_002ADCB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] - 16512u);
    set32(c.r[4], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + 256u);  if (t) { goto L_002ADD30; } }
L_002ADCE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] - 17152u);
    set32(c.r[4], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + 256u);  if (t) { goto L_002ADD30; } }
L_002ADD08:
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] - 17792u);
    set32(c.r[4], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + 256u);
    c.budget -= 10;
L_002ADD30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB00u | kUnwind; return; } goto L_002ADB00; }
L_002ADD40:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { set32(c.r[6], c.r[2].w[0] - 1u);  goto L_002ADD60; }
L_002ADD50:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { set32(c.r[5], c.r[2].w[0] - 1u);  goto L_002ADE40; }
L_002ADD60:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002ADDE8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002ADDB8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002ADD88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADE10; } }
    c.budget -= 1;
L_002ADD88:
    set32(c.r[7], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], c.r[6].w[0] - 16512u);
    set32(c.r[8], ld32((c.r[7].w[0] + 816u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_002ADE10; } }
    c.budget -= 1;
L_002ADDB8:
    set32(c.r[7], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], c.r[6].w[0] - 17152u);
    set32(c.r[8], ld32((c.r[7].w[0] + 816u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_002ADE10; } }
    c.budget -= 1;
L_002ADDE8:
    set32(c.r[7], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], c.r[6].w[0] - 17792u);
    set32(c.r[8], ld32((c.r[7].w[0] + 816u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 10;
L_002ADE10:
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_002ADE40:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002ADEC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002ADE98; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002ADE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADEF0; } }
    c.budget -= 1;
L_002ADE68:
    set32(c.r[6], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], c.r[5].w[0] - 16512u);
    set32(c.r[7], ld32((c.r[6].w[0] + 816u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_002ADEF0; } }
    c.budget -= 1;
L_002ADE98:
    set32(c.r[6], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], c.r[5].w[0] - 17152u);
    set32(c.r[7], ld32((c.r[6].w[0] + 816u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_002ADEF0; } }
    c.budget -= 1;
L_002ADEC8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], c.r[5].w[0] - 17792u);
    set32(c.r[7], ld32((c.r[6].w[0] + 816u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
L_002ADEF0:
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = c.r[6].d[0] >> 32;
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0]), c.r[6].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_002ADF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B80000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 30496u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF5Cu); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006B(c, 160u, depth + 1u); else { c.pc = 0x002ADF90u; return; } if (c.pc != 0x002ADF5Cu) [[unlikely]] return; }
L_002ADF5C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ADF80; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_002ADF80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ADF90:
    set32(c.r[8], ld32((c.r[28].w[0] - 23908u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00B80000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[7], c.r[7].w[0] + 30592u);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[9], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 9);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_002ADFF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B80000u);
    set32(c.r[2], c.r[2].w[0] + 30592u);
    c.r[1].d[0] = 0ull | 40960ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { set32(c.r[4], c.r[5].w[0] + c.r[1].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB00u | kUnwind; return; } goto L_002ADB00; }
L_002AE030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 30336u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE05Cu); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006B(c, 164u, depth + 1u); else { c.pc = 0x002AE090u; return; } if (c.pc != 0x002AE05Cu) [[unlikely]] return; }
L_002AE05C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AE080; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_002AE080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE090:
    set32(c.r[8], ld32((c.r[28].w[0] - 23908u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[7], c.r[7].w[0] + 30464u);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[9], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[8], c.r[9].w[0] << 11);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_002AE0F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[2], c.r[2].w[0] + 30464u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[4].w[0] << 11);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { set32(c.r[4], c.r[5].w[0] + c.r[1].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB00u | kUnwind; return; } goto L_002ADB00; }
L_002AE120:
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 17024u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 816u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    c.r[4].d[0] = c.r[2].d[0] << 36;
    c.budget -= 13;
    { c.r[4].d[0] = c.r[4].d[0] >> 36;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001248B0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 33u, depth); }
L_002AE160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x30000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[7].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 23340u)));
    c.r[4].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st64((c.r[16].w[0] + 16u), 0ull);
    st64((c.r[16].w[0] + 24u), 0ull);
    set32(c.r[4], ld32((c.r[28].w[0] - 23340u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1A8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_006B(c, 149u, depth + 1u); else { c.pc = 0x002ADB00u; return; } if (c.pc != 0x002AE1A8u) [[unlikely]] return; }
L_002AE1A8:
    set32(c.r[16], c.r[16].w[0] + 32u);
    st32((c.r[28].w[0] - 23340u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x30000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x13000000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 23340u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st64((c.r[16].w[0] + 16u), 0ull);
    st64((c.r[16].w[0] + 24u), 0ull);
    set32(c.r[4], ld32((c.r[28].w[0] - 23340u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE210u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_006B(c, 156u, depth + 1u); else { c.pc = 0x002ADD40u; return; } if (c.pc != 0x002AE210u) [[unlikely]] return; }
L_002AE210:
    set32(c.r[16], c.r[16].w[0] + 32u);
    st32((c.r[28].w[0] - 23340u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | 33ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 7;
    { st32((c.r[4].w[0] + 12u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB60u | kUnwind; return; } goto L_002ADB60; }
L_002AE250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | 20ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 7;
    { st32((c.r[4].w[0] + 12u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADD50u | kUnwind; return; } goto L_002ADD50; }
L_002AE270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] - 12416u);
    set32(c.r[3], c.r[3].w[0] - 14208u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE294; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 28044u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 10512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 12416u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE2C0; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE2C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 28036u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 8496u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 10512u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE2EC; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE2EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 28028u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7472u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 8496u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE318; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 28020u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 6240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 7472u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE344; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE344:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 28012u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 32128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 28016u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE370; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 28004u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 912u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 6240u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE39C; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE39C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 27996u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 912u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE3C8; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE3C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 27988u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 10064u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 4480u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE3F4; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE3F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 27980u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14848u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 10064u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE420; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE420:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 27972u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19184u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 14848u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE44C; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE44C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 27964u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 23808u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 19184u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE478; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE478:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 27956u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28016u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 23808u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE4A4; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE4A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[1].w[0] - 27948u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 31632u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 32128u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE4D0; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE4D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[1].w[0] - 27940u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 30384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 31632u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE4FC; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE4FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[1].w[0] - 27932u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24928u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 30384u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002AE528; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002AE528:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 27924u), c.r[3].w[0]);  c.pc = t; return; }
L_002AE540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002AE56C; } }
    c.r[3].d[0] = c.r[4].d[0] & 32767ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 28000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002AE580; } }
L_002AE56C:
    c.r[3].d[0] = c.r[4].d[0] & 32767ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 28048u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_002AE580:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 23340u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st64((c.r[16].w[0] + 8u), 0ull);
    st64((c.r[16].w[0] + 16u), 0ull);
    st64((c.r[16].w[0] + 24u), 0ull);
    set32(c.r[4], ld32((c.r[28].w[0] - 23340u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5B4u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_006B(c, 149u, depth + 1u); else { c.pc = 0x002ADB00u; return; } if (c.pc != 0x002AE5B4u) [[unlikely]] return; }
L_002AE5B4:
    set32(c.r[16], c.r[16].w[0] + 32u);
    st32((c.r[28].w[0] - 23340u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[16], ld32((c.r[28].w[0] - 23340u)));
    c.r[9].d[0] = c.r[2].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] >> 32;
    set32(c.r[6], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[7].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    st64((c.r[16].w[0]), c.r[9].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[3], 0u + 14u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 33;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { goto L_002AE748; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - 8u);  if (t) { goto L_002AE710; } }
L_002AE660:
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[16].w[0] + 16u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[16].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[16].w[0] + 16u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[16].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[16].w[0] + 16u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[16].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[16].w[0] + 16u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[16].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 43;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE660u | kUnwind; return; } goto L_002AE660; } }
    c.budget -= 1;
L_002AE710:
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AE748; } }
    c.budget -= 1;
L_002AE720:
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE720u | kUnwind; return; } goto L_002AE720; } }
    c.budget -= 1;
L_002AE748:
    st64((c.r[16].w[0]), 0ull);
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[4], ld32((c.r[28].w[0] - 23340u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE75Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 149u, depth + 1u); else { c.pc = 0x002ADB00u; return; } if (c.pc != 0x002AE75Cu) [[unlikely]] return; }
L_002AE75C:
    set32(c.r[3], c.r[16].w[0] + 16u);
    st32((c.r[28].w[0] - 23340u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[16], ld32((c.r[28].w[0] - 23340u)));
    c.r[11].d[0] = c.r[2].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    set32(c.r[8], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51000000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[9].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    st64((c.r[16].w[0]), c.r[11].d[0]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 14u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[9].w[0]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), c.r[8].d[0]);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 33;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { goto L_002AE8F8; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] - 8u);  if (t) { goto L_002AE8C0; } }
L_002AE810:
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[8].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    st64((c.r[16].w[0]), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[16].w[0] + 16u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[16].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[16].w[0] + 16u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[16].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[16].w[0] + 16u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[16].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[16].w[0] + 16u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[16].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 43;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE810u | kUnwind; return; } goto L_002AE810; } }
    c.budget -= 1;
L_002AE8C0:
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AE8F8; } }
    c.budget -= 1;
L_002AE8D0:
    c.r[8].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st64((c.r[16].w[0]), c.r[8].d[0]);
    c.r[8].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[16].w[0] + 8u), c.r[8].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE8D0u | kUnwind; return; } goto L_002AE8D0; } }
    c.budget -= 1;
L_002AE8F8:
    st64((c.r[16].w[0]), 0ull);
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[4], ld32((c.r[28].w[0] - 23340u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE90Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 156u, depth + 1u); else { c.pc = 0x002ADD40u; return; } if (c.pc != 0x002AE90Cu) [[unlikely]] return; }
L_002AE90C:
    set32(c.r[3], c.r[16].w[0] + 16u);
    st32((c.r[28].w[0] - 23340u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[4].d[0] << 36;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[5].w[0] - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 23340u)));
    c.r[9].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x13000000u);
    set32(c.r[8], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0]), c.r[9].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st64((c.r[16].w[0] + 16u), 0ull);
    st64((c.r[16].w[0] + 24u), 0ull);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 26;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  if (t) { goto L_002AE9C8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002AE9C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002AE9C8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002AE9C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AE9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE9D8; } }
L_002AE9C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23340u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9D4u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_006B(c, 149u, depth + 1u); else { c.pc = 0x002ADB00u; return; } if (c.pc != 0x002AE9D4u) [[unlikely]] return; }
L_002AE9D4:
    c.budget -= 1;
L_002AE9D8:
    set32(c.r[16], c.r[16].w[0] + 32u);
    st32((c.r[28].w[0] - 23340u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002AEA70; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 4480u);  if (t) { goto L_002AEA58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002AEA40; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AEA28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEAD8; } }
    c.budget -= 1;
L_002AEA28:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 640u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 448u);  if (t) { goto L_002AEAD8; } }
    c.budget -= 1;
L_002AEA40:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 320u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 448u);  if (t) { goto L_002AEAD8; } }
    c.budget -= 1;
L_002AEA58:
    set32(c.r[6], 0u + 320u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 448u);  if (t) { goto L_002AEAD8; } }
    c.budget -= 1;
L_002AEA70:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002AEAC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002AEAB0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AEA98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEAD8; } }
L_002AEA98:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 640u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 448u);  if (t) { goto L_002AEAD8; } }
    c.budget -= 1;
L_002AEAB0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 320u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 448u);  if (t) { goto L_002AEAD8; } }
    c.budget -= 1;
L_002AEAC8:
    set32(c.r[6], 0u + 320u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[9], 0u + 448u);
    c.budget -= 4;
L_002AEAD8:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_002AEB78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 22144u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002AC000u < 16384u) { entry = entries_006B[(t - 0x002AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002AEB00:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 199u, depth + 1u); else { c.pc = 0x002AEB90u; return; } if (c.pc != 0x002AEB0Cu) [[unlikely]] return; }
L_002AEB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEB78; } }
    c.budget -= 1;
L_002AEB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 199u, depth + 1u); else { c.pc = 0x002AEB90u; return; } if (c.pc != 0x002AEB20u) [[unlikely]] return; }
L_002AEB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEB78; } }
L_002AEB28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB34u); set32(c.r[5], 0u + 8960u);  if (depth < kMaxDepth) unit_006B(c, 199u, depth + 1u); else { c.pc = 0x002AEB90u; return; } if (c.pc != 0x002AEB34u) [[unlikely]] return; }
L_002AEB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEB78; } }
    c.budget -= 1;
L_002AEB40:
    set32(c.r[4], 0u + 8960u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 199u, depth + 1u); else { c.pc = 0x002AEB90u; return; } if (c.pc != 0x002AEB4Cu) [[unlikely]] return; }
L_002AEB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEB78; } }
    c.budget -= 1;
L_002AEB58:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB64u); set32(c.r[5], 0u + 8960u);  if (depth < kMaxDepth) unit_006B(c, 199u, depth + 1u); else { c.pc = 0x002AEB90u; return; } if (c.pc != 0x002AEB64u) [[unlikely]] return; }
L_002AEB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEB78; } }
    c.budget -= 1;
L_002AEB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB78u); set32(c.r[4], 0u + 8960u);  if (depth < kMaxDepth) unit_006B(c, 199u, depth + 1u); else { c.pc = 0x002AEB90u; return; } if (c.pc != 0x002AEB78u) [[unlikely]] return; }
L_002AEB78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AEB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] << 32;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[8].d[0] << 32;
    set32(c.r[16], ld32((c.r[28].w[0] - 23340u)));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[10].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[9].d[0] << 32;
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[12].d[0] = c.r[7].d[0] | 6ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0]), c.r[12].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[5].d[0] = 0ull | 32773ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[9].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x51000000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[8].d[0] | 6ull;
    st32((c.r[16].w[0] + 8u), c.r[11].w[0]);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x010A0000u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    set32(c.r[8], 0u + 14u);
    c.r[5].d[0] = c.r[4].d[0] | c.r[10].d[0];
    st64((c.r[16].w[0] + 16u), c.r[9].d[0]);
    st64((c.r[16].w[0] + 24u), c.r[8].d[0]);
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st64((c.r[16].w[0]), c.r[4].d[0]);
    c.r[7].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], 0u + 80u);
    c.r[5].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[16].w[0] + 8u), c.r[4].d[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 81u);
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[5], 0u + 82u);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[3], 0u + 83u);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    set32(c.r[2], 0u + 63u);
    st64((c.r[16].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 16u), c.r[4].d[0]);
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), 0ull);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 66;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC98u); set32(c.r[4], ld32((c.r[28].w[0] - 23340u)));  if (depth < kMaxDepth) unit_006B(c, 151u, depth + 1u); else { c.pc = 0x002ADB60u; return; } if (c.pc != 0x002AEC98u) [[unlikely]] return; }
L_002AEC98:
    set32(c.r[3], c.r[16].w[0] + 16u);
    st32((c.r[28].w[0] - 23340u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AECB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 27744u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE5D0u | kUnwind; return; } goto L_002AE5D0; }
L_002AECC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 27856u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE5D0u | kUnwind; return; } goto L_002AE5D0; }
L_002AECD0:
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 20312u), c.r[3].w[0]);  c.pc = t; return; }
L_002AECE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 20312u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AED08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED04u);  if (depth < kMaxDepth) unit_006B(c, 201u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002AED04u) [[unlikely]] return; }
L_002AED04:
    c.budget -= 1;
L_002AED08:
    set32(c.r[2], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 816u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002AED30; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED24u); set32(c.r[4], c.r[4].w[0] - 27888u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002AED24u) [[unlikely]] return; }
L_002AED24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AED40; } }
    c.budget -= 1;
L_002AED30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED40u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002AED40u) [[unlikely]] return; }
L_002AED40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 20312u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AED60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED5Cu);  if (depth < kMaxDepth) unit_006B(c, 202u, depth + 1u); else { c.pc = 0x002AECC0u; return; } if (c.pc != 0x002AED5Cu) [[unlikely]] return; }
L_002AED5C:
    c.budget -= 1;
L_002AED60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AED70:
    set32(c.r[4], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { st16((c.r[1].w[0] - 7722u), static_cast<std::uint16_t>(0u));  goto L_002AEE50; }
L_002AEDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[1].w[0] - 7722u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDD0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 218u, depth + 1u); else { c.pc = 0x002AEE50u; return; } if (c.pc != 0x002AEDD0u) [[unlikely]] return; }
L_002AEDD0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100CD0u; return; } if (c.pc != 0x002AEDDCu) [[unlikely]] return; }
L_002AEDDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDE8u); set32(c.r[4], c.r[4].w[0] - 14752u);  if (depth < kMaxDepth) unit_0000(c, 129u, depth + 1u); else { c.pc = 0x00101350u; return; } if (c.pc != 0x002AEDE8u) [[unlikely]] return; }
L_002AEDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AEE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE24u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 218u, depth + 1u); else { c.pc = 0x002AEE50u; return; } if (c.pc != 0x002AEE24u) [[unlikely]] return; }
L_002AEE24:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100CD0u; return; } if (c.pc != 0x002AEE30u) [[unlikely]] return; }
L_002AEE30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE3Cu); set32(c.r[4], c.r[4].w[0] - 14752u);  if (depth < kMaxDepth) unit_0000(c, 129u, depth + 1u); else { c.pc = 0x00101350u; return; } if (c.pc != 0x002AEE3Cu) [[unlikely]] return; }
L_002AEE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AEE50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[1].w[0] - 20308u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20284u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20336u), c.r[21].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20332u), c.r[22].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19380u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEEB8u); st32((c.r[1].w[0] - 19376u), 0u);  if (depth < kMaxDepth) unit_006B(c, 203u, depth + 1u); else { c.pc = 0x002AECD0u; return; } if (c.pc != 0x002AEEB8u) [[unlikely]] return; }
L_002AEEB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; st32((c.r[1].w[0] - 20328u), 0u);  if (t) { goto L_002AEEE0; } }
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[18], 0u + 640u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20316u), c.r[3].w[0]);  if (t) { goto L_002AEEF0; } }
    c.budget -= 1;
L_002AEEE0:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[18], 0u + 512u);
    st32((c.r[1].w[0] - 20316u), c.r[3].w[0]);
    c.budget -= 4;
L_002AEEF0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[3].d[0];  if (t) { goto L_002AF098; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[5].d[0];  if (t) { goto L_002AEFD8; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002AEF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF108; } }
L_002AEF18:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_002AEFA0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[5].d[0];  if (t) { goto L_002AEF68; } }
    c.r[4].d[0] = c.r[19].d[0] << 48;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF40u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 42u, depth + 1u); else { c.pc = 0x001002E8u; return; } if (c.pc != 0x002AEF40u) [[unlikely]] return; }
L_002AEF40:
    set32(c.r[4], 0u + 636u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19388u), c.r[4].w[0]);
    set32(c.r[3], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[17], 0u + 224u);
    set32(c.r[16], 0u + 448u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 19384u), c.r[3].w[0]);  if (t) { goto L_002AF108; } }
    c.budget -= 1;
L_002AEF68:
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF7Cu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 42u, depth + 1u); else { c.pc = 0x001002E8u; return; } if (c.pc != 0x002AEF7Cu) [[unlikely]] return; }
L_002AEF7C:
    set32(c.r[4], 0u + 656u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19388u), c.r[4].w[0]);
    set32(c.r[3], 0u + 98u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[17], 0u + 224u);
    set32(c.r[16], 0u + 448u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 19384u), c.r[3].w[0]);  if (t) { goto L_002AF108; } }
L_002AEFA0:
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFB4u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 42u, depth + 1u); else { c.pc = 0x001002E8u; return; } if (c.pc != 0x002AEFB4u) [[unlikely]] return; }
L_002AEFB4:
    set32(c.r[4], 0u + 656u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19388u), c.r[4].w[0]);
    set32(c.r[3], 0u + 72u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[17], 0u + 256u);
    set32(c.r[16], 0u + 512u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 19384u), c.r[3].w[0]);  if (t) { goto L_002AF108; } }
L_002AEFD8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_002AF060; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[5].d[0];  if (t) { goto L_002AF028; } }
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF000u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 42u, depth + 1u); else { c.pc = 0x001002E8u; return; } if (c.pc != 0x002AF000u) [[unlikely]] return; }
L_002AF000:
    set32(c.r[3], 0u + 636u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19388u), c.r[3].w[0]);
    set32(c.r[17], 0u + 448u);
    set32(c.r[3], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 19384u), c.r[3].w[0]);  if (t) { goto L_002AF108; } }
    c.budget -= 1;
L_002AF028:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF038u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 42u, depth + 1u); else { c.pc = 0x001002E8u; return; } if (c.pc != 0x002AF038u) [[unlikely]] return; }
L_002AF038:
    set32(c.r[3], 0u + 656u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19388u), c.r[3].w[0]);
    set32(c.r[17], 0u + 448u);
    set32(c.r[3], 0u + 98u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 19384u), c.r[3].w[0]);  if (t) { goto L_002AF108; } }
    c.budget -= 1;
L_002AF060:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF070u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 42u, depth + 1u); else { c.pc = 0x001002E8u; return; } if (c.pc != 0x002AF070u) [[unlikely]] return; }
L_002AF070:
    set32(c.r[3], 0u + 656u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19388u), c.r[3].w[0]);
    set32(c.r[17], 0u + 512u);
    set32(c.r[3], 0u + 72u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 19384u), c.r[3].w[0]);  if (t) { goto L_002AF108; } }
    c.budget -= 1;
L_002AF098:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002AF0C0; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[18], 0u + 640u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20316u), c.r[2].w[0]);  if (t) { goto L_002AF0D0; } }
    c.budget -= 1;
L_002AF0C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20316u), c.r[3].w[0]);
    set32(c.r[18], 0u + 512u);
    c.budget -= 4;
L_002AF0D0:
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF0E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 42u, depth + 1u); else { c.pc = 0x001002E8u; return; } if (c.pc != 0x002AF0E8u) [[unlikely]] return; }
L_002AF0E8:
    set32(c.r[3], 0u + 318u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19388u), c.r[3].w[0]);
    set32(c.r[17], 0u + 448u);
    set32(c.r[3], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[1].w[0] - 19384u), c.r[3].w[0]);
    c.budget -= 8;
L_002AF108:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20320u), c.r[16].w[0]);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20324u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 20308u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AF198; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AF170; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AF150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF198; } }
    c.budget -= 1;
L_002AF150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20304u), c.r[3].w[0]);
    set32(c.r[3], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20300u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20296u), c.r[3].w[0]);  if (t) { goto L_002AF1B8; } }
L_002AF170:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20304u), c.r[3].w[0]);
    set32(c.r[3], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20300u), c.r[3].w[0]);
    set32(c.r[3], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20296u), c.r[3].w[0]);  if (t) { goto L_002AF1B8; } }
L_002AF198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20304u), 0u);
    set32(c.r[4], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], 0u + 32u);
    st32((c.r[1].w[0] - 20300u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20296u), c.r[3].w[0]);
    c.budget -= 8;
L_002AF1B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20292u), 0u);
    set32(c.r[3], 0u + 4480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 20284u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20288u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AF290; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AF258; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002AF200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF290; } }
L_002AF200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 20308u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AF220; } }
    set32(c.r[3], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20280u), c.r[3].w[0]);  if (t) { goto L_002AF230; } }
L_002AF220:
    set32(c.r[3], 0u + 58u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20280u), c.r[3].w[0]);
    c.budget -= 4;
L_002AF230:
    set32(c.r[4], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    st32((c.r[1].w[0] - 20276u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20272u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20264u), c.r[3].w[0]);  if (t) { goto L_002AF2E8; } }
L_002AF258:
    set32(c.r[3], 0u + 49u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20276u), c.r[3].w[0]);
    set32(c.r[3], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20272u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = c.r[3].d[0] | 65320ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20264u), c.r[3].w[0]);  if (t) { goto L_002AF2E8; } }
L_002AF290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 20308u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AF2B0; } }
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20304u), c.r[3].w[0]);
    c.budget -= 3;
L_002AF2B0:
    set32(c.r[3], 0u + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20276u), c.r[3].w[0]);
    set32(c.r[3], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20272u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = c.r[3].d[0] | 65320ull;
    st32((c.r[1].w[0] - 20264u), c.r[3].w[0]);
    c.budget -= 14;
L_002AF2E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19396u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], 0u + 8960u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20268u), c.r[4].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], c.r[17].w[0] >> 1);
    set32(c.r[4], 0u + 2048u);
    st32((c.r[1].w[0] - 19392u), 0u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 19400u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] >> 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] - 19040u);
    st32((c.r[1].w[0] - 19404u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] >> 6);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    st32((c.r[1].w[0] - 20252u), 0u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[7].d[0] = c.r[3].d[0] << 16;
    st32((c.r[1].w[0] - 19196u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = c.r[3].d[0] | 9ull;
    st32((c.r[1].w[0] - 20256u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st32((c.r[1].w[0] - 19192u), 0u);
    c.r[3].d[0] = 0ull | 32776ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[11].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[1].w[0] - 19188u), 0u);
    set32(c.r[10], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], 0u + 76u);
    st32((c.r[1].w[0] - 19200u), c.r[5].w[0]);
    set32(c.r[3], 0u + 77u);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[8].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[6].d[0] << 32;
    st32((c.r[8].w[0] + 8u), 0u);
    set32(c.r[14], 0u + 78u);
    st32((c.r[8].w[0] + 12u), 0u);
    set32(c.r[13], 0u + 79u);
    st64((c.r[1].w[0] - 19184u), c.r[11].d[0]);
    set32(c.r[12], 0u + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19176u), c.r[10].d[0]);
    st64((c.r[8].w[0] + 16u), c.r[11].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[8].w[0] + 24u), c.r[10].d[0]);
    set32(c.r[11], 0u + 25u);
    st64((c.r[1].w[0] - 19160u), c.r[4].d[0]);
    set32(c.r[10], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19144u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[17].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[17].d[0] = c.r[17].d[0] << 24;
    set32(c.r[16], ld32((c.r[1].w[0] - 20288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[16], c.r[16].w[0] >> 5);
    set32(c.r[15], ld32((c.r[1].w[0] - 20292u)));
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] | c.r[7].d[0];
    c.r[16].d[0] = c.r[17].d[0] | c.r[16].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[5].d[0];
    set32(c.r[15], c.r[15].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    st64((c.r[1].w[0] - 19168u), c.r[16].d[0]);
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[15].d[0] = c.r[15].d[0] | c.r[7].d[0];
    st64((c.r[1].w[0] - 19152u), c.r[16].d[0]);
    c.r[15].d[0] = c.r[17].d[0] | c.r[15].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[15].d[0] = c.r[15].d[0] | c.r[5].d[0];
    st64((c.r[8].w[0] + 32u), c.r[15].d[0]);
    c.r[16].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[16].d[0] = c.r[16].d[0] << 24;
    set32(c.r[15], ld32((c.r[1].w[0] - 20292u)));
    set32(c.r[15], c.r[15].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    c.r[7].d[0] = c.r[15].d[0] | c.r[7].d[0];
    c.r[7].d[0] = c.r[16].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    st64((c.r[8].w[0] + 48u), c.r[5].d[0]);
    st64((c.r[8].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[8].w[0] + 56u), c.r[3].d[0]);
    st64((c.r[1].w[0] - 19128u), c.r[14].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19112u), c.r[13].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 20268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], c.r[4].w[0] >> 5);
    c.r[3].d[0] = ld32((c.r[1].w[0] - 20280u));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[1].w[0] - 19136u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19120u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 64u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 20268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], c.r[4].w[0] >> 5);
    c.r[3].d[0] = ld32((c.r[1].w[0] - 20280u));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[8].w[0] + 80u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 72u), c.r[14].d[0]);
    st64((c.r[8].w[0] + 88u), c.r[13].d[0]);
    st64((c.r[1].w[0] - 19096u), c.r[12].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19080u), c.r[11].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 19404u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], ld32((c.r[1].w[0] - 19400u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[1].w[0] - 19104u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19088u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 96u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 19404u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], ld32((c.r[1].w[0] - 19400u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[8].w[0] + 112u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 104u), c.r[12].d[0]);
    st64((c.r[8].w[0] + 120u), c.r[11].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 20308u)));
    c.budget -= 165;
    { const bool t = c.r[3].d[0] != c.r[10].d[0]; set32(c.r[9], c.r[9].w[0] - 19200u);  if (t) { goto L_002AF588; } }
    st64((c.r[9].w[0] + 128u), c.r[6].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[8].w[0] + 128u), c.r[6].d[0]);  if (t) { goto L_002AF590; } }
L_002AF588:
    st64((c.r[9].w[0] + 128u), 0ull);
    st64((c.r[8].w[0] + 128u), 0ull);
    c.budget -= 2;
L_002AF590:
    set32(c.r[3], 0u + 69u);
    st64((c.r[9].w[0] + 136u), c.r[3].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[8].w[0] + 136u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 144u), c.r[4].d[0]);
    set32(c.r[3], 0u + 70u);
    st64((c.r[8].w[0] + 144u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 152u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 152u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002AF5E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 7744u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19200u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 8560u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[7].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[2], ld32((c.r[1].w[0] - 20332u)));
    set32(c.r[7], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[4].w[0] + 920u);  if (t) { goto L_002AF708; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 20256u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);  if (t) { goto L_002AF6A8; } }
    set32(c.r[3], ld32((c.r[1].w[0] - 19404u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[1].w[0] - 19400u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 19404u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[1].w[0] - 19400u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 112u), c.r[2].d[0]);  if (t) { goto L_002AF708; } }
L_002AF6A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 19400u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[1].w[0] - 19404u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 19400u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[1].w[0] - 19404u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[16].w[0] + 112u), c.r[2].d[0]);
    c.budget -= 24;
L_002AF708:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AF720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF718u);  if (depth < kMaxDepth) unit_0001(c, 84u, depth + 1u); else { c.pc = 0x00104590u; return; } if (c.pc != 0x002AF718u) [[unlikely]] return; }
L_002AF718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF728; } }
L_002AF720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF728u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x002AF728u) [[unlikely]] return; }
L_002AF728:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF734u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 183u, depth + 1u); else { c.pc = 0x00101D40u; return; } if (c.pc != 0x002AF734u) [[unlikely]] return; }
L_002AF734:
    c.budget -= 1;
L_002AF738:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF748u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 202u, depth + 1u); else { c.pc = 0x00101FE0u; return; } if (c.pc != 0x002AF748u) [[unlikely]] return; }
L_002AF748:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF738u | kUnwind; return; } goto L_002AF738; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[9], ld32((c.r[1].w[0] - 19388u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 19380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 20316u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 19384u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 19376u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[1].w[0] - 20332u)));
    c.budget -= 17;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);  if (t) { goto L_002AFB08; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002AF898; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AF7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFC00; } }
    c.budget -= 1;
L_002AF7B8:
    set32(c.r[5], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0] + 32u), c.r[5].d[0]);
    set32(c.r[5], 0u + 102u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[1].w[0]), c.r[5].d[0]);  if (t) { goto L_002AF808; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20292u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st64((c.r[1].w[0] + 144u), c.r[5].d[0]);  if (t) { goto L_002AF838; } }
L_002AF808:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20288u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[1].w[0] + 144u), c.r[5].d[0]);
    c.budget -= 12;
L_002AF838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = ld32((c.r[1].w[0] - 20316u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] << 12;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[3], 0u + 2559u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = c.r[5].d[0] << 23;
    set32(c.r[3], ld32((c.r[1].w[0] - 20320u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st64((c.r[1].w[0] + 160u), c.r[3].d[0]);  if (t) { goto L_002AFC00; } }
    c.budget -= 1;
L_002AF898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 20328u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);  if (t) { goto L_002AFA28; } }
    set32(c.r[5], 0u + 32551u);
    st64((c.r[1].w[0] + 32u), c.r[6].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[1].w[0]), c.r[5].d[0]);  if (t) { goto L_002AF920; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20292u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[1].w[0] + 112u), c.r[5].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20292u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st64((c.r[1].w[0] + 144u), c.r[5].d[0]);  if (t) { goto L_002AF980; } }
L_002AF920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20288u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[1].w[0] + 112u), c.r[5].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20288u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[1].w[0] + 144u), c.r[5].d[0]);
    c.budget -= 24;
L_002AF980:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[7].d[0] = ld32((c.r[1].w[0] - 20316u));
    c.r[6].d[0] = c.r[4].d[0] << 32;
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[4].d[0] << 12;
    c.r[3].d[0] = c.r[3].d[0] << 12;
    c.r[8].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[5], 0u + 2559u);
    set32(c.r[3], ld32((c.r[1].w[0] - 20320u)));
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[7].d[0] << 23;
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[1].w[0] + 128u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = ld32((c.r[1].w[0] - 20316u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = c.r[5].d[0] << 23;
    set32(c.r[3], ld32((c.r[1].w[0] - 20320u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st64((c.r[1].w[0] + 160u), c.r[3].d[0]);  if (t) { goto L_002AFC00; } }
L_002AFA28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0] + 32u), c.r[6].d[0]);
    set32(c.r[5], 0u + 102u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[1].w[0]), c.r[5].d[0]);  if (t) { goto L_002AFA78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20292u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st64((c.r[1].w[0] + 144u), c.r[5].d[0]);  if (t) { goto L_002AFAA8; } }
    c.budget -= 1;
L_002AFA78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20288u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[1].w[0] + 144u), c.r[5].d[0]);
    c.budget -= 12;
L_002AFAA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = ld32((c.r[1].w[0] - 20316u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] << 12;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[3], 0u + 2559u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = c.r[5].d[0] << 23;
    set32(c.r[3], ld32((c.r[1].w[0] - 20320u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st64((c.r[1].w[0] + 160u), c.r[3].d[0]);  if (t) { goto L_002AFC00; } }
    c.budget -= 1;
L_002AFB08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0] + 32u), 0ull);
    set32(c.r[5], 0u + 102u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[1].w[0]), c.r[5].d[0]);  if (t) { goto L_002AFB58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20292u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st64((c.r[1].w[0] + 144u), c.r[5].d[0]);  if (t) { goto L_002AFB88; } }
    c.budget -= 1;
L_002AFB58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = ld32((c.r[1].w[0] - 20304u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[6].d[0] = c.r[6].d[0] << 15;
    set32(c.r[5], ld32((c.r[1].w[0] - 20288u)));
    set32(c.r[5], c.r[5].w[0] >> 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | 5120ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[1].w[0] + 144u), c.r[5].d[0]);
    c.budget -= 12;
L_002AFB88:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 12;
    c.r[5].d[0] = c.r[5].d[0] | 61951ull;
    c.r[6].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[3], 0u + 1279u);
    st64((c.r[1].w[0] + 192u), c.r[5].d[0]);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = ld32((c.r[1].w[0] - 20316u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[5].d[0] = c.r[5].d[0] << 23;
    set32(c.r[3], ld32((c.r[1].w[0] - 20320u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[1].w[0] + 160u), c.r[3].d[0]);
    c.budget -= 30;
L_002AFC00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0] + 208u), 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AFC20:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[1].w[0] - 19380u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 19376u), c.r[3].w[0]);  c.pc = t; return; }
L_002AFC50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23344u), c.r[3].w[0]);  c.pc = t; return; }
L_002AFC60:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23348u), c.r[3].w[0]);  c.pc = t; return; }
L_002AFC70:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23352u), c.r[3].w[0]);  c.pc = t; return; }
L_002AFC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCB4u); set32(c.r[4], c.r[4].w[0] - 29896u);  if (depth < kMaxDepth) unit_0049(c, 391u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x002AFCB4u) [[unlikely]] return; }
L_002AFCB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCBCu);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002AFCBCu) [[unlikely]] return; }
L_002AFCBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCE4u); set32(c.r[4], c.r[4].w[0] - 30112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFCE4u) [[unlikely]] return; }
L_002AFCE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCF0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002AFCF0u) [[unlikely]] return; }
L_002AFCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCF8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002AFCF8u) [[unlikely]] return; }
L_002AFCF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD04u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002AFD04u) [[unlikely]] return; }
L_002AFD04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFD20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27536u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFD4Cu) [[unlikely]] return; }
L_002AFD4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AFD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD84u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002AFD84u) [[unlikely]] return; }
L_002AFD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002AFD8Cu) [[unlikely]] return; }
L_002AFD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD94u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002AFD94u) [[unlikely]] return; }
L_002AFD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD9Cu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002AFD9Cu) [[unlikely]] return; }
L_002AFD9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDA8u); set32(c.r[4], c.r[2].w[0] + 158u);  if (depth < kMaxDepth) unit_0074(c, 302u, depth + 1u); else { c.pc = 0x002D2F40u; return; } if (c.pc != 0x002AFDA8u) [[unlikely]] return; }
L_002AFDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDB0u);  if (depth < kMaxDepth) unit_007C(c, 14u, depth + 1u); else { c.pc = 0x002F0040u; return; } if (c.pc != 0x002AFDB0u) [[unlikely]] return; }
L_002AFDB0:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AFE88; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 191u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFE88; } }
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFE60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002AFE88; } }
    c.budget -= 1;
L_002AFE60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
L_002AFE88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEB4u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0074(c, 324u, depth + 1u); else { c.pc = 0x002D3550u; return; } if (c.pc != 0x002AFEB4u) [[unlikely]] return; }
L_002AFEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEE0u);  if (depth < kMaxDepth) unit_007C(c, 30u, depth + 1u); else { c.pc = 0x002F0110u; return; } if (c.pc != 0x002AFEE0u) [[unlikely]] return; }
L_002AFEE0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AFF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEF0u);  if (depth < kMaxDepth) unit_007C(c, 32u, depth + 1u); else { c.pc = 0x002F0130u; return; } if (c.pc != 0x002AFEF0u) [[unlikely]] return; }
L_002AFEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEF8u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002AFEF8u) [[unlikely]] return; }
L_002AFEF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF04u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));  if (depth < kMaxDepth) unit_007F(c, 182u, depth + 1u); else { c.pc = 0x002FF0C0u; return; } if (c.pc != 0x002AFF04u) [[unlikely]] return; }
L_002AFF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF0Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 43u, depth + 1u); else { c.pc = 0x00300100u; return; } if (c.pc != 0x002AFF0Cu) [[unlikely]] return; }
L_002AFF0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 15664u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23776u), c.r[3].w[0]);
    set32(c.r[5], 0u + 8u);
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF3Cu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002AFF3Cu) [[unlikely]] return; }
L_002AFF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF44u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002AFF44u) [[unlikely]] return; }
L_002AFF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 46u);  if (t) { goto L_002AFF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF54u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002AFF54u) [[unlikely]] return; }
L_002AFF54:
    c.budget -= 1;
L_002AFF58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AFF64:
    c.budget -= 3;
L_002AFF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002AFF80u) [[unlikely]] return; }
L_002AFF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFFA0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002AFFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AFFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_002AFFB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27520u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFFDCu) [[unlikely]] return; }
L_002AFFDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002AFFE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AFFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 4;
    [[clang::musttail]] return unit_006C(c, 1u, depth);
}

}
