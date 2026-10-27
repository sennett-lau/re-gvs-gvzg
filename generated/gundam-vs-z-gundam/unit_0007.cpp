#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0007[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0,
    0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0,
    0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 291, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 301, 0, 302, 303, 304, 305, 306, 0,
};

void unit_0007(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0011C000;
    case 2u: goto L_0011C010;
    case 3u: goto L_0011C020;
    case 4u: goto L_0011C038;
    case 5u: goto L_0011C04C;
    case 6u: goto L_0011C07C;
    case 7u: goto L_0011C08C;
    case 8u: goto L_0011C09C;
    case 9u: goto L_0011C0B8;
    case 10u: goto L_0011C0CC;
    case 11u: goto L_0011C100;
    case 12u: goto L_0011C110;
    case 13u: goto L_0011C120;
    case 14u: goto L_0011C138;
    case 15u: goto L_0011C14C;
    case 16u: goto L_0011C168;
    case 17u: goto L_0011C174;
    case 18u: goto L_0011C184;
    case 19u: goto L_0011C194;
    case 20u: goto L_0011C1B0;
    case 21u: goto L_0011C1C4;
    case 22u: goto L_0011C1E8;
    case 23u: goto L_0011C238;
    case 24u: goto L_0011C270;
    case 25u: goto L_0011C2C8;
    case 26u: goto L_0011C308;
    case 27u: goto L_0011C340;
    case 28u: goto L_0011C368;
    case 29u: goto L_0011C38C;
    case 30u: goto L_0011C3B8;
    case 31u: goto L_0011C3F8;
    case 32u: goto L_0011C430;
    case 33u: goto L_0011C484;
    case 34u: goto L_0011C4D0;
    case 35u: goto L_0011C508;
    case 36u: goto L_0011C588;
    case 37u: goto L_0011C5B8;
    case 38u: goto L_0011C5E8;
    case 39u: goto L_0011C60C;
    case 40u: goto L_0011C628;
    case 41u: goto L_0011C698;
    case 42u: goto L_0011C6D0;
    case 43u: goto L_0011C730;
    case 44u: goto L_0011C768;
    case 45u: goto L_0011C7BC;
    case 46u: goto L_0011C7E8;
    case 47u: goto L_0011C830;
    case 48u: goto L_0011C864;
    case 49u: goto L_0011C898;
    case 50u: goto L_0011C8C8;
    case 51u: goto L_0011C8F8;
    case 52u: goto L_0011C924;
    case 53u: goto L_0011C934;
    case 54u: goto L_0011C940;
    case 55u: goto L_0011C960;
    case 56u: goto L_0011C9D8;
    case 57u: goto L_0011CAA8;
    case 58u: goto L_0011CBF4;
    case 59u: goto L_0011CD38;
    case 60u: goto L_0011CD4C;
    case 61u: goto L_0011CD60;
    case 62u: goto L_0011CE48;
    case 63u: goto L_0011CE54;
    case 64u: goto L_0011CEA0;
    case 65u: goto L_0011CECC;
    case 66u: goto L_0011CF00;
    case 67u: goto L_0011CF38;
    case 68u: goto L_0011CF78;
    case 69u: goto L_0011CFB8;
    case 70u: goto L_0011D000;
    case 71u: goto L_0011D034;
    case 72u: goto L_0011D050;
    case 73u: goto L_0011D068;
    case 74u: goto L_0011D0B8;
    case 75u: goto L_0011D0E0;
    case 76u: goto L_0011D110;
    case 77u: goto L_0011D134;
    case 78u: goto L_0011D150;
    case 79u: goto L_0011D180;
    case 80u: goto L_0011D1CC;
    case 81u: goto L_0011D200;
    case 82u: goto L_0011D244;
    case 83u: goto L_0011D26C;
    case 84u: goto L_0011D2C0;
    case 85u: goto L_0011D2D8;
    case 86u: goto L_0011D310;
    case 87u: goto L_0011D358;
    case 88u: goto L_0011D370;
    case 89u: goto L_0011D424;
    case 90u: goto L_0011D458;
    case 91u: goto L_0011D4F8;
    case 92u: goto L_0011D574;
    case 93u: goto L_0011D588;
    case 94u: goto L_0011D590;
    case 95u: goto L_0011D5F0;
    case 96u: goto L_0011D628;
    case 97u: goto L_0011D638;
    case 98u: goto L_0011D65C;
    case 99u: goto L_0011D6A0;
    case 100u: goto L_0011D6E0;
    case 101u: goto L_0011D700;
    case 102u: goto L_0011D720;
    case 103u: goto L_0011D744;
    case 104u: goto L_0011D788;
    case 105u: goto L_0011D7A8;
    case 106u: goto L_0011D7F8;
    case 107u: goto L_0011D880;
    case 108u: goto L_0011D8BC;
    case 109u: goto L_0011D904;
    case 110u: goto L_0011D954;
    case 111u: goto L_0011D974;
    case 112u: goto L_0011D998;
    case 113u: goto L_0011D9B0;
    case 114u: goto L_0011DA0C;
    case 115u: goto L_0011DAD8;
    case 116u: goto L_0011DB14;
    case 117u: goto L_0011DB40;
    case 118u: goto L_0011DBB8;
    case 119u: goto L_0011DC18;
    case 120u: goto L_0011DC50;
    case 121u: goto L_0011DC78;
    case 122u: goto L_0011DC88;
    case 123u: goto L_0011DD04;
    case 124u: goto L_0011DD50;
    case 125u: goto L_0011DD78;
    case 126u: goto L_0011DDA0;
    case 127u: goto L_0011DDB0;
    case 128u: goto L_0011DDD8;
    case 129u: goto L_0011DE20;
    case 130u: goto L_0011DE98;
    case 131u: goto L_0011DF14;
    case 132u: goto L_0011DF34;
    case 133u: goto L_0011DF58;
    case 134u: goto L_0011DFD8;
    case 135u: goto L_0011E050;
    case 136u: goto L_0011E080;
    case 137u: goto L_0011E0D0;
    case 138u: goto L_0011E108;
    case 139u: goto L_0011E110;
    case 140u: goto L_0011E194;
    case 141u: goto L_0011E228;
    case 142u: goto L_0011E288;
    case 143u: goto L_0011E2C0;
    case 144u: goto L_0011E3F0;
    case 145u: goto L_0011E428;
    case 146u: goto L_0011E458;
    case 147u: goto L_0011E480;
    case 148u: goto L_0011E498;
    case 149u: goto L_0011E4D0;
    case 150u: goto L_0011E4E8;
    case 151u: goto L_0011E4F0;
    case 152u: goto L_0011E518;
    case 153u: goto L_0011E558;
    case 154u: goto L_0011E5A0;
    case 155u: goto L_0011E5C8;
    case 156u: goto L_0011E5D0;
    case 157u: goto L_0011E5E8;
    case 158u: goto L_0011E5F0;
    case 159u: goto L_0011E608;
    case 160u: goto L_0011E650;
    case 161u: goto L_0011E6E0;
    case 162u: goto L_0011E730;
    case 163u: goto L_0011E750;
    case 164u: goto L_0011E888;
    case 165u: goto L_0011E8D4;
    case 166u: goto L_0011E94C;
    case 167u: goto L_0011E988;
    case 168u: goto L_0011E9A8;
    case 169u: goto L_0011E9D8;
    case 170u: goto L_0011E9EC;
    case 171u: goto L_0011EA04;
    case 172u: goto L_0011EA14;
    case 173u: goto L_0011EA24;
    case 174u: goto L_0011EA5C;
    case 175u: goto L_0011EA7C;
    case 176u: goto L_0011EAB8;
    case 177u: goto L_0011EAD4;
    case 178u: goto L_0011EB28;
    case 179u: goto L_0011EBB8;
    case 180u: goto L_0011EBF0;
    case 181u: goto L_0011EC0C;
    case 182u: goto L_0011EC54;
    case 183u: goto L_0011EC68;
    case 184u: goto L_0011EC80;
    case 185u: goto L_0011EC90;
    case 186u: goto L_0011ECA0;
    case 187u: goto L_0011ECA8;
    case 188u: goto L_0011ECAC;
    case 189u: goto L_0011ECC8;
    case 190u: goto L_0011ECD4;
    case 191u: goto L_0011ECE4;
    case 192u: goto L_0011ED08;
    case 193u: goto L_0011ED18;
    case 194u: goto L_0011ED24;
    case 195u: goto L_0011ED34;
    case 196u: goto L_0011ED48;
    case 197u: goto L_0011EE20;
    case 198u: goto L_0011EE30;
    case 199u: goto L_0011EE44;
    case 200u: goto L_0011EE60;
    case 201u: goto L_0011EE78;
    case 202u: goto L_0011EEEC;
    case 203u: goto L_0011EF1C;
    case 204u: goto L_0011EF30;
    case 205u: goto L_0011EF50;
    case 206u: goto L_0011EF70;
    case 207u: goto L_0011EF84;
    case 208u: goto L_0011EFCC;
    case 209u: goto L_0011EFDC;
    case 210u: goto L_0011EFEC;
    case 211u: goto L_0011F088;
    case 212u: goto L_0011F0A4;
    case 213u: goto L_0011F0B0;
    case 214u: goto L_0011F0B8;
    case 215u: goto L_0011F0D4;
    case 216u: goto L_0011F0E4;
    case 217u: goto L_0011F0F4;
    case 218u: goto L_0011F104;
    case 219u: goto L_0011F134;
    case 220u: goto L_0011F13C;
    case 221u: goto L_0011F14C;
    case 222u: goto L_0011F180;
    case 223u: goto L_0011F19C;
    case 224u: goto L_0011F1C4;
    case 225u: goto L_0011F1D8;
    case 226u: goto L_0011F1E4;
    case 227u: goto L_0011F1F0;
    case 228u: goto L_0011F1FC;
    case 229u: goto L_0011F20C;
    case 230u: goto L_0011F22C;
    case 231u: goto L_0011F240;
    case 232u: goto L_0011F250;
    case 233u: goto L_0011F2F8;
    case 234u: goto L_0011F30C;
    case 235u: goto L_0011F31C;
    case 236u: goto L_0011F334;
    case 237u: goto L_0011F34C;
    case 238u: goto L_0011F364;
    case 239u: goto L_0011F380;
    case 240u: goto L_0011F394;
    case 241u: goto L_0011F3AC;
    case 242u: goto L_0011F3E0;
    case 243u: goto L_0011F3EC;
    case 244u: goto L_0011F3F8;
    case 245u: goto L_0011F404;
    case 246u: goto L_0011F410;
    case 247u: goto L_0011F43C;
    case 248u: goto L_0011F470;
    case 249u: goto L_0011F4C0;
    case 250u: goto L_0011F4F8;
    case 251u: goto L_0011F510;
    case 252u: goto L_0011F558;
    case 253u: goto L_0011F568;
    case 254u: goto L_0011F5A8;
    case 255u: goto L_0011F5F0;
    case 256u: goto L_0011F6B4;
    case 257u: goto L_0011F6C8;
    case 258u: goto L_0011F6D8;
    case 259u: goto L_0011F718;
    case 260u: goto L_0011F7E0;
    case 261u: goto L_0011F810;
    case 262u: goto L_0011F858;
    case 263u: goto L_0011F918;
    case 264u: goto L_0011F91C;
    case 265u: goto L_0011F92C;
    case 266u: goto L_0011F940;
    case 267u: goto L_0011F980;
    case 268u: goto L_0011FA40;
    case 269u: goto L_0011FA70;
    case 270u: goto L_0011FAAC;
    case 271u: goto L_0011FAD0;
    case 272u: goto L_0011FB08;
    case 273u: goto L_0011FB28;
    case 274u: goto L_0011FB58;
    case 275u: goto L_0011FB6C;
    case 276u: goto L_0011FBA8;
    case 277u: goto L_0011FBDC;
    case 278u: goto L_0011FBFC;
    case 279u: goto L_0011FC2C;
    case 280u: goto L_0011FCE0;
    case 281u: goto L_0011FD10;
    case 282u: goto L_0011FD28;
    case 283u: goto L_0011FD8C;
    case 284u: goto L_0011FDA0;
    case 285u: goto L_0011FDE0;
    case 286u: goto L_0011FE08;
    case 287u: goto L_0011FE20;
    case 288u: goto L_0011FE2C;
    case 289u: goto L_0011FEB8;
    case 290u: goto L_0011FEF4;
    case 291u: goto L_0011FF14;
    case 292u: goto L_0011FF18;
    case 293u: goto L_0011FF20;
    case 294u: goto L_0011FF40;
    case 295u: goto L_0011FF7C;
    case 296u: goto L_0011FF8C;
    case 297u: goto L_0011FF98;
    case 298u: goto L_0011FFA0;
    case 299u: goto L_0011FFD0;
    case 300u: goto L_0011FFDC;
    case 301u: goto L_0011FFE0;
    case 302u: goto L_0011FFE8;
    case 303u: goto L_0011FFEC;
    case 304u: goto L_0011FFF0;
    case 305u: goto L_0011FFF4;
    case 306u: goto L_0011FFF8;
    default: bad_entry(c, 0x0011C000u); return;
    }
L_0011C000:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011C030; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C010u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C010u) [[unlikely]] return; }
L_0011C010:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0011C060; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C020u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C020u) [[unlikely]] return; }
L_0011C020:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[22].d[0];  if (t) { goto L_0011C064; } }
L_0011C030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C038u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C038u) [[unlikely]] return; }
L_0011C038:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011C064; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C04Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C04Cu) [[unlikely]] return; }
L_0011C04C:
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[17].d[0];  if (t) { goto L_0011C064; } }
    c.budget -= 1;
L_0011C060:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011C064:
    set32(c.r[18], c.r[19].w[0] - c.r[23].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C07Cu); set32(c.r[17], c.r[19].w[0] + c.r[23].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C07Cu) [[unlikely]] return; }
L_0011C07C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011C0B0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C08Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C08Cu) [[unlikely]] return; }
L_0011C08C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011C0E0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C09Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C09Cu) [[unlikely]] return; }
L_0011C09C:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[18].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011C0E4; } }
    c.budget -= 1;
L_0011C0B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C0B8u) [[unlikely]] return; }
L_0011C0B8:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0011C0E4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C0CCu) [[unlikely]] return; }
L_0011C0CC:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[17].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011C0E4; } }
    c.budget -= 1;
L_0011C0E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0011C0E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[17], c.r[21].w[0] - c.r[23].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C100u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C100u) [[unlikely]] return; }
L_0011C100:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011C130; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C110u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C110u) [[unlikely]] return; }
L_0011C110:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011C160; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C120u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C120u) [[unlikely]] return; }
L_0011C120:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[18].d[0];  if (t) { goto L_0011C164; } }
L_0011C130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C138u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C138u) [[unlikely]] return; }
L_0011C138:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011C164; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C14Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C14Cu) [[unlikely]] return; }
L_0011C14C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[21].d[0];  if (t) { goto L_0011C164; } }
    c.budget -= 1;
L_0011C160:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011C164:
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0011C168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C174u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C174u) [[unlikely]] return; }
L_0011C174:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011C1A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C184u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C184u) [[unlikely]] return; }
L_0011C184:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011C1D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C194u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C194u) [[unlikely]] return; }
L_0011C194:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[16].d[0];  if (t) { goto L_0011C1DC; } }
    c.budget -= 1;
L_0011C1A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1B0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C1B0u) [[unlikely]] return; }
L_0011C1B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011C1DC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1C4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C1C4u) [[unlikely]] return; }
L_0011C1C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[21].d[0];  if (t) { goto L_0011C1DC; } }
    c.budget -= 1;
L_0011C1D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0011C1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011C1F4; } }
    c.budget -= 1;
L_0011C1E8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 3;
L_0011C1F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0011C218; } }
    c.r[3].d[0] = ld64((c.r[22].w[0]));
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    st64((c.r[22].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0]), c.r[3].d[0]);  if (t) { goto L_0011C290; } }
    c.budget -= 1;
L_0011C218:
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] << 32;  if (t) { goto L_0011C260; } }
    set32(c.r[2], c.r[20].w[0] >> 3);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 5;
L_0011C238:
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C238u | kUnwind; return; } goto L_0011C238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_0011C294; } }
L_0011C260:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] >> 32;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_0011C270:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C270u | kUnwind; return; } goto L_0011C270; } }
L_0011C290:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_0011C294:
    set32(c.r[17], c.r[22].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[20].d[0] << 32;
    c.r[10].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[20].w[0] >> 3);
    c.r[11].d[0] = c.r[2].d[0] << 32;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011C368; } }
    c.budget -= 1;
L_0011C2C8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);  goto L_0011C368; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0011C2F8; } }
    c.r[3].d[0] = ld64((c.r[21].w[0]));
    c.r[2].d[0] = ld64((c.r[17].w[0]));
    st64((c.r[21].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0]), c.r[3].d[0]);  if (t) { goto L_0011C360; } }
    c.budget -= 1;
L_0011C2F8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; c.r[6].d[0] = c.r[11].d[0] >> 32;  if (t) { goto L_0011C330; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0011C308:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C308u | kUnwind; return; } goto L_0011C308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[20].w[0]);  if (t) { goto L_0011C364; } }
L_0011C330:
    c.r[6].d[0] = c.r[9].d[0] >> 32;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0011C340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C340u | kUnwind; return; } goto L_0011C340; } }
L_0011C360:
    set32(c.r[21], c.r[21].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_0011C364:
    set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_0011C368:
    c.r[16].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0011C3A4; } }
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[9]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[10]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C38Cu); st128((c.r[29].w[0] + 96u) & ~15u, c.r[11]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C38Cu) [[unlikely]] return; }
L_0011C38C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[9]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[10]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[11]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C2C8u | kUnwind; return; } goto L_0011C2C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0011C3A4:
    set32(c.r[2], c.r[20].w[0] >> 3);
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[23].d[0] = c.r[20].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0011C45C; } }
L_0011C3B8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - c.r[20].w[0]);  goto L_0011C458; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0011C3E8; } }
    c.r[3].d[0] = ld64((c.r[18].w[0]));
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0]), c.r[3].d[0]);  if (t) { goto L_0011C450; } }
    c.budget -= 1;
L_0011C3E8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = c.r[7].d[0] >> 32;  if (t) { goto L_0011C420; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0011C3F8:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C3F8u | kUnwind; return; } goto L_0011C3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - c.r[20].w[0]);  if (t) { goto L_0011C454; } }
L_0011C420:
    c.r[6].d[0] = c.r[23].d[0] >> 32;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_0011C430:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C430u | kUnwind; return; } goto L_0011C430; } }
L_0011C450:
    set32(c.r[19], c.r[19].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_0011C454:
    set32(c.r[18], c.r[18].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_0011C458:
    c.r[16].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0011C45C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0011C540; } }
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[7]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[8]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[9]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[10]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C484u); st128((c.r[29].w[0] + 96u) & ~15u, c.r[11]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C484u) [[unlikely]] return; }
L_0011C484:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[8]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[9]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[10]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[11]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C3B8u | kUnwind; return; } goto L_0011C3B8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011C4C0; } }
    c.r[3].d[0] = ld64((c.r[17].w[0]));
    c.r[2].d[0] = ld64((c.r[18].w[0]));
    st64((c.r[17].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0]), c.r[3].d[0]);  if (t) { goto L_0011C528; } }
L_0011C4C0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; c.r[6].d[0] = c.r[11].d[0] >> 32;  if (t) { goto L_0011C4F8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0011C4D0:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C4D0u | kUnwind; return; } goto L_0011C4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0011C52C; } }
L_0011C4F8:
    c.r[6].d[0] = c.r[9].d[0] >> 32;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0011C508:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C508u | kUnwind; return; } goto L_0011C508; } }
L_0011C528:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0011C52C:
    set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - c.r[20].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C368u | kUnwind; return; } goto L_0011C368; } }
    c.budget -= 1;
L_0011C540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] - c.r[21].w[0]);  if (t) { goto L_0011C650; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[19], ld32((c.r[29].w[0] + 28u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_0011C7E8; }
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] >> 3);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[23].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = c.r[20].d[0] << 32;
    c.r[21].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011C60C; } }
    c.budget -= 1;
L_0011C588:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0011C5A8; } }
    c.r[3].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = ld64((c.r[17].w[0]));
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0]), c.r[3].d[0]);  if (t) { goto L_0011C608; } }
    c.budget -= 1;
L_0011C5A8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011C5E0; } }
    c.r[5].d[0] = c.r[23].d[0] >> 32;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0011C5B8:
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C5B8u | kUnwind; return; } goto L_0011C5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011C60C; } }
L_0011C5E0:
    c.r[5].d[0] = c.r[18].d[0] >> 32;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0011C5E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C5E8u | kUnwind; return; } goto L_0011C5E8; } }
L_0011C608:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011C60C:
    c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_0011C634; } }
    set32(c.r[17], c.r[16].w[0] - c.r[20].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C628u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C628u) [[unlikely]] return; }
L_0011C628:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C588u | kUnwind; return; } goto L_0011C588; }
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_0011C634:
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C60Cu | kUnwind; return; } goto L_0011C60C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0011C7E8; } }
    c.budget -= 1;
L_0011C650:
    set32(c.r[2], c.r[21].w[0] - c.r[22].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[21], c.r[2].w[0] + c.r[22].w[0]);  if (t) { goto L_0011C6F0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] - c.r[5].w[0]);  if (t) { goto L_0011C6C0; } }
    set32(c.r[2], c.r[5].w[0] >> 3);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 6;
L_0011C698:
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C698u | kUnwind; return; } goto L_0011C698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[21].w[0] - c.r[19].w[0]);  if (t) { goto L_0011C6F4; } }
L_0011C6C0:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] >> 32;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_0011C6D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C6D0u | kUnwind; return; } goto L_0011C6D0; } }
L_0011C6F0:
    set32(c.r[3], c.r[21].w[0] - c.r[19].w[0]);
    c.budget -= 1;
L_0011C6F4:
    set32(c.r[16], c.r[19].w[0] - c.r[18].w[0]);
    set32(c.r[5], c.r[3].w[0] - c.r[20].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[16].d[0];
    c.budget -= 6;
    if (c.r[5].sd[0] <= 0) { c.r[5].d[0] = c.r[7].d[0] + 0ull;  goto L_0011C78C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] - c.r[5].w[0]);  if (t) { goto L_0011C758; } }
    set32(c.r[2], c.r[5].w[0] >> 3);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 5;
L_0011C730:
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C730u | kUnwind; return; } goto L_0011C730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011C78C; } }
L_0011C758:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] >> 32;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0011C768:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C768u | kUnwind; return; } goto L_0011C768; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0011C78C:
    c.r[2].d[0] = c.r[20].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0011C7C0; }
    mmi::divu(c, 0, c.r[5].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[20].d[0] == 0ull) { breakpoint(c, 0x0011C7ACu);  goto L_0011C7B0; }
L_0011C7B0:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C7BCu);  if (depth < kMaxDepth) unit_0006(c, 281u, depth + 1u); else { c.pc = 0x0011BE28u; return; } if (c.pc != 0x0011C7BCu) [[unlikely]] return; }
L_0011C7BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011C7C0:
    c.r[2].d[0] = c.r[20].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0011C7E8; } }
    mmi::divu(c, 0, c.r[5].w[0], c.r[20].w[0]);
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { breakpoint(c, 0x0011C7D4u);  goto L_0011C7D8; }
L_0011C7D8:
    set32(c.r[22], c.r[21].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BE64u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 282u, depth); } }
L_0011C7E8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 184u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0011C830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x58510000u);
    c.r[5].d[0] = c.r[5].d[0] | 62509ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 19605ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32557ull;
    set32(c.r[16], ld32((c.r[2].w[0] - 17840u)));
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C864u); c.r[4].d[0] = ld64((c.r[16].w[0] + 168u));  if (depth < kMaxDepth) unit_0004(c, 245u, depth + 1u); else { c.pc = 0x00113AC8u; return; } if (c.pc != 0x0011C864u) [[unlikely]] return; }
L_0011C864:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] >> 32;
    st64((c.r[16].w[0] + 168u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011C898:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 25776u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C8C8u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00104928u; return; } if (c.pc != 0x0011C8C8u) [[unlikely]] return; }
L_0011C8C8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0011C8E4; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_0011C8E4; }
L_0011C8E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011C8F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 17840u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C924u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0006(c, 205u, depth + 1u); else { c.pc = 0x0011AC10u; return; } if (c.pc != 0x0011C924u) [[unlikely]] return; }
L_0011C924:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C934u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011C934u) [[unlikely]] return; }
L_0011C934:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C940u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0011AC90u; return; } if (c.pc != 0x0011C940u) [[unlikely]] return; }
L_0011C940:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011C960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 72u), c.r[31].d[0]);  if (t) { goto L_0011C9D0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A0C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 171u, depth); }
L_0011C9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C9D8u); set32(c.r[16], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_0006(c, 205u, depth + 1u); else { c.pc = 0x0011AC10u; return; } if (c.pc != 0x0011C9D8u) [[unlikely]] return; }
L_0011C9D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 4u);
    set32(c.r[4], c.r[18].w[0] + 19u);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_0011CA08; } }
    set32(c.r[2], 0u - 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (t) { goto L_0011CA0C; } }
    c.budget -= 1;
L_0011CA08:
    set32(c.r[22], 0u + 16u);
    c.budget -= 1;
L_0011CA0C:
    c.r[2].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[19].w[0] + 8u);  goto L_0011CE60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[19].w[0] + c.r[21].w[0]);
    set32(c.r[9], c.r[2].w[0] - 17824u);
    set32(c.r[8], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[8].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0011CA58; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0011CAE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_0011CA60; } }
    c.budget -= 1;
L_0011CA58:
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u - 4u);
    c.budget -= 2;
L_0011CA60:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[8].d[0]; c.r[7].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (t) { goto L_0011CAB0; } }
    set32(c.r[3], c.r[7].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[22].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_0011CAE8; }
    set32(c.r[2], c.r[3].w[0] - c.r[22].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[9].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CAA8u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0011AC90u; return; } if (c.pc != 0x0011CAA8u) [[unlikely]] return; }
L_0011CAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] + 8u);  if (t) { goto L_0011CED0; } }
L_0011CAB0:
    set32(c.r[3], c.r[7].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_0011CAE8; }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[18], c.r[19].w[0] + 8u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0011CE60; } }
    c.budget -= 1;
L_0011CAE0:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 2;
L_0011CAE8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011CD44; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], 0u - 4u);
    set32(c.r[20], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (t) { goto L_0011CC60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[3].w[0] - 17824u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);  if (t) { goto L_0011CC28; } }
    set32(c.r[3], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[22].w[0] + 16u);
    set32(c.r[23], c.r[3].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0011CC60; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], c.r[21].w[0] - 4u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[16].w[0] + 8u);  if (t) { goto L_0011CBE8; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011CBC0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    set32(c.r[8], c.r[17].w[0] + 8u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0011CBC0; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[17].w[0] + 16u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + 24u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0011CBC0; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[17].w[0] + 24u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + 32u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
L_0011CBC0:
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0011CBF4; } }
    c.budget -= 1;
L_0011CBE8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CBF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0011CBF4u) [[unlikely]] return; }
L_0011CBF4:
    set32(c.r[2], c.r[23].w[0] - c.r[22].w[0]);
    set32(c.r[5], c.r[20].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] - 17824u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0011CEC4; } }
L_0011CC28:
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0011CC60; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], c.r[16].w[0] + 8u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_0011CC88; } }
    c.budget -= 1;
L_0011CC60:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[21].w[0]);  if (t) { goto L_0011CD40; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011CD44; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[16].w[0] + 8u);
    c.budget -= 5;
L_0011CC88:
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], c.r[21].w[0] - 4u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011CD30; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011CD08; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    set32(c.r[8], c.r[17].w[0] + 8u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0011CD08; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[17].w[0] + 16u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + 24u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0011CD08; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[17].w[0] + 24u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + 32u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
L_0011CD08:
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0011CE60; } }
L_0011CD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0011CD38u) [[unlikely]] return; }
L_0011CD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0011CE60; } }
L_0011CD40:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0011CD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD4Cu); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 171u, depth + 1u); else { c.pc = 0x0011A0C0u; return; } if (c.pc != 0x0011CD4Cu) [[unlikely]] return; }
L_0011CD4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 4u)));  goto L_0011CD68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD60u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0011AC90u; return; } if (c.pc != 0x0011CD60u) [[unlikely]] return; }
L_0011CD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011CED0; } }
L_0011CD68:
    set32(c.r[2], 0u - 2u);
    set32(c.r[16], c.r[18].w[0] - 8u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[21].w[0] - 4u);  if (t) { goto L_0011CDA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], 0u - 4u);
    set32(c.r[18], c.r[16].w[0] + 8u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_0011CE60; } }
    c.budget -= 1;
L_0011CDA0:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011CE40; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011CE18; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    set32(c.r[7], c.r[17].w[0] + 8u);
    set32(c.r[5], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0011CE18; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[17].w[0] + 16u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0011CE18; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[17].w[0] + 24u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 24u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
L_0011CE18:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0011CE48; } }
    c.budget -= 1;
L_0011CE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CE48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0011CE48u) [[unlikely]] return; }
L_0011CE48:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CE54u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 51u, depth + 1u); else { c.pc = 0x001187C0u; return; } if (c.pc != 0x0011CE54u) [[unlikely]] return; }
L_0011CE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_0011CEC4; } }
    c.budget -= 1;
L_0011CE60:
    set32(c.r[4], c.r[23].w[0] - c.r[22].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] & 1ull;  if (t) { goto L_0011CEA8; } }
    set32(c.r[5], c.r[16].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    c.r[3].d[0] = c.r[4].d[0] | 1ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CEA0u); st32((c.r[6].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 51u, depth + 1u); else { c.pc = 0x001187C0u; return; } if (c.pc != 0x0011CEA0u) [[unlikely]] return; }
L_0011CEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_0011CEC4; } }
L_0011CEA8:
    set32(c.r[4], c.r[16].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[23].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
L_0011CEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CECCu);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0011AC90u; return; } if (c.pc != 0x0011CECCu) [[unlikely]] return; }
L_0011CECC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0011CED0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011CF00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 9u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011CF28; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117F40u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 260u, depth); }
L_0011CF28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011CF38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 56u)));  goto L_0011CF68; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17840u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
L_0011CF68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0011CF7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CF78u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 28u, depth + 1u); else { c.pc = 0x001183A0u; return; } if (c.pc != 0x0011CF78u) [[unlikely]] return; }
L_0011CF78:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0011CF7C:
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0011D0A4; } }
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  goto L_0011CFE8; }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011D0A4; } }
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] | 4ull;  goto L_0011CFDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CFB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 260u, depth + 1u); else { c.pc = 0x00117F40u; return; } if (c.pc != 0x0011CFB8u) [[unlikely]] return; }
L_0011CFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011D0A4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] | 4ull;
    c.budget -= 7;
L_0011CFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0011D020; } }
    c.budget -= 1;
L_0011CFE8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 64u);  if (t) { goto L_0011D020; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_0011D004; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D000u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0006(c, 51u, depth + 1u); else { c.pc = 0x001187C0u; return; } if (c.pc != 0x0011D000u) [[unlikely]] return; }
L_0011D000:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_0011D004:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0011D020; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0011D0A4; } }
L_0011D020:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0011D038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 144u, depth + 1u); else { c.pc = 0x00119A40u; return; } if (c.pc != 0x0011D034u) [[unlikely]] return; }
L_0011D034:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0011D038:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);  if (t) { goto L_0011D050; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D050u); set32(c.r[5], c.r[5].w[0] - 12544u);  if (depth < kMaxDepth) unit_0006(c, 115u, depth + 1u); else { c.pc = 0x00119620u; return; } if (c.pc != 0x0011D050u) [[unlikely]] return; }
L_0011D050:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D068u); set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011D068u) [[unlikely]] return; }
L_0011D068:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 57343ull;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0011D0A4; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] | 64ull;  goto L_0011D098; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] | 32ull;  if (t) { goto L_0011D09C; } }
    c.budget -= 1;
L_0011D098:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0011D09C:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0011D0A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011D0B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 25776u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D0E0u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 138u, depth + 1u); else { c.pc = 0x001049E0u; return; } if (c.pc != 0x0011D0E0u) [[unlikely]] return; }
L_0011D0E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0011D100; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_0011D0FC; }
L_0011D0FC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0011D100:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0011D170; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D134u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 171u, depth + 1u); else { c.pc = 0x0011A0C0u; return; } if (c.pc != 0x0011D134u) [[unlikely]] return; }
L_0011D134:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 468u), c.r[3].w[0]);  if (t) { goto L_0011D170; } }
    set32(c.r[2], c.r[3].w[0] + 124u);
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
L_0011D150:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D150u | kUnwind; return; } goto L_0011D150; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011D170:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011D180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011D1B8; } }
    set32(c.r[3], 0u + 22u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0011D1E8; } }
L_0011D1B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0011D1DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1CCu);  if (depth < kMaxDepth) unit_0007(c, 76u, depth + 1u); else { c.pc = 0x0011D110u; return; } if (c.pc != 0x0011D1CCu) [[unlikely]] return; }
L_0011D1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011D1E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0011D1DC:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.budget -= 3;
L_0011D1E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011D230; } }
    set32(c.r[3], 0u + 22u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0011D2C4; } }
L_0011D230:
    set32(c.r[3], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0011D254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D244u);  if (depth < kMaxDepth) unit_0007(c, 76u, depth + 1u); else { c.pc = 0x0011D110u; return; } if (c.pc != 0x0011D244u) [[unlikely]] return; }
L_0011D244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011D2C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0011D254:
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0011D290; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D26Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 90u, depth + 1u); else { c.pc = 0x0011D458u; return; } if (c.pc != 0x0011D26Cu) [[unlikely]] return; }
L_0011D26C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0011D3F8; }
L_0011D290:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011D2C4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[4].w[0]), 0u);  goto L_0011D2B8; }
    set32(c.r[3], 0u + 22u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0011D2C4; } }
    c.budget -= 1;
L_0011D2B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D2C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011D2C0u) [[unlikely]] return; }
L_0011D2C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011D2C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D2D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011D35C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0011D324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D310u);  if (depth < kMaxDepth) unit_0007(c, 76u, depth + 1u); else { c.pc = 0x0011D110u; return; } if (c.pc != 0x0011D310u) [[unlikely]] return; }
L_0011D310:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 468u)));  goto L_0011D320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011D35C; } }
L_0011D320:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0011D324:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011D35C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0011D35C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0011D35C; } }
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011D358u) [[unlikely]] return; }
L_0011D358:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011D35C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 17840u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D200u | kUnwind; return; } goto L_0011D200; }
L_0011D3F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 25776u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D424u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 145u, depth + 1u); else { c.pc = 0x00104AB8u; return; } if (c.pc != 0x0011D424u) [[unlikely]] return; }
L_0011D424:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0011D444; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_0011D440; }
L_0011D440:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0011D444:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D458:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104AB0u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 144u, depth); }
L_0011D4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[13], ld32((c.r[2].w[0] - 17840u)));
    set32(c.r[2], 0u + 520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[12]);
    st32((c.r[29].w[0] + 116u), c.f[13]);
    st32((c.r[29].w[0] + 120u), c.f[14]);
    st32((c.r[29].w[0] + 124u), c.f[15]);
    st32((c.r[29].w[0] + 128u), c.f[16]);
    st32((c.r[29].w[0] + 132u), c.f[17]);
    st32((c.r[29].w[0] + 136u), c.f[18]);
    st32((c.r[29].w[0] + 140u), c.f[19]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[13].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D574u); st32((c.r[29].w[0]), c.r[12].w[0]);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00120B50u; return; } if (c.pc != 0x0011D574u) [[unlikely]] return; }
L_0011D574:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0011D588:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0011D590:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[12]);
    st32((c.r[29].w[0] + 116u), c.f[13]);
    st32((c.r[29].w[0] + 120u), c.f[14]);
    st32((c.r[29].w[0] + 124u), c.f[15]);
    st32((c.r[29].w[0] + 128u), c.f[16]);
    st32((c.r[29].w[0] + 132u), c.f[17]);
    st32((c.r[29].w[0] + 136u), c.f[18]);
    st32((c.r[29].w[0] + 140u), c.f[19]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D5F0u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0011D5F0u) [[unlikely]] return; }
L_0011D5F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[7], ld32((c.r[4].w[0] - 17840u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D628u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0008(c, 224u, depth + 1u); else { c.pc = 0x001224D8u; return; } if (c.pc != 0x0011D628u) [[unlikely]] return; }
L_0011D628:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0011D638:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D65Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));  if (depth < kMaxDepth) unit_0007(c, 49u, depth + 1u); else { c.pc = 0x0011C898u; return; } if (c.pc != 0x0011D65Cu) [[unlikely]] return; }
L_0011D65C:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011D680; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0011D68C; } }
    c.budget -= 1;
L_0011D680:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 61439ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0011D68C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011D6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0011D6E0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[7], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D6E0u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));  if (depth < kMaxDepth) unit_0006(c, 142u, depth + 1u); else { c.pc = 0x001199E0u; return; } if (c.pc != 0x0011D6E0u) [[unlikely]] return; }
L_0011D6E0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 61439ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D700u); st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0008(c, 325u, depth + 1u); else { c.pc = 0x00123318u; return; } if (c.pc != 0x0011D700u) [[unlikely]] return; }
L_0011D700:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D744u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));  if (depth < kMaxDepth) unit_0006(c, 142u, depth + 1u); else { c.pc = 0x001199E0u; return; } if (c.pc != 0x0011D744u) [[unlikely]] return; }
L_0011D744:
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));  if (t) { goto L_0011D768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 61439ull;  if (t) { goto L_0011D770; } }
    c.budget -= 1;
L_0011D768:
    st32((c.r[16].w[0] + 80u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 2;
L_0011D770:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011D788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116880u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 118u, depth); }
L_0011D7A8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.r[9].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011D840; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[6], c.r[7].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10177u));
    set32(c.r[4], c.r[5].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[7].d[0];
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    c.budget -= 15;
    if (c.r[6].d[0] != c.r[4].d[0]) { c.r[5].d[0] = ld8((c.r[8].w[0]));  goto L_0011D844; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0011D7F8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 32u);  if (t) { goto L_0011D840; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10177u));
    set32(c.r[4], c.r[5].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[7].d[0];
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    c.budget -= 14;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D7F8u | kUnwind; return; } goto L_0011D7F8; }
L_0011D840:
    c.r[5].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 1;
L_0011D844:
    c.r[2].d[0] = ld8((c.r[9].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10177u));
    set32(c.r[7], c.r[5].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10177u));
    set32(c.r[6], c.r[2].w[0] + 32u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_0011D880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0011D974; } }
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[3].d[0] = c.r[3].d[0] | 257ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 257ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 257ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.budget -= 9;
L_0011D8BC:
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = ld64((c.r[16].w[0]));  if (t) { goto L_0011D930; } }
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    mmi::pcpyld(c.r[7], c.r[3], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[4], c.r[4]);
    mmi::psubb(c.r[3], c.r[2], c.r[7]);
    mmi::pnor(c.r[2], c.r[0], c.r[2]);
    mmi::pand(c.r[3], c.r[3], c.r[2]);
    mmi::pand(c.r[3], c.r[3], c.r[8]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[3]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011D974; } }
    set32(c.r[6], c.r[4].w[0] + 16u);
    c.budget -= 1;
L_0011D904:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[7]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[8]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D904u | kUnwind; return; } goto L_0011D904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011D974; } }
L_0011D930:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] - c.r[3].d[0];
    c.r[2].d[0] = ~(0ull | c.r[6].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011D974; } }
    set32(c.r[6], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_0011D954:
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D954u | kUnwind; return; } goto L_0011D954; }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0011D974:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D974u | kUnwind; return; } goto L_0011D974; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D998u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0011D998u) [[unlikely]] return; }
L_0011D998:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D9B0:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0011DB20; } }
    c.r[3].d[0] = c.r[5].d[0] << 8;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[10].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.r[2].d[0] = c.r[10].d[0] << 16;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[2].d[0] = c.r[2].d[0] + c.r[10].d[0];
    c.r[10].d[0] = c.r[2].d[0] << 32;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[2].d[0] + c.r[10].d[0];  if (t) { goto L_0011DA98; } }
L_0011DA0C:
    ld128((c.r[4].w[0]) & ~15u, c.r[9]);
    mmi::pcpyld(c.r[10], c.r[6], c.r[6]);
    mmi::pnor(c.r[3], c.r[0], c.r[9]);
    mmi::psubb(c.r[2], c.r[9], c.r[10]);
    mmi::pcpyld(c.r[6], c.r[8], c.r[8]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[7], c.r[7]);
    mmi::pand(c.r[2], c.r[2], c.r[6]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[7]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0011DB24; }
    mmi::pxor(c.r[2], c.r[9], c.r[8]);
    mmi::psubb(c.r[3], c.r[2], c.r[10]);
    mmi::pnor(c.r[2], c.r[0], c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    mmi::pand(c.r[3], c.r[3], c.r[2]);
    mmi::pand(c.r[3], c.r[3], c.r[6]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    mmi::pcpyud(c.r[2], c.r[3], c.r[5]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 21;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DA0Cu | kUnwind; return; } goto L_0011DA0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_0011DB24; } }
L_0011DA98:
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[9].d[0]);
    c.r[2].d[0] = c.r[9].d[0] - c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0011DB24; }
    c.r[2].d[0] = c.r[9].d[0] ^ c.r[7].d[0];
    c.r[3].d[0] = c.r[2].d[0] - c.r[6].d[0];
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0011DB24; }
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 2;
L_0011DAD8:
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = c.r[6].d[0] - c.r[9].d[0];
    c.r[3].d[0] = ~(0ull | c.r[6].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] ^ c.r[7].d[0];  if (t) { goto L_0011DB20; } }
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DAD8u | kUnwind; return; } goto L_0011DAD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_0011DB24; } }
L_0011DB14:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0]));  goto L_0011DB30; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0011DB20:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_0011DB24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DB14u | kUnwind; return; } goto L_0011DB14; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_0011DB30:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_0011DB40:
    c.r[8].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[8].d[0] & 7ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_0011DC70; }
    c.r[9].d[0] = c.r[8].d[0] & 15ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.budget -= 15;
    { const bool t = c.r[9].d[0] != 0ull; c.r[2].d[0] = ld64((c.r[5].w[0]));  if (t) { goto L_0011DC04; } }
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[8], c.r[7], c.r[7]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    mmi::pcpyld(c.r[10], c.r[6], c.r[6]);
    mmi::psubw(c.r[7], c.r[2], c.r[3]);
    mmi::pcpyud(c.r[6], c.r[7], c.r[4]);
    c.r[3].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_0011DC70; }
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    c.budget -= 2;
L_0011DBB8:
    mmi::psubb(c.r[2], c.r[2], c.r[8]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[10]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[4]);
    c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { goto L_0011DBDC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0011DBDC:
    set32(c.r[5], c.r[5].w[0] + 16u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    mmi::psubw(c.r[7], c.r[2], c.r[3]);
    mmi::pcpyud(c.r[6], c.r[7], c.r[4]);
    c.r[9].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 8;
    if (c.r[9].d[0] == 0ull) { mmi::pnor(c.r[3], c.r[0], c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DBB8u | kUnwind; return; } goto L_0011DBB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_0011DC70; } }
L_0011DC04:
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_0011DC70; }
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.r[8].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 2;
L_0011DC18:
    c.r[2].d[0] = c.r[2].d[0] - c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { goto L_0011DC34; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0011DC34:
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[8].d[0] = ~(0ull | c.r[2].d[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC18u | kUnwind; return; } goto L_0011DC18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_0011DC70; } }
L_0011DC50:
    set32(c.r[2], c.r[3].w[0] << 24);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0]));  goto L_0011DC78; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
L_0011DC70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC50u | kUnwind; return; } goto L_0011DC50; } }
L_0011DC78:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_0011DC88:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[8].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011DD78; } }
    c.r[2].d[0] = c.r[8].d[0] & 15ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.budget -= 15;
    if (c.r[2].d[0] != 0ull) { c.r[10].d[0] = ld64((c.r[5].w[0]));  goto L_0011DD38; }
    mmi::pcpyld(c.r[10], c.r[9], c.r[9]);
    ld128((c.r[5].w[0]) & ~15u, c.r[9]);
    mmi::pcpyld(c.r[8], c.r[4], c.r[4]);
    mmi::psubb(c.r[2], c.r[9], c.r[10]);
    mmi::pnor(c.r[3], c.r[0], c.r[9]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[8]);
    mmi::pcpyud(c.r[4], c.r[2], c.r[9]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011DD74; } }
L_0011DD04:
    st128((c.r[6].w[0]) & ~15u, c.r[9]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    ld128((c.r[5].w[0]) & ~15u, c.r[9]);
    mmi::psubb(c.r[2], c.r[9], c.r[10]);
    mmi::pnor(c.r[3], c.r[0], c.r[9]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[8]);
    mmi::pcpyud(c.r[4], c.r[2], c.r[9]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DD04u | kUnwind; return; } goto L_0011DD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011DD78; } }
L_0011DD38:
    c.r[2].d[0] = c.r[10].d[0] - c.r[9].d[0];
    c.r[3].d[0] = ~(0ull | c.r[10].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011DD74; } }
L_0011DD50:
    st64((c.r[6].w[0]), c.r[10].d[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[10].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = ~(0ull | c.r[10].d[0]);
    c.r[3].d[0] = c.r[10].d[0] - c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DD50u | kUnwind; return; } goto L_0011DD50; } }
L_0011DD74:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0011DD78:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DD78u | kUnwind; return; } goto L_0011DD78; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_0011DDA0:
    c.r[8].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011DE14; } }
L_0011DDB0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = ld8((c.r[6].w[0]));  if (t) { goto L_0011DE04; } }
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[8].w[0] << 24);  if (t) { goto L_0011DDFC; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0011DDD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = ld8((c.r[6].w[0]));  if (t) { goto L_0011DE04; } }
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DDD8u | kUnwind; return; } goto L_0011DDD8; }
L_0011DDFC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0011DE14; } }
L_0011DE04:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DDB0u | kUnwind; return; } goto L_0011DDB0; } }
L_0011DE14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] - c.r[9].w[0]);  c.pc = t; return; }
L_0011DE20:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011DF34; } }
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011DEC4; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[8], c.r[2], c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    mmi::psubb(c.r[2], c.r[3], c.r[8]);
    mmi::pnor(c.r[3], c.r[0], c.r[3]);
    mmi::pcpyld(c.r[9], c.r[4], c.r[4]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[9]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[8]);
    c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 17;
    if (c.r[6].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0011DF34; }
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 1;
L_0011DE98:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[8]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[4], c.r[2], c.r[9]);
    mmi::pcpyud(c.r[3], c.r[4], c.r[6]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DE98u | kUnwind; return; } goto L_0011DE98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011DF34; } }
L_0011DEC4:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0011DF34; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
L_0011DF14:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF14u | kUnwind; return; } goto L_0011DF14; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0011DF34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF34u | kUnwind; return; } goto L_0011DF34; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] - c.r[7].w[0]);  c.pc = t; return; }
L_0011DF58:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].d[0] & 7ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_0011E074; }
    c.r[3].d[0] = c.r[8].d[0] & 15ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[8].w[0]));  goto L_0011E004; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    ld128((c.r[8].w[0]) & ~15u, c.r[2]);
    mmi::pcpyld(c.r[9], c.r[7], c.r[7]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    mmi::psubb(c.r[3], c.r[2], c.r[9]);
    mmi::pnor(c.r[2], c.r[0], c.r[2]);
    mmi::pcpyld(c.r[10], c.r[4], c.r[4]);
    mmi::pand(c.r[3], c.r[3], c.r[2]);
    mmi::pand(c.r[3], c.r[3], c.r[10]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[4]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0011E06C; } }
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 2;
L_0011DFD8:
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[9]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[10]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DFD8u | kUnwind; return; } goto L_0011DFD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 16u);  if (t) { goto L_0011E06C; } }
L_0011E004:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[3].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0011E06C; } }
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 1;
L_0011E050:
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E050u | kUnwind; return; } goto L_0011E050; }
L_0011E06C:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 2;
L_0011E074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011E09C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0011E080:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E080u | kUnwind; return; } goto L_0011E080; }
L_0011E09C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0011E0FC; } }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0011E0FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 3;
L_0011E0D0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  goto L_0011E0D8; }
L_0011E0D8:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0011E0FC; } }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E0D0u | kUnwind; return; } goto L_0011E0D0; } }
L_0011E0FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; return; }
L_0011E108:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_0011E118; } }
L_0011E110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0011E118:
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011E274; } }
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.r[7].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011E1F0; } }
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[10], c.r[9], c.r[9]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    mmi::psubw(c.r[3], c.r[3], c.r[2]);
    mmi::pcpyld(c.r[9], c.r[8], c.r[8]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[4]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011E274; } }
    set32(c.r[6], c.r[6].w[0] - 16u);
    c.budget -= 1;
L_0011E194:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E110u | kUnwind; return; } goto L_0011E110; } }
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[10]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[3], c.r[2], c.r[9]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E110u | kUnwind; return; } goto L_0011E110; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 16u);  if (t) { goto L_0011E268; } }
    ld128((c.r[8].w[0]) & ~15u, c.r[2]);
    mmi::psubw(c.r[3], c.r[3], c.r[2]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E194u | kUnwind; return; } goto L_0011E194; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011E26C; } }
L_0011E1F0:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011E268; } }
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011E274; } }
    set32(c.r[6], c.r[6].w[0] - 8u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.budget -= 7;
L_0011E228:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E110u | kUnwind; return; } goto L_0011E110; } }
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E110u | kUnwind; return; } goto L_0011E110; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { goto L_0011E268; } }
    c.r[3].d[0] = ld64((c.r[7].w[0]));
    c.r[2].d[0] = ld64((c.r[8].w[0]));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E228u | kUnwind; return; } goto L_0011E228; }
L_0011E268:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0011E26C:
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0011E274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011E2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_0011E2A4; } }
    c.budget -= 1;
L_0011E288:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E110u | kUnwind; return; } goto L_0011E110; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E110u | kUnwind; return; } goto L_0011E110; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
L_0011E2A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = ld8((c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E288u | kUnwind; return; } goto L_0011E288; } }
L_0011E2B0:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_0011E2C0:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[10], 0u + 16u);
    c.r[2].d[0] = c.r[7].d[0] & 7ull;
    set32(c.r[9], 0u + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[7].d[0] & 15ull;  if (t) { goto L_0011E428; } }
    if (c.r[2].d[0] == 0) c.r[9].d[0] = c.r[10].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] < c.r[9].d[0] ? 1ull : 0ull;  if (t) { goto L_0011E394; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E428; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[9], c.r[7], c.r[7]);
    mmi::pnor(c.r[3], c.r[0], c.r[3]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[7].d[0] = c.r[7].d[0] | 32896ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 32896ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 32896ull;
    mmi::psubb(c.r[2], c.r[3], c.r[9]);
    mmi::pcpyld(c.r[10], c.r[7], c.r[7]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[10]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[4]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0011E424; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { goto L_0011E424; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[9]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[10]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[5].w[0]) & ~15u, c.r[3]);  goto L_0011E3F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011E428; } }
L_0011E394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E428; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] - c.r[9].d[0];
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0011E424; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 2;
L_0011E3F0:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { goto L_0011E424; } }
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E3F0u | kUnwind; return; } goto L_0011E3F0; }
L_0011E424:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0011E428:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011E474; } }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E428u | kUnwind; return; } goto L_0011E428; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011E474; } }
L_0011E458:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E458u | kUnwind; return; } goto L_0011E458; } }
L_0011E474:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; return; }
L_0011E480:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0011E4B8; } }
L_0011E498:
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E498u | kUnwind; return; } goto L_0011E498; } }
L_0011E4B8:
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];  c.pc = t; return; }
L_0011E4D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (t) { goto L_0011E4F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_0011E4E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0011E4F0:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E4E8u | kUnwind; return; } goto L_0011E4E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0011E540; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0011E518:
    set32(c.r[2], c.r[5].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E4E8u | kUnwind; return; } goto L_0011E4E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E518u | kUnwind; return; } goto L_0011E518; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0011E540:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E4F0u | kUnwind; return; } goto L_0011E4F0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0011E558:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 18;
L_0011E5A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(46ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0011E5F0; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 10912u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0011C000u < 16384u) { entry = entries_0007[(t - 0x0011C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011E5C8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0011E5D0:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0011E5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011F410; } }
L_0011E5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E5A0u | kUnwind; return; } goto L_0011E5A0; } }
L_0011E5F0:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[3], 0u + 48u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] << 24);  if (t) { goto L_0011E62C; } }
    set32(c.r[10], 0u + 1u);
    c.budget -= 1;
L_0011E608:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = ld8((c.r[22].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E608u | kUnwind; return; } goto L_0011E608; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 24);  if (t) { goto L_0011F410; } }
L_0011E62C:
    st32((c.r[29].w[0] + 24u), c.r[22].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0011E6A4; } }
    c.budget -= 1;
L_0011E650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_0011E678; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 48u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0011E694; } }
L_0011E678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0011E698; }
    c.r[2].d[0] = c.r[17].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-48ll);
    c.budget -= 5;
L_0011E694:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0011E698:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
L_0011E6A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 46u);  if (t) { goto L_0011E6BC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E650u | kUnwind; return; } goto L_0011E650; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 1;
L_0011E6BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[23].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011E804; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));  if (t) { goto L_0011E720; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] - 49u);  goto L_0011E700; }
    c.budget -= 1;
L_0011E6E0:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E6E0u | kUnwind; return; } goto L_0011E6E0; } }
    set32(c.r[2], c.r[4].w[0] - 49u);
    c.budget -= 1;
L_0011E700:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 101u);  if (t) { goto L_0011E808; } }
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] - 48u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[22].w[0]);  if (t) { goto L_0011E730; } }
L_0011E720:
    set32(c.r[6], c.r[4].w[0] - 48u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 101u);  if (t) { goto L_0011E808; } }
L_0011E730:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0011E7E8; } }
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);  if (t) { goto L_0011E79C; } }
    set32(c.r[4], c.r[7].w[0] - 1u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0011E750:
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0011E778; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0011E790; } }
    c.budget -= 1;
L_0011E778:
    c.r[2].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_0011E794; }
    c.r[2].d[0] = c.r[17].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    c.r[17].d[0] = c.r[2].d[0] << 1;
    c.budget -= 3;
L_0011E790:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_0011E794:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E750u | kUnwind; return; } goto L_0011E750; } }
L_0011E79C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0011E7C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0011E7E4; } }
L_0011E7C8:
    c.r[2].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0011E7E8; } }
    c.r[2].d[0] = c.r[17].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[17].d[0] = c.r[6].d[0] + c.r[2].d[0];
    c.budget -= 4;
L_0011E7E4:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011E7E8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], c.r[4].w[0] - 48u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E730u | kUnwind; return; } goto L_0011E730; } }
L_0011E804:
    set32(c.r[2], 0u + 101u);
    c.budget -= 1;
L_0011E808:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 16u), 0ull);  if (t) { goto L_0011E81C; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0011E934; } }
L_0011E81C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_0011E838; }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_0011E838; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { c.r[22].d[0] = c.r[5].d[0] + 0ull;  goto L_0011F410; }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0011E838:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], 0u + 43u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0011E85C; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] - 48u);  if (t) { goto L_0011E868; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 1;
L_0011E85C:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], c.r[4].w[0] - 48u);
    c.budget -= 3;
L_0011E868:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[22].d[0] = c.r[5].d[0] + 0ull;  goto L_0011E934; }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] - 49u);  goto L_0011E8A8; }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0011E888:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E888u | kUnwind; return; } goto L_0011E888; }
    set32(c.r[2], c.r[4].w[0] - 49u);
    c.budget -= 1;
L_0011E8A8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st64((c.r[29].w[0] + 16u), 0ull);  goto L_0011E934; }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0011E910; }
L_0011E8D4:
    c.r[2].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0011E910; }
    c.r[3].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-48ll);
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E8D4u | kUnwind; return; } goto L_0011E8D4; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0011E910:
    set32(c.r[2], c.r[22].w[0] - c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00980000u);
    c.r[3].d[0] = c.r[3].d[0] | 38527ull;
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[9].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[4].d[0]);  if (t) { goto L_0011E934; } }
    c.r[4].d[0] = 0ull - c.r[4].d[0];
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    c.budget -= 2;
L_0011E934:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0011E958; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0011F414; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_0011F414; } }
L_0011E94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011F410; } }
    c.budget -= 1;
L_0011E958:
    set32(c.r[20], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    if (c.r[23].d[0] == 0) c.r[23].d[0] = c.r[18].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[8].d[0];
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[18].d[0];
    c.r[3].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E988u); st32((c.r[29].w[0] + 72u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00116310u; return; } if (c.pc != 0x0011E988u) [[unlikely]] return; }
L_0011E988:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0011E9AC; } }
    c.r[5].d[0] = 0ull | 33760ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E9A8u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011E9A8u) [[unlikely]] return; }
L_0011E9A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011E9AC:
    c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);  if (t) { goto L_0011EA2C; } }
    set32(c.r[2], c.r[20].w[0] << 3);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 10560u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E9D8u);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011E9D8u) [[unlikely]] return; }
L_0011E9D8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] < 0) { c.r[2].d[0] = c.r[17].d[0] >> 1;  goto L_0011E9F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E9ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 11u, depth + 1u); else { c.pc = 0x00115350u; return; } if (c.pc != 0x0011E9ECu) [[unlikely]] return; }
L_0011E9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EA14; } }
    c.budget -= 1;
L_0011E9F8:
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA04u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0005(c, 11u, depth + 1u); else { c.pc = 0x00115350u; return; } if (c.pc != 0x0011EA04u) [[unlikely]] return; }
L_0011EA04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA14u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011EA14u) [[unlikely]] return; }
L_0011EA14:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA24u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011EA24u) [[unlikely]] return; }
L_0011EA24:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);
    c.budget -= 2;
L_0011EA2C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[29].w[0] + 56u), 0u);  if (t) { goto L_0011EB88; } }
    c.r[4].d[0] = c.r[16].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { goto L_0011EA60; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 10632u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA5Cu);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EA5Cu) [[unlikely]] return; }
L_0011EA5C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011EA60:
    set32(c.r[2], 0u - 16u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 309ll ? 1ull : 0ull;  if (t) { goto L_0011ECF0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  goto L_0011EAA0; }
    set32(c.r[2], 0u + 34u);
    c.budget -= 1;
L_0011EA7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[19].d[0] = ld64((c.r[3].w[0] + 8984u));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0011F414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F3D8; } }
    c.budget -= 1;
L_0011EAA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0011ECF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0011EAF0; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[17], c.r[21].w[0] + 10832u);
    c.budget -= 2;
L_0011EAB8:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_0011EAD8; } }
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EAD4u);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EAD4u) [[unlikely]] return; }
L_0011EAD4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011EAD8:
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EAB8u | kUnwind; return; } goto L_0011EAB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 10832u);  if (t) { goto L_0011EAF8; } }
L_0011EAF0:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[21].w[0] + 10832u);
    c.budget -= 2;
L_0011EAF8:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFCB00000u);
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[4].d[0] = ld64((c.r[3].w[0]));
    c.r[19].d[0] = c.r[19].d[0] & c.r[16].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EB28u); c.r[5].d[0] = c.r[19].d[0] | c.r[5].d[0];  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EB28u) [[unlikely]] return; }
L_0011EB28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7CA00000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[17].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EA7Cu | kUnwind; return; } goto L_0011EA7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7C900000u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[19].d[0] & c.r[16].d[0];  if (t) { goto L_0011EB70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[16].d[0];  if (t) { goto L_0011ECF0; } }
L_0011EB70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];  if (t) { goto L_0011ECF0; } }
    c.budget -= 1;
L_0011EB88:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[5], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_0011ECF4; } }
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { goto L_0011EBBC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 10632u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EBB8u);  if (depth < kMaxDepth) unit_0005(c, 75u, depth + 1u); else { c.pc = 0x00116060u; return; } if (c.pc != 0x0011EBB8u) [[unlikely]] return; }
L_0011EBB8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011EBBC:
    set32(c.r[2], 0u - 16u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (t) { goto L_0011ECF0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 34u);  if (t) { goto L_0011ECAC; } }
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0011EC28; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[17], c.r[21].w[0] + 10872u);
    c.budget -= 3;
L_0011EBF0:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_0011EC10; } }
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC0Cu);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EC0Cu) [[unlikely]] return; }
L_0011EC0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011EC10:
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EBF0u | kUnwind; return; } goto L_0011EBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[21].w[0] + 10872u);  if (t) { goto L_0011EC30; } }
L_0011EC28:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[21].w[0] + 10872u);
    c.budget -= 2;
L_0011EC30:
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[3].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC54u);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EC54u) [[unlikely]] return; }
L_0011EC54:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC68u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011EC68u) [[unlikely]] return; }
L_0011EC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_0011ECF4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC80u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011EC80u) [[unlikely]] return; }
L_0011EC80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC90u);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EC90u) [[unlikely]] return; }
L_0011EC90:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ECA0u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011ECA0u) [[unlikely]] return; }
L_0011ECA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0011ECF0; } }
L_0011ECA8:
    set32(c.r[2], 0u + 34u);
    c.budget -= 1;
L_0011ECAC:
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0011F414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F3D8; } }
L_0011ECC8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ECD4u);  if (depth < kMaxDepth) unit_0006(c, 260u, depth + 1u); else { c.pc = 0x0011B7C8u; return; } if (c.pc != 0x0011ECD4u) [[unlikely]] return; }
L_0011ECD4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ECE4u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011ECE4u) [[unlikely]] return; }
L_0011ECE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0011F3D4; } }
    c.budget -= 1;
L_0011ECF0:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_0011ECF4:
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED08u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 218u, depth + 1u); else { c.pc = 0x0011AEC0u; return; } if (c.pc != 0x0011ED08u) [[unlikely]] return; }
L_0011ED08:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0011F1FC; } }
L_0011ED18:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED24u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 244u, depth + 1u); else { c.pc = 0x0011B478u; return; } if (c.pc != 0x0011ED24u) [[unlikely]] return; }
L_0011ED24:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED34u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 251u, depth + 1u); else { c.pc = 0x0011B5D0u; return; } if (c.pc != 0x0011ED34u) [[unlikely]] return; }
L_0011ED34:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EDB4; } }
    c.budget -= 1;
L_0011ED48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_0011EE58; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0011EDA0; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { goto L_0011EDF8; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];  if (t) { goto L_0011F3D4; } }
L_0011EDA0:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011EDF8; } }
L_0011EDB4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] >> 12;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[19].d[0] = c.r[19].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[5].d[0];  if (t) { goto L_0011F3D4; } }
    c.budget -= 1;
L_0011EDF8:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F3D8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011ECC8u | kUnwind; return; } goto L_0011ECC8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE20u);  if (depth < kMaxDepth) unit_0006(c, 260u, depth + 1u); else { c.pc = 0x0011B7C8u; return; } if (c.pc != 0x0011EE20u) [[unlikely]] return; }
L_0011EE20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE30u);  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x0011EE30u) [[unlikely]] return; }
L_0011EE30:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE44u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011EE44u) [[unlikely]] return; }
L_0011EE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011ECA8u | kUnwind; return; } goto L_0011ECA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F3D8; } }
    c.budget -= 1;
L_0011EE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE60u); set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_0006(c, 268u, depth + 1u); else { c.pc = 0x0011BBB8u; return; } if (c.pc != 0x0011EE60u) [[unlikely]] return; }
L_0011EE60:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE78u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011EE78u) [[unlikely]] return; }
L_0011EE78:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0011EF38; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0011EEA0; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EF88; } }
    c.budget -= 1;
L_0011EEA0:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011EED8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011ECACu | kUnwind; return; } goto L_0011ECAC; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[17].d[0] = 0ull | 49136ull;
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EF88; } }
    c.budget -= 1;
L_0011EED8:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EEECu);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011EEECu) [[unlikely]] return; }
L_0011EEEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0011EF08; } }
    c.r[16].d[0] = 0ull | 65408ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EF20; } }
    c.budget -= 1;
L_0011EF08:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF1Cu);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EF1Cu) [[unlikely]] return; }
L_0011EF1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011EF20:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF30u);  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x0011EF30u) [[unlikely]] return; }
L_0011EF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EF84; } }
L_0011EF38:
    c.r[18].d[0] = 0ull | 65408ull;
    c.r[18].d[0] = c.r[18].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF50u);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EF50u) [[unlikely]] return; }
L_0011EF50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0011EF74; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF70u);  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x0011EF70u) [[unlikely]] return; }
L_0011EF70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011EF74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF84u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011EF84u) [[unlikely]] return; }
L_0011EF84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011EF88:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FE00000u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_0011F060; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFCB00000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[18].d[0] >> 32;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] & c.r[18].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFCCu);  if (depth < kMaxDepth) unit_0006(c, 260u, depth + 1u); else { c.pc = 0x0011B7C8u; return; } if (c.pc != 0x0011EFCCu) [[unlikely]] return; }
L_0011EFCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFDCu);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011EFDCu) [[unlikely]] return; }
L_0011EFDC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFECu);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011EFECu) [[unlikely]] return; }
L_0011EFEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7C9F0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].d[0] = c.r[4].d[0] & c.r[23].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[19].d[0] & c.r[18].d[0];  if (t) { goto L_0011F048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 8;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EA7Cu | kUnwind; return; } goto L_0011EA7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[18].d[0];  if (t) { goto L_0011F1CC; } }
    c.budget -= 1;
L_0011F048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];  if (t) { goto L_0011F108; } }
    c.budget -= 1;
L_0011F060:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03400000u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011F0D8; } }
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F088u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011F088u) [[unlikely]] return; }
L_0011F088:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0011F0D8; } }
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0A4u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011F0A4u) [[unlikely]] return; }
L_0011F0A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0B0u);  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x001163C8u; return; } if (c.pc != 0x0011F0B0u) [[unlikely]] return; }
L_0011F0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00116310u; return; } if (c.pc != 0x0011F0B8u) [[unlikely]] return; }
L_0011F0B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0011F0D8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0D4u);  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x0011F0D4u) [[unlikely]] return; }
L_0011F0D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011F0D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0E4u);  if (depth < kMaxDepth) unit_0006(c, 260u, depth + 1u); else { c.pc = 0x0011B7C8u; return; } if (c.pc != 0x0011F0E4u) [[unlikely]] return; }
L_0011F0E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0F4u);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0011F0F4u) [[unlikely]] return; }
L_0011F0F4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F104u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x0011F104u) [[unlikely]] return; }
L_0011F104:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011F108:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[17].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F1D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F134u);  if (depth < kMaxDepth) unit_0005(c, 38u, depth + 1u); else { c.pc = 0x001155F8u; return; } if (c.pc != 0x0011F134u) [[unlikely]] return; }
L_0011F134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F13Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 11u, depth + 1u); else { c.pc = 0x00115350u; return; } if (c.pc != 0x0011F13Cu) [[unlikely]] return; }
L_0011F13C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F14Cu);  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x0011F14Cu) [[unlikely]] return; }
L_0011F14C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0011F16C; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F1B0; } }
L_0011F16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 11096u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F180u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011F180u) [[unlikely]] return; }
L_0011F180:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F3D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 11104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F19Cu);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011F19Cu) [[unlikely]] return; }
L_0011F19C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F1D0; } }
    c.budget -= 1;
L_0011F1B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 11112u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F1C4u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0011F1C4u) [[unlikely]] return; }
L_0011F1C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F3D8; } }
L_0011F1CC:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0011F1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F1D8u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F1D8u) [[unlikely]] return; }
L_0011F1D8:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F1E4u); set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F1E4u) [[unlikely]] return; }
L_0011F1E4:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F1F0u); set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F1F0u) [[unlikely]] return; }
L_0011F1F0:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F1FCu); set32(c.r[5], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F1FCu) [[unlikely]] return; }
L_0011F1FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F20Cu); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0006(c, 209u, depth + 1u); else { c.pc = 0x0011ACE0u; return; } if (c.pc != 0x0011F20Cu) [[unlikely]] return; }
L_0011F20C:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 12u);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F22Cu); set32(c.r[6], c.r[6].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0011F22Cu) [[unlikely]] return; }
L_0011F22C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F240u); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 263u, depth + 1u); else { c.pc = 0x0011BA30u; return; } if (c.pc != 0x0011F240u) [[unlikely]] return; }
L_0011F240:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F250u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B130u; return; } if (c.pc != 0x0011F250u) [[unlikely]] return; }
L_0011F250:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0011F270; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011F284; } }
L_0011F270:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u - c.r[2].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_0011F284:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);  goto L_0011F294; }
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0011F294:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[20], c.r[2].w[0] + 1075u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011F2B8; } }
    set32(c.r[2], 0u + 54u);
    set32(c.r[20], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_0011F2B8:
    set32(c.r[4], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[18].d[0];
    c.r[2].d[0] = c.r[21].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[21].d[0];
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0011F2E8; } }
    set32(c.r[21], c.r[21].w[0] - c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[4].w[0]);
    c.budget -= 3;
L_0011F2E8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_0011F320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F2F8u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 237u, depth + 1u); else { c.pc = 0x0011B378u; return; } if (c.pc != 0x0011F2F8u) [[unlikely]] return; }
L_0011F2F8:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F30Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0011B168u; return; } if (c.pc != 0x0011F30Cu) [[unlikely]] return; }
L_0011F30C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F31Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F31Cu) [[unlikely]] return; }
L_0011F31C:
    st32((c.r[29].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_0011F320:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F338; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F334u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 244u, depth + 1u); else { c.pc = 0x0011B478u; return; } if (c.pc != 0x0011F334u) [[unlikely]] return; }
L_0011F334:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_0011F338:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_0011F350; } }
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F34Cu); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 237u, depth + 1u); else { c.pc = 0x0011B378u; return; } if (c.pc != 0x0011F34Cu) [[unlikely]] return; }
L_0011F34C:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0011F350:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_0011F368; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F364u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 244u, depth + 1u); else { c.pc = 0x0011B478u; return; } if (c.pc != 0x0011F364u) [[unlikely]] return; }
L_0011F364:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0011F368:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F388; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F380u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 244u, depth + 1u); else { c.pc = 0x0011B478u; return; } if (c.pc != 0x0011F380u) [[unlikely]] return; }
L_0011F380:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 2;
L_0011F388:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F394u); set32(c.r[6], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0006(c, 253u, depth + 1u); else { c.pc = 0x0011B638u; return; } if (c.pc != 0x0011F394u) [[unlikely]] return; }
L_0011F394:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F3ACu); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0006(c, 251u, depth + 1u); else { c.pc = 0x0011B5D0u; return; } if (c.pc != 0x0011F3ACu) [[unlikely]] return; }
L_0011F3AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011ED48u | kUnwind; return; } goto L_0011ED48; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0011F3D8; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 64u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011ED18u | kUnwind; return; } goto L_0011ED18; } }
L_0011F3D4:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0011F3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F3E0u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F3E0u) [[unlikely]] return; }
L_0011F3E0:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F3ECu); set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F3ECu) [[unlikely]] return; }
L_0011F3EC:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F3F8u); set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F3F8u) [[unlikely]] return; }
L_0011F3F8:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F404u); set32(c.r[5], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F404u) [[unlikely]] return; }
L_0011F404:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F410u); set32(c.r[5], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_0006(c, 212u, depth + 1u); else { c.pc = 0x0011AD88u; return; } if (c.pc != 0x0011F410u) [[unlikely]] return; }
L_0011F410:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_0011F414:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st32((c.r[3].w[0]), c.r[22].w[0]);  goto L_0011F41C; }
L_0011F41C:
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0011F440; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F43Cu);  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x0011F43Cu) [[unlikely]] return; }
L_0011F43C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0011F440:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0011F470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 17840u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E558u | kUnwind; return; } goto L_0011E558; }
L_0011F4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 17840u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], c.r[6].w[0] + 92u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0011F4E0; }
L_0011F4E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011F4F8; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F5A0; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0011F4F8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0011F53C; } }
    c.budget -= 1;
L_0011F510:
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[3].d[0]) { c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F4F8u | kUnwind; return; } goto L_0011F4F8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F510u | kUnwind; return; } goto L_0011F510; } }
L_0011F53C:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] - 1u);  goto L_0011F550; }
    st32((c.r[6].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0011F550:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 2;
L_0011F558:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 4;
L_0011F568:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0011F588; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(0u));  goto L_0011F57C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F57C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_0011F588:
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F568u | kUnwind; return; } goto L_0011F568; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F558u | kUnwind; return; } goto L_0011F558; } }
L_0011F5A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F5A8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
L_0011F5F0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F5F0u | kUnwind; return; } goto L_0011F5F0; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_0011F630; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_0011F640; } }
L_0011F630:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0011F640; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0011F640:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0011F650; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0011F67C; } }
L_0011F650:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 120u);  if (t) { goto L_0011F67C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_0011F670; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011F67C; } }
L_0011F670:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[19], 0u + 16u);
    c.budget -= 3;
L_0011F67C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0011F690; } }
    set32(c.r[19], 0u + 8u);
    c.r[2].d[0] = c.r[17].d[0] ^ 48ull;
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_0011F690:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.r[20].d[0] = 0ull | 32768ull;
    c.r[20].d[0] = c.r[20].d[0] << 48;
    if (c.r[23].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 9u, depth + 1u); else { c.pc = 0x00114DE8u; return; } if (c.pc != 0x0011F6B4u) [[unlikely]] return; }
L_0011F6B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 6u, depth + 1u); else { c.pc = 0x00114868u; return; } if (c.pc != 0x0011F6C8u) [[unlikely]] return; }
L_0011F6C8:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0011F728; } }
L_0011F6D8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F768; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[2].d[0] = c.r[20].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_0011F708; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u - 1u);  goto L_0011F720; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[20].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011F710; } }
    c.r[2].d[0] = c.r[22].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F710; } }
L_0011F708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_0011F720; } }
L_0011F710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F718u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 245u, depth + 1u); else { c.pc = 0x00113AC8u; return; } if (c.pc != 0x0011F718u) [[unlikely]] return; }
L_0011F718:
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_0011F720:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0011F728:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10177u));
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_0011F748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F6D8u | kUnwind; return; } goto L_0011F6D8; } }
L_0011F748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 55u);  if (t) { goto L_0011F768; } }
    set32(c.r[3], c.r[17].w[0] - 87u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F6D8u | kUnwind; return; } goto L_0011F6D8; } }
    c.budget -= 1;
L_0011F768:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = 0ull - c.r[5].d[0];  if (t) { goto L_0011F798; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    if (c.r[23].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 34u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0011F79C; } }
    c.budget -= 1;
L_0011F798:
    if (c.r[23].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_0011F79C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 1u);  if (t) { goto L_0011F7AC; } }
    if (c.r[6].d[0] != 0) c.r[21].d[0] = c.r[2].d[0];
    st32((c.r[30].w[0]), c.r[21].w[0]);
    c.budget -= 2;
L_0011F7AC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0011F7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17840u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F5A8u | kUnwind; return; } goto L_0011F5A8; }
L_0011F810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
L_0011F858:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F858u | kUnwind; return; } goto L_0011F858; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_0011F8A0; } }
    set32(c.r[2], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0011F8B0; } }
    c.budget -= 1;
L_0011F8A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0011F8B0; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0011F8B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0011F8C0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0011F8EC; } }
L_0011F8C0:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 120u);  if (t) { goto L_0011F8EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_0011F8E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011F8EC; } }
L_0011F8E0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[19], 0u + 16u);
    c.budget -= 3;
L_0011F8EC:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[16].d[0] = c.r[19].d[0] + 0ull;  goto L_0011F908; }
    set32(c.r[3], 0u + 10u);
    set32(c.r[19], 0u + 8u);
    c.r[2].d[0] = c.r[17].d[0] ^ 48ull;
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
L_0011F908:
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F918u); c.r[23].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 6u, depth + 1u); else { c.pc = 0x00114868u; return; } if (c.pc != 0x0011F918u) [[unlikely]] return; }
L_0011F918:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0011F91C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F92Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 9u, depth + 1u); else { c.pc = 0x00114DE8u; return; } if (c.pc != 0x0011F92Cu) [[unlikely]] return; }
L_0011F92C:
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0011F990; } }
    c.budget -= 1;
L_0011F940:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F9D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = c.r[20].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_0011F970; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u - 1u);  goto L_0011F988; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[20].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011F978; } }
    c.r[2].d[0] = c.r[22].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F978; } }
L_0011F970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0011F988; } }
L_0011F978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F980u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 245u, depth + 1u); else { c.pc = 0x00113AC8u; return; } if (c.pc != 0x0011F980u) [[unlikely]] return; }
L_0011F980:
    set32(c.r[16], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_0011F988:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0011F990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10177u));
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_0011F9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F940u | kUnwind; return; } goto L_0011F940; } }
L_0011F9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 55u);  if (t) { goto L_0011F9D0; } }
    set32(c.r[3], c.r[17].w[0] - 87u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F940u | kUnwind; return; } goto L_0011F940; } }
    c.budget -= 1;
L_0011F9D0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0011F9F0; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 34u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0011F9F8; } }
    c.budget -= 1;
L_0011F9F0:
    c.r[2].d[0] = 0ull - c.r[5].d[0];
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_0011F9F8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 1u);  if (t) { goto L_0011FA08; } }
    if (c.r[16].d[0] != 0) c.r[21].d[0] = c.r[2].d[0];
    st32((c.r[30].w[0]), c.r[21].w[0]);
    c.budget -= 2;
L_0011FA08:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0011FA40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17840u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F810u | kUnwind; return; } goto L_0011F810; }
L_0011FA70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[18].w[0] + 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 12;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[19], ld32((c.r[18].w[0] + 52u)));  goto L_0011FAF8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FAACu); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0006(c, 171u, depth + 1u); else { c.pc = 0x0011A0C0u; return; } if (c.pc != 0x0011FAACu) [[unlikely]] return; }
L_0011FAAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011FB38; } }
    set32(c.r[2], 0u + 1024u);
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[19], 0u + 2u);
    set32(c.r[17], c.r[17].w[0] + 1021u);
    set32(c.r[4], c.r[18].w[0] + 66u);
    c.budget -= 6;
L_0011FAD0:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[19].sd[0] >= 0; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FAD0u | kUnwind; return; } goto L_0011FAD0; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FB38; } }
L_0011FAF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[20], c.r[19].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FB08u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011FB08u) [[unlikely]] return; }
L_0011FB08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011FB38; } }
    set32(c.r[16], c.r[17].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FB28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0011FB28u) [[unlikely]] return; }
L_0011FB28:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[20].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 4;
L_0011FB38:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011FB58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 5;
L_0011FB6C:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011FCCC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 56u)));  goto L_0011FB98; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17840u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
L_0011FB98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0011FBAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FBA8u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 28u, depth + 1u); else { c.pc = 0x001183A0u; return; } if (c.pc != 0x0011FBA8u) [[unlikely]] return; }
L_0011FBA8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0011FBAC:
    c.r[4].d[0] = c.r[2].d[0] & 65503ull;
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0011FC04; } }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011FCCC; } }
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0011FBFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FBDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 260u, depth + 1u); else { c.pc = 0x00117F40u; return; } if (c.pc != 0x0011FBDCu) [[unlikely]] return; }
L_0011FBDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011FCCC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 6;
L_0011FBFC:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0011FC04:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0011FC58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0011FC40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FC2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 269u, depth + 1u); else { c.pc = 0x0011FA70u; return; } if (c.pc != 0x0011FC2Cu) [[unlikely]] return; }
L_0011FC2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0011FC40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011FCCC; } }
    c.budget -= 1;
L_0011FC40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0011FC88; } }
L_0011FC58:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], ld32((c.r[16].w[0])));  if (t) { goto L_0011FC98; } }
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0011FC9C; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] - 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0011FC9C; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_0011FC88:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0011FCCC; } }
    c.budget -= 1;
L_0011FC98:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0011FC9C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[16].w[0] + 66u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[6].w[0]);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
L_0011FCCC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011FCE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0011FD18; } }
    c.budget -= 1;
L_0011FD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD10u);  if (depth < kMaxDepth) unit_0006(c, 94u, depth + 1u); else { c.pc = 0x00119240u; return; } if (c.pc != 0x0011FD10u) [[unlikely]] return; }
L_0011FD10:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_0011FD18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011FD28:
    set32(c.r[29], c.r[29].w[0] - 1152u);
    set32(c.r[10], 0u + 1024u);
    st64((c.r[29].w[0] + 1120u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 1128u), c.r[17].d[0]);
    set32(c.r[11], c.r[29].w[0] + 96u);
    st64((c.r[29].w[0] + 1136u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[11].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 14u));
    set32(c.r[8], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[29].w[0] + 84u), c.r[8].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[10].w[0]);
    st32((c.r[29].w[0]), c.r[11].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[10].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD8Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0007(c, 285u, depth + 1u); else { c.pc = 0x0011FDE0u; return; } if (c.pc != 0x0011FD8Cu) [[unlikely]] return; }
L_0011FD8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0011FDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FDA0u);  if (depth < kMaxDepth) unit_0005(c, 260u, depth + 1u); else { c.pc = 0x00117F40u; return; } if (c.pc != 0x0011FDA0u) [[unlikely]] return; }
L_0011FDA0:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_0011FDA8:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011FDC8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0011FDC8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 1120u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 1128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1136u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1152u);  c.pc = t; return; }
L_0011FDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0011FE18; } }
    goto L_0011FE0C;
L_0011FE08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 1;
L_0011FE0C:
    set32(c.r[2], ld32((c.r[2].w[0] - 17840u)));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0011FE18:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011FE34; } }
    goto L_0011FE24;
L_0011FE20:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011FE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FE2Cu);  if (depth < kMaxDepth) unit_0006(c, 28u, depth + 1u); else { c.pc = 0x001183A0u; return; } if (c.pc != 0x0011FE2Cu) [[unlikely]] return; }
L_0011FE2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0011FE34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0011FE58; }
L_0011FE58:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 240u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 248u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 256u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 264u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 280u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 296u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 312u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 156u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 152u), 0u);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011FEB0; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] & 26ull;  goto L_0011FECC; }
L_0011FEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FEB8u); set32(c.r[4], ld32((c.r[29].w[0] + 156u)));  if (depth < kMaxDepth) unit_0008(c, 327u, depth + 1u); else { c.pc = 0x00123378u; return; } if (c.pc != 0x0011FEB8u) [[unlikely]] return; }
L_0011FEB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { [[clang::musttail]] return unit_0008(c, 75u, depth); } }
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 26ull;
    c.budget -= 3;
L_0011FECC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[23], c.r[29].w[0] + 16u);  if (t) { goto L_0011FF00; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0011FF00; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FEF4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 282u, depth + 1u); else { c.pc = 0x0011FD28u; return; } if (c.pc != 0x0011FEF4u) [[unlikely]] return; }
L_0011FEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 240u));  if (t) { [[clang::musttail]] return unit_0008(c, 76u, depth); } }
    c.budget -= 1;
L_0011FF00:
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0]), c.r[23].w[0]);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 5;
L_0011FF14:
    c.budget -= 1;
L_0011FF18:
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], 0u + 37u);
    c.budget -= 2;
L_0011FF20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], ld32((c.r[5].w[0] - 17840u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[7], ld32((c.r[2].w[0] - 17832u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF40u); set32(c.r[8], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0006(c, 185u, depth + 1u); else { c.pc = 0x0011A7E8u; return; } if (c.pc != 0x0011FF40u) [[unlikely]] return; }
L_0011FF40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] <= 0) { set32(c.r[17], c.r[18].w[0] - c.r[19].w[0]);  goto L_0011FF60; }
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FF20u | kUnwind; return; } goto L_0011FF20; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[17], c.r[18].w[0] - c.r[19].w[0]);
    c.budget -= 2;
L_0011FF60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011FFBC; } }
    st32((c.r[23].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[23].w[0]), c.r[19].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
L_0011FF7C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011FF8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0011FFB0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_0011FF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FFA0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x0011FFA0u) [[unlikely]] return; }
L_0011FFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { [[clang::musttail]] return unit_0008(c, 74u, depth); } }
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0011FFB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 3;
L_0011FFBC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { [[clang::musttail]] return unit_0008(c, 72u, depth); } }
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 3;
L_0011FFD0:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[21], 0u - 1u);
    c.budget -= 3;
L_0011FFDC:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 1;
L_0011FFE0:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0011FFE8:
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 1;
L_0011FFEC:
    set32(c.r[3], c.r[17].w[0] - 32u);
    c.budget -= 1;
L_0011FFF0:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0011FFF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { [[clang::musttail]] return unit_0008(c, 51u, depth); } }
    goto L_0011FFFC;
L_0011FFF8:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 1;
L_0011FFFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0008(c, 1u, depth);
}

}
