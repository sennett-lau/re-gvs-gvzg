#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0,
    0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0,
    259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0,
    0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A8000;
    case 2u: goto L_002A8020;
    case 3u: goto L_002A8064;
    case 4u: goto L_002A8070;
    case 5u: goto L_002A807C;
    case 6u: goto L_002A80C4;
    case 7u: goto L_002A810C;
    case 8u: goto L_002A818C;
    case 9u: goto L_002A819C;
    case 10u: goto L_002A81A4;
    case 11u: goto L_002A81B4;
    case 12u: goto L_002A81C4;
    case 13u: goto L_002A81D4;
    case 14u: goto L_002A81E4;
    case 15u: goto L_002A81F4;
    case 16u: goto L_002A8204;
    case 17u: goto L_002A8260;
    case 18u: goto L_002A8298;
    case 19u: goto L_002A8308;
    case 20u: goto L_002A8378;
    case 21u: goto L_002A8420;
    case 22u: goto L_002A842C;
    case 23u: goto L_002A8438;
    case 24u: goto L_002A847C;
    case 25u: goto L_002A84B8;
    case 26u: goto L_002A84FC;
    case 27u: goto L_002A8504;
    case 28u: goto L_002A8514;
    case 29u: goto L_002A8524;
    case 30u: goto L_002A8568;
    case 31u: goto L_002A85A0;
    case 32u: goto L_002A85F8;
    case 33u: goto L_002A8614;
    case 34u: goto L_002A8620;
    case 35u: goto L_002A8650;
    case 36u: goto L_002A8950;
    case 37u: goto L_002A89D4;
    case 38u: goto L_002A89E0;
    case 39u: goto L_002A8A18;
    case 40u: goto L_002A8A58;
    case 41u: goto L_002A8AB0;
    case 42u: goto L_002A8BC4;
    case 43u: goto L_002A8BD0;
    case 44u: goto L_002A8BDC;
    case 45u: goto L_002A8BE8;
    case 46u: goto L_002A8C3C;
    case 47u: goto L_002A8C94;
    case 48u: goto L_002A8CD0;
    case 49u: goto L_002A8CE0;
    case 50u: goto L_002A8CE8;
    case 51u: goto L_002A8D20;
    case 52u: goto L_002A8D58;
    case 53u: goto L_002A8DE8;
    case 54u: goto L_002A8E20;
    case 55u: goto L_002A8E94;
    case 56u: goto L_002A8EEC;
    case 57u: goto L_002A8F58;
    case 58u: goto L_002A8F64;
    case 59u: goto L_002A8F70;
    case 60u: goto L_002A8F7C;
    case 61u: goto L_002A8FD4;
    case 62u: goto L_002A8FDC;
    case 63u: goto L_002A9014;
    case 64u: goto L_002A904C;
    case 65u: goto L_002A90A0;
    case 66u: goto L_002A90D8;
    case 67u: goto L_002A9178;
    case 68u: goto L_002A91A0;
    case 69u: goto L_002A9430;
    case 70u: goto L_002A94B4;
    case 71u: goto L_002A94C0;
    case 72u: goto L_002A94FC;
    case 73u: goto L_002A9544;
    case 74u: goto L_002A9550;
    case 75u: goto L_002A9590;
    case 76u: goto L_002A9604;
    case 77u: goto L_002A9614;
    case 78u: goto L_002A961C;
    case 79u: goto L_002A9628;
    case 80u: goto L_002A9640;
    case 81u: goto L_002A9660;
    case 82u: goto L_002A967C;
    case 83u: goto L_002A9694;
    case 84u: goto L_002A96A4;
    case 85u: goto L_002A96F4;
    case 86u: goto L_002A96FC;
    case 87u: goto L_002A9744;
    case 88u: goto L_002A9790;
    case 89u: goto L_002A9798;
    case 90u: goto L_002A97AC;
    case 91u: goto L_002A97C0;
    case 92u: goto L_002A97F8;
    case 93u: goto L_002A9808;
    case 94u: goto L_002A981C;
    case 95u: goto L_002A9878;
    case 96u: goto L_002A9894;
    case 97u: goto L_002A98AC;
    case 98u: goto L_002A98BC;
    case 99u: goto L_002A990C;
    case 100u: goto L_002A9914;
    case 101u: goto L_002A9958;
    case 102u: goto L_002A99A0;
    case 103u: goto L_002A99A8;
    case 104u: goto L_002A99BC;
    case 105u: goto L_002A99D0;
    case 106u: goto L_002A9A08;
    case 107u: goto L_002A9A18;
    case 108u: goto L_002A9A2C;
    case 109u: goto L_002A9A88;
    case 110u: goto L_002A9AA4;
    case 111u: goto L_002A9ABC;
    case 112u: goto L_002A9ACC;
    case 113u: goto L_002A9B1C;
    case 114u: goto L_002A9B24;
    case 115u: goto L_002A9B70;
    case 116u: goto L_002A9BBC;
    case 117u: goto L_002A9BC4;
    case 118u: goto L_002A9BD8;
    case 119u: goto L_002A9BEC;
    case 120u: goto L_002A9C28;
    case 121u: goto L_002A9C38;
    case 122u: goto L_002A9C4C;
    case 123u: goto L_002A9CCC;
    case 124u: goto L_002A9D14;
    case 125u: goto L_002A9D1C;
    case 126u: goto L_002A9D64;
    case 127u: goto L_002A9D6C;
    case 128u: goto L_002A9D80;
    case 129u: goto L_002A9D94;
    case 130u: goto L_002A9DD0;
    case 131u: goto L_002A9DE0;
    case 132u: goto L_002A9DF4;
    case 133u: goto L_002A9E70;
    case 134u: goto L_002A9E7C;
    case 135u: goto L_002A9EB0;
    case 136u: goto L_002A9F70;
    case 137u: goto L_002A9F90;
    case 138u: goto L_002A9FA0;
    case 139u: goto L_002AA020;
    case 140u: goto L_002AA080;
    case 141u: goto L_002AA0F0;
    case 142u: goto L_002AA198;
    case 143u: goto L_002AA1E0;
    case 144u: goto L_002AA228;
    case 145u: goto L_002AA230;
    case 146u: goto L_002AA260;
    case 147u: goto L_002AA2F0;
    case 148u: goto L_002AA314;
    case 149u: goto L_002AA3A0;
    case 150u: goto L_002AA460;
    case 151u: goto L_002AA480;
    case 152u: goto L_002AA488;
    case 153u: goto L_002AA520;
    case 154u: goto L_002AA550;
    case 155u: goto L_002AA590;
    case 156u: goto L_002AA6EC;
    case 157u: goto L_002AA744;
    case 158u: goto L_002AA7A8;
    case 159u: goto L_002AA820;
    case 160u: goto L_002AA8D0;
    case 161u: goto L_002AA910;
    case 162u: goto L_002AA974;
    case 163u: goto L_002AAA24;
    case 164u: goto L_002AABA0;
    case 165u: goto L_002AABD0;
    case 166u: goto L_002AAC10;
    case 167u: goto L_002AAC20;
    case 168u: goto L_002AAC80;
    case 169u: goto L_002AACAC;
    case 170u: goto L_002AACB4;
    case 171u: goto L_002AACC0;
    case 172u: goto L_002AACD4;
    case 173u: goto L_002AAD00;
    case 174u: goto L_002AAD14;
    case 175u: goto L_002AAD24;
    case 176u: goto L_002AAD34;
    case 177u: goto L_002AAD44;
    case 178u: goto L_002AAD54;
    case 179u: goto L_002AAD74;
    case 180u: goto L_002AAD98;
    case 181u: goto L_002AADA4;
    case 182u: goto L_002AADCC;
    case 183u: goto L_002AADDC;
    case 184u: goto L_002AAEE0;
    case 185u: goto L_002AAF0C;
    case 186u: goto L_002AAF14;
    case 187u: goto L_002AAF20;
    case 188u: goto L_002AAF34;
    case 189u: goto L_002AAF90;
    case 190u: goto L_002AAFA4;
    case 191u: goto L_002AAFB4;
    case 192u: goto L_002AAFC4;
    case 193u: goto L_002AAFD4;
    case 194u: goto L_002AAFE4;
    case 195u: goto L_002AAFF8;
    case 196u: goto L_002AB00C;
    case 197u: goto L_002AB030;
    case 198u: goto L_002AB070;
    case 199u: goto L_002AB078;
    case 200u: goto L_002AB084;
    case 201u: goto L_002AB098;
    case 202u: goto L_002AB0B0;
    case 203u: goto L_002AB174;
    case 204u: goto L_002AB198;
    case 205u: goto L_002AB1D0;
    case 206u: goto L_002AB1F0;
    case 207u: goto L_002AB1FC;
    case 208u: goto L_002AB240;
    case 209u: goto L_002AB284;
    case 210u: goto L_002AB28C;
    case 211u: goto L_002AB298;
    case 212u: goto L_002AB2B4;
    case 213u: goto L_002AB2CC;
    case 214u: goto L_002AB2DC;
    case 215u: goto L_002AB30C;
    case 216u: goto L_002AB324;
    case 217u: goto L_002AB338;
    case 218u: goto L_002AB350;
    case 219u: goto L_002AB370;
    case 220u: goto L_002AB380;
    case 221u: goto L_002AB38C;
    case 222u: goto L_002AB398;
    case 223u: goto L_002AB3AC;
    case 224u: goto L_002AB3C0;
    case 225u: goto L_002AB410;
    case 226u: goto L_002AB45C;
    case 227u: goto L_002AB468;
    case 228u: goto L_002AB478;
    case 229u: goto L_002AB484;
    case 230u: goto L_002AB4A0;
    case 231u: goto L_002AB4B4;
    case 232u: goto L_002AB4C0;
    case 233u: goto L_002AB4D4;
    case 234u: goto L_002AB4E0;
    case 235u: goto L_002AB4F0;
    case 236u: goto L_002AB518;
    case 237u: goto L_002AB548;
    case 238u: goto L_002AB568;
    case 239u: goto L_002AB59C;
    case 240u: goto L_002AB5A8;
    case 241u: goto L_002AB5B4;
    case 242u: goto L_002AB5C0;
    case 243u: goto L_002AB5D0;
    case 244u: goto L_002AB5E0;
    case 245u: goto L_002AB5EC;
    case 246u: goto L_002AB5F8;
    case 247u: goto L_002AB624;
    case 248u: goto L_002AB638;
    case 249u: goto L_002AB648;
    case 250u: goto L_002AB660;
    case 251u: goto L_002AB680;
    case 252u: goto L_002AB68C;
    case 253u: goto L_002AB69C;
    case 254u: goto L_002AB6A8;
    case 255u: goto L_002AB6B4;
    case 256u: goto L_002AB6C8;
    case 257u: goto L_002AB6EC;
    case 258u: goto L_002AB6F4;
    case 259u: goto L_002AB700;
    case 260u: goto L_002AB714;
    case 261u: goto L_002AB728;
    case 262u: goto L_002AB748;
    case 263u: goto L_002AB794;
    case 264u: goto L_002AB7A4;
    case 265u: goto L_002AB7B0;
    case 266u: goto L_002AB7CC;
    case 267u: goto L_002AB7E4;
    case 268u: goto L_002AB7F0;
    case 269u: goto L_002AB804;
    case 270u: goto L_002AB810;
    case 271u: goto L_002AB824;
    case 272u: goto L_002AB838;
    case 273u: goto L_002AB848;
    case 274u: goto L_002AB860;
    case 275u: goto L_002AB880;
    case 276u: goto L_002AB890;
    case 277u: goto L_002AB89C;
    case 278u: goto L_002AB8A8;
    case 279u: goto L_002AB8BC;
    case 280u: goto L_002AB8DC;
    case 281u: goto L_002AB8F8;
    case 282u: goto L_002AB908;
    case 283u: goto L_002AB914;
    case 284u: goto L_002AB924;
    case 285u: goto L_002AB930;
    case 286u: goto L_002AB940;
    case 287u: goto L_002AB950;
    case 288u: goto L_002AB95C;
    case 289u: goto L_002AB968;
    case 290u: goto L_002AB9D0;
    case 291u: goto L_002ABC10;
    case 292u: goto L_002ABC40;
    case 293u: goto L_002ABC68;
    case 294u: goto L_002ABC9C;
    case 295u: goto L_002ABCB0;
    case 296u: goto L_002ABCC0;
    case 297u: goto L_002ABD08;
    case 298u: goto L_002ABD18;
    case 299u: goto L_002ABD80;
    case 300u: goto L_002ABDB0;
    case 301u: goto L_002ABDB8;
    case 302u: goto L_002ABE00;
    case 303u: goto L_002ABE1C;
    case 304u: goto L_002ABED0;
    case 305u: goto L_002ABEEC;
    case 306u: goto L_002ABF90;
    case 307u: goto L_002ABFD8;
    default: bad_entry(c, 0x002A8000u); return;
    }
L_002A8000:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8020u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8020u) [[unlikely]] return; }
L_002A8020:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 1536u);
    set32(c.r[6], 0u + 32u);
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8064u); set32(c.r[4], c.r[2].w[0] + 6912u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8064u) [[unlikely]] return; }
L_002A8064:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8070u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002A8070u) [[unlikely]] return; }
L_002A8070:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A807Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002A807Cu) [[unlikely]] return; }
L_002A807C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 4608u);
    set32(c.r[6], 0u + 32u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A80C4u); set32(c.r[4], c.r[2].w[0] + 3456u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A80C4u) [[unlikely]] return; }
L_002A80C4:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 5632u);
    set32(c.r[6], 0u + 32u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A810Cu); set32(c.r[4], c.r[2].w[0] + 10368u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A810Cu) [[unlikely]] return; }
L_002A810C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[8].d[0] = c.r[20].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 13968u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[7], c.r[8].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 13976u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 14000u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[22], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 14076u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A818Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A818Cu) [[unlikely]] return; }
L_002A818C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A819Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x002A819Cu) [[unlikely]] return; }
L_002A819C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81A4u); set32(c.r[4], c.r[16].w[0] + 6144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002A81A4u) [[unlikely]] return; }
L_002A81A4:
    set32(c.r[4], c.r[16].w[0] + 512u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81B4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A81B4u) [[unlikely]] return; }
L_002A81B4:
    set32(c.r[4], c.r[16].w[0] + 1536u);
    set32(c.r[5], c.r[16].w[0] + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81C4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A81C4u) [[unlikely]] return; }
L_002A81C4:
    set32(c.r[4], c.r[16].w[0] + 2560u);
    set32(c.r[5], c.r[16].w[0] + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81D4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A81D4u) [[unlikely]] return; }
L_002A81D4:
    set32(c.r[4], c.r[16].w[0] + 3584u);
    set32(c.r[5], c.r[16].w[0] + 3072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81E4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A81E4u) [[unlikely]] return; }
L_002A81E4:
    set32(c.r[4], c.r[16].w[0] + 4608u);
    set32(c.r[5], c.r[16].w[0] + 4096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81F4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A81F4u) [[unlikely]] return; }
L_002A81F4:
    set32(c.r[4], c.r[16].w[0] + 5632u);
    set32(c.r[5], c.r[16].w[0] + 5120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8204u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8204u) [[unlikely]] return; }
L_002A8204:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] - 15252u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 128u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 128u);
    set32(c.r[22], c.r[22].w[0] + 128u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[23], ld32((c.r[5].w[0])));
    c.budget -= 23;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 144u);  if (t) { goto L_002A83B8; } }
L_002A8260:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 1024u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 1028u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 1032u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 14;
L_002A8298:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_002A82D0; } }
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[23].w[0] + c.r[5].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8298u | kUnwind; return; } goto L_002A8298; } }
L_002A82D0:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2048u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2052u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2056u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 3072u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 3076u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 3080u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 14;
L_002A8308:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_002A8340; } }
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[23].w[0] + c.r[5].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8308u | kUnwind; return; } goto L_002A8308; } }
L_002A8340:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4096u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4100u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4104u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 5120u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 5124u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 5128u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 14;
L_002A8378:
    set32(c.r[5], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { goto L_002A83B0; } }
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[23].w[0] + c.r[5].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8378u | kUnwind; return; } goto L_002A8378; } }
L_002A83B0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002A83B8:
    c.r[5].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8260u | kUnwind; return; } goto L_002A8260; } }
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6208u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6216u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14076u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u - c.r[5].w[0]);
    c.r[17].d[0] = c.r[4].d[0] << 48;
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8420u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A8420u) [[unlikely]] return; }
L_002A8420:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A842Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002A842Cu) [[unlikely]] return; }
L_002A842C:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8438u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002A8438u) [[unlikely]] return; }
L_002A8438:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 1536u);
    set32(c.r[6], 0u + 8u);
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A847Cu); set32(c.r[4], c.r[2].w[0] + 10368u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A847Cu) [[unlikely]] return; }
L_002A847C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14070u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84B8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A84B8u) [[unlikely]] return; }
L_002A84B8:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 512u);
    set32(c.r[6], 0u + 8u);
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84FCu); set32(c.r[4], c.r[2].w[0] + 3456u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A84FCu) [[unlikely]] return; }
L_002A84FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8504u); set32(c.r[4], c.r[16].w[0] + 6144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A8504u) [[unlikely]] return; }
L_002A8504:
    set32(c.r[4], c.r[16].w[0] + 512u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8514u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8514u) [[unlikely]] return; }
L_002A8514:
    set32(c.r[4], c.r[16].w[0] + 1536u);
    set32(c.r[5], c.r[16].w[0] + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8524u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8524u) [[unlikely]] return; }
L_002A8524:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 13992u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { goto L_002A85E0; } }
L_002A8568:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1024u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1028u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1032u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 14;
L_002A85A0:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_002A85D8; } }
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A85A0u | kUnwind; return; } goto L_002A85A0; } }
L_002A85D8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002A85E0:
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8568u | kUnwind; return; } goto L_002A8568; } }
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 3;
L_002A85F8:
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7DE8u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 264u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8614u); set32(c.r[4], 0u + 390u);  if (depth < kMaxDepth) unit_0049(c, 185u, depth + 1u); else { c.pc = 0x00225430u; return; } if (c.pc != 0x002A8614u) [[unlikely]] return; }
L_002A8614:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8620u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x002A8620u) [[unlikely]] return; }
L_002A8620:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002A8650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 53u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_002A8678; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8688; } }
    c.budget -= 1;
L_002A8678:
    st32((c.r[29].w[0] + 24u), 0u);
    c.f[4] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), 0u);  if (t) { goto L_002A8930; } }
L_002A8688:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[2], c.r[29].w[0] + 28u);
    st32((c.r[2].w[0]), 0u);
    c.f[4] = 0u;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 821u)));
    set32(c.r[3], 0u + 50u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A88E8; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_002A88E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A88E8; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_002A88E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A88E8; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_002A88E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A88E8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_002A88E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A88E8; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 34u);  if (t) { goto L_002A88E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A88E8; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_002A88A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A8818; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A8740; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A88E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A88E8; } }
L_002A8740:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_002A87B0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3B230000u);  if (t) { goto L_002A8770; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A8770:
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3BA30000u);  if (t) { goto L_002A8798; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A8798:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A87B0:
    c.r[1].d[0] = c.r[3].sd[0] < -256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_002A87D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A87D8:
    c.r[1].d[0] = c.r[3].sd[0] < -160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_002A8800; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A8800:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A8818:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;  if (t) { goto L_002A8860; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0xBC230000u);  if (t) { goto L_002A8848; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A8848:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A8860:
    c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_002A8888; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A8888:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A88A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A88E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0xBC750000u);  if (t) { goto L_002A88D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A88E8; } }
    c.budget -= 1;
L_002A88D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[5].d[0] = c.r[3].d[0] | 49807ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC750000u);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002A88E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8930; } }
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 14;
L_002A8930:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
L_002A8950:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A8998; } }
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_002A89B0; } }
    c.budget -= 1;
L_002A8998:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A89B0; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 3;
L_002A89B0:
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8950u | kUnwind; return; } goto L_002A8950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A89D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x002A89D4u) [[unlikely]] return; }
L_002A89D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A89E0:
    set32(c.r[29], c.r[29].w[0] - 1280u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002A9138; } }
L_002A8A18:
    c.r[4].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 14064u);
    set32(c.r[5], c.r[29].w[0] + 1264u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A58u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 318u, depth + 1u); else { c.pc = 0x001BB220u; return; } if (c.pc != 0x002A8A58u) [[unlikely]] return; }
L_002A8A58:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[8].d[0] = ld16((c.r[29].w[0] + 1264u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[7].d[0] = ld16((c.r[29].w[0] + 1268u));
    c.r[6].d[0] = ld16((c.r[29].w[0] + 1272u));
    set32(c.r[5], c.r[29].w[0] + 1248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14070u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 1264u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 1268u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 1272u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8AB0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 318u, depth + 1u); else { c.pc = 0x001BB220u; return; } if (c.pc != 0x002A8AB0u) [[unlikely]] return; }
L_002A8AB0:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 1252u));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 1256u));
    c.r[6].d[0] = ld16((c.r[29].w[0] + 1248u));
    set32(c.r[5], ld32((c.r[29].w[0] + 1268u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 1272u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 1264u)));
    st32((c.r[29].w[0] + 1252u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 1256u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1248u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1252u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 1256u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 1248u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 1268u), c.r[4].w[0]);
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st32((c.r[29].w[0] + 1272u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1264u), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 1268u));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 1272u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 1264u));
    st32((c.r[29].w[0] + 1268u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1272u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1264u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1272u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1264u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1268u)));
    c.budget -= 29;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_002A8B2C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002A8B2C:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], 0u - c.r[18].w[0]);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] >= 0; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_002A8B50; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002A8B50:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], 0u - c.r[17].w[0]);
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_002A8B74; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002A8B74:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[5], 0u - c.r[16].w[0]);
    c.r[16].d[0] = c.r[5].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14076u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BC4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A8BC4u) [[unlikely]] return; }
L_002A8BC4:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BD0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002A8BD0u) [[unlikely]] return; }
L_002A8BD0:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BDCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002A8BDCu) [[unlikely]] return; }
L_002A8BDC:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BE8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002A8BE8u) [[unlikely]] return; }
L_002A8BE8:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + 144u);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 14082u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C3Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8C3Cu) [[unlikely]] return; }
L_002A8C3C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + 144u);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 14082u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C94u); set32(c.r[4], c.r[2].w[0] + 6912u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8C94u) [[unlikely]] return; }
L_002A8C94:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14076u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CD0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A8CD0u) [[unlikely]] return; }
L_002A8CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CE0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x002A8CE0u) [[unlikely]] return; }
L_002A8CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CE8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002A8CE8u) [[unlikely]] return; }
L_002A8CE8:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[29].w[0] + 736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14082u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D20u); set32(c.r[5], c.r[29].w[0] + 992u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8D20u) [[unlikely]] return; }
L_002A8D20:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[29].w[0] + 224u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14082u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D58u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8D58u) [[unlikely]] return; }
L_002A8D58:
    c.r[4].d[0] = c.r[19].d[0] << 56;
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 13952u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + 13968u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[10].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[9], c.r[9].w[0] - 15252u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[22], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 14082u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[10], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);  if (t) { goto L_002A8E60; } }
    c.budget -= 1;
L_002A8DE8:
    set32(c.r[6], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 992u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 996u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 1000u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 480u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 484u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 488u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 14;
L_002A8E20:
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { goto L_002A8E58; } }
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[22].w[0] + c.r[6].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8E20u | kUnwind; return; } goto L_002A8E20; } }
L_002A8E58:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002A8E60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[6].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8DE8u | kUnwind; return; } goto L_002A8DE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 14070u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E94u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A8E94u) [[unlikely]] return; }
L_002A8E94:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + 144u);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 14088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], c.r[29].w[0] + 736u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EECu); set32(c.r[4], c.r[2].w[0] + 3456u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8EECu) [[unlikely]] return; }
L_002A8EEC:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1272u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1264u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14076u);
    set32(c.r[5], 0u - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u - c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] << 48;
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = c.r[5].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F58u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A8F58u) [[unlikely]] return; }
L_002A8F58:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F64u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002A8F64u) [[unlikely]] return; }
L_002A8F64:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F70u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002A8F70u) [[unlikely]] return; }
L_002A8F70:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F7Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002A8F7Cu) [[unlikely]] return; }
L_002A8F7C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + 144u);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 14088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FD4u); set32(c.r[4], c.r[2].w[0] + 10368u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A8FD4u) [[unlikely]] return; }
L_002A8FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FDCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A8FDCu) [[unlikely]] return; }
L_002A8FDC:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[29].w[0] + 736u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14088u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9014u); set32(c.r[5], c.r[29].w[0] + 992u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9014u) [[unlikely]] return; }
L_002A9014:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[29].w[0] + 224u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14088u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A904Cu); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A904Cu) [[unlikely]] return; }
L_002A904C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[20].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 13992u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 144u);
    set32(c.r[8], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 14088u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 64u);  if (t) { goto L_002A9118; } }
L_002A90A0:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 992u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 996u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1000u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 480u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 484u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 488u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 14;
L_002A90D8:
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { goto L_002A9110; } }
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90D8u | kUnwind; return; } goto L_002A90D8; } }
L_002A9110:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002A9118:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90A0u | kUnwind; return; } goto L_002A90A0; } }
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 4;
L_002A9138:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[20].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 14094u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8A18u | kUnwind; return; } goto L_002A8A18; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9178u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x002A9178u) [[unlikely]] return; }
L_002A9178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1280u);  c.pc = t; return; }
L_002A91A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 53u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_002A91C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A91D8; } }
    c.budget -= 1;
L_002A91C8:
    st32((c.r[29].w[0] + 24u), 0u);
    c.f[4] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), 0u);  if (t) { goto L_002A9410; } }
L_002A91D8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[2], c.r[29].w[0] + 28u);
    st32((c.r[2].w[0]), 0u);
    c.f[4] = 0u;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 821u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A9380; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 33u);  if (t) { goto L_002A92F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A9220; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A93C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A93C8; } }
L_002A9220:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_002A9290; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3B230000u);  if (t) { goto L_002A9250; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A9250:
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3BA30000u);  if (t) { goto L_002A9278; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A9278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A9290:
    c.r[1].d[0] = c.r[3].sd[0] < -256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_002A92B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A92B8:
    c.r[1].d[0] = c.r[3].sd[0] < -160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_002A92E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A92E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A92F8:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;  if (t) { goto L_002A9340; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0xBC230000u);  if (t) { goto L_002A9328; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A9328:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A9340:
    c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_002A9368; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A9368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A9380:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A93C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0xBC750000u);  if (t) { goto L_002A93B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002A93C8; } }
    c.budget -= 1;
L_002A93B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[5].d[0] = c.r[3].d[0] | 49807ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC750000u);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002A93C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A9410; } }
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 14;
L_002A9410:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
L_002A9430:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9478; } }
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_002A9490; } }
    c.budget -= 1;
L_002A9478:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A9490; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 3;
L_002A9490:
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9430u | kUnwind; return; } goto L_002A9430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A94B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x002A94B4u) [[unlikely]] return; }
L_002A94B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A94C0:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 335u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A9E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A94FCu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0049(c, 184u, depth + 1u); else { c.pc = 0x002253F0u; return; } if (c.pc != 0x002A94FCu) [[unlikely]] return; }
L_002A94FC:
    set32(c.r[6], ld32((c.r[18].w[0] + 176u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = 0ull << 56;
    set32(c.r[5], 0u + 13952u);
    set32(c.r[3], c.r[3].w[0] + 14064u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    mmi::mult(c, 0, c.r[20].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9544u); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x002A9544u) [[unlikely]] return; }
L_002A9544:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9550u); set32(c.r[5], c.r[18].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x002A9550u) [[unlikely]] return; }
L_002A9550:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[29].w[0] + 208u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14076u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9590u); set32(c.r[5], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A9590u) [[unlikely]] return; }
L_002A9590:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[5].d[0] = c.r[22].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] - 15252u);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 14076u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[23], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9604u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A9604u) [[unlikely]] return; }
L_002A9604:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9614u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x002A9614u) [[unlikely]] return; }
L_002A9614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A961Cu); set32(c.r[4], c.r[17].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002A961Cu) [[unlikely]] return; }
L_002A961C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A9648; } }
    c.budget -= 1;
L_002A9628:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 160u);
    set32(c.r[5], c.r[2].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9640u); set32(c.r[6], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002A9640u) [[unlikely]] return; }
L_002A9640:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002A9648:
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9628u | kUnwind; return; } goto L_002A9628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A96B8; } }
    c.budget -= 1;
L_002A9660:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A967Cu); set32(c.r[5], c.r[3].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002A967Cu) [[unlikely]] return; }
L_002A967C:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9694u); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002A9694u) [[unlikely]] return; }
L_002A9694:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96A4u); set32(c.r[4], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x002A96A4u) [[unlikely]] return; }
L_002A96A4:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 396u), 0u);
    c.budget -= 5;
L_002A96B8:
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[20].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9660u | kUnwind; return; } goto L_002A9660; } }
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14084u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96F4u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A96F4u) [[unlikely]] return; }
L_002A96F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96FCu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002A96FCu) [[unlikely]] return; }
L_002A96FC:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[5], c.r[17].w[0] + 160u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9744u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9744u) [[unlikely]] return; }
L_002A9744:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[5], c.r[17].w[0] + 480u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9790u); set32(c.r[4], c.r[2].w[0] + 6912u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9790u) [[unlikely]] return; }
L_002A9790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9798u); set32(c.r[4], c.r[17].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A9798u) [[unlikely]] return; }
L_002A9798:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A97ACu) [[unlikely]] return; }
L_002A97AC:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[17].w[0] + 480u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97C0u); set32(c.r[5], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A97C0u) [[unlikely]] return; }
L_002A97C0:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 13976u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A9858; } }
L_002A97F8:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9808u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A9808u) [[unlikely]] return; }
L_002A9808:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A981Cu); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A981Cu) [[unlikely]] return; }
L_002A981C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 15;
L_002A9858:
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A97F8u | kUnwind; return; } goto L_002A97F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A98D0; } }
    c.budget -= 1;
L_002A9878:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9894u); set32(c.r[5], c.r[3].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002A9894u) [[unlikely]] return; }
L_002A9894:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98ACu); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002A98ACu) [[unlikely]] return; }
L_002A98AC:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98BCu); set32(c.r[4], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x002A98BCu) [[unlikely]] return; }
L_002A98BC:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 396u), 0u);
    c.budget -= 5;
L_002A98D0:
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[20].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9878u | kUnwind; return; } goto L_002A9878; } }
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14082u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A990Cu); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A990Cu) [[unlikely]] return; }
L_002A990C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9914u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002A9914u) [[unlikely]] return; }
L_002A9914:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], c.r[17].w[0] + 160u);
    c.r[3].d[0] = c.r[22].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9958u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9958u) [[unlikely]] return; }
L_002A9958:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], c.r[17].w[0] + 480u);
    c.r[3].d[0] = c.r[22].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99A0u); set32(c.r[4], c.r[2].w[0] + 6912u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A99A0u) [[unlikely]] return; }
L_002A99A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99A8u); set32(c.r[4], c.r[17].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A99A8u) [[unlikely]] return; }
L_002A99A8:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A99BCu) [[unlikely]] return; }
L_002A99BC:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[17].w[0] + 480u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99D0u); set32(c.r[5], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A99D0u) [[unlikely]] return; }
L_002A99D0:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 13968u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A9A68; } }
L_002A9A08:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A18u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A9A18u) [[unlikely]] return; }
L_002A9A18:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A2Cu); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A9A2Cu) [[unlikely]] return; }
L_002A9A2C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 15;
L_002A9A68:
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9A08u | kUnwind; return; } goto L_002A9A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A9AE0; } }
    c.budget -= 1;
L_002A9A88:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9AA4u); set32(c.r[5], c.r[3].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002A9AA4u) [[unlikely]] return; }
L_002A9AA4:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9ABCu); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002A9ABCu) [[unlikely]] return; }
L_002A9ABC:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9ACCu); set32(c.r[4], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x002A9ACCu) [[unlikely]] return; }
L_002A9ACC:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 396u), 0u);
    c.budget -= 5;
L_002A9AE0:
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[20].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9A88u | kUnwind; return; } goto L_002A9A88; } }
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14090u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B1Cu); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A9B1Cu) [[unlikely]] return; }
L_002A9B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B24u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002A9B24u) [[unlikely]] return; }
L_002A9B24:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[5], c.r[17].w[0] + 160u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B70u); set32(c.r[4], c.r[2].w[0] + 3456u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9B70u) [[unlikely]] return; }
L_002A9B70:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[5], c.r[17].w[0] + 480u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9BBCu); set32(c.r[4], c.r[2].w[0] + 10368u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9BBCu) [[unlikely]] return; }
L_002A9BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9BC4u); set32(c.r[4], c.r[17].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A9BC4u) [[unlikely]] return; }
L_002A9BC4:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9BD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9BD8u) [[unlikely]] return; }
L_002A9BD8:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[17].w[0] + 480u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9BECu); set32(c.r[5], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9BECu) [[unlikely]] return; }
L_002A9BEC:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A9C88; } }
    c.budget -= 1;
L_002A9C28:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C38u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A9C38u) [[unlikely]] return; }
L_002A9C38:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C4Cu); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A9C4Cu) [[unlikely]] return; }
L_002A9C4C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 15;
L_002A9C88:
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[20].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9C28u | kUnwind; return; } goto L_002A9C28; } }
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 14088u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9CCCu); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A9CCCu) [[unlikely]] return; }
L_002A9CCC:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], c.r[17].w[0] + 160u);
    c.r[3].d[0] = c.r[22].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D14u); set32(c.r[4], c.r[2].w[0] + 3456u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9D14u) [[unlikely]] return; }
L_002A9D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D1Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002A9D1Cu) [[unlikely]] return; }
L_002A9D1C:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], c.r[17].w[0] + 480u);
    c.r[3].d[0] = c.r[22].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D64u); set32(c.r[4], c.r[2].w[0] + 10368u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9D64u) [[unlikely]] return; }
L_002A9D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D6Cu); set32(c.r[4], c.r[17].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A9D6Cu) [[unlikely]] return; }
L_002A9D6C:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9D80u) [[unlikely]] return; }
L_002A9D80:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], c.r[17].w[0] + 480u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D94u); set32(c.r[5], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A9D94u) [[unlikely]] return; }
L_002A9D94:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 13992u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A9E30; } }
    c.budget -= 1;
L_002A9DD0:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9DE0u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A9DE0u) [[unlikely]] return; }
L_002A9DE0:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9DF4u); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A9DF4u) [[unlikely]] return; }
L_002A9DF4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 15;
L_002A9E30:
    c.r[4].d[0] = c.r[20].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 14088u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 44u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9DD0u | kUnwind; return; } goto L_002A9DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E70u);  if (depth < kMaxDepth) unit_0049(c, 185u, depth + 1u); else { c.pc = 0x00225430u; return; } if (c.pc != 0x002A9E70u) [[unlikely]] return; }
L_002A9E70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x002A9E7Cu) [[unlikely]] return; }
L_002A9E7C:
    c.budget -= 1;
L_002A9E80:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_002A9EB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_002A9F28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A9F20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002A9EF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A9EF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A9EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9F30; } }
    c.budget -= 1;
L_002A9EF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[5], 0u + 26064u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], c.r[3].w[0] + 25436u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 21716u)));
    st32((c.r[4].w[0] + 624u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 21720u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 628u), c.r[3].w[0]);  if (t) { goto L_002A9F60; } }
L_002A9F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_002A9F30; } }
L_002A9F28:
    set32(c.r[6], 0u + 8u);
    c.budget -= 2;
L_002A9F30:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 12);
    set32(c.r[6], c.r[3].w[0] << 13);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01030000u);
    st32((c.r[4].w[0] + 624u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 628u), c.r[3].w[0]);
    c.budget -= 12;
L_002A9F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A9F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00B00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] - 30752u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23472u), c.r[17].w[0]);
    c.budget -= 8;
L_002A9F90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9FA0u); set32(c.r[6], 0u + 352u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002A9FA0u) [[unlikely]] return; }
L_002A9FA0:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[17].w[0] + 352u);  if (t) { goto L_002A9FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A9FC0; } }
    c.budget -= 1;
L_002A9FB8:
    st32((c.r[28].w[0] - 23456u), c.r[17].w[0]);
    c.budget -= 2;
L_002A9FC0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 352u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9F90u | kUnwind; return; } goto L_002A9F90; } }
    set32(c.r[3], 0u + 256u);
    st16((c.r[28].w[0] - 23804u), static_cast<std::uint16_t>(0u));
    st32((c.r[28].w[0] - 23476u), c.r[3].w[0]);
    st16((c.r[28].w[0] - 23808u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23812u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23816u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23820u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23802u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23806u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23810u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23814u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23818u), static_cast<std::uint16_t>(0u));
    st32((c.r[28].w[0] - 23836u), 0u);
    st32((c.r[28].w[0] - 23480u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA020:
    set32(c.r[8], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[7], c.r[28].w[0] - 23804u);
    set32(c.r[6], c.r[28].w[0] - 23808u);
    set32(c.r[5], c.r[28].w[0] - 23812u);
    set32(c.r[4], c.r[28].w[0] - 23816u);
    set32(c.r[3], c.r[28].w[0] - 23820u);
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    st32((c.r[28].w[0] - 23836u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002AA080:
    set32(c.r[2], ld32((c.r[28].w[0] - 23472u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA0D0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23472u), c.r[3].w[0]);  if (t) { goto L_002AA0A0; } }
    st32((c.r[28].w[0] - 23456u), 0u);
    c.budget -= 2;
L_002AA0A0:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 620u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA0C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 620u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_002AA0C8:
    st32((c.r[4].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 2;
L_002AA0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA0E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23476u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 23476u), c.r[3].w[0]);
    c.budget -= 4;
L_002AA0E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AA0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_002AA120; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23476u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 23476u), c.r[2].w[0]);
    c.budget -= 3;
L_002AA120:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA140; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AA140; } }
    st32((c.r[5].w[0] + 620u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_002AA188; } }
    c.budget -= 1;
L_002AA140:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA158; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002AA158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), 0u);  if (t) { goto L_002AA188; } }
L_002AA158:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA180; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AA180; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002AA188; } }
    c.budget -= 1;
L_002AA180:
    st32((c.r[5].w[0] + 620u), 0u);
    c.budget -= 2;
L_002AA188:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA198u); set32(c.r[6], 0u + 352u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002AA198u) [[unlikely]] return; }
L_002AA198:
    set32(c.r[3], ld32((c.r[28].w[0] - 23456u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA1B8; } }
    st32((c.r[28].w[0] - 23456u), c.r[17].w[0]);
    st32((c.r[28].w[0] - 23472u), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_002AA1C8; } }
    c.budget -= 1;
L_002AA1B8:
    st32((c.r[3].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[28].w[0] - 23456u), c.r[17].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 4;
L_002AA1C8:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AA208; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AA248; } }
L_002AA208:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA248; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA248; } }
    c.budget -= 1;
L_002AA228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA230u);  if (depth < kMaxDepth) unit_006A(c, 141u, depth + 1u); else { c.pc = 0x002AA0F0u; return; } if (c.pc != 0x002AA230u) [[unlikely]] return; }
L_002AA230:
    set32(c.r[4], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA228u | kUnwind; return; } goto L_002AA228; } }
L_002AA248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AA260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002AA2D8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AA2C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AA2B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA2E0; } }
    c.budget -= 1;
L_002AA2A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_002AA2E0; } }
    c.budget -= 1;
L_002AA2B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_002AA2E0; } }
    c.budget -= 1;
L_002AA2C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_002AA2E0; } }
    c.budget -= 1;
L_002AA2D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 624u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 2;
L_002AA2E0:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AA428; } }
L_002AA2F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 624u)));
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + 1536u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA314u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 140u, depth + 1u); else { c.pc = 0x002AA080u; return; } if (c.pc != 0x002AA314u) [[unlikely]] return; }
L_002AA314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AA448; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002AA348; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8296u)));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8298u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002AA3C0; } }
    c.budget -= 1;
L_002AA348:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AA368; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8256u)));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8258u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002AA3C0; } }
L_002AA368:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 562u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA388; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA3C0; } }
L_002AA388:
    set32(c.r[5], ld32((c.r[18].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA3B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA3A0u);  if (depth < kMaxDepth) unit_006A(c, 141u, depth + 1u); else { c.pc = 0x002AA0F0u; return; } if (c.pc != 0x002AA3A0u) [[unlikely]] return; }
L_002AA3A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002AA428; } }
    c.budget -= 1;
L_002AA3B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002AA3C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 502u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 264u)));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 56u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA418; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1984u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002AA420; } }
L_002AA418:
    set32(c.r[3], c.r[18].w[0] + 192u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_002AA420:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_002AA428:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_002AA448; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA2F0u | kUnwind; return; } goto L_002AA2F0; } }
    c.budget -= 1;
L_002AA448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AA460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 4);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_002AA4F0; } }
L_002AA480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA488u); c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (depth < kMaxDepth) unit_006A(c, 140u, depth + 1u); else { c.pc = 0x002AA080u; return; } if (c.pc != 0x002AA488u) [[unlikely]] return; }
L_002AA488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA510; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[3], c.r[4].w[0] + 192u);
    c.r[6].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[5].w[0] + 1536u);
    set32(c.r[5], c.r[6].w[0] << 2);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 3u));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 502u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 56u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 24;
L_002AA4F0:
    c.r[5].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_002AA510; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA480u | kUnwind; return; } goto L_002AA480; } }
    c.budget -= 1;
L_002AA510:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AA520:
    set32(c.r[4], ld32((c.r[4].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AA540; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[4].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 40u), c.f[12]);
    st32((c.r[4].w[0] + 32u), c.f[13]);
    c.budget -= 5;
L_002AA540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_002AA550:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(0u));
    set32(c.r[19], ld32((c.r[4].w[0] + 620u)));
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AAC30; } }
    c.budget -= 1;
L_002AA590:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002AA5B0; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA5B8; } }
L_002AA5B0:
    set32(c.r[17], ld32((c.r[20].w[0] + 264u)));
    c.budget -= 2;
L_002AA5B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002AA5C8; } }
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002AA5C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AA630; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 851u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA630; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AA600; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002AA680; } }
L_002AA600:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8296u)));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AA620; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8298u)));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AA680; } }
L_002AA620:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002AA680; } }
    c.budget -= 1;
L_002AA630:
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA680; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AA658; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002AA680; } }
L_002AA658:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8256u)));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AA678; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8258u)));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AA680; } }
L_002AA678:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002AA680:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], ld32((c.r[19].w[0] + 56u)));  if (t) { goto L_002AAC18; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AA918; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA6B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAC20; } }
    c.budget -= 1;
L_002AA6B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AA718; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 851u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA718; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AA788; } }
    c.f[1] = ld32((c.r[17].w[0] + 8308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6ECu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x002AA6ECu) [[unlikely]] return; }
L_002AA6EC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAC20; } }
L_002AA718:
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA770; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AA788; } }
    c.f[1] = ld32((c.r[17].w[0] + 8268u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA744u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x002AA744u) [[unlikely]] return; }
L_002AA744:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAC20; } }
L_002AA770:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002AA788; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002AAC20; } }
L_002AA788:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 26016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA7A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA7A8u) [[unlikely]] return; }
L_002AA7A8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 502u)));
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA800; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[1].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA800; } }
    set32(c.r[3], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[2], ld32((c.r[17].w[0] + 672u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AA8C8; } }
L_002AA800:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA8C8; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_002AA8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA820u); set32(c.r[22], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 291u, depth + 1u); else { c.pc = 0x002ABC10u; return; } if (c.pc != 0x002AA820u) [[unlikely]] return; }
L_002AA820:
    st16((c.r[17].w[0] + 556u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[17].w[0] + 577u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 264u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA868; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AA868; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA868; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1538u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 1538u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002AA868:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA8C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AA8C8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA8C8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA8C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA8C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA8C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1532u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 1532u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002AA8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 200u, depth + 1u); else { c.pc = 0x001EE210u; return; } if (c.pc != 0x002AA8D0u) [[unlikely]] return; }
L_002AA8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AA908; } }
L_002AA8E0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], 0u + 130u);
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AA900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 128ull;  if (t) { goto L_002AA908; } }
    c.budget -= 1;
L_002AA900:
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 2;
L_002AA908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA910u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 290u, depth + 1u); else { c.pc = 0x002AB9D0u; return; } if (c.pc != 0x002AA910u) [[unlikely]] return; }
L_002AA910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAC20; } }
L_002AA918:
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 502u)));
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA9E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA9E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AA9B0; } }
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = c.r[21].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA960; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 8308u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA974u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 162u, depth + 1u); else { c.pc = 0x00126120u; return; } if (c.pc != 0x002AA974u) [[unlikely]] return; }
L_002AA974:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA9B0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AAC20; } }
    c.budget -= 1;
L_002AA9B0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[1].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AAAC8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 672u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AAAC8; } }
L_002AA9E0:
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AAA90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AAA60; } }
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = c.r[21].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AAA10; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002AAA10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 8268u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA24u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 162u, depth + 1u); else { c.pc = 0x00126120u; return; } if (c.pc != 0x002AAA24u) [[unlikely]] return; }
L_002AAA24:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AAA60; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AAC20; } }
    c.budget -= 1;
L_002AAA60:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[1].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AAAC8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 672u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AAAC8; } }
L_002AAA90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AAAC8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AAAC8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002AAAC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAB80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AAAF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[17].w[0] + 8292u));  if (t) { goto L_002AAB18; } }
L_002AAAF8:
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AAB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[17].w[0] + 8252u));  if (t) { goto L_002AAB18; } }
    c.budget -= 1;
L_002AAB10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 2;
L_002AAB18:
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::sub(c.f[1], c.f[2]);  if (t) { goto L_002AAB50; } }
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 36u), c.f[0]);  if (t) { goto L_002AAB80; } }
    c.budget -= 1;
L_002AAB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAB80; } }
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_002AAB80:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 26016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AABA0u) [[unlikely]] return; }
L_002AABA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AABC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AABC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 128ull;  if (t) { goto L_002AAC08; } }
    c.budget -= 1;
L_002AABC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABD0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 200u, depth + 1u); else { c.pc = 0x001EE210u; return; } if (c.pc != 0x002AABD0u) [[unlikely]] return; }
L_002AABD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AABE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AAC08; } }
L_002AABE0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], 0u + 130u);
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AAC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 128ull;  if (t) { goto L_002AAC08; } }
    c.budget -= 1;
L_002AAC00:
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 2;
L_002AAC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 290u, depth + 1u); else { c.pc = 0x002AB9D0u; return; } if (c.pc != 0x002AAC10u) [[unlikely]] return; }
L_002AAC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAC20; } }
L_002AAC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 141u, depth + 1u); else { c.pc = 0x002AA0F0u; return; } if (c.pc != 0x002AAC20u) [[unlikely]] return; }
L_002AAC20:
    set32(c.r[19], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA590u | kUnwind; return; } goto L_002AA590; } }
    c.budget -= 1;
L_002AAC30:
    c.r[3].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AAC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002AAC50; } }
    c.budget -= 1;
L_002AAC48:
    st8((c.r[20].w[0] + 576u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002AAC50:
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
L_002AAC80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 48u);
    set32(c.r[16], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACACu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AACACu) [[unlikely]] return; }
L_002AACAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACB4u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002AACB4u) [[unlikely]] return; }
L_002AACB4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACC0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AACC0u) [[unlikely]] return; }
L_002AACC0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002AACD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACD4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AACD4u) [[unlikely]] return; }
L_002AACD4:
    c.budget -= 1;
L_002AACD8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAE48; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { goto L_002AAD08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD00u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AAD00u) [[unlikely]] return; }
L_002AAD00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAD18; } }
L_002AAD08:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD14u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AAD14u) [[unlikely]] return; }
L_002AAD14:
    c.budget -= 1;
L_002AAD18:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD24u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AAD24u) [[unlikely]] return; }
L_002AAD24:
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD34u); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AAD34u) [[unlikely]] return; }
L_002AAD34:
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD44u); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AAD44u) [[unlikely]] return; }
L_002AAD44:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD54u); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AAD54u) [[unlikely]] return; }
L_002AAD54:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD74u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x002AAD74u) [[unlikely]] return; }
L_002AAD74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 80u);  if (t) { goto L_002AAE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD98u); set32(c.r[5], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x002AAD98u) [[unlikely]] return; }
L_002AAD98:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AADA4u); set32(c.r[5], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x002AADA4u) [[unlikely]] return; }
L_002AADA4:
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 96u);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AADCCu); st32((c.r[17].w[0] + 4u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AADCCu) [[unlikely]] return; }
L_002AADCC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AADDCu); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AADDCu) [[unlikely]] return; }
L_002AADDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AADF8; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.budget -= 4;
L_002AADF8:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAE40; } }
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 144u), c.f[1]);  if (t) { goto L_002AAE40; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.budget -= 3;
L_002AAE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAEC0; } }
L_002AAE48:
    st32((c.r[17].w[0]), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 31u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAE78; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_002AAE78:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAEC0; } }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 48u), c.f[1]);  if (t) { goto L_002AAEC0; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 3;
L_002AAEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AAEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[16], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF0Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AAF0Cu) [[unlikely]] return; }
L_002AAF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF14u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002AAF14u) [[unlikely]] return; }
L_002AAF14:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF20u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AAF20u) [[unlikely]] return; }
L_002AAF20:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_002AAF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF34u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AAF34u) [[unlikely]] return; }
L_002AAF34:
    c.budget -= 1;
L_002AAF38:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 31u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAF80; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 8;
L_002AAF80:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF90u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AAF90u) [[unlikely]] return; }
L_002AAF90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFA4u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AAFA4u) [[unlikely]] return; }
L_002AAFA4:
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFB4u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AAFB4u) [[unlikely]] return; }
L_002AAFB4:
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFC4u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AAFC4u) [[unlikely]] return; }
L_002AAFC4:
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFD4u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AAFD4u) [[unlikely]] return; }
L_002AAFD4:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFE4u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AAFE4u) [[unlikely]] return; }
L_002AAFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AAFF8u) [[unlikely]] return; }
L_002AAFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB00Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AB00Cu) [[unlikely]] return; }
L_002AB00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AB030:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[21].w[0] + 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[20].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB070u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB070u) [[unlikely]] return; }
L_002AB070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB078u); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002AB078u) [[unlikely]] return; }
L_002AB078:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB084u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB084u) [[unlikely]] return; }
L_002AB084:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[20].w[0] + 32u);  if (t) { goto L_002AB098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB098u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB098u) [[unlikely]] return; }
L_002AB098:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[17], c.r[17].w[0] + 2720u);
    set32(c.r[18], c.r[20].w[0] + 48u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 148u);
    set32(c.r[23], c.r[29].w[0] + 152u);
    c.budget -= 6;
L_002AB0B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AB120; } }
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 40u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0]), c.f[0]);  if (t) { goto L_002AB168; } }
L_002AB120:
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[23].w[0]), c.f[0]);
    c.budget -= 18;
L_002AB168:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB174u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB174u) [[unlikely]] return; }
L_002AB174:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB0B0u | kUnwind; return; } goto L_002AB0B0; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[17], c.r[20].w[0] + 176u);
    set32(c.r[18], c.r[18].w[0] + 2688u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002AB198:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 48u);
    set32(c.r[5], c.r[3].w[0] + 48u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1D0u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x002AB1D0u) [[unlikely]] return; }
L_002AB1D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB198u | kUnwind; return; } goto L_002AB198; } }
    set32(c.r[4], c.r[20].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1F0u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB1F0u) [[unlikely]] return; }
L_002AB1F0:
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1FCu); set32(c.r[5], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB1FCu) [[unlikely]] return; }
L_002AB1FC:
    set32(c.r[3], 0u + 2u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[21].w[0]);
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002AB240:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[21].w[0] + 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[20].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB284u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB284u) [[unlikely]] return; }
L_002AB284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB28Cu); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002AB28Cu) [[unlikely]] return; }
L_002AB28C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 160u);
    c.budget -= 3;
L_002AB298:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AB2C0; } }
    c.f[12] = ld32((c.r[21].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2B4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AB2B4u) [[unlikely]] return; }
L_002AB2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB2D0; } }
    c.budget -= 1;
L_002AB2C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2CCu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB2CCu) [[unlikely]] return; }
L_002AB2CC:
    c.budget -= 1;
L_002AB2D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB2DCu) [[unlikely]] return; }
L_002AB2DC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB298u | kUnwind; return; } goto L_002AB298; } }
    set32(c.r[22], c.r[29].w[0] + 176u);
    set32(c.r[23], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB30Cu); set32(c.r[7], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x002AB30Cu) [[unlikely]] return; }
L_002AB30C:
    set32(c.r[30], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB324u); set32(c.r[7], c.r[20].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x002AB324u) [[unlikely]] return; }
L_002AB324:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 2816u);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
L_002AB338:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB350u); set32(c.r[5], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB350u) [[unlikely]] return; }
L_002AB350:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB338u | kUnwind; return; } goto L_002AB338; } }
    set32(c.r[4], c.r[20].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB370u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB370u) [[unlikely]] return; }
L_002AB370:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB380u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AB380u) [[unlikely]] return; }
L_002AB380:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB38Cu); set32(c.r[4], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002AB38Cu) [[unlikely]] return; }
L_002AB38C:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB398u); set32(c.r[4], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002AB398u) [[unlikely]] return; }
L_002AB398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB3ACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AB3ACu) [[unlikely]] return; }
L_002AB3AC:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[20].w[0] + 32u);  if (t) { goto L_002AB3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB3C0u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB3C0u) [[unlikely]] return; }
L_002AB3C0:
    set32(c.r[3], 0u + 3u);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[20].w[0] + 192u), c.f[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[21].w[0]);
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
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002AB410:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[20], c.r[21].w[0] + 48u);  if (t) { goto L_002AB6E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB45Cu); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002AB45Cu) [[unlikely]] return; }
L_002AB45C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB468u); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB468u) [[unlikely]] return; }
L_002AB468:
    set32(c.r[30], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB478u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB478u) [[unlikely]] return; }
L_002AB478:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB484u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB484u) [[unlikely]] return; }
L_002AB484:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AB4A0; } }
    c.f[12] = ld32((c.r[21].w[0] + 36u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AB4A0u) [[unlikely]] return; }
L_002AB4A0:
    set32(c.r[22], c.r[29].w[0] + 288u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4B4u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB4B4u) [[unlikely]] return; }
L_002AB4B4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4C0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB4C0u) [[unlikely]] return; }
L_002AB4C0:
    set32(c.r[23], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4D4u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AB4D4u) [[unlikely]] return; }
L_002AB4D4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4E0u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB4E0u) [[unlikely]] return; }
L_002AB4E0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4F0u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB4F0u) [[unlikely]] return; }
L_002AB4F0:
    set32(c.r[17], c.r[29].w[0] + 244u);
    set32(c.r[18], c.r[29].w[0] + 248u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB518u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x002AB518u) [[unlikely]] return; }
L_002AB518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], 0u + 1u);  if (t) { goto L_002AB538; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB538:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB548u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB548u) [[unlikely]] return; }
L_002AB548:
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB568u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x002AB568u) [[unlikely]] return; }
L_002AB568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB588; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB588:
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 16u);  if (t) { goto L_002AB610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB59Cu); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB59Cu) [[unlikely]] return; }
L_002AB59C:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5A8u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB5A8u) [[unlikely]] return; }
L_002AB5A8:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5B4u); set32(c.r[4], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB5B4u) [[unlikely]] return; }
L_002AB5B4:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5C0u); set32(c.r[4], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB5C0u) [[unlikely]] return; }
L_002AB5C0:
    set32(c.r[4], c.r[20].w[0] + 80u);
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5D0u); set32(c.r[6], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB5D0u) [[unlikely]] return; }
L_002AB5D0:
    set32(c.r[4], c.r[20].w[0] + 96u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5E0u); set32(c.r[6], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB5E0u) [[unlikely]] return; }
L_002AB5E0:
    set32(c.r[4], c.r[20].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5ECu); set32(c.r[5], c.r[20].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x002AB5ECu) [[unlikely]] return; }
L_002AB5EC:
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5F8u); set32(c.r[5], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x002AB5F8u) [[unlikely]] return; }
L_002AB5F8:
    set32(c.r[3], 0u + 4u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    st32((c.r[20].w[0] + 144u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[21].w[0]);  if (t) { goto L_002AB998; } }
L_002AB610:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB624u); set32(c.r[7], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x002AB624u) [[unlikely]] return; }
L_002AB624:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB638u); set32(c.r[7], c.r[20].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x002AB638u) [[unlikely]] return; }
L_002AB638:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 2816u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_002AB648:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB660u); set32(c.r[5], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB660u) [[unlikely]] return; }
L_002AB660:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB648u | kUnwind; return; } goto L_002AB648; } }
    set32(c.r[4], c.r[20].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB680u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB680u) [[unlikely]] return; }
L_002AB680:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB68Cu); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB68Cu) [[unlikely]] return; }
L_002AB68C:
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB69Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AB69Cu) [[unlikely]] return; }
L_002AB69C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6A8u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002AB6A8u) [[unlikely]] return; }
L_002AB6A8:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6B4u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002AB6B4u) [[unlikely]] return; }
L_002AB6B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6C8u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AB6C8u) [[unlikely]] return; }
L_002AB6C8:
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[3], 0u + 3u);
    st32((c.r[20].w[0] + 192u), c.f[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[21].w[0]);  if (t) { goto L_002AB998; } }
L_002AB6E0:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6ECu); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB6ECu) [[unlikely]] return; }
L_002AB6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6F4u); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002AB6F4u) [[unlikely]] return; }
L_002AB6F4:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB700u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB700u) [[unlikely]] return; }
L_002AB700:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[20].w[0] + 32u);  if (t) { goto L_002AB718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB714u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB714u) [[unlikely]] return; }
L_002AB714:
    c.budget -= 1;
L_002AB718:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB728u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB728u) [[unlikely]] return; }
L_002AB728:
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[2] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB748u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x002AB748u) [[unlikely]] return; }
L_002AB748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB768; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB768:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB8D0; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AB8D0; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_002AB8D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB794u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB794u) [[unlikely]] return; }
L_002AB794:
    set32(c.r[23], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7A4u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB7A4u) [[unlikely]] return; }
L_002AB7A4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7B0u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB7B0u) [[unlikely]] return; }
L_002AB7B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AB7D0; } }
    c.f[12] = ld32((c.r[21].w[0] + 36u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7CCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AB7CCu) [[unlikely]] return; }
L_002AB7CC:
    c.budget -= 1;
L_002AB7D0:
    set32(c.r[18], c.r[29].w[0] + 192u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7E4u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB7E4u) [[unlikely]] return; }
L_002AB7E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB7F0u) [[unlikely]] return; }
L_002AB7F0:
    set32(c.r[22], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB804u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AB804u) [[unlikely]] return; }
L_002AB804:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB810u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB810u) [[unlikely]] return; }
L_002AB810:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB824u); set32(c.r[7], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x002AB824u) [[unlikely]] return; }
L_002AB824:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB838u); set32(c.r[7], c.r[20].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x002AB838u) [[unlikely]] return; }
L_002AB838:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 2816u);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_002AB848:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB860u); set32(c.r[5], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB860u) [[unlikely]] return; }
L_002AB860:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB848u | kUnwind; return; } goto L_002AB848; } }
    set32(c.r[4], c.r[20].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB880u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB880u) [[unlikely]] return; }
L_002AB880:
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB890u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AB890u) [[unlikely]] return; }
L_002AB890:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB89Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002AB89Cu) [[unlikely]] return; }
L_002AB89C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8A8u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002AB8A8u) [[unlikely]] return; }
L_002AB8A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8BCu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AB8BCu) [[unlikely]] return; }
L_002AB8BC:
    set32(c.r[3], 0u + 3u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[21].w[0]);  if (t) { goto L_002AB998; } }
    c.budget -= 1;
L_002AB8D0:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8DCu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002AB8DCu) [[unlikely]] return; }
L_002AB8DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AB8F8; } }
    c.f[12] = ld32((c.r[21].w[0] + 36u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8F8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002AB8F8u) [[unlikely]] return; }
L_002AB8F8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB908u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB908u) [[unlikely]] return; }
L_002AB908:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB914u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB914u) [[unlikely]] return; }
L_002AB914:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB924u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002AB924u) [[unlikely]] return; }
L_002AB924:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB930u); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002AB930u) [[unlikely]] return; }
L_002AB930:
    set32(c.r[4], c.r[20].w[0] + 80u);
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB940u); set32(c.r[6], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB940u) [[unlikely]] return; }
L_002AB940:
    set32(c.r[4], c.r[20].w[0] + 96u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB950u); set32(c.r[6], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002AB950u) [[unlikely]] return; }
L_002AB950:
    set32(c.r[4], c.r[20].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB95Cu); set32(c.r[5], c.r[20].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x002AB95Cu) [[unlikely]] return; }
L_002AB95C:
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB968u); set32(c.r[5], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x002AB968u) [[unlikely]] return; }
L_002AB968:
    set32(c.r[3], 0u + 4u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    st32((c.r[20].w[0] + 144u), c.f[0]);
    st32((c.r[20].w[0] + 4u), c.r[21].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 31u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB998; } }
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 144u), c.f[0]);
    c.budget -= 4;
L_002AB998:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002AB9D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ABC08; } }
    st16((c.r[3].w[0] + 564u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 514u));
    c.r[5].d[0] = c.r[5].d[0] & 96ull;
    st8((c.r[3].w[0] + 514u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 519u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ABA10; } }
    st16((c.r[3].w[0] + 966u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 968u), static_cast<std::uint16_t>(0u));
    st8((c.r[3].w[0] + 809u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002ABA10:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 516u));
    set32(c.r[5], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_002ABC08; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ABC08; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], 0u + 26u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002ABA68; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002ABA68; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002ABA68; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ABC08; } }
L_002ABA68:
    c.r[5].d[0] = c.r[7].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002ABB60; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002ABAC0; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23836u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[8], c.r[8].w[0] + 26976u);
    set32(c.r[6], c.r[28].w[0] - 23804u);
    set32(c.r[9], c.r[7].w[0] << 10);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 14;
L_002ABAC0:
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[6].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002ABB08; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23836u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[8], c.r[8].w[0] + 20832u);
    set32(c.r[6], c.r[28].w[0] - 23816u);
    set32(c.r[9], c.r[7].w[0] << 10);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 14;
L_002ABB08:
    c.r[5].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[5].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ABB60; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 566u));
    c.r[5].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002ABB60; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23836u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[7], c.r[7].w[0] + 24928u);
    set32(c.r[5], c.r[28].w[0] - 23808u);
    set32(c.r[8], c.r[6].w[0] << 10);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 14;
L_002ABB60:
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[5].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ABBC0; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 566u));
    c.r[5].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002ABBC0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23836u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[7], c.r[7].w[0] + 22880u);
    set32(c.r[5], c.r[28].w[0] - 23812u);
    set32(c.r[8], c.r[6].w[0] << 10);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 15;
L_002ABBC0:
    c.r[3].d[0] = ld16((c.r[3].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ABC08; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23836u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] + 18784u);
    set32(c.r[3], c.r[28].w[0] - 23820u);
    set32(c.r[7], c.r[5].w[0] << 10);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 14;
L_002ABC08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ABC10:
    set32(c.r[2], ld32((c.r[28].w[0] - 23480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 23480u), c.r[2].w[0]);  if (t) { goto L_002ABC30; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 23480u), c.r[2].w[0]);
    c.budget -= 3;
L_002ABC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[28].w[0] - 23480u));  c.pc = t; return; }
L_002ABC40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 6176u);
    set32(c.r[3], c.r[3].w[0] - 6128u);
    c.budget -= 10;
L_002ABC68:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 3u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABC68u | kUnwind; return; } goto L_002ABC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC9Cu);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002ABC9Cu) [[unlikely]] return; }
L_002ABC9C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00B40000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 17472u);
    st32((c.r[28].w[0] - 23376u), c.r[17].w[0]);
    c.budget -= 5;
L_002ABCB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCC0u); set32(c.r[6], 0u + 496u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002ABCC0u) [[unlikely]] return; }
L_002ABCC0:
    c.r[1].d[0] = c.r[16].sd[0] < 319ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002ABCD8; } }
    set32(c.r[2], c.r[17].w[0] + 496u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002ABCE0; } }
L_002ABCD8:
    st32((c.r[28].w[0] - 23360u), c.r[17].w[0]);
    c.budget -= 2;
L_002ABCE0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 496u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABCB0u | kUnwind; return; } goto L_002ABCB0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[2], 0u + 320u);
    set32(c.r[17], c.r[17].w[0] - 6080u);
    st32((c.r[28].w[0] - 23824u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23408u), c.r[17].w[0]);
    c.budget -= 6;
L_002ABD08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD18u); set32(c.r[6], 0u + 688u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002ABD18u) [[unlikely]] return; }
L_002ABD18:
    set32(c.r[3], 0u + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 319ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ABD38; } }
    set32(c.r[3], c.r[17].w[0] + 688u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_002ABD40; } }
    c.budget -= 1;
L_002ABD38:
    st32((c.r[28].w[0] - 23392u), c.r[17].w[0]);
    c.budget -= 2;
L_002ABD40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 688u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABD08u | kUnwind; return; } goto L_002ABD08; } }
    set32(c.r[3], 0u + 320u);
    st8((c.r[28].w[0] - 23792u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 23828u), c.r[3].w[0]);
    st8((c.r[28].w[0] - 23796u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABD80:
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
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002ABDD0; } }
L_002ABDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x002ABDB8u) [[unlikely]] return; }
L_002ABDB8:
    set32(c.r[18], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABDB0u | kUnwind; return; } goto L_002ABDB0; } }
    c.budget -= 1;
L_002ABDD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[3], c.r[3].w[0] - 6176u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[17].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ABE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE1Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 306u, depth + 1u); else { c.pc = 0x002ABF90u; return; } if (c.pc != 0x002ABE1Cu) [[unlikely]] return; }
L_002ABE1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ABEB8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_002ABE78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 6128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { goto L_002ABE68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[3], c.r[3].w[0] - 6176u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_002ABEB8; } }
    c.budget -= 1;
L_002ABE68:
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002ABEB8; } }
    c.budget -= 1;
L_002ABE78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 6176u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_002ABEB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[3], c.r[3].w[0] - 6128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { goto L_002ABEB8; } }
L_002ABEB0:
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_002ABEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEECu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 306u, depth + 1u); else { c.pc = 0x002ABF90u; return; } if (c.pc != 0x002ABEECu) [[unlikely]] return; }
L_002ABEEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ABF70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ABF38; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 20u), c.r[17].w[0]);  if (t) { goto L_002ABF30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[3], c.r[3].w[0] - 6128u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002ABF70; } }
L_002ABF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_002ABF70; } }
L_002ABF38:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_002ABF68; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B10000u);
    set32(c.r[3], c.r[3].w[0] - 6176u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002ABF70; } }
L_002ABF68:
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_002ABF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002ABFE8; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 23376u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ABFE0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23824u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 23824u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 23376u), c.r[2].w[0]);  if (t) { goto L_002ABFC8; } }
    st32((c.r[28].w[0] - 23360u), 0u);
    c.budget -= 1;
L_002ABFC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABFD8u); set32(c.r[6], 0u + 496u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002ABFD8u) [[unlikely]] return; }
L_002ABFD8:
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002ABFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_006B(c, 4u, depth); } }
L_002ABFE8:
    set32(c.r[16], ld32((c.r[28].w[0] - 23408u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23828u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 23828u), c.r[2].w[0]);
    c.budget -= 3;
    [[clang::musttail]] return unit_006B(c, 1u, depth);
}

}
