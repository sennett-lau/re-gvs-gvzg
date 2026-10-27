#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0039[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 51,
    0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159,
    0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0,
    238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0039(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E4000;
    case 2u: goto L_001E4008;
    case 3u: goto L_001E4034;
    case 4u: goto L_001E4098;
    case 5u: goto L_001E40C0;
    case 6u: goto L_001E40F0;
    case 7u: goto L_001E4170;
    case 8u: goto L_001E41BC;
    case 9u: goto L_001E4210;
    case 10u: goto L_001E4298;
    case 11u: goto L_001E42EC;
    case 12u: goto L_001E4340;
    case 13u: goto L_001E4370;
    case 14u: goto L_001E437C;
    case 15u: goto L_001E4390;
    case 16u: goto L_001E43A4;
    case 17u: goto L_001E43AC;
    case 18u: goto L_001E43B4;
    case 19u: goto L_001E43BC;
    case 20u: goto L_001E43E0;
    case 21u: goto L_001E4410;
    case 22u: goto L_001E4418;
    case 23u: goto L_001E442C;
    case 24u: goto L_001E4434;
    case 25u: goto L_001E443C;
    case 26u: goto L_001E4450;
    case 27u: goto L_001E448C;
    case 28u: goto L_001E44A4;
    case 29u: goto L_001E44C4;
    case 30u: goto L_001E44E8;
    case 31u: goto L_001E44F8;
    case 32u: goto L_001E4508;
    case 33u: goto L_001E4520;
    case 34u: goto L_001E4588;
    case 35u: goto L_001E45B0;
    case 36u: goto L_001E45E0;
    case 37u: goto L_001E4650;
    case 38u: goto L_001E467C;
    case 39u: goto L_001E46C0;
    case 40u: goto L_001E4754;
    case 41u: goto L_001E4760;
    case 42u: goto L_001E47C4;
    case 43u: goto L_001E47D0;
    case 44u: goto L_001E47F0;
    case 45u: goto L_001E4810;
    case 46u: goto L_001E4840;
    case 47u: goto L_001E4870;
    case 48u: goto L_001E4890;
    case 49u: goto L_001E48E8;
    case 50u: goto L_001E48F0;
    case 51u: goto L_001E48FC;
    case 52u: goto L_001E490C;
    case 53u: goto L_001E4914;
    case 54u: goto L_001E49D0;
    case 55u: goto L_001E49F8;
    case 56u: goto L_001E4A50;
    case 57u: goto L_001E4C20;
    case 58u: goto L_001E4C50;
    case 59u: goto L_001E4C58;
    case 60u: goto L_001E4C60;
    case 61u: goto L_001E4C68;
    case 62u: goto L_001E4C70;
    case 63u: goto L_001E4C80;
    case 64u: goto L_001E4C8C;
    case 65u: goto L_001E4CE0;
    case 66u: goto L_001E4CFC;
    case 67u: goto L_001E4D18;
    case 68u: goto L_001E4D80;
    case 69u: goto L_001E4E00;
    case 70u: goto L_001E4E20;
    case 71u: goto L_001E4E5C;
    case 72u: goto L_001E4E80;
    case 73u: goto L_001E4ED0;
    case 74u: goto L_001E4EF8;
    case 75u: goto L_001E4F34;
    case 76u: goto L_001E4F58;
    case 77u: goto L_001E4FB0;
    case 78u: goto L_001E4FD0;
    case 79u: goto L_001E500C;
    case 80u: goto L_001E5030;
    case 81u: goto L_001E5080;
    case 82u: goto L_001E50AC;
    case 83u: goto L_001E50D0;
    case 84u: goto L_001E5100;
    case 85u: goto L_001E5130;
    case 86u: goto L_001E5138;
    case 87u: goto L_001E5140;
    case 88u: goto L_001E5148;
    case 89u: goto L_001E5150;
    case 90u: goto L_001E5160;
    case 91u: goto L_001E516C;
    case 92u: goto L_001E51C0;
    case 93u: goto L_001E51DC;
    case 94u: goto L_001E51F8;
    case 95u: goto L_001E5260;
    case 96u: goto L_001E52E0;
    case 97u: goto L_001E5300;
    case 98u: goto L_001E533C;
    case 99u: goto L_001E5360;
    case 100u: goto L_001E53B0;
    case 101u: goto L_001E53D8;
    case 102u: goto L_001E5414;
    case 103u: goto L_001E5438;
    case 104u: goto L_001E5490;
    case 105u: goto L_001E54C4;
    case 106u: goto L_001E54CC;
    case 107u: goto L_001E54D4;
    case 108u: goto L_001E54DC;
    case 109u: goto L_001E54E4;
    case 110u: goto L_001E54F4;
    case 111u: goto L_001E5500;
    case 112u: goto L_001E5550;
    case 113u: goto L_001E556C;
    case 114u: goto L_001E5580;
    case 115u: goto L_001E55D4;
    case 116u: goto L_001E5650;
    case 117u: goto L_001E56A0;
    case 118u: goto L_001E56B8;
    case 119u: goto L_001E56E0;
    case 120u: goto L_001E56F8;
    case 121u: goto L_001E5710;
    case 122u: goto L_001E57EC;
    case 123u: goto L_001E5840;
    case 124u: goto L_001E5880;
    case 125u: goto L_001E59B0;
    case 126u: goto L_001E5A60;
    case 127u: goto L_001E5A90;
    case 128u: goto L_001E5AF0;
    case 129u: goto L_001E5B34;
    case 130u: goto L_001E5B68;
    case 131u: goto L_001E5B80;
    case 132u: goto L_001E5BA0;
    case 133u: goto L_001E5BC8;
    case 134u: goto L_001E5BEC;
    case 135u: goto L_001E5C04;
    case 136u: goto L_001E5C20;
    case 137u: goto L_001E5C80;
    case 138u: goto L_001E5CC4;
    case 139u: goto L_001E5CF8;
    case 140u: goto L_001E5D10;
    case 141u: goto L_001E5D30;
    case 142u: goto L_001E5D58;
    case 143u: goto L_001E5D7C;
    case 144u: goto L_001E5D94;
    case 145u: goto L_001E5DB0;
    case 146u: goto L_001E5DD4;
    case 147u: goto L_001E5DEC;
    case 148u: goto L_001E5E00;
    case 149u: goto L_001E5E68;
    case 150u: goto L_001E5FC4;
    case 151u: goto L_001E64A0;
    case 152u: goto L_001E6520;
    case 153u: goto L_001E667C;
    case 154u: goto L_001E66BC;
    case 155u: goto L_001E66C4;
    case 156u: goto L_001E66CC;
    case 157u: goto L_001E66DC;
    case 158u: goto L_001E66E8;
    case 159u: goto L_001E66FC;
    case 160u: goto L_001E6708;
    case 161u: goto L_001E6718;
    case 162u: goto L_001E67F8;
    case 163u: goto L_001E6804;
    case 164u: goto L_001E6810;
    case 165u: goto L_001E6818;
    case 166u: goto L_001E6828;
    case 167u: goto L_001E6838;
    case 168u: goto L_001E6888;
    case 169u: goto L_001E6898;
    case 170u: goto L_001E68A4;
    case 171u: goto L_001E68AC;
    case 172u: goto L_001E68B4;
    case 173u: goto L_001E68BC;
    case 174u: goto L_001E68C4;
    case 175u: goto L_001E68EC;
    case 176u: goto L_001E6BB0;
    case 177u: goto L_001E6BD0;
    case 178u: goto L_001E6CA0;
    case 179u: goto L_001E6D70;
    case 180u: goto L_001E6DA0;
    case 181u: goto L_001E6DE8;
    case 182u: goto L_001E6E0C;
    case 183u: goto L_001E6F44;
    case 184u: goto L_001E6F90;
    case 185u: goto L_001E6FE0;
    case 186u: goto L_001E7054;
    case 187u: goto L_001E709C;
    case 188u: goto L_001E70B0;
    case 189u: goto L_001E7260;
    case 190u: goto L_001E7410;
    case 191u: goto L_001E7494;
    case 192u: goto L_001E74BC;
    case 193u: goto L_001E74C4;
    case 194u: goto L_001E74CC;
    case 195u: goto L_001E74D4;
    case 196u: goto L_001E74DC;
    case 197u: goto L_001E74EC;
    case 198u: goto L_001E74F4;
    case 199u: goto L_001E7500;
    case 200u: goto L_001E755C;
    case 201u: goto L_001E7584;
    case 202u: goto L_001E758C;
    case 203u: goto L_001E7594;
    case 204u: goto L_001E759C;
    case 205u: goto L_001E75A4;
    case 206u: goto L_001E75AC;
    case 207u: goto L_001E75D0;
    case 208u: goto L_001E75D8;
    case 209u: goto L_001E75E8;
    case 210u: goto L_001E75F0;
    case 211u: goto L_001E75F8;
    case 212u: goto L_001E7600;
    case 213u: goto L_001E7624;
    case 214u: goto L_001E7634;
    case 215u: goto L_001E76B0;
    case 216u: goto L_001E76C0;
    case 217u: goto L_001E76C8;
    case 218u: goto L_001E76D0;
    case 219u: goto L_001E76D8;
    case 220u: goto L_001E76FC;
    case 221u: goto L_001E7728;
    case 222u: goto L_001E7730;
    case 223u: goto L_001E7740;
    case 224u: goto L_001E7748;
    case 225u: goto L_001E776C;
    case 226u: goto L_001E7798;
    case 227u: goto L_001E77A4;
    case 228u: goto L_001E77E0;
    case 229u: goto L_001E77F4;
    case 230u: goto L_001E7830;
    case 231u: goto L_001E7860;
    case 232u: goto L_001E7910;
    case 233u: goto L_001E7960;
    case 234u: goto L_001E79B8;
    case 235u: goto L_001E79E8;
    case 236u: goto L_001E79F0;
    case 237u: goto L_001E79F8;
    case 238u: goto L_001E7A00;
    case 239u: goto L_001E7A08;
    case 240u: goto L_001E7A18;
    case 241u: goto L_001E7A28;
    case 242u: goto L_001E7A50;
    case 243u: goto L_001E7A78;
    case 244u: goto L_001E7AA0;
    case 245u: goto L_001E7AC8;
    case 246u: goto L_001E7AF0;
    case 247u: goto L_001E7B18;
    case 248u: goto L_001E7B30;
    case 249u: goto L_001E7B48;
    case 250u: goto L_001E7B88;
    case 251u: goto L_001E7BE0;
    case 252u: goto L_001E7CB8;
    case 253u: goto L_001E7CC4;
    case 254u: goto L_001E7CD0;
    case 255u: goto L_001E7CF0;
    case 256u: goto L_001E7DB8;
    case 257u: goto L_001E7DC4;
    case 258u: goto L_001E7EA0;
    case 259u: goto L_001E7F18;
    case 260u: goto L_001E7F28;
    case 261u: goto L_001E7F48;
    case 262u: goto L_001E7F54;
    default: bad_entry(c, 0x001E4000u); return;
    }
L_001E4000:
    st32((c.r[18].w[0] + 4u), c.f[3]);
    c.budget -= 2;
L_001E4008:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 751u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E4060; } }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[22], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E4060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4034u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001E4034u) [[unlikely]] return; }
L_001E4034:
    c.f[3] = ld32((c.r[16].w[0] + 8532u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8536u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[3] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4060; } }
    st32((c.r[17].w[0] + 4u), c.f[3]);
    c.budget -= 2;
L_001E4060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[18], c.r[16].w[0] + 5632u);
    c.f[2] = ld32((c.r[16].w[0] + 5636u));
    set32(c.r[17], c.r[16].w[0] + 5648u);
    c.f[1] = ld32((c.r[16].w[0] + 5652u));
    c.f[0] = c.r[3].w[0];
    c.f[21] = fp::sub(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::sub(c.f[1], c.f[3]);  if (t) { goto L_001E40A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4098u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001E4098u) [[unlikely]] return; }
L_001E4098:
    c.f[0] = fp::add(c.f[21], c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001E40A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E40C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001E40C0u) [[unlikely]] return; }
L_001E40C0:
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001E40C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E40F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[18], c.r[16].w[0] + 5600u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], c.r[16].w[0] + 5616u);
    st8((c.r[4].w[0] + 8561u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 8560u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 751u)));
    c.f[2] = ld32((c.r[4].w[0] + 8532u));
    c.f[4] = ld32((c.r[4].w[0] + 5604u));
    c.f[1] = ld32((c.r[4].w[0] + 5620u));
    c.f[0] = ld32((c.r[4].w[0] + 8528u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    c.f[22] = fp::add(c.f[0], c.f[2]);
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull; c.f[21] = fp::sub(c.f[4], c.f[2]);  if (t) { goto L_001E4190; } }
    c.f[0] = fp::add(c.f[22], c.f[21]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E4190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4170u);  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001E4170u) [[unlikely]] return; }
L_001E4170:
    c.f[2] = ld32((c.r[16].w[0] + 8532u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4190; } }
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_001E4190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 751u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E41E0; } }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[22], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E41E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001E41BCu) [[unlikely]] return; }
L_001E41BC:
    c.f[2] = ld32((c.r[16].w[0] + 8532u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E41E0; } }
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001E41E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E4210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E4318; } }
    st8((c.r[16].w[0] + 8561u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[16].w[0] + 5600u);
    st8((c.r[16].w[0] + 8560u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[16].w[0] + 5616u);
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 751u)));
    c.f[2] = ld32((c.r[16].w[0] + 8532u));
    c.f[4] = ld32((c.r[16].w[0] + 5604u));
    c.f[1] = ld32((c.r[16].w[0] + 5620u));
    c.f[0] = ld32((c.r[16].w[0] + 8528u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    c.f[22] = fp::add(c.f[0], c.f[2]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.f[21] = fp::sub(c.f[4], c.f[2]);  if (t) { goto L_001E42C0; } }
    c.f[0] = fp::add(c.f[22], c.f[21]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E42C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4298u);  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001E4298u) [[unlikely]] return; }
L_001E4298:
    c.f[3] = ld32((c.r[16].w[0] + 8532u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8536u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[3] = fp::add(c.f[21], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E42C0; } }
    st32((c.r[18].w[0] + 4u), c.f[3]);
    c.budget -= 1;
L_001E42C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 751u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E4318; } }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[22], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E4318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001E42ECu) [[unlikely]] return; }
L_001E42EC:
    c.f[3] = ld32((c.r[16].w[0] + 8532u));
    c.f[1] = ld32((c.r[16].w[0] + 8536u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[3] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4318; } }
    st32((c.r[17].w[0] + 4u), c.f[3]);
    c.budget -= 2;
L_001E4318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E4340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 26064u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 608u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4370u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0050(c, 163u, depth + 1u); else { c.pc = 0x00240B40u; return; } if (c.pc != 0x001E4370u) [[unlikely]] return; }
L_001E4370:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E437Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 169u, depth + 1u); else { c.pc = 0x00240C10u; return; } if (c.pc != 0x001E437Cu) [[unlikely]] return; }
L_001E437C:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 26032u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 544u);  if (t) { goto L_001E43C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4390u);  if (depth < kMaxDepth) unit_0050(c, 396u, depth + 1u); else { c.pc = 0x002437E0u; return; } if (c.pc != 0x001E4390u) [[unlikely]] return; }
L_001E4390:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[16].w[0] + 26050u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43A4u); set32(c.r[5], c.r[5].w[0] + 15664u);  if (depth < kMaxDepth) unit_0050(c, 145u, depth + 1u); else { c.pc = 0x00240860u; return; } if (c.pc != 0x001E43A4u) [[unlikely]] return; }
L_001E43A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E4520u; return; } if (c.pc != 0x001E43ACu) [[unlikely]] return; }
L_001E43AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 39u, depth + 1u); else { c.pc = 0x001E46C0u; return; } if (c.pc != 0x001E43B4u) [[unlikely]] return; }
L_001E43B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 190u, depth + 1u); else { c.pc = 0x002A7560u; return; } if (c.pc != 0x001E43BCu) [[unlikely]] return; }
L_001E43BC:
    c.budget -= 1;
L_001E43C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E43E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 26064u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 608u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4410u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0050(c, 163u, depth + 1u); else { c.pc = 0x00240B40u; return; } if (c.pc != 0x001E4410u) [[unlikely]] return; }
L_001E4410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4418u); set32(c.r[4], c.r[16].w[0] + 544u);  if (depth < kMaxDepth) unit_0050(c, 396u, depth + 1u); else { c.pc = 0x002437E0u; return; } if (c.pc != 0x001E4418u) [[unlikely]] return; }
L_001E4418:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[16].w[0] + 26050u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E442Cu); set32(c.r[5], c.r[5].w[0] + 15664u);  if (depth < kMaxDepth) unit_0050(c, 145u, depth + 1u); else { c.pc = 0x00240860u; return; } if (c.pc != 0x001E442Cu) [[unlikely]] return; }
L_001E442C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E4520u; return; } if (c.pc != 0x001E4434u) [[unlikely]] return; }
L_001E4434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E443Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 190u, depth + 1u); else { c.pc = 0x002A7560u; return; } if (c.pc != 0x001E443Cu) [[unlikely]] return; }
L_001E443C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E4450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 26064u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 608u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8658u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] - 80u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E448Cu); set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0050(c, 163u, depth + 1u); else { c.pc = 0x00240B40u; return; } if (c.pc != 0x001E448Cu) [[unlikely]] return; }
L_001E448C:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[18].w[0] + 26050u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44A4u); set32(c.r[5], c.r[5].w[0] + 15664u);  if (depth < kMaxDepth) unit_0050(c, 145u, depth + 1u); else { c.pc = 0x00240860u; return; } if (c.pc != 0x001E44A4u) [[unlikely]] return; }
L_001E44A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 3408u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44C4u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0011(c, 106u, depth + 1u); else { c.pc = 0x001455E0u; return; } if (c.pc != 0x001E44C4u) [[unlikely]] return; }
L_001E44C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E44F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 3376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 36u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001E44E8u) [[unlikely]] return; }
L_001E44E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4508; } }
L_001E44F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E4520u; return; } if (c.pc != 0x001E44F8u) [[unlikely]] return; }
L_001E44F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4508; } }
L_001E4500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E4520u; return; } if (c.pc != 0x001E4508u) [[unlikely]] return; }
L_001E4508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E4520:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], 0u + 26064u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 608u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 26044u)));
    c.r[3].d[0] = ld64((c.r[19].w[0] + 26032u));
    set32(c.r[18], c.r[4].w[0] + 48u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[16].d[0] = c.r[4].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 25;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E45C0; } }
    c.budget -= 1;
L_001E4588:
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E45B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E45B0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45B0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 98u, depth + 1u); else { c.pc = 0x002A28B0u; return; } if (c.pc != 0x001E45B0u) [[unlikely]] return; }
L_001E45B0:
    c.r[16].d[0] = c.r[16].d[0] >> 1;
    set32(c.r[18], c.r[18].w[0] + 240u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4588u | kUnwind; return; } goto L_001E4588; } }
L_001E45C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E45E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 608u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    set32(c.r[4], 0u + 26064u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 26044u)));
    c.r[3].d[0] = ld64((c.r[19].w[0] + 26032u));
    set32(c.r[18], c.r[4].w[0] + 48u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[16].d[0] = c.r[4].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 27;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001E4690; } }
    c.budget -= 1;
L_001E4650:
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E4680; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E4680; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E467Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0068(c, 105u, depth + 1u); else { c.pc = 0x002A2A00u; return; } if (c.pc != 0x001E467Cu) [[unlikely]] return; }
L_001E467C:
    c.budget -= 1;
L_001E4680:
    c.r[16].d[0] = c.r[16].d[0] >> 1;
    set32(c.r[18], c.r[18].w[0] + 240u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4650u | kUnwind; return; } goto L_001E4650; } }
L_001E4690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E46C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8664u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E47D0; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E47D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E4760; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8512u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E4730; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 757u)));
    set32(c.r[4], c.r[4].w[0] - 8688u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
L_001E4730:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[18], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E4760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4754u); set32(c.r[4], c.r[17].w[0] + 2368u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001E4754u) [[unlikely]] return; }
L_001E4754:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x001E4760u) [[unlikely]] return; }
L_001E4760:
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E47D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E47A0; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 757u)));
    set32(c.r[4], c.r[4].w[0] - 8800u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
L_001E47A0:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E47D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E47C4u); set32(c.r[4], c.r[17].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001E47C4u) [[unlikely]] return; }
L_001E47C4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E47D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x001E47D0u) [[unlikely]] return; }
L_001E47D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E47F0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] - 15328u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_001E4810:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4830; } }
    c.f[0] = ld32((c.r[4].w[0] + 1164u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { goto L_001E4838; } }
L_001E4830:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E4838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4840:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4860; } }
    c.f[0] = ld32((c.r[4].w[0] + 1068u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { goto L_001E4868; } }
L_001E4860:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E4868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4890u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 44u, depth + 1u); else { c.pc = 0x001E47F0u; return; } if (c.pc != 0x001E4890u) [[unlikely]] return; }
L_001E4890:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001E49A8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 13);
    st32((c.r[16].w[0] + 1256u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 771u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[2], c.r[2].w[0] - 15216u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 29024u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], c.r[5].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48E8u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001E48E8u) [[unlikely]] return; }
L_001E48E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48F0u); set32(c.r[4], ld32((c.r[16].w[0] + 1256u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E48F0u) [[unlikely]] return; }
L_001E48F0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48FCu); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001E48FCu) [[unlikely]] return; }
L_001E48FC:
    set32(c.r[4], c.r[16].w[0] + 8592u);
    set32(c.r[5], c.r[16].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E490Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E490Cu) [[unlikely]] return; }
L_001E490C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4914u); c.f[12] = ld32((c.r[29].w[0] + 56u));  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001E4914u) [[unlikely]] return; }
L_001E4914:
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 57344ull;
    st32((c.r[16].w[0] + 1264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E49A0; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001E49A0; } }
    c.budget -= 1;
L_001E4950:
    set32(c.r[4], ld32((c.r[16].w[0] + 1256u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 57344ull;
    st32((c.r[16].w[0] + 1264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E49A0; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 4;
L_001E49A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E49B8; } }
L_001E49A8:
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 1256u), 0u);
    c.budget -= 4;
L_001E49B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E49D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49F8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 44u, depth + 1u); else { c.pc = 0x001E47F0u; return; } if (c.pc != 0x001E49F8u) [[unlikely]] return; }
L_001E49F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001E4A30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E4A30; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], c.r[2].w[0] << 13);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001E4A38; } }
L_001E4A30:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E4A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E4A50:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E4A98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1264u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 1264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1264u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_001E4A80; } }
    st32((c.r[4].w[0] + 1264u), c.r[2].w[0]);
    c.budget -= 1;
L_001E4A80:
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1256u), c.r[3].w[0]);  if (t) { goto L_001E4B40; } }
    c.budget -= 1;
L_001E4A98:
    c.r[3].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E4AE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1264u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 1264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1264u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_001E4AC8; } }
    st32((c.r[4].w[0] + 1264u), c.r[2].w[0]);
    c.budget -= 2;
L_001E4AC8:
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1256u), c.r[3].w[0]);  if (t) { goto L_001E4B40; } }
L_001E4AE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[1] = ld32((c.r[4].w[0] + 1264u));
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 1264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1256u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001E4B30; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1256u), c.r[3].w[0]);  if (t) { goto L_001E4B40; } }
    c.budget -= 1;
L_001E4B30:
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1256u), c.r[3].w[0]);
    c.budget -= 4;
L_001E4B40:
    c.r[3].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E4B90; } }
    c.f[3] = ld32((c.r[4].w[0] + 8328u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8328u), c.r[3].w[0]);  if (t) { goto L_001E4C10; } }
L_001E4B90:
    c.r[3].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E4BE0; } }
    c.f[3] = ld32((c.r[4].w[0] + 8328u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC5800000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8328u), c.r[3].w[0]);  if (t) { goto L_001E4C10; } }
L_001E4BE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[1] = ld32((c.r[4].w[0] + 8328u));
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 8328u), c.r[3].w[0]);
    c.budget -= 12;
L_001E4C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4C20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C50u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 224u, depth + 1u); else { c.pc = 0x00146FE0u; return; } if (c.pc != 0x001E4C50u) [[unlikely]] return; }
L_001E4C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C58u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001E4C58u) [[unlikely]] return; }
L_001E4C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C60u); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E4C60u) [[unlikely]] return; }
L_001E4C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C68u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E4C68u) [[unlikely]] return; }
L_001E4C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C70u); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E4C70u) [[unlikely]] return; }
L_001E4C70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C80u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001E4C80u) [[unlikely]] return; }
L_001E4C80:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C8Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001E4C8Cu) [[unlikely]] return; }
L_001E4C8C:
    set32(c.r[3], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E4CB8; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4CC8; } }
    c.budget -= 1;
L_001E4CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001E4CC8:
    set32(c.r[17], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CE0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001E4CE0u) [[unlikely]] return; }
L_001E4CE0:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CFCu);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E4CFCu) [[unlikely]] return; }
L_001E4CFC:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[2] = fp::mul(c.f[2], c.f[21]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D18u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E4D18u) [[unlikely]] return; }
L_001E4D18:
    c.f[3] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.f[4] = ld32((c.r[16].w[0] + 8292u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = fp::mul(c.f[3], c.f[21]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[5] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D80u); st32((c.r[16].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001E4D80u) [[unlikely]] return; }
L_001E4D80:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 8536u));
    c.f[3] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[2]);  if (t) { goto L_001E4DE0; } }
    c.budget -= 1;
L_001E4DB0:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[29].w[0] + 80u);  if (t) { goto L_001E4DE0; } }
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_001E4DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E4E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E4E20u) [[unlikely]] return; }
L_001E4E20:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E5Cu); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E4E5Cu) [[unlikely]] return; }
L_001E4E5C:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E80u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E77E0u; return; } if (c.pc != 0x001E4E80u) [[unlikely]] return; }
L_001E4E80:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1008u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E4ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4EF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E4EF8u) [[unlikely]] return; }
L_001E4EF8:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F34u); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E4F34u) [[unlikely]] return; }
L_001E4F34:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F58u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E77E0u; return; } if (c.pc != 0x001E4F58u) [[unlikely]] return; }
L_001E4F58:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1008u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E4FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E4FD0u) [[unlikely]] return; }
L_001E4FD0:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E500Cu); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E500Cu) [[unlikely]] return; }
L_001E500C:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5030u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E77E0u; return; } if (c.pc != 0x001E5030u) [[unlikely]] return; }
L_001E5030:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E5080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50ACu); set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E50ACu) [[unlikely]] return; }
L_001E50AC:
    c.f[2] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50D0u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E50D0u) [[unlikely]] return; }
L_001E50D0:
    c.f[2] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E5100:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5130u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 224u, depth + 1u); else { c.pc = 0x00146FE0u; return; } if (c.pc != 0x001E5130u) [[unlikely]] return; }
L_001E5130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5138u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001E5138u) [[unlikely]] return; }
L_001E5138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5140u); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E5140u) [[unlikely]] return; }
L_001E5140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5148u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E5148u) [[unlikely]] return; }
L_001E5148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5150u); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E5150u) [[unlikely]] return; }
L_001E5150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5160u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001E5160u) [[unlikely]] return; }
L_001E5160:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E516Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001E516Cu) [[unlikely]] return; }
L_001E516C:
    set32(c.r[3], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E5198; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E51A8; } }
    c.budget -= 1;
L_001E5198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001E51A8:
    set32(c.r[17], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51C0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001E51C0u) [[unlikely]] return; }
L_001E51C0:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51DCu);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E51DCu) [[unlikely]] return; }
L_001E51DC:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[2] = fp::mul(c.f[2], c.f[21]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51F8u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E51F8u) [[unlikely]] return; }
L_001E51F8:
    c.f[3] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.f[4] = ld32((c.r[16].w[0] + 1016u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = fp::mul(c.f[3], c.f[21]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[5] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5260u); st32((c.r[16].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001E5260u) [[unlikely]] return; }
L_001E5260:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 8536u));
    c.f[3] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E5290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[2]);  if (t) { goto L_001E52C0; } }
    c.budget -= 1;
L_001E5290:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[29].w[0] + 80u);  if (t) { goto L_001E52C0; } }
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_001E52C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E52E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E5300u) [[unlikely]] return; }
L_001E5300:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E533Cu); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E533Cu) [[unlikely]] return; }
L_001E533C:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5360u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E77E0u; return; } if (c.pc != 0x001E5360u) [[unlikely]] return; }
L_001E5360:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1008u));
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E53B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E53D8u) [[unlikely]] return; }
L_001E53D8:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5414u); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E5414u) [[unlikely]] return; }
L_001E5414:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5438u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E77E0u; return; } if (c.pc != 0x001E5438u) [[unlikely]] return; }
L_001E5438:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1008u));
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E5490:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54C4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0011(c, 224u, depth + 1u); else { c.pc = 0x00146FE0u; return; } if (c.pc != 0x001E54C4u) [[unlikely]] return; }
L_001E54C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54CCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001E54CCu) [[unlikely]] return; }
L_001E54CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54D4u); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E54D4u) [[unlikely]] return; }
L_001E54D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54DCu); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E54DCu) [[unlikely]] return; }
L_001E54DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54E4u); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E54E4u) [[unlikely]] return; }
L_001E54E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001E54F4u) [[unlikely]] return; }
L_001E54F4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5500u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001E5500u) [[unlikely]] return; }
L_001E5500:
    set32(c.r[3], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E5528; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E5538; } }
L_001E5528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001E5538:
    set32(c.r[17], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5550u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001E5550u) [[unlikely]] return; }
L_001E5550:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E556Cu); c.f[20] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E556Cu) [[unlikely]] return; }
L_001E556C:
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5580u); c.f[21] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E5580u) [[unlikely]] return; }
L_001E5580:
    c.f[5] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[4] = ld32((c.r[16].w[0] + 8292u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55D4u); st32((c.r[16].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001E55D4u) [[unlikely]] return; }
L_001E55D4:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 8536u));
    c.f[3] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E5600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[2]);  if (t) { goto L_001E5630; } }
L_001E5600:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[29].w[0] + 80u);  if (t) { goto L_001E5630; } }
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_001E5630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E5650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5670; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_001E5690; } }
    c.budget -= 1;
L_001E5670:
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5688; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 4u));  if (t) { goto L_001E5690; } }
L_001E5688:
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_001E5690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E56A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001E56B8u) [[unlikely]] return; }
L_001E56B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 826u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E56E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001E56F8u) [[unlikely]] return; }
L_001E56F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E5710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E5738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5820; } }
L_001E5738:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001E5748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5820; } }
L_001E5748:
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5820; } }
    c.budget -= 1;
L_001E5760:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8681u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E57B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E57B0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 14u);  if (t) { goto L_001E57B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E57B0; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E57B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5820; } }
    c.budget -= 1;
L_001E57B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8929u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E57E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E57E0; } }
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_001E5820; } }
    c.budget -= 1;
L_001E57E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E57ECu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001E57ECu) [[unlikely]] return; }
L_001E57EC:
    set32(c.r[4], c.r[16].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 824u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[17].w[0] + 824u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 824u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001E5818; } }
    st16((c.r[17].w[0] + 824u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001E5818:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 824u)));
    c.budget -= 2;
L_001E5820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E5840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 773u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E5878; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_001E5870; } }
    st8((c.r[16].w[0] + 773u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E5870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5998; } }
L_001E5878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5880u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001E5880u) [[unlikely]] return; }
L_001E5880:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E58D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E58B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E58D0; } }
L_001E58B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8681u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E5998; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5998; } }
L_001E58D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 828u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5990; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E5910; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8681u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E5928; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_001E5928; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5928; } }
    c.budget -= 1;
L_001E5910:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E5970; } }
    c.budget -= 1;
L_001E5928:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E5960; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 114u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5960; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E5970; } }
    c.budget -= 1;
L_001E5960:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001E5970:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E5998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001E5998; } }
    c.budget -= 1;
L_001E5990:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E5998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E59B0:
    c.f[1] = ld32((c.r[4].w[0] + 1260u));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 1036u)));
    c.f[0] = ld32((c.r[4].w[0] + 1016u));
    c.f[2] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5A38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5A38; } }
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 12;
L_001E5A38:
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);  c.pc = t; return; }
L_001E5A60:
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 9;
    { c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00126110u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 161u, depth); }
L_001E5A90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[4].d[0] = c.r[5].d[0] & 512ull;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_001E5B70; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E5B70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E5B70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E5AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AF0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001E5AF0u) [[unlikely]] return; }
L_001E5AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5C08; } }
L_001E5AF8:
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.f[0] = ld32((c.r[16].w[0] + 3184u));
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3188u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3192u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B34u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 203u, depth + 1u); else { c.pc = 0x001731E0u; return; } if (c.pc != 0x001E5B34u) [[unlikely]] return; }
L_001E5B34:
    c.f[0] = ld32((c.r[16].w[0] + 2992u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2996u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3000u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B68u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 203u, depth + 1u); else { c.pc = 0x001731E0u; return; } if (c.pc != 0x001E5B68u) [[unlikely]] return; }
L_001E5B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5C08; } }
L_001E5B70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E5B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B80u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001E5B80u) [[unlikely]] return; }
L_001E5B80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5C08; } }
L_001E5B88:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BA0u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E5BA0u) [[unlikely]] return; }
L_001E5BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BC8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E5BC8u) [[unlikely]] return; }
L_001E5BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BECu); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 203u, depth + 1u); else { c.pc = 0x001731E0u; return; } if (c.pc != 0x001E5BECu) [[unlikely]] return; }
L_001E5BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5C08; } }
    c.budget -= 1;
L_001E5BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C04u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001C(c, 203u, depth + 1u); else { c.pc = 0x001731E0u; return; } if (c.pc != 0x001E5C04u) [[unlikely]] return; }
L_001E5C04:
    c.budget -= 1;
L_001E5C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E5C20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[4].d[0] = c.r[5].d[0] & 512ull;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_001E5D00; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E5D00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E5D00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E5C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C80u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001E5C80u) [[unlikely]] return; }
L_001E5C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5D98; } }
L_001E5C88:
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.f[0] = ld32((c.r[16].w[0] + 3184u));
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3188u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3192u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CC4u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 203u, depth + 1u); else { c.pc = 0x001731E0u; return; } if (c.pc != 0x001E5CC4u) [[unlikely]] return; }
L_001E5CC4:
    c.f[0] = ld32((c.r[16].w[0] + 2992u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2996u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3000u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CF8u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 203u, depth + 1u); else { c.pc = 0x001731E0u; return; } if (c.pc != 0x001E5CF8u) [[unlikely]] return; }
L_001E5CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5D98; } }
L_001E5D00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E5D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D10u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001E5D10u) [[unlikely]] return; }
L_001E5D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5D98; } }
L_001E5D18:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D30u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001E5D30u) [[unlikely]] return; }
L_001E5D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D58u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001E5D58u) [[unlikely]] return; }
L_001E5D58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D7Cu); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 205u, depth + 1u); else { c.pc = 0x001732B0u; return; } if (c.pc != 0x001E5D7Cu) [[unlikely]] return; }
L_001E5D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5D98; } }
    c.budget -= 1;
L_001E5D88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D94u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001C(c, 205u, depth + 1u); else { c.pc = 0x001732B0u; return; } if (c.pc != 0x001E5D94u) [[unlikely]] return; }
L_001E5D94:
    c.budget -= 1;
L_001E5D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E5DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E5DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DD4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001E5DD4u) [[unlikely]] return; }
L_001E5DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5DF0; } }
    c.budget -= 1;
L_001E5DE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DECu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001C(c, 203u, depth + 1u); else { c.pc = 0x001731E0u; return; } if (c.pc != 0x001E5DECu) [[unlikely]] return; }
L_001E5DEC:
    c.budget -= 1;
L_001E5DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E5E00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld16((c.r[4].w[0] + 684u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[18].d[0] = ld16((c.r[4].w[0] + 686u));
    c.r[3].d[0] = c.r[17].d[0] & 32ull;
    st8((c.r[4].w[0] + 785u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8661u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8657u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 106u));
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[6].w[0] + 106u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001E5F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E68u);  if (depth < kMaxDepth) unit_0075(c, 26u, depth + 1u); else { c.pc = 0x002D4770u; return; } if (c.pc != 0x001E5E68u) [[unlikely]] return; }
L_001E5E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5FA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5F10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 221u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5F10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1624u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_001E5EE8; } }
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 106u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 106u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 106u));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E5FA8; } }
    c.budget -= 1;
L_001E5EE8:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8657u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 106u));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E5FA8; } }
    c.budget -= 1;
L_001E5F10:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E5FA8; } }
    c.budget -= 1;
L_001E5F20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1624u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5FA8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1624u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5FA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5FA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 221u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_001E5FA8; } }
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 106u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 106u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 106u));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5FA8; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001E5FA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E5FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5FC4u);  if (depth < kMaxDepth) unit_0039(c, 151u, depth + 1u); else { c.pc = 0x001E64A0u; return; } if (c.pc != 0x001E5FC4u) [[unlikely]] return; }
L_001E5FC4:
    c.budget -= 1;
L_001E5FC8:
    set32(c.r[6], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], 0u - 64u);
    c.r[3].d[0] = c.r[17].d[0] & 128ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 696u), c.r[5].w[0]);  if (t) { goto L_001E6000; } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[16].w[0] + 802u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001E6018; } }
    c.budget -= 1;
L_001E6000:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 802u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6018; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 802u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001E6018:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[7].d[0] = c.r[17].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 768u);
    c.r[6].d[0] = c.r[7].d[0] & 768ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001E6048; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[6].d[0] = c.r[6].d[0] & 4ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 696u), c.r[5].w[0]);
    c.budget -= 6;
L_001E6048:
    c.r[6].d[0] = c.r[7].d[0] & 384ull;
    set32(c.r[5], 0u + 384u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001E6070; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[6].d[0] = c.r[6].d[0] & 9ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 696u), c.r[5].w[0]);
    c.budget -= 6;
L_001E6070:
    c.r[6].d[0] = c.r[7].d[0] & 640ull;
    set32(c.r[5], 0u + 640u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001E6098; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[6].d[0] = c.r[6].d[0] & 18ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 696u), c.r[5].w[0]);
    c.budget -= 6;
L_001E6098:
    c.r[5].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E60C0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 696u), c.r[5].w[0]);
    c.budget -= 7;
L_001E60C0:
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E60E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 7;
L_001E60E8:
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    c.r[5].d[0] = c.r[3].d[0] & 768ull;
    set32(c.r[4], 0u + 768u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001E6110; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[4].w[0]);  if (t) { goto L_001E6120; } }
    c.budget -= 1;
L_001E6110:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], 0u - 1025u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 4;
L_001E6120:
    c.r[5].d[0] = c.r[3].d[0] & 384ull;
    set32(c.r[4], 0u + 384u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001E6140; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[4].w[0]);  if (t) { goto L_001E6150; } }
L_001E6140:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], 0u - 2049u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 4;
L_001E6150:
    c.r[5].d[0] = c.r[3].d[0] & 640ull;
    set32(c.r[4], 0u + 640u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001E6170; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[4].w[0]);  if (t) { goto L_001E6180; } }
L_001E6170:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], 0u - 4097u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 4;
L_001E6180:
    c.r[4].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E61A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[4].w[0]);  if (t) { goto L_001E61B0; } }
    c.budget -= 1;
L_001E61A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], 0u - 257u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 4;
L_001E61B0:
    c.r[4].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E61D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[4].w[0]);  if (t) { goto L_001E61E0; } }
    c.budget -= 1;
L_001E61D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], 0u - 513u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 4;
L_001E61E0:
    c.r[4].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E6200; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[4].w[0]);  if (t) { goto L_001E6210; } }
    c.budget -= 1;
L_001E6200:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], 0u - 8193u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 4;
L_001E6210:
    set32(c.r[7], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[5], c.r[17].w[0] << 6);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);  if (t) { goto L_001E6258; } }
    set32(c.r[5], c.r[17].w[0] << 10);
    c.r[6].d[0] = c.r[4].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[6].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], 0u + 20u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 696u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 807u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
L_001E6258:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 807u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E6290; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[16].w[0] + 807u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E6290; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 5;
L_001E6290:
    set32(c.r[6], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[5], c.r[17].w[0] << 14);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] << 36;  if (t) { goto L_001E62D0; } }
    set32(c.r[5], c.r[17].w[0] << 18);
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[4].w[0]);  if (t) { goto L_001E62E0; } }
L_001E62D0:
    c.r[4].d[0] = c.r[6].d[0] << 36;
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 4;
L_001E62E0:
    c.r[4].d[0] = c.r[3].d[0] & 15360ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E63B0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 804u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001E6338; } }
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[4], c.r[3].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[6].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u + 14u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6370; } }
L_001E6338:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 805u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6370; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6370; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 5;
L_001E6370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6480; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6480; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001E6480; } }
    c.budget -= 1;
L_001E63B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 804u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E6400; } }
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 688u));
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[6], c.r[6].w[0] << 14);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 696u), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6440; } }
L_001E6400:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6440; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6440; } }
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 7;
L_001E6440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 805u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6480; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6480; } }
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 7;
L_001E6480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E64A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9412u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 1800u), 0u);  if (t) { goto L_001E64D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1800u), c.r[3].w[0]);  if (t) { goto L_001E6510; } }
L_001E64D0:
    c.r[3].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E64E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1800u), c.r[3].w[0]);  if (t) { goto L_001E6510; } }
    c.budget -= 1;
L_001E64E8:
    c.r[3].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001E6500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1800u), c.r[3].w[0]);  if (t) { goto L_001E6510; } }
    c.budget -= 1;
L_001E6500:
    c.r[3].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001E6510; } }
    st32((c.r[4].w[0] + 1800u), c.r[3].w[0]);
    c.budget -= 1;
L_001E6510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6520:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 745u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E6B88; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6570; } }
    st32((c.r[17].w[0] + 8420u), 0u);
    st32((c.r[17].w[0] + 8416u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 801u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E6B88; } }
    c.budget -= 1;
L_001E6570:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E65C8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E65C8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8256u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001E65C8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8296u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001E65C8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E65C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6650; } }
L_001E65C8:
    c.r[3].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6600; } }
    c.f[3] = ld32((c.r[17].w[0] + 1296u));
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.f[2] = ld32((c.r[17].w[0] + 1300u));
    c.f[1] = ld32((c.r[17].w[0] + 1304u));
    c.f[0] = ld32((c.r[17].w[0] + 1308u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001E67E8; } }
    c.budget -= 1;
L_001E6600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[0] = ld32((c.r[17].w[0] + 8416u));
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8416u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8420u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8420u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 801u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E6B88; } }
L_001E6650:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[17].w[0] + 2736u));
    set32(c.r[5], c.r[17].w[0] + 1296u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2740u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2744u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E667Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001E667Cu) [[unlikely]] return; }
L_001E667C:
    set32(c.r[19], c.r[29].w[0] + 84u);
    set32(c.r[18], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E6768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66BCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001E66BCu) [[unlikely]] return; }
L_001E66BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66C4u); set32(c.r[4], c.r[17].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001E66C4u) [[unlikely]] return; }
L_001E66C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66CCu); set32(c.r[4], ld32((c.r[17].w[0] + 5196u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E66CCu) [[unlikely]] return; }
L_001E66CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66DCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001E66DCu) [[unlikely]] return; }
L_001E66DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001E66E8u) [[unlikely]] return; }
L_001E66E8:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66FCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001E66FCu) [[unlikely]] return; }
L_001E66FC:
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6708u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001E6708u) [[unlikely]] return; }
L_001E6708:
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6718u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001E6718u) [[unlikely]] return; }
L_001E6718:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 801u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 21505ll ? 1ull : 0ull;  if (t) { goto L_001E6740; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < -21504ll ? 1ull : 0ull;  if (t) { goto L_001E6758; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001E6758; } }
    c.budget -= 1;
L_001E6740:
    c.r[1].d[0] = c.r[2].sd[0] < 18433ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < -18432ll ? 1ull : 0ull;  if (t) { goto L_001E6758; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6758; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001E6758:
    c.r[1].d[0] = c.r[18].sd[0] < -16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E6768; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6768:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E67C0; } }
    c.f[0] = ld32((c.r[17].w[0] + 8416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8416u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8420u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8420u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 801u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E6B88; } }
L_001E67C0:
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.f[3] = ld32((c.r[17].w[0] + 1296u));
    c.f[2] = ld32((c.r[17].w[0] + 1300u));
    c.f[1] = ld32((c.r[17].w[0] + 1304u));
    c.f[0] = ld32((c.r[17].w[0] + 1308u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_001E67E8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 801u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67F8u); set32(c.r[4], c.r[17].w[0] + 2688u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001E67F8u) [[unlikely]] return; }
L_001E67F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8416u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6804u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E6804u) [[unlikely]] return; }
L_001E6804:
    set32(c.r[2], ld32((c.r[17].w[0] + 8420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6810u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E6810u) [[unlikely]] return; }
L_001E6810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6818u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001E6818u) [[unlikely]] return; }
L_001E6818:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6828u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x001E6828u) [[unlikely]] return; }
L_001E6828:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 220u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6838u); set32(c.r[6], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_002E(c, 137u, depth + 1u); else { c.pc = 0x001B9C80u; return; } if (c.pc != 0x001E6838u) [[unlikely]] return; }
L_001E6838:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 745u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001E6880; } }
    st32((c.r[29].w[0] + 216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 8420u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 8420u), c.r[2].w[0]);
    c.budget -= 12;
L_001E6880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6888u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001E6888u) [[unlikely]] return; }
L_001E6888:
    set32(c.r[16], c.r[17].w[0] + 5188u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6898u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E6898u) [[unlikely]] return; }
L_001E6898:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E68A4u) [[unlikely]] return; }
L_001E68A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68ACu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E68ACu) [[unlikely]] return; }
L_001E68AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68B4u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E68B4u) [[unlikely]] return; }
L_001E68B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68BCu); set32(c.r[4], ld32((c.r[29].w[0] + 220u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E68BCu) [[unlikely]] return; }
L_001E68BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68C4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001E68C4u) [[unlikely]] return; }
L_001E68C4:
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[5], c.r[29].w[0] + 212u);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68ECu); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 137u, depth + 1u); else { c.pc = 0x001B9C80u; return; } if (c.pc != 0x001E68ECu) [[unlikely]] return; }
L_001E68EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], 0u - c.r[4].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E6990; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8287u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6950; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.r[1].d[0] = c.r[4].sd[0] < -16384ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001E6930; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 3;
L_001E6930:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = c.r[4].sd[0] < -16384ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001E6990; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_001E6990; } }
    c.budget -= 1;
L_001E6950:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E6970; } }
    set32(c.r[3], c.r[3].w[0] - 32768u);
    set32(c.r[3], c.r[3].w[0] - 32768u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 4;
L_001E6970:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E6990; } }
    set32(c.r[3], c.r[3].w[0] - 32768u);
    set32(c.r[3], c.r[3].w[0] - 32768u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 4;
L_001E6990:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] - 15184u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E69D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_001E6A00; } }
    c.budget -= 1;
L_001E69D8:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E6A00; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 6;
L_001E6A00:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E6A30; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 212u), c.r[3].w[0]);  if (t) { goto L_001E6B00; } }
L_001E6A30:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = c.r[3].sd[0] < 15361ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < -15360ll ? 1ull : 0ull;  if (t) { goto L_001E6A48; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E6A50; } }
L_001E6A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E6AE0; } }
L_001E6A50:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001E6AA0; } }
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x46700000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6AE0; } }
    c.budget -= 1;
L_001E6AA0:
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x46700000u);
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 16;
L_001E6AE0:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_001E6B00; } }
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    c.budget -= 5;
L_001E6B00:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[2] = c.r[3].w[0];
    st32((c.r[29].w[0] + 216u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8416u)));
    c.f[0] = ld32((c.r[17].w[0] + 8252u));
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 8416u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8420u)));
    c.f[0] = ld32((c.r[17].w[0] + 8252u));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 8420u), c.r[3].w[0]);
    c.budget -= 34;
L_001E6B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001E6BB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 952u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E6BD0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 15648u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E6C90; } }
    set32(c.r[6], 0u + 900u);
    st8((c.r[4].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 600u);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 904u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[4].w[0] + 900u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[4].w[0] + 888u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 12u)));
    st32((c.r[4].w[0] + 892u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 944u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 946u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 948u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 950u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 959u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 957u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 958u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 888u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 896u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 904u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 928u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 904u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 932u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 904u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 936u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 900u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 908u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 912u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 916u), c.r[3].w[0]);
    c.budget -= 39;
L_001E6C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 956u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E6D88; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 948u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 948u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], 0u + 900u);  if (t) { goto L_001E6D08; } }
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 948u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 950u)));
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 600u);  if (t) { goto L_001E6D08; } }
    st16((c.r[16].w[0] + 950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E6D08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 600u);  if (t) { goto L_001E6D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 950u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E6D88; } }
L_001E6D20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 950u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 600u);  if (t) { goto L_001E6D88; } }
    set32(c.r[2], 0u + 3u);
    st16((c.r[16].w[0] + 950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 948u)));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 900u);  if (t) { goto L_001E6D68; } }
    st16((c.r[16].w[0] + 948u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001E6D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D70u); set32(c.r[17], ld32((c.r[16].w[0] + 888u)));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001E6D70u) [[unlikely]] return; }
L_001E6D70:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[16].w[0] + 896u), c.r[3].w[0]);
    c.budget -= 6;
L_001E6D88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E6DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 953u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E6F98; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E6E80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001E6E80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E6DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6FD0; } }
L_001E6DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6DE8u);  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194800u; return; } if (c.pc != 0x001E6DE8u) [[unlikely]] return; }
L_001E6DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6E70; } }
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E0Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001E6E0Cu) [[unlikely]] return; }
L_001E6E0C:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8420u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 892u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[6].d[0] & 61440ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[16].w[0] + 960u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6E48; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6FD0; } }
L_001E6E48:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 888u)));  if (t) { goto L_001E6E60; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_001E6E60:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 896u), c.r[3].w[0]);  if (t) { goto L_001E6FD0; } }
    c.budget -= 1;
L_001E6E70:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6FD0; } }
    c.budget -= 1;
L_001E6E80:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 944u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 946u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E6F80; } }
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 953u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E6EC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 896u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 896u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 957u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 896u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 958u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6EE8; } }
L_001E6EC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 896u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 896u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 957u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 896u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 958u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001E6EE8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 957u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 960u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001E6F28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 953u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001E6F18; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 954u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6FD0; } }
L_001E6F18:
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E6FD0; } }
    c.budget -= 1;
L_001E6F28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 958u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6F44u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001E6F44u) [[unlikely]] return; }
L_001E6F44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 959u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 946u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E6FD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E6FD0; } }
    c.budget -= 1;
L_001E6F80:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6F90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 188u, depth + 1u); else { c.pc = 0x001E70B0u; return; } if (c.pc != 0x001E6F90u) [[unlikely]] return; }
L_001E6F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6FD0; } }
L_001E6F98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6FC8; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 896u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 896u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 960u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E6FD0; } }
L_001E6FC8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 954u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E6FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 944u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 946u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E7090; } }
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 896u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 896u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[16].w[0] + 957u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 896u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 958u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 958u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E7038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E70A0; } }
L_001E7038:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], ld32((c.r[16].w[0] + 904u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 957u)));
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7054u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001E7054u) [[unlikely]] return; }
L_001E7054:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 959u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 946u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E70A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E70A0; } }
    c.budget -= 1;
L_001E7090:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E709Cu); st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 188u, depth + 1u); else { c.pc = 0x001E70B0u; return; } if (c.pc != 0x001E709Cu) [[unlikely]] return; }
L_001E709C:
    c.budget -= 1;
L_001E70A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E70B0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 957u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 958u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 904u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 946u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 944u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 928u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 946u)));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 944u)));
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 932u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 946u)));
    c.f[3] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 944u)));
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 936u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 957u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 958u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 900u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 946u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 944u)));
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0])));
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 908u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 946u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 944u)));
    set32(c.r[10], c.r[10].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    mmi::div(c, 1, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 912u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0])));
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 946u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 944u)));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    mmi::div(c, 1, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 107;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 916u), c.r[3].w[0]);  c.pc = t; return; }
L_001E7260:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001E72C0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001E72A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E72A8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E72A8:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E72C0; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_001E72C0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E7338; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 15ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7300; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44820000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_001E7300; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E7300:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7328; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44570000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_001E7328; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E7328:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E7338; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 2;
L_001E7338:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001E7388; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 13ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7378; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_001E7378; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E7378:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E7388; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 2;
L_001E7388:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001E7400; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 21ull;
    c.r[5].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001E73C8; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445C0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_001E73C8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E73C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001E73F4; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x448B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_001E73F4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E73F4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E7400; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E7400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7410:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 520u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E77C0; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 604u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E7650; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[3].d[0] = c.r[6].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7650; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001E7650; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001E7520; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E7478; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001E7520; } }
L_001E7478:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], c.r[17].w[0] + 4032u);
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7494u); st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001E7494u) [[unlikely]] return; }
L_001E7494:
    c.f[5] = ld32((c.r[17].w[0] + 128u));
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 132u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74BCu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E74BCu) [[unlikely]] return; }
L_001E74BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74C4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 1276u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E74C4u) [[unlikely]] return; }
L_001E74C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74CCu); c.r[4].d[0] = ld16((c.r[17].w[0] + 1280u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E74CCu) [[unlikely]] return; }
L_001E74CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74D4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 1272u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E74D4u) [[unlikely]] return; }
L_001E74D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74DCu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001E74DCu) [[unlikely]] return; }
L_001E74DC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74ECu); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x001E74ECu) [[unlikely]] return; }
L_001E74EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74F4u); set32(c.r[4], c.r[17].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001E74F4u) [[unlikely]] return; }
L_001E74F4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7500u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001E7500u) [[unlikely]] return; }
L_001E7500:
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1276u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001E77C0; } }
    c.budget -= 1;
L_001E7520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001E77C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_001E77C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001E77C0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], c.r[17].w[0] + 4032u);
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E755Cu); st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001E755Cu) [[unlikely]] return; }
L_001E755C:
    c.f[5] = ld32((c.r[17].w[0] + 128u));
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 132u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7584u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E7584u) [[unlikely]] return; }
L_001E7584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E758Cu); c.r[4].d[0] = ld16((c.r[17].w[0] + 1280u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E758Cu) [[unlikely]] return; }
L_001E758C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7594u); c.r[4].d[0] = ld16((c.r[17].w[0] + 1276u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E7594u) [[unlikely]] return; }
L_001E7594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E759Cu); c.r[4].d[0] = ld16((c.r[17].w[0] + 1272u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E759Cu) [[unlikely]] return; }
L_001E759C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75A4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 8572u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E75A4u) [[unlikely]] return; }
L_001E75A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75ACu); c.r[4].d[0] = ld16((c.r[17].w[0] + 8568u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E75ACu) [[unlikely]] return; }
L_001E75AC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 76u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E75D0; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75D0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E75D0u) [[unlikely]] return; }
L_001E75D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75D8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001E75D8u) [[unlikely]] return; }
L_001E75D8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75E8u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x001E75E8u) [[unlikely]] return; }
L_001E75E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75F0u); set32(c.r[4], c.r[17].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001E75F0u) [[unlikely]] return; }
L_001E75F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75F8u); c.r[4].d[0] = ld16((c.r[17].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E75F8u) [[unlikely]] return; }
L_001E75F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7600u); c.r[4].d[0] = ld16((c.r[17].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E7600u) [[unlikely]] return; }
L_001E7600:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 76u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7628; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7624u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E7624u) [[unlikely]] return; }
L_001E7624:
    c.budget -= 1;
L_001E7628:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7634u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001E7634u) [[unlikely]] return; }
L_001E7634:
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1276u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001E77C0; } }
L_001E7650:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E77C0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E77C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E77C0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E77C0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E77C0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76B0u); st8((c.r[17].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001E76B0u) [[unlikely]] return; }
L_001E76B0:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76C0u); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E76C0u) [[unlikely]] return; }
L_001E76C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76C8u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001E76C8u) [[unlikely]] return; }
L_001E76C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76D0u); c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001E76D0u) [[unlikely]] return; }
L_001E76D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76D8u); c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001E76D8u) [[unlikely]] return; }
L_001E76D8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7708; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76FCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E76FCu) [[unlikely]] return; }
L_001E76FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7728; } }
    c.budget -= 1;
L_001E7708:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7728; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7728u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E7728u) [[unlikely]] return; }
L_001E7728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7730u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001E7730u) [[unlikely]] return; }
L_001E7730:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7740u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x001E7740u) [[unlikely]] return; }
L_001E7740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7748u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001E7748u) [[unlikely]] return; }
L_001E7748:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7778; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E776Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E776Cu) [[unlikely]] return; }
L_001E776C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7798; } }
    c.budget -= 1;
L_001E7778:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7798; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7798u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001E7798u) [[unlikely]] return; }
L_001E7798:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E77A4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001E77A4u) [[unlikely]] return; }
L_001E77A4:
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 7;
L_001E77C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001E77E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E77F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001E77F4u) [[unlikely]] return; }
L_001E77F4:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 1208u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7848; } }
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7848; } }
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001E7830u) [[unlikely]] return; }
L_001E7830:
    c.f[1] = ld32((c.r[16].w[0] + 1208u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_001E7850; } }
    c.budget -= 1;
L_001E7848:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E7850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7860:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 13u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);  if (t) { goto L_001E7898; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7898; } }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E7900; } }
    c.budget -= 1;
L_001E7898:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);  if (t) { goto L_001E78C8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E78C8; } }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E7900; } }
    c.budget -= 1;
L_001E78C8:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43950000u);  if (t) { goto L_001E78F8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E78F8; } }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E7900; } }
    c.budget -= 1;
L_001E78F8:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.f[12]);
    c.budget -= 2;
L_001E7900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7910:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.f[2] = c.r[6].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[3].w[0] + 840u)));
    set32(c.r[16], c.r[3].w[0] + 840u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 16368u);  if (t) { goto L_001E7B98; } }
    c.budget -= 1;
L_001E7960:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[18].w[0] << 4);
    set32(c.r[25], c.r[5].w[0] << (c.r[18].w[0] & 31u));
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[7], c.r[18].w[0] << 1);
    set32(c.r[15], c.r[8].w[0] + 4544u);
    set32(c.r[7], c.r[7].w[0] + c.r[18].w[0]);
    set32(c.r[14], c.r[8].w[0] + 4548u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[13], c.r[8].w[0] + 4552u);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[12], c.r[8].w[0] + 4032u);
    set32(c.r[11], c.r[8].w[0] + 4036u);
    set32(c.r[10], c.r[8].w[0] + 4040u);
    set32(c.r[9], c.r[7].w[0] + 5064u);
    set32(c.r[8], c.r[7].w[0] + 5060u);
    c.r[24].d[0] = ~(c.r[25].d[0] | 0ull);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 5056u);  if (t) { goto L_001E7B70; } }
    c.budget -= 1;
L_001E79B8:
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[21].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;  if (t) { goto L_001E7B60; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[17].w[0] << 2);  if (t) { goto L_001E7B60; } }
    set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[21].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E79E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 848u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_001E7B60; } }
L_001E79F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 772u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_001E7B60; } }
L_001E79F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 8512u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_001E7B60; } }
L_001E7A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 8513u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_001E7B60; } }
L_001E7A08:
    set32(c.r[21], ld32((c.r[4].w[0] + 1236u)));
    c.r[21].d[0] = c.r[21].d[0] & c.r[24].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1236u), c.r[21].w[0]);  if (t) { goto L_001E7B60; } }
L_001E7A18:
    set32(c.r[21], ld32((c.r[4].w[0] + 1236u)));
    c.r[21].d[0] = c.r[21].d[0] | c.r[25].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1236u), c.r[21].w[0]);  if (t) { goto L_001E7B60; } }
L_001E7A28:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[1] = c.r[21].w[0];
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.f[0]);  if (t) { goto L_001E7B60; } }
L_001E7A50:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[1] = c.r[21].w[0];
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0]), c.f[0]);  if (t) { goto L_001E7B60; } }
L_001E7A78:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[1] = c.r[21].w[0];
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), c.f[0]);  if (t) { goto L_001E7B60; } }
L_001E7AA0:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = ld32((c.r[12].w[0]));
    c.f[1] = c.r[21].w[0];
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0]), c.f[0]);  if (t) { goto L_001E7B60; } }
L_001E7AC8:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[1] = c.r[21].w[0];
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[11].w[0]), c.f[0]);  if (t) { goto L_001E7B60; } }
L_001E7AF0:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[1] = c.r[21].w[0];
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0]), c.f[0]);  if (t) { goto L_001E7B60; } }
L_001E7B18:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[21], ld32((c.r[9].w[0])));
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.r[21].w[0]);  if (t) { goto L_001E7B60; } }
L_001E7B30:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[21], ld32((c.r[8].w[0])));
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[21].w[0]);  if (t) { goto L_001E7B60; } }
L_001E7B48:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[21], ld32((c.r[7].w[0])));
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    st32((c.r[7].w[0]), c.r[21].w[0]);
    c.budget -= 6;
L_001E7B60:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    c.r[6].d[0] = c.r[6].d[0] << 48;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 4;
L_001E7B70:
    c.r[21].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[21].d[0] = c.r[21].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull; c.r[21].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_001E7B88; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E79B8u | kUnwind; return; } goto L_001E79B8; } }
L_001E7B88:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[20].d[0]; set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7960u | kUnwind; return; } goto L_001E7960; } }
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_001E7B98:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[1] = ld32((c.r[4].w[0] + 740u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7B88u | kUnwind; return; } goto L_001E7B88; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E7BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 45u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E7C18; } }
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E7C18; } }
    st8((c.r[17].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E7C18:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[17].w[0] + 850u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E7C30; } }
    st8((c.r[17].w[0] + 851u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001E7C30:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 772u));
    c.r[3].d[0] = c.r[5].d[0] & 240ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[17].w[0] + 772u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E7C48; } }
    st8((c.r[17].w[0] + 745u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001E7C48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E7C68; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1608u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_001E7C78; } }
    c.budget -= 1;
L_001E7C68:
    set32(c.r[4], ld32((c.r[17].w[0] + 1608u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[6].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_001E7C78:
    c.r[2].d[0] = c.r[5].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7C94; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_001E7CA0; } }
L_001E7C94:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
L_001E7CA0:
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CB8u); st32((c.r[17].w[0] + 852u), 0u);  if (depth < kMaxDepth) unit_0036(c, 153u, depth + 1u); else { c.pc = 0x001DB9C0u; return; } if (c.pc != 0x001E7CB8u) [[unlikely]] return; }
L_001E7CB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 158u, depth + 1u); else { c.pc = 0x001DBB00u; return; } if (c.pc != 0x001E7CC4u) [[unlikely]] return; }
L_001E7CC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CD0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 160u, depth + 1u); else { c.pc = 0x001DBB80u; return; } if (c.pc != 0x001E7CD0u) [[unlikely]] return; }
L_001E7CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E7CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E7DA8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 852u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u - c.r[4].w[0]);
    set32(c.r[4], 0u - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 27;
    { const bool t = c.r[4].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < -8192ll ? 1ull : 0ull;  if (t) { goto L_001E7D88; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E7D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 8192u);  if (t) { goto L_001E7D98; } }
    c.budget -= 1;
L_001E7D88:
    c.r[1].d[0] = c.r[4].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E7D98; } }
    set32(c.r[4], 0u + 8192u);
    c.budget -= 1;
L_001E7D98:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 852u), c.r[3].w[0]);  if (t) { goto L_001E7E90; } }
L_001E7DA8:
    set32(c.r[4], c.r[16].w[0] + 8592u);
    set32(c.r[5], c.r[16].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7DB8u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E7DB8u) [[unlikely]] return; }
L_001E7DB8:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7DC4u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001E7DC4u) [[unlikely]] return; }
L_001E7DC4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1036u)));
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[6], ld32((c.r[16].w[0] + 852u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[5], 0u - c.r[6].w[0]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 39;
    { const bool t = c.r[4].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < -16384ll ? 1ull : 0ull;  if (t) { goto L_001E7E70; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E7E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 16384u);  if (t) { goto L_001E7E80; } }
L_001E7E70:
    c.r[1].d[0] = c.r[4].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E7E80; } }
    set32(c.r[4], 0u + 16384u);
    c.budget -= 1;
L_001E7E80:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 852u), c.r[3].w[0]);
    c.budget -= 4;
L_001E7E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E7EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E7ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { [[clang::musttail]] return unit_003A(c, 7u, depth); } }
    c.budget -= 1;
L_001E7ED0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_003A(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_003A(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E7EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 6u, depth); } }
L_001E7EF8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 75u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7F18u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001E7F18u) [[unlikely]] return; }
L_001E7F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7F28; } }
L_001E7F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7F28u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001E7F28u) [[unlikely]] return; }
L_001E7F28:
    st32((c.r[17].w[0] + 8420u), 0u);
    st32((c.r[17].w[0] + 8416u), 0u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7F48u); st8((c.r[17].w[0] + 801u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 155u, depth + 1u); else { c.pc = 0x001DBA60u; return; } if (c.pc != 0x001E7F48u) [[unlikely]] return; }
L_001E7F48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 158u, depth + 1u); else { c.pc = 0x001DBB00u; return; } if (c.pc != 0x001E7F54u) [[unlikely]] return; }
L_001E7F54:
    set32(c.r[3], 0u + 17u);
    set32(c.r[2], 0u + 33u);
    st8((c.r[17].w[0] + 850u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 740u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E7F88; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14144u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18032u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_003A(c, 2u, depth); } }
L_001E7F88:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E7FB0; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14136u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18040u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_003A(c, 2u, depth); } }
    c.budget -= 1;
L_001E7FB0:
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E7FD8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14128u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18048u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_003A(c, 2u, depth); } }
    c.budget -= 1;
L_001E7FD8:
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { [[clang::musttail]] return unit_003A(c, 1u, depth); } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14120u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18056u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_003A(c, 2u, depth); } }
    c.budget -= 1;
    [[clang::musttail]] return unit_003A(c, 1u, depth);
}

}
