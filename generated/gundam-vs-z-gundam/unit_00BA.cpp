#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BA[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0,
    0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159,
    0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169,
    0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 185,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0,
    0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E8000;
    case 2u: goto L_003E8068;
    case 3u: goto L_003E80D0;
    case 4u: goto L_003E8128;
    case 5u: goto L_003E8134;
    case 6u: goto L_003E81C0;
    case 7u: goto L_003E81CC;
    case 8u: goto L_003E8330;
    case 9u: goto L_003E8520;
    case 10u: goto L_003E8550;
    case 11u: goto L_003E85A0;
    case 12u: goto L_003E85B0;
    case 13u: goto L_003E85BC;
    case 14u: goto L_003E85F0;
    case 15u: goto L_003E8640;
    case 16u: goto L_003E8650;
    case 17u: goto L_003E865C;
    case 18u: goto L_003E8690;
    case 19u: goto L_003E86E0;
    case 20u: goto L_003E86F0;
    case 21u: goto L_003E86FC;
    case 22u: goto L_003E8730;
    case 23u: goto L_003E8780;
    case 24u: goto L_003E8790;
    case 25u: goto L_003E879C;
    case 26u: goto L_003E87D0;
    case 27u: goto L_003E87F8;
    case 28u: goto L_003E8804;
    case 29u: goto L_003E8810;
    case 30u: goto L_003E881C;
    case 31u: goto L_003E8900;
    case 32u: goto L_003E8948;
    case 33u: goto L_003E8970;
    case 34u: goto L_003E8988;
    case 35u: goto L_003E89B8;
    case 36u: goto L_003E89D0;
    case 37u: goto L_003E8A40;
    case 38u: goto L_003E8A54;
    case 39u: goto L_003E8AA0;
    case 40u: goto L_003E8AF0;
    case 41u: goto L_003E8B40;
    case 42u: goto L_003E8B80;
    case 43u: goto L_003E8B9C;
    case 44u: goto L_003E8BD8;
    case 45u: goto L_003E8BE4;
    case 46u: goto L_003E8C10;
    case 47u: goto L_003E8C38;
    case 48u: goto L_003E8C94;
    case 49u: goto L_003E8CEC;
    case 50u: goto L_003E8D44;
    case 51u: goto L_003E8D9C;
    case 52u: goto L_003E8DF4;
    case 53u: goto L_003E8E4C;
    case 54u: goto L_003E8E58;
    case 55u: goto L_003E8EA4;
    case 56u: goto L_003E8F04;
    case 57u: goto L_003E8F64;
    case 58u: goto L_003E8FC4;
    case 59u: goto L_003E9024;
    case 60u: goto L_003E9084;
    case 61u: goto L_003E90E4;
    case 62u: goto L_003E9144;
    case 63u: goto L_003E91A4;
    case 64u: goto L_003E9204;
    case 65u: goto L_003E9264;
    case 66u: goto L_003E92C8;
    case 67u: goto L_003E9330;
    case 68u: goto L_003E9354;
    case 69u: goto L_003E9410;
    case 70u: goto L_003E9430;
    case 71u: goto L_003E94B4;
    case 72u: goto L_003E9528;
    case 73u: goto L_003E9538;
    case 74u: goto L_003E9544;
    case 75u: goto L_003E954C;
    case 76u: goto L_003E9564;
    case 77u: goto L_003E9570;
    case 78u: goto L_003E9610;
    case 79u: goto L_003E9620;
    case 80u: goto L_003E962C;
    case 81u: goto L_003E9634;
    case 82u: goto L_003E9640;
    case 83u: goto L_003E97B4;
    case 84u: goto L_003E97C0;
    case 85u: goto L_003E97CC;
    case 86u: goto L_003E9810;
    case 87u: goto L_003E9894;
    case 88u: goto L_003E98C0;
    case 89u: goto L_003E9908;
    case 90u: goto L_003E9918;
    case 91u: goto L_003E9924;
    case 92u: goto L_003E992C;
    case 93u: goto L_003E9944;
    case 94u: goto L_003E9950;
    case 95u: goto L_003E99F0;
    case 96u: goto L_003E9A00;
    case 97u: goto L_003E9A0C;
    case 98u: goto L_003E9A14;
    case 99u: goto L_003E9A20;
    case 100u: goto L_003E9B90;
    case 101u: goto L_003E9B9C;
    case 102u: goto L_003E9BA8;
    case 103u: goto L_003E9BF0;
    case 104u: goto L_003E9C78;
    case 105u: goto L_003E9CE8;
    case 106u: goto L_003E9CF8;
    case 107u: goto L_003E9D04;
    case 108u: goto L_003E9D0C;
    case 109u: goto L_003E9D24;
    case 110u: goto L_003E9D30;
    case 111u: goto L_003E9DD0;
    case 112u: goto L_003E9DE0;
    case 113u: goto L_003E9DEC;
    case 114u: goto L_003E9DF4;
    case 115u: goto L_003E9E00;
    case 116u: goto L_003E9F74;
    case 117u: goto L_003E9F80;
    case 118u: goto L_003E9FC0;
    case 119u: goto L_003EA048;
    case 120u: goto L_003EA0B8;
    case 121u: goto L_003EA0C8;
    case 122u: goto L_003EA0D4;
    case 123u: goto L_003EA0DC;
    case 124u: goto L_003EA0EC;
    case 125u: goto L_003EA190;
    case 126u: goto L_003EA1A0;
    case 127u: goto L_003EA1AC;
    case 128u: goto L_003EA1B4;
    case 129u: goto L_003EA1C8;
    case 130u: goto L_003EA1D8;
    case 131u: goto L_003EA248;
    case 132u: goto L_003EA354;
    case 133u: goto L_003EA360;
    case 134u: goto L_003EA3A0;
    case 135u: goto L_003EA428;
    case 136u: goto L_003EA498;
    case 137u: goto L_003EA4A8;
    case 138u: goto L_003EA4B4;
    case 139u: goto L_003EA4BC;
    case 140u: goto L_003EA4D4;
    case 141u: goto L_003EA4E4;
    case 142u: goto L_003EA580;
    case 143u: goto L_003EA590;
    case 144u: goto L_003EA59C;
    case 145u: goto L_003EA5A4;
    case 146u: goto L_003EA5B0;
    case 147u: goto L_003EA734;
    case 148u: goto L_003EA740;
    case 149u: goto L_003EA780;
    case 150u: goto L_003EA808;
    case 151u: goto L_003EA878;
    case 152u: goto L_003EA888;
    case 153u: goto L_003EA894;
    case 154u: goto L_003EA89C;
    case 155u: goto L_003EA8B4;
    case 156u: goto L_003EA8C4;
    case 157u: goto L_003EA960;
    case 158u: goto L_003EA970;
    case 159u: goto L_003EA97C;
    case 160u: goto L_003EA984;
    case 161u: goto L_003EA990;
    case 162u: goto L_003EAB14;
    case 163u: goto L_003EAB20;
    case 164u: goto L_003EAB60;
    case 165u: goto L_003EABE8;
    case 166u: goto L_003EAC58;
    case 167u: goto L_003EAC68;
    case 168u: goto L_003EAC74;
    case 169u: goto L_003EAC7C;
    case 170u: goto L_003EAC94;
    case 171u: goto L_003EACA0;
    case 172u: goto L_003EAD40;
    case 173u: goto L_003EAD50;
    case 174u: goto L_003EAD5C;
    case 175u: goto L_003EAD64;
    case 176u: goto L_003EAD70;
    case 177u: goto L_003EAE98;
    case 178u: goto L_003EAEE4;
    case 179u: goto L_003EAEF0;
    case 180u: goto L_003EAF30;
    case 181u: goto L_003EAFD8;
    case 182u: goto L_003EB058;
    case 183u: goto L_003EB068;
    case 184u: goto L_003EB074;
    case 185u: goto L_003EB07C;
    case 186u: goto L_003EB08C;
    case 187u: goto L_003EB14C;
    case 188u: goto L_003EB15C;
    case 189u: goto L_003EB168;
    case 190u: goto L_003EB170;
    case 191u: goto L_003EB184;
    case 192u: goto L_003EB194;
    case 193u: goto L_003EB344;
    case 194u: goto L_003EB3D0;
    case 195u: goto L_003EB478;
    case 196u: goto L_003EB4F8;
    case 197u: goto L_003EB508;
    case 198u: goto L_003EB514;
    case 199u: goto L_003EB51C;
    case 200u: goto L_003EB52C;
    case 201u: goto L_003EB5F4;
    case 202u: goto L_003EB604;
    case 203u: goto L_003EB610;
    case 204u: goto L_003EB618;
    case 205u: goto L_003EB62C;
    case 206u: goto L_003EB638;
    case 207u: goto L_003EB7E4;
    case 208u: goto L_003EB880;
    case 209u: goto L_003EB920;
    case 210u: goto L_003EB9A0;
    case 211u: goto L_003EB9B0;
    case 212u: goto L_003EB9BC;
    case 213u: goto L_003EB9C4;
    case 214u: goto L_003EB9D8;
    case 215u: goto L_003EB9E4;
    case 216u: goto L_003EBBC0;
    case 217u: goto L_003EBBD0;
    case 218u: goto L_003EBC78;
    case 219u: goto L_003EBCF8;
    case 220u: goto L_003EBD08;
    case 221u: goto L_003EBD14;
    case 222u: goto L_003EBD1C;
    case 223u: goto L_003EBD2C;
    case 224u: goto L_003EBDA4;
    case 225u: goto L_003EBDB4;
    case 226u: goto L_003EBDC0;
    case 227u: goto L_003EBDC8;
    case 228u: goto L_003EBDDC;
    case 229u: goto L_003EBDE8;
    case 230u: goto L_003EBF9C;
    default: bad_entry(c, 0x003E8000u); return;
    }
L_003E8000:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_003E8018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003E8020; } }
L_003E8018:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003E8020:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003E8050; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E8050; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003E80D0; } }
L_003E8050:
    c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_003E80D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003E80D0; } }
    c.budget -= 1;
L_003E8068:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E8088; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003E8090; } }
    c.budget -= 1;
L_003E8088:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003E8090:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003E80B8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2048u);  if (t) { goto L_003E80B8; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003E80D0; } }
L_003E80B8:
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003E80D0; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003E80D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 65u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003E82C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003E8270; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003E80F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8308; } }
L_003E80F8:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E8198; } }
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8128u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E8128u) [[unlikely]] return; }
L_003E8128:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8134u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E8134u) [[unlikely]] return; }
L_003E8134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E8170; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E8180; } }
    c.budget -= 1;
L_003E8170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003E8180:
    set32(c.r[3], 0u - 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003E8308; } }
L_003E8198:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E8230; } }
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81C0u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E81C0u) [[unlikely]] return; }
L_003E81C0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81CCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E81CCu) [[unlikely]] return; }
L_003E81CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E8208; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E8218; } }
    c.budget -= 1;
L_003E8208:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003E8218:
    set32(c.r[3], 0u + 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003E8308; } }
L_003E8230:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003E8248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003E8308; } }
    c.budget -= 1;
L_003E8248:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E8260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003E8308; } }
L_003E8260:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003E8308; } }
    c.budget -= 1;
L_003E8270:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E8290; } }
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003E8308; } }
L_003E8290:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003E8308; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E8308; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003E8308; } }
L_003E82C0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E82E0; } }
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003E8308; } }
L_003E82E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003E8308; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003E8308; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003E8308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E8330:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    set32(c.r[8], c.r[4].w[0] + 304u);
    set32(c.r[6], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[3], c.r[8].w[0] + 26u);  if (t) { goto L_003E8450; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_003E8390; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003E8368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8510; } }
    c.budget -= 1;
L_003E8368:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 35u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[8].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 35u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_003E8510; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003E8510; } }
L_003E8390:
    set32(c.r[6], ld32((c.r[4].w[0] + 5080u)));
    set32(c.r[6], c.r[6].w[0] + 32u);
    st32((c.r[4].w[0] + 5080u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 5080u));
    st32((c.r[4].w[0] + 5080u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 5080u)));
    c.r[1].d[0] = c.r[6].sd[0] < 16353ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], 0u + 16384u);  if (t) { goto L_003E83C0; } }
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    st32((c.r[4].w[0] + 5080u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
L_003E83C0:
    set32(c.r[6], ld32((c.r[4].w[0] + 5104u)));
    c.r[1].d[0] = 0ull | 49184ull;
    set32(c.r[6], c.r[6].w[0] - 32u);
    st32((c.r[4].w[0] + 5104u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 5104u));
    st32((c.r[4].w[0] + 5104u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 5104u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull | 49152ull;  if (t) { goto L_003E83F8; } }
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    st32((c.r[4].w[0] + 5104u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
L_003E83F8:
    set32(c.r[6], ld32((c.r[4].w[0] + 5136u)));
    set32(c.r[6], c.r[6].w[0] + 40u);
    st32((c.r[4].w[0] + 5136u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 5136u));
    st32((c.r[4].w[0] + 5136u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 5136u)));
    c.r[1].d[0] = c.r[6].sd[0] < 20714ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], 0u + 20753u);  if (t) { goto L_003E8428; } }
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    st32((c.r[4].w[0] + 5136u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
L_003E8428:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = c.r[4].d[0] & 7ull;
    set32(c.r[4], 0u + 7u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003E8510; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003E8510; } }
    c.budget -= 1;
L_003E8450:
    set32(c.r[6], ld32((c.r[4].w[0] + 5068u)));
    c.r[1].d[0] = 0ull | 49184ull;
    set32(c.r[6], c.r[6].w[0] - 32u);
    st32((c.r[4].w[0] + 5068u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 5068u));
    st32((c.r[4].w[0] + 5068u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 5068u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull | 49152ull;  if (t) { goto L_003E8488; } }
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    st32((c.r[4].w[0] + 5068u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
L_003E8488:
    set32(c.r[6], ld32((c.r[4].w[0] + 5092u)));
    set32(c.r[6], c.r[6].w[0] + 32u);
    st32((c.r[4].w[0] + 5092u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 5092u));
    st32((c.r[4].w[0] + 5092u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 5092u)));
    c.r[1].d[0] = c.r[6].sd[0] < 16353ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], 0u + 16384u);  if (t) { goto L_003E84B8; } }
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    st32((c.r[4].w[0] + 5092u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
L_003E84B8:
    set32(c.r[6], ld32((c.r[4].w[0] + 5124u)));
    c.r[1].d[0] = 0ull | 52363ull;
    set32(c.r[6], c.r[6].w[0] - 25u);
    st32((c.r[4].w[0] + 5124u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 5124u));
    st32((c.r[4].w[0] + 5124u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 5124u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull | 52338ull;  if (t) { goto L_003E84F0; } }
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    st32((c.r[4].w[0] + 5124u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
L_003E84F0:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = c.r[4].d[0] & 7ull;
    set32(c.r[4], 0u + 7u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003E8510; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_003E8510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E8520:
    c.r[6].d[0] = 0ull | 49152ull;
    set32(c.r[3], 0u + 16384u);
    st32((c.r[4].w[0] + 5068u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull | 52338ull;
    st32((c.r[4].w[0] + 5080u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 5092u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 5104u), c.r[6].w[0]);
    set32(c.r[3], 0u + 20753u);
    st32((c.r[4].w[0] + 5124u), c.r[5].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 5136u), c.r[3].w[0]);  c.pc = t; return; }
L_003E8550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 306u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003E85C8; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 32767u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85A0u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003E85A0u) [[unlikely]] return; }
L_003E85A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E85D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E85B0u) [[unlikely]] return; }
L_003E85B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85BCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003E85BCu) [[unlikely]] return; }
L_003E85BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E85D0; } }
    c.budget -= 1;
L_003E85C8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003E85D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E85F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 306u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003E8668; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16384u);
    c.r[7].d[0] = 0ull | 49152ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8640u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003E8640u) [[unlikely]] return; }
L_003E8640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E8670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8650u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E8650u) [[unlikely]] return; }
L_003E8650:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E865Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003E865Cu) [[unlikely]] return; }
L_003E865C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8670; } }
    c.budget -= 1;
L_003E8668:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003E8670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 306u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003E8708; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86E0u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003E86E0u) [[unlikely]] return; }
L_003E86E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E8710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E86F0u) [[unlikely]] return; }
L_003E86F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86FCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003E86FCu) [[unlikely]] return; }
L_003E86FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8710; } }
    c.budget -= 1;
L_003E8708:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003E8710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 306u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003E87A8; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8780u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003E8780u) [[unlikely]] return; }
L_003E8780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E87B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E8790u) [[unlikely]] return; }
L_003E8790:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E879Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003E879Cu) [[unlikely]] return; }
L_003E879C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E87B0; } }
    c.budget -= 1;
L_003E87A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003E87B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E87D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003E87F8u) [[unlikely]] return; }
L_003E87F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8804u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003E8804u) [[unlikely]] return; }
L_003E8804:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8810u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003E8810u) [[unlikely]] return; }
L_003E8810:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E881Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003E881Cu) [[unlikely]] return; }
L_003E881C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);  if (t) { goto L_003E8838; } }
    set32(c.r[2], c.r[2].w[0] - 2784u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003E8848; } }
L_003E8838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 5184u);
    st32((c.r[17].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003E8848:
    st8((c.r[17].w[0] + 8392u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003E8870; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003E8870:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003E8908; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8990; } }
L_003E8890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 5264u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 5200u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E88C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003E88D0; } }
    c.budget -= 1;
L_003E88C8:
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003E88D0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8900u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003E8900u) [[unlikely]] return; }
L_003E8900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E89B8; } }
L_003E8908:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8948u); st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003E8948u) [[unlikely]] return; }
L_003E8948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8960; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003E8968; } }
L_003E8960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_003E8968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003E8970u) [[unlikely]] return; }
L_003E8970:
    st32((c.r[16].w[0] + 136u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8988u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003E8988u) [[unlikely]] return; }
L_003E8988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E89B8; } }
L_003E8990:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st8((c.r[16].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[17].w[0] + 32u);
    st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E89B8u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003E89B8u) [[unlikely]] return; }
L_003E89B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E89D0; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E89D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003E89D0u) [[unlikely]] return; }
L_003E89D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);  if (t) { goto L_003E8A28; } }
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
L_003E8A28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_003E8A40:
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A54u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_003D(c, 283u, depth + 1u); else { c.pc = 0x001F6BC0u; return; } if (c.pc != 0x003E8A54u) [[unlikely]] return; }
L_003E8A54:
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[19].sd[0] < 17ll ? 1ull : 0ull;
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 120u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8A40u | kUnwind; return; } goto L_003E8A40; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E8AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8250u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003E8B48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E8AE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003E8AE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8AF0u);  if (depth < kMaxDepth) unit_00BB(c, 3u, depth + 1u); else { c.pc = 0x003EC030u; return; } if (c.pc != 0x003E8AF0u) [[unlikely]] return; }
L_003E8AF0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B40u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003E8B40u) [[unlikely]] return; }
L_003E8B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8C38; } }
L_003E8B48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E8C18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8B70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003E8B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B80u);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003E8B80u) [[unlikely]] return; }
L_003E8B80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 143u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8BA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B9Cu); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003E8B9Cu) [[unlikely]] return; }
L_003E8B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8C38; } }
    c.budget -= 1;
L_003E8BA8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BD8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E8BD8u) [[unlikely]] return; }
L_003E8BD8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BE4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E8BE4u) [[unlikely]] return; }
L_003E8BE4:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E8C38; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C10u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003E8C10u) [[unlikely]] return; }
L_003E8C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E93F8; } }
L_003E8C18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E8C38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C38u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003E8C38u) [[unlikely]] return; }
L_003E8C38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E9268; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8C98; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8C80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8C80; } }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 7u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8C98; } }
L_003E8C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8C98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C94u);  if (depth < kMaxDepth) unit_00BA(c, 70u, depth + 1u); else { c.pc = 0x003E9430u; return; } if (c.pc != 0x003E8C94u) [[unlikely]] return; }
L_003E8C94:
    c.budget -= 1;
L_003E8C98:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8CF0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8CD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8CD8; } }
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], 0u - 25u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8CF0; } }
    c.budget -= 1;
L_003E8CD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8CF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CECu);  if (depth < kMaxDepth) unit_00BA(c, 86u, depth + 1u); else { c.pc = 0x003E9810u; return; } if (c.pc != 0x003E8CECu) [[unlikely]] return; }
L_003E8CEC:
    c.budget -= 1;
L_003E8CF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8D48; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8D30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8D30; } }
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], 0u - 97u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8D48; } }
    c.budget -= 1;
L_003E8D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D44u);  if (depth < kMaxDepth) unit_00BA(c, 103u, depth + 1u); else { c.pc = 0x003E9BF0u; return; } if (c.pc != 0x003E8D44u) [[unlikely]] return; }
L_003E8D44:
    c.budget -= 1;
L_003E8D48:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8DA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8D88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8D88; } }
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], 0u - 385u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8DA0; } }
    c.budget -= 1;
L_003E8D88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D9Cu);  if (depth < kMaxDepth) unit_00BA(c, 118u, depth + 1u); else { c.pc = 0x003E9FC0u; return; } if (c.pc != 0x003E8D9Cu) [[unlikely]] return; }
L_003E8D9C:
    c.budget -= 1;
L_003E8DA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8DF8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8DE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8DE0; } }
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[3], 0u - 1537u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8DF8; } }
    c.budget -= 1;
L_003E8DE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DF4u);  if (depth < kMaxDepth) unit_00BA(c, 134u, depth + 1u); else { c.pc = 0x003EA3A0u; return; } if (c.pc != 0x003E8DF4u) [[unlikely]] return; }
L_003E8DF4:
    c.budget -= 1;
L_003E8DF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8E50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8E38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8E38; } }
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[3], 0u - 6145u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8E50; } }
    c.budget -= 1;
L_003E8E38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8E50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E4Cu);  if (depth < kMaxDepth) unit_00BA(c, 149u, depth + 1u); else { c.pc = 0x003EA780u; return; } if (c.pc != 0x003E8E4Cu) [[unlikely]] return; }
L_003E8E4C:
    c.budget -= 1;
L_003E8E50:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8EA8; } }
    goto L_003E8E5C;
L_003E8E58:
    c.budget -= 1;
L_003E8E5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8E90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8E90; } }
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[3], 0u - 24577u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8EA8; } }
    c.budget -= 1;
L_003E8E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8EA4u);  if (depth < kMaxDepth) unit_00BA(c, 164u, depth + 1u); else { c.pc = 0x003EAB60u; return; } if (c.pc != 0x003E8EA4u) [[unlikely]] return; }
L_003E8EA4:
    c.budget -= 1;
L_003E8EA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8F08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8EE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8EE8; } }
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8F08; } }
L_003E8EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8F08; } }
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F04u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00BA(c, 180u, depth + 1u); else { c.pc = 0x003EAF30u; return; } if (c.pc != 0x003E8F04u) [[unlikely]] return; }
L_003E8F04:
    c.budget -= 1;
L_003E8F08:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8F68; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8F48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8F48; } }
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8F68; } }
L_003E8F48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8F68; } }
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F64u); set32(c.r[7], 0u + 13u);  if (depth < kMaxDepth) unit_00BA(c, 194u, depth + 1u); else { c.pc = 0x003EB3D0u; return; } if (c.pc != 0x003E8F64u) [[unlikely]] return; }
L_003E8F64:
    c.budget -= 1;
L_003E8F68:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8FC8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E8FA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E8FA8; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFE70000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E8FC8; } }
L_003E8FA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8FC8; } }
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8FC4u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00BA(c, 180u, depth + 1u); else { c.pc = 0x003EAF30u; return; } if (c.pc != 0x003E8FC4u) [[unlikely]] return; }
L_003E8FC4:
    c.budget -= 1;
L_003E8FC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E9028; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E9008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E9008; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E9028; } }
L_003E9008:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9028; } }
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9024u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_00BA(c, 194u, depth + 1u); else { c.pc = 0x003EB3D0u; return; } if (c.pc != 0x003E9024u) [[unlikely]] return; }
L_003E9024:
    c.budget -= 1;
L_003E9028:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E9088; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E9068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E9068; } }
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E9088; } }
L_003E9068:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9088; } }
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9084u); set32(c.r[7], 0u + 17u);  if (depth < kMaxDepth) unit_00BA(c, 208u, depth + 1u); else { c.pc = 0x003EB880u; return; } if (c.pc != 0x003E9084u) [[unlikely]] return; }
L_003E9084:
    c.budget -= 1;
L_003E9088:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E90E8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E90C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E90C8; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E90E8; } }
L_003E90C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E90E8; } }
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90E4u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_00BA(c, 216u, depth + 1u); else { c.pc = 0x003EBBC0u; return; } if (c.pc != 0x003E90E4u) [[unlikely]] return; }
L_003E90E4:
    c.budget -= 1;
L_003E90E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E9148; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E9128; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E9128; } }
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E9148; } }
L_003E9128:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9148; } }
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9144u); set32(c.r[7], 0u + 19u);  if (depth < kMaxDepth) unit_00BA(c, 208u, depth + 1u); else { c.pc = 0x003EB880u; return; } if (c.pc != 0x003E9144u) [[unlikely]] return; }
L_003E9144:
    c.budget -= 1;
L_003E9148:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E91A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E9188; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E9188; } }
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E91A8; } }
L_003E9188:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E91A8; } }
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91A4u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_00BA(c, 216u, depth + 1u); else { c.pc = 0x003EBBC0u; return; } if (c.pc != 0x003E91A4u) [[unlikely]] return; }
L_003E91A4:
    c.budget -= 1;
L_003E91A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E9208; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E91E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E91E8; } }
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xE7FF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E9208; } }
L_003E91E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9208; } }
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 27u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9204u); set32(c.r[7], 0u + 21u);  if (depth < kMaxDepth) unit_00BA(c, 217u, depth + 1u); else { c.pc = 0x003EBBD0u; return; } if (c.pc != 0x003E9204u) [[unlikely]] return; }
L_003E9204:
    c.budget -= 1;
L_003E9208:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E9268; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003E9248; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003E9248; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003E9268; } }
L_003E9248:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9268; } }
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9264u); set32(c.r[7], 0u + 23u);  if (depth < kMaxDepth) unit_00BA(c, 217u, depth + 1u); else { c.pc = 0x003EBBD0u; return; } if (c.pc != 0x003E9264u) [[unlikely]] return; }
L_003E9264:
    c.budget -= 1;
L_003E9268:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003E93F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E93F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E93F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 141u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E9360; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E92E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E92B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E93F8; } }
L_003E92B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E92C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003E92C8u) [[unlikely]] return; }
L_003E92C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E93F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 141u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E93F8; } }
L_003E92E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E9308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003E9320; } }
L_003E9308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003E9320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003E9330u) [[unlikely]] return; }
L_003E9330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E93F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 141u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9354u); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x003E9354u) [[unlikely]] return; }
L_003E9354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E93F8; } }
    c.budget -= 1;
L_003E9360:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E93B8; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E9398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003E93F8; } }
    c.budget -= 1;
L_003E9398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003E93F8; } }
    c.budget -= 1;
L_003E93B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E93E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003E93F8; } }
L_003E93E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003E93F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E9410:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A1C0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 153u, depth); }
L_003E9430:
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
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003E97D8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[10], 0u + 1u);  if (t) { goto L_003E97A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[10].d[0];  if (t) { goto L_003E96E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003E9480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E97F8; } }
L_003E9480:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E96D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8192u);
    c.r[7].d[0] = 0ull | 65408ull;
    c.r[8].d[0] = 0ull | 65535ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94B4u); set32(c.r[9], 0u + 24576u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003E94B4u) [[unlikely]] return; }
L_003E94B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E97F8; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9508; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003E9520; } }
    c.budget -= 1;
L_003E9508:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003E9520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9528u); set32(c.r[4], c.r[18].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003E9528u) [[unlikely]] return; }
L_003E9528:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9538u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003E9538u) [[unlikely]] return; }
L_003E9538:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9544u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003E9544u) [[unlikely]] return; }
L_003E9544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E954Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003E954Cu) [[unlikely]] return; }
L_003E954C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9564u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E9564u) [[unlikely]] return; }
L_003E9564:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9570u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003E9570u) [[unlikely]] return; }
L_003E9570:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E95B8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003E95B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003E95D8; } }
    c.budget -= 1;
L_003E95B8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003E95D8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003E95D8; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003E95D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5076u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003E9600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003E9608; } }
L_003E9600:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003E9608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9610u); set32(c.r[4], c.r[18].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003E9610u) [[unlikely]] return; }
L_003E9610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9620u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003E9620u) [[unlikely]] return; }
L_003E9620:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E962Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003E962Cu) [[unlikely]] return; }
L_003E962C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9634u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003E9634u) [[unlikely]] return; }
L_003E9634:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9640u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003E9640u) [[unlikely]] return; }
L_003E9640:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 4097ll ? 1ull : 0ull;  if (t) { goto L_003E9680; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 4096u);  if (t) { goto L_003E9680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003E9698; } }
L_003E9680:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9698; } }
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 2;
L_003E9698:
    set32(c.r[4], ld32((c.r[18].w[0] + 5084u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003E96C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003E97F8; } }
L_003E96C0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003E97F8; } }
    c.budget -= 1;
L_003E96D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003E97F8; } }
    c.budget -= 1;
L_003E96E0:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5076u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E9710; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9720; } }
    c.budget -= 1;
L_003E9710:
    st32((c.r[18].w[0] + 5076u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003E9738; } }
L_003E9720:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5076u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5076u));
    st32((c.r[18].w[0] + 5076u), c.r[3].w[0]);
    c.budget -= 6;
L_003E9738:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5084u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003E9760; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9770; } }
L_003E9760:
    st32((c.r[18].w[0] + 5084u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003E9788; } }
L_003E9770:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5084u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5084u));
    st32((c.r[18].w[0] + 5084u), c.r[3].w[0]);
    c.budget -= 6;
L_003E9788:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E97F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E97F8; } }
    c.budget -= 1;
L_003E97A0:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97B4u); st8((c.r[7].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E97B4u) [[unlikely]] return; }
L_003E97B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E97C0u) [[unlikely]] return; }
L_003E97C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97CCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003E97CCu) [[unlikely]] return; }
L_003E97CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E97F8; } }
    c.budget -= 1;
L_003E97D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E97F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E97F8; } }
    c.budget -= 1;
L_003E97F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003E97F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9810:
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
    { const bool t = c.r[6].d[0] == c.r[10].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003E9BB0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E9B80; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003E9AC0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003E9860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9BD0; } }
L_003E9860:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[3], 0u + 1800u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 128u);
    c.r[7].d[0] = 0ull | 57344ull;
    c.r[8].d[0] = 0ull | 65535ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9894u); set32(c.r[9], 0u + 24576u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003E9894u) [[unlikely]] return; }
L_003E9894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E9BD0; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E98E8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 2;
L_003E98C0:
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003E9900; } }
    c.budget -= 1;
L_003E98E8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003E9900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9908u); set32(c.r[4], c.r[18].w[0] + 2176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003E9908u) [[unlikely]] return; }
L_003E9908:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9918u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003E9918u) [[unlikely]] return; }
L_003E9918:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9924u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003E9924u) [[unlikely]] return; }
L_003E9924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E992Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003E992Cu) [[unlikely]] return; }
L_003E992C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9944u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E9944u) [[unlikely]] return; }
L_003E9944:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9950u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003E9950u) [[unlikely]] return; }
L_003E9950:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E9998; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003E9998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003E99B8; } }
    c.budget -= 1;
L_003E9998:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003E99B8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003E99B8; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003E99B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5100u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003E99E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003E99E8; } }
L_003E99E0:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003E99E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99F0u); set32(c.r[4], c.r[18].w[0] + 2240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003E99F0u) [[unlikely]] return; }
L_003E99F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A00u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003E9A00u) [[unlikely]] return; }
L_003E9A00:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A0Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003E9A0Cu) [[unlikely]] return; }
L_003E9A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A14u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003E9A14u) [[unlikely]] return; }
L_003E9A14:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A20u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003E9A20u) [[unlikely]] return; }
L_003E9A20:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E9A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_003E9A78; } }
L_003E9A58:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_003E9A78; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 61440ull;  if (t) { goto L_003E9A78; } }
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 1;
L_003E9A78:
    set32(c.r[4], ld32((c.r[18].w[0] + 5108u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003E9AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003E9BD0; } }
L_003E9AA0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003E9BD0; } }
    c.budget -= 1;
L_003E9AB0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003E9BD0; } }
    c.budget -= 1;
L_003E9AC0:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5100u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E9AF0; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9B00; } }
    c.budget -= 1;
L_003E9AF0:
    st32((c.r[18].w[0] + 5100u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003E9B18; } }
L_003E9B00:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5100u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5100u));
    st32((c.r[18].w[0] + 5100u), c.r[3].w[0]);
    c.budget -= 6;
L_003E9B18:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5108u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003E9B40; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9B50; } }
L_003E9B40:
    st32((c.r[18].w[0] + 5108u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003E9B68; } }
L_003E9B50:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5108u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5108u));
    st32((c.r[18].w[0] + 5108u), c.r[3].w[0]);
    c.budget -= 6;
L_003E9B68:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E9BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E9BD0; } }
    c.budget -= 1;
L_003E9B80:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B90u); st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E9B90u) [[unlikely]] return; }
L_003E9B90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B9Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E9B9Cu) [[unlikely]] return; }
L_003E9B9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9BA8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003E9BA8u) [[unlikely]] return; }
L_003E9BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9BD0; } }
L_003E9BB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 81u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E9BD0; } }
    c.budget -= 1;
L_003E9BC8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003E9BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9BF0:
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
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003E9F88; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E9F60; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003E9EA0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003E9C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9FA8; } }
L_003E9C40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9E90; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C78u); set32(c.r[10], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003E9C78u) [[unlikely]] return; }
L_003E9C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E9FA8; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9CC8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003E9CE0; } }
L_003E9CC8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003E9CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CE8u); set32(c.r[4], c.r[18].w[0] + 2304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003E9CE8u) [[unlikely]] return; }
L_003E9CE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003E9CF8u) [[unlikely]] return; }
L_003E9CF8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D04u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003E9D04u) [[unlikely]] return; }
L_003E9D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D0Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003E9D0Cu) [[unlikely]] return; }
L_003E9D0C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D24u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003E9D24u) [[unlikely]] return; }
L_003E9D24:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D30u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003E9D30u) [[unlikely]] return; }
L_003E9D30:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E9D78; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003E9D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003E9D98; } }
    c.budget -= 1;
L_003E9D78:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003E9D98; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003E9D98; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003E9D98:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5124u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003E9DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003E9DC8; } }
L_003E9DC0:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003E9DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DD0u); set32(c.r[4], c.r[18].w[0] + 2368u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003E9DD0u) [[unlikely]] return; }
L_003E9DD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DE0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003E9DE0u) [[unlikely]] return; }
L_003E9DE0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DECu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003E9DECu) [[unlikely]] return; }
L_003E9DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DF4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003E9DF4u) [[unlikely]] return; }
L_003E9DF4:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E00u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003E9E00u) [[unlikely]] return; }
L_003E9E00:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 9103ll ? 1ull : 0ull;  if (t) { goto L_003E9E40; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 9102u);  if (t) { goto L_003E9E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003E9E58; } }
L_003E9E40:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9E58; } }
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 2;
L_003E9E58:
    set32(c.r[4], ld32((c.r[18].w[0] + 5132u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003E9E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003E9FA8; } }
L_003E9E80:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003E9FA8; } }
    c.budget -= 1;
L_003E9E90:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003E9FA8; } }
    c.budget -= 1;
L_003E9EA0:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5124u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E9ED0; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9EE0; } }
    c.budget -= 1;
L_003E9ED0:
    st32((c.r[18].w[0] + 5124u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003E9EF8; } }
L_003E9EE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5124u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5124u));
    st32((c.r[18].w[0] + 5124u), c.r[3].w[0]);
    c.budget -= 6;
L_003E9EF8:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5132u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003E9F20; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9F30; } }
L_003E9F20:
    st32((c.r[18].w[0] + 5132u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003E9F48; } }
L_003E9F30:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5132u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5132u));
    st32((c.r[18].w[0] + 5132u), c.r[3].w[0]);
    c.budget -= 6;
L_003E9F48:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E9FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E9FA8; } }
    c.budget -= 1;
L_003E9F60:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F74u); st8((c.r[7].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003E9F74u) [[unlikely]] return; }
L_003E9F74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F80u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003E9F80u) [[unlikely]] return; }
L_003E9F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9FA8; } }
L_003E9F88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E9FA8; } }
    c.budget -= 1;
L_003E9FA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003E9FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9FC0:
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
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003EA368; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003EA340; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003EA280; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003EA010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA388; } }
L_003EA010:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA270; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA048u); set32(c.r[10], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003EA048u) [[unlikely]] return; }
L_003EA048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EA388; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA098; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003EA0B0; } }
L_003EA098:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003EA0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0B8u); set32(c.r[4], c.r[18].w[0] + 2432u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EA0B8u) [[unlikely]] return; }
L_003EA0B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0C8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EA0C8u) [[unlikely]] return; }
L_003EA0C8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0D4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EA0D4u) [[unlikely]] return; }
L_003EA0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0DCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EA0DCu) [[unlikely]] return; }
L_003EA0DC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0ECu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EA0ECu) [[unlikely]] return; }
L_003EA0EC:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EA138; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003EA138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003EA158; } }
L_003EA138:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003EA158; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003EA158; } }
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_003EA158:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5144u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 64u);  if (t) { goto L_003EA180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003EA188; } }
L_003EA180:
    set32(c.r[2], 0u + 64u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003EA188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA190u); set32(c.r[4], c.r[18].w[0] + 2496u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EA190u) [[unlikely]] return; }
L_003EA190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EA1A0u) [[unlikely]] return; }
L_003EA1A0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1ACu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EA1ACu) [[unlikely]] return; }
L_003EA1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1B4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EA1B4u) [[unlikely]] return; }
L_003EA1B4:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1C8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003EA1C8u) [[unlikely]] return; }
L_003EA1C8:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1D8u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EA1D8u) [[unlikely]] return; }
L_003EA1D8:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 9102ll ? 1ull : 0ull;  if (t) { goto L_003EA220; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA220; } }
    set32(c.r[3], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003EA238; } }
    c.budget -= 1;
L_003EA220:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA238; } }
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 2;
L_003EA238:
    set32(c.r[4], ld32((c.r[18].w[0] + 5160u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 4;
L_003EA248:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003EA260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003EA388; } }
L_003EA260:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003EA388; } }
    c.budget -= 1;
L_003EA270:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003EA388; } }
    c.budget -= 1;
L_003EA280:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5144u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003EA2B0; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA2C0; } }
    c.budget -= 1;
L_003EA2B0:
    st32((c.r[18].w[0] + 5144u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003EA2D8; } }
L_003EA2C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5144u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5144u));
    st32((c.r[18].w[0] + 5144u), c.r[3].w[0]);
    c.budget -= 6;
L_003EA2D8:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5160u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003EA300; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA310; } }
L_003EA300:
    st32((c.r[18].w[0] + 5160u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003EA328; } }
L_003EA310:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5160u));
    st32((c.r[18].w[0] + 5160u), c.r[3].w[0]);
    c.budget -= 6;
L_003EA328:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003EA388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EA388; } }
    c.budget -= 1;
L_003EA340:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA354u); st8((c.r[7].w[0] + 83u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003EA354u) [[unlikely]] return; }
L_003EA354:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA360u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003EA360u) [[unlikely]] return; }
L_003EA360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA388; } }
L_003EA368:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 83u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EA388; } }
    c.budget -= 1;
L_003EA380:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003EA388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EA3A0:
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
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003EA748; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003EA720; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003EA660; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003EA3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA768; } }
L_003EA3F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA650; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA428u); set32(c.r[10], 0u + 9u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003EA428u) [[unlikely]] return; }
L_003EA428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EA768; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA478; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003EA490; } }
L_003EA478:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003EA490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA498u); set32(c.r[4], c.r[18].w[0] + 2560u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EA498u) [[unlikely]] return; }
L_003EA498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EA4A8u) [[unlikely]] return; }
L_003EA4A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EA4B4u) [[unlikely]] return; }
L_003EA4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EA4BCu) [[unlikely]] return; }
L_003EA4BC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4D4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003EA4D4u) [[unlikely]] return; }
L_003EA4D4:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4E4u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EA4E4u) [[unlikely]] return; }
L_003EA4E4:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EA528; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003EA528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003EA548; } }
L_003EA528:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003EA548; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003EA548; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003EA548:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5172u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003EA570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003EA578; } }
L_003EA570:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003EA578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA580u); set32(c.r[4], c.r[18].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EA580u) [[unlikely]] return; }
L_003EA580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA590u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EA590u) [[unlikely]] return; }
L_003EA590:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA59Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EA59Cu) [[unlikely]] return; }
L_003EA59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA5A4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EA5A4u) [[unlikely]] return; }
L_003EA5A4:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA5B0u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EA5B0u) [[unlikely]] return; }
L_003EA5B0:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EA5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_003EA618; } }
L_003EA5F0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 56435ull;  if (t) { goto L_003EA618; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EA618; } }
    c.r[3].d[0] = 0ull | 56434ull;
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_003EA618:
    set32(c.r[4], ld32((c.r[18].w[0] + 5180u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003EA640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003EA768; } }
L_003EA640:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003EA768; } }
    c.budget -= 1;
L_003EA650:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003EA768; } }
    c.budget -= 1;
L_003EA660:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5172u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003EA690; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA6A0; } }
    c.budget -= 1;
L_003EA690:
    st32((c.r[18].w[0] + 5172u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003EA6B8; } }
L_003EA6A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5172u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5172u));
    st32((c.r[18].w[0] + 5172u), c.r[3].w[0]);
    c.budget -= 6;
L_003EA6B8:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5180u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003EA6E0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA6F0; } }
L_003EA6E0:
    st32((c.r[18].w[0] + 5180u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003EA708; } }
L_003EA6F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5180u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5180u));
    st32((c.r[18].w[0] + 5180u), c.r[3].w[0]);
    c.budget -= 6;
L_003EA708:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003EA768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EA768; } }
    c.budget -= 1;
L_003EA720:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA734u); st8((c.r[7].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003EA734u) [[unlikely]] return; }
L_003EA734:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA740u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003EA740u) [[unlikely]] return; }
L_003EA740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA768; } }
L_003EA748:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EA768; } }
    c.budget -= 1;
L_003EA760:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003EA768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EA780:
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
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003EAB28; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003EAB00; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003EAA40; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003EA7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EAB48; } }
L_003EA7D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAA30; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA808u); set32(c.r[10], 0u + 11u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003EA808u) [[unlikely]] return; }
L_003EA808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EAB48; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA858; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003EA870; } }
L_003EA858:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003EA870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA878u); set32(c.r[4], c.r[18].w[0] + 2688u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EA878u) [[unlikely]] return; }
L_003EA878:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA888u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EA888u) [[unlikely]] return; }
L_003EA888:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA894u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EA894u) [[unlikely]] return; }
L_003EA894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA89Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EA89Cu) [[unlikely]] return; }
L_003EA89C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA8B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003EA8B4u) [[unlikely]] return; }
L_003EA8B4:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA8C4u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EA8C4u) [[unlikely]] return; }
L_003EA8C4:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EA908; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003EA908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003EA928; } }
L_003EA908:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003EA928; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003EA928; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003EA928:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5196u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003EA950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003EA958; } }
L_003EA950:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003EA958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA960u); set32(c.r[4], c.r[18].w[0] + 2752u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EA960u) [[unlikely]] return; }
L_003EA960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA970u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EA970u) [[unlikely]] return; }
L_003EA970:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA97Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EA97Cu) [[unlikely]] return; }
L_003EA97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA984u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EA984u) [[unlikely]] return; }
L_003EA984:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA990u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EA990u) [[unlikely]] return; }
L_003EA990:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 9102ll ? 1ull : 0ull;  if (t) { goto L_003EA9E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EA9E0; } }
    set32(c.r[3], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003EA9F8; } }
    c.budget -= 1;
L_003EA9E0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003EA9F8; } }
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 2;
L_003EA9F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5204u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003EAA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003EAB48; } }
L_003EAA20:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003EAB48; } }
    c.budget -= 1;
L_003EAA30:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003EAB48; } }
    c.budget -= 1;
L_003EAA40:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5196u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003EAA70; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAA80; } }
    c.budget -= 1;
L_003EAA70:
    st32((c.r[18].w[0] + 5196u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003EAA98; } }
L_003EAA80:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5196u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5196u));
    st32((c.r[18].w[0] + 5196u), c.r[3].w[0]);
    c.budget -= 6;
L_003EAA98:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5204u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003EAAC0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAAD0; } }
L_003EAAC0:
    st32((c.r[18].w[0] + 5204u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003EAAE8; } }
L_003EAAD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5204u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5204u));
    st32((c.r[18].w[0] + 5204u), c.r[3].w[0]);
    c.budget -= 6;
L_003EAAE8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003EAB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EAB48; } }
    c.budget -= 1;
L_003EAB00:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB14u); st8((c.r[7].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003EAB14u) [[unlikely]] return; }
L_003EAB14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB20u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003EAB20u) [[unlikely]] return; }
L_003EAB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EAB48; } }
L_003EAB28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 85u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAB40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EAB48; } }
    c.budget -= 1;
L_003EAB40:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003EAB48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EAB60:
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
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[18].w[0] + 8248u);  if (t) { goto L_003EAEF8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003EAED0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003EAE10; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003EABB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EAF18; } }
L_003EABB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAE00; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EABE8u); set32(c.r[10], 0u + 13u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003EABE8u) [[unlikely]] return; }
L_003EABE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EAF18; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAC38; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003EAC50; } }
L_003EAC38:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003EAC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC58u); set32(c.r[4], c.r[18].w[0] + 2816u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EAC58u) [[unlikely]] return; }
L_003EAC58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC68u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EAC68u) [[unlikely]] return; }
L_003EAC68:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC74u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EAC74u) [[unlikely]] return; }
L_003EAC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC7Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EAC7Cu) [[unlikely]] return; }
L_003EAC7C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC94u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003EAC94u) [[unlikely]] return; }
L_003EAC94:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACA0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EACA0u) [[unlikely]] return; }
L_003EACA0:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EACE8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003EACE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003EAD08; } }
    c.budget -= 1;
L_003EACE8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003EAD08; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003EAD08; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003EAD08:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5220u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003EAD30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003EAD38; } }
L_003EAD30:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003EAD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD40u); set32(c.r[4], c.r[18].w[0] + 2880u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EAD40u) [[unlikely]] return; }
L_003EAD40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD50u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EAD50u) [[unlikely]] return; }
L_003EAD50:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD5Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EAD5Cu) [[unlikely]] return; }
L_003EAD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD64u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EAD64u) [[unlikely]] return; }
L_003EAD64:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD70u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EAD70u) [[unlikely]] return; }
L_003EAD70:
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EADA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_003EADC8; } }
L_003EADA8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 56434ull;  if (t) { goto L_003EADC8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 56433ull;  if (t) { goto L_003EADC8; } }
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 1;
L_003EADC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5228u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003EADF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003EAF18; } }
L_003EADF0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003EAF18; } }
    c.budget -= 1;
L_003EAE00:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003EAF18; } }
    c.budget -= 1;
L_003EAE10:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5220u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003EAE40; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAE50; } }
    c.budget -= 1;
L_003EAE40:
    st32((c.r[18].w[0] + 5220u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003EAE68; } }
L_003EAE50:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5220u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5220u));
    st32((c.r[18].w[0] + 5220u), c.r[3].w[0]);
    c.budget -= 6;
L_003EAE68:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5228u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003EAE90; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAEA0; } }
L_003EAE90:
    st32((c.r[18].w[0] + 5228u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 2;
L_003EAE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003EAEB8; } }
L_003EAEA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5228u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5228u));
    st32((c.r[18].w[0] + 5228u), c.r[3].w[0]);
    c.budget -= 6;
L_003EAEB8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003EAF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EAF18; } }
    c.budget -= 1;
L_003EAED0:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAEE4u); st8((c.r[7].w[0] + 86u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003EAEE4u) [[unlikely]] return; }
L_003EAEE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAEF0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003EAEF0u) [[unlikely]] return; }
L_003EAEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EAF18; } }
L_003EAEF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 86u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EAF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EAF18; } }
    c.budget -= 1;
L_003EAF10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 86u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003EAF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EAF30:
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
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EB388; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003EB320; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003EB238; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003EAFA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EB3B0; } }
    c.budget -= 1;
L_003EAFA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB228; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFD8u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003EAFD8u) [[unlikely]] return; }
L_003EAFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB3B0; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB028; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_003EB040; } }
L_003EB028:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 6;
L_003EB040:
    c.r[19].d[0] = c.r[20].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB058u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EB058u) [[unlikely]] return; }
L_003EB058:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB068u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EB068u) [[unlikely]] return; }
L_003EB068:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB074u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EB074u) [[unlikely]] return; }
L_003EB074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB07Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EB07Cu) [[unlikely]] return; }
L_003EB07C:
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB08Cu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EB08Cu) [[unlikely]] return; }
L_003EB08C:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003EB0E8; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003EB0E8; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003EB108; } }
L_003EB0E8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;  if (t) { goto L_003EB108; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003EB108; } }
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_003EB108:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003EB130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003EB138; } }
L_003EB130:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003EB138:
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB14Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EB14Cu) [[unlikely]] return; }
L_003EB14C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB15Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EB15Cu) [[unlikely]] return; }
L_003EB15C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB168u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EB168u) [[unlikely]] return; }
L_003EB168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB170u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EB170u) [[unlikely]] return; }
L_003EB170:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB184u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003EB184u) [[unlikely]] return; }
L_003EB184:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB194u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EB194u) [[unlikely]] return; }
L_003EB194:
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
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] + 5068u);  if (t) { goto L_003EB1D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), 0u);  if (t) { goto L_003EB1F0; } }
L_003EB1D0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_003EB1F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 8192u);  if (t) { goto L_003EB1F0; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 2;
L_003EB1F0:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003EB218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003EB3B0; } }
L_003EB218:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003EB3B0; } }
    c.budget -= 1;
L_003EB228:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003EB3B0; } }
    c.budget -= 1;
L_003EB238:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003EB280; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EB290; } }
L_003EB280:
    st32((c.r[8].w[0]), c.r[9].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003EB2A8; } }
L_003EB290:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003EB2A8:
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5068u)));
    set32(c.r[7], c.r[4].w[0] + 5068u);
    set32(c.r[8], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], c.r[8].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 65504ull;  if (t) { goto L_003EB2D8; } }
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EB2E8; } }
L_003EB2D8:
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003EB300; } }
L_003EB2E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003EB300:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003EB3B0; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EB3B0; } }
L_003EB320:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB378; } }
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB344u); st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003EB344u) [[unlikely]] return; }
L_003EB344:
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003EB3B0; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EB3B0; } }
    c.budget -= 1;
L_003EB378:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EB3B0; } }
    c.budget -= 1;
L_003EB388:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EB3B0; } }
    c.budget -= 1;
L_003EB3A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003EB3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003EB3D0:
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
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EB828; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003EB7C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003EB6D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003EB440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EB850; } }
L_003EB440:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB6C8; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB478u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003EB478u) [[unlikely]] return; }
L_003EB478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB850; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB4C8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_003EB4E0; } }
L_003EB4C8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 6;
L_003EB4E0:
    c.r[19].d[0] = c.r[20].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4F8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EB4F8u) [[unlikely]] return; }
L_003EB4F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB508u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EB508u) [[unlikely]] return; }
L_003EB508:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB514u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EB514u) [[unlikely]] return; }
L_003EB514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB51Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EB51Cu) [[unlikely]] return; }
L_003EB51C:
    set32(c.r[16], c.r[29].w[0] + 120u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB52Cu); c.f[12] = ld32((c.r[29].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EB52Cu) [[unlikely]] return; }
L_003EB52C:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003EB588; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[20].d[0] = 0ull | 32768ull;  if (t) { goto L_003EB588; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003EB5B0; } }
L_003EB588:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull | 32768ull;  if (t) { goto L_003EB5B0; } }
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003EB5B0; } }
    set32(c.r[2], 0u + 16384u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_003EB5B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003EB5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003EB5E0; } }
    c.budget -= 1;
L_003EB5D8:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003EB5E0:
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB5F4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EB5F4u) [[unlikely]] return; }
L_003EB5F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB604u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EB604u) [[unlikely]] return; }
L_003EB604:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB610u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EB610u) [[unlikely]] return; }
L_003EB610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB618u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EB618u) [[unlikely]] return; }
L_003EB618:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB62Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003EB62Cu) [[unlikely]] return; }
L_003EB62C:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB638u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EB638u) [[unlikely]] return; }
L_003EB638:
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
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 5068u);  if (t) { goto L_003EB670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), 0u);  if (t) { goto L_003EB690; } }
L_003EB670:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 57344ull;  if (t) { goto L_003EB690; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 57344ull;  if (t) { goto L_003EB690; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 2;
L_003EB690:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003EB6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003EB850; } }
    c.budget -= 1;
L_003EB6B8:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003EB850; } }
    c.budget -= 1;
L_003EB6C8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003EB850; } }
    c.budget -= 1;
L_003EB6D8:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003EB720; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EB730; } }
L_003EB720:
    st32((c.r[8].w[0]), c.r[9].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003EB748; } }
L_003EB730:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003EB748:
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5068u)));
    set32(c.r[7], c.r[4].w[0] + 5068u);
    set32(c.r[8], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], c.r[8].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 65504ull;  if (t) { goto L_003EB778; } }
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EB788; } }
L_003EB778:
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003EB7A0; } }
L_003EB788:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003EB7A0:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003EB850; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EB850; } }
L_003EB7C0:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB818; } }
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB7E4u); st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003EB7E4u) [[unlikely]] return; }
L_003EB7E4:
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003EB850; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EB850; } }
    c.budget -= 1;
L_003EB818:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EB850; } }
    c.budget -= 1;
L_003EB828:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EB850; } }
    c.budget -= 1;
L_003EB848:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003EB850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003EB880:
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
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_003EBB80; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_003EBB28; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_003EBA98; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003EB8E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EBBA8; } }
L_003EB8E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EBA88; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB920u); c.r[10].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003EB920u) [[unlikely]] return; }
L_003EB920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EBBA8; } }
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB970; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003EB988; } }
L_003EB970:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003EB988:
    c.r[17].d[0] = c.r[17].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9A0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EB9A0u) [[unlikely]] return; }
L_003EB9A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EB9B0u) [[unlikely]] return; }
L_003EB9B0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9BCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EB9BCu) [[unlikely]] return; }
L_003EB9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EB9C4u) [[unlikely]] return; }
L_003EB9C4:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003EB9D8u) [[unlikely]] return; }
L_003EB9D8:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9E4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EB9E4u) [[unlikely]] return; }
L_003EB9E4:
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] - 3095u);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] + 5064u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5064u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EBA30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), 0u);  if (t) { goto L_003EBA50; } }
L_003EBA30:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 57345ull;  if (t) { goto L_003EBA50; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 57344ull;  if (t) { goto L_003EBA50; } }
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_003EBA50:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003EBA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003EBBA8; } }
L_003EBA78:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003EBBA8; } }
    c.budget -= 1;
L_003EBA88:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003EBBA8; } }
    c.budget -= 1;
L_003EBA98:
    c.r[6].d[0] = c.r[17].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[9], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 5064u)));
    set32(c.r[7], c.r[4].w[0] + 5064u);
    set32(c.r[4], c.r[9].w[0] - c.r[6].w[0]);
    c.r[8].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003EBAE0; } }
    c.r[4].d[0] = 0ull | 65504ull;
    c.r[4].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EBAF0; } }
L_003EBAE0:
    st32((c.r[7].w[0]), c.r[9].w[0]);
    st32((c.r[18].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_003EBB08; } }
L_003EBAF0:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003EBB08:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003EBBA8; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EBBA8; } }
    c.budget -= 1;
L_003EBB28:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 80u);  if (t) { goto L_003EBB70; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EBBA8; } }
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EBBA8; } }
    c.budget -= 1;
L_003EBB70:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EBBA8; } }
    c.budget -= 1;
L_003EBB80:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EBBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003EBBA8; } }
    c.budget -= 1;
L_003EBBA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003EBBA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EBBC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EBBD0:
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
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EBFE0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003EBF78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003EBE90; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003EBC40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    c.budget -= 1;
L_003EBC40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EBE80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[3], 0u + 1200u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC78u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003EBC78u) [[unlikely]] return; }
L_003EBC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EBCC8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_003EBCE0; } }
L_003EBCC8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 6;
L_003EBCE0:
    c.r[19].d[0] = c.r[20].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBCF8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EBCF8u) [[unlikely]] return; }
L_003EBCF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD08u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EBD08u) [[unlikely]] return; }
L_003EBD08:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD14u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EBD14u) [[unlikely]] return; }
L_003EBD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD1Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EBD1Cu) [[unlikely]] return; }
L_003EBD1C:
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD2Cu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EBD2Cu) [[unlikely]] return; }
L_003EBD2C:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[20], c.r[3].w[0] << 2);
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[20].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EBD88; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003EBD90; } }
    c.budget -= 1;
L_003EBD88:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003EBD90:
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDA4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003EBDA4u) [[unlikely]] return; }
L_003EBDA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDB4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003EBDB4u) [[unlikely]] return; }
L_003EBDB4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDC0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003EBDC0u) [[unlikely]] return; }
L_003EBDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDC8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003EBDC8u) [[unlikely]] return; }
L_003EBDC8:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDDCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003EBDDCu) [[unlikely]] return; }
L_003EBDDC:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDE8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003EBDE8u) [[unlikely]] return; }
L_003EBDE8:
    set32(c.r[3], c.r[2].w[0] - 3095u);
    set32(c.r[5], c.r[20].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 5076u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 5076u);  if (t) { goto L_003EBE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_003EBE48; } }
    c.budget -= 1;
L_003EBE28:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 57345ull;  if (t) { goto L_003EBE48; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 57344ull;  if (t) { goto L_003EBE48; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_003EBE48:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003EBE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
L_003EBE70:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    c.budget -= 1;
L_003EBE80:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    c.budget -= 1;
L_003EBE90:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003EBED8; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EBEE8; } }
L_003EBED8:
    st32((c.r[8].w[0]), c.r[9].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003EBF00; } }
L_003EBEE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003EBF00:
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5076u)));
    set32(c.r[7], c.r[4].w[0] + 5076u);
    set32(c.r[8], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], c.r[8].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 65504ull;  if (t) { goto L_003EBF30; } }
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EBF40; } }
L_003EBF30:
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003EBF58; } }
L_003EBF40:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003EBF58:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
L_003EBF78:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EBFD0; } }
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF9Cu); st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003EBF9Cu) [[unlikely]] return; }
L_003EBF9C:
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    c.budget -= 1;
L_003EBFD0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    c.budget -= 1;
L_003EBFE0:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BB(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_00BB(c, 2u, depth); } }
    c.budget -= 1;
    [[clang::musttail]] return unit_00BB(c, 1u, depth);
}

}
