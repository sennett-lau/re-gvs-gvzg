#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0071[4096] = {
    1, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0,
    0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
};

void unit_0071(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C4000;
    case 2u: goto L_002C4004;
    case 3u: goto L_002C4010;
    case 4u: goto L_002C4018;
    case 5u: goto L_002C4030;
    case 6u: goto L_002C40A4;
    case 7u: goto L_002C40B0;
    case 8u: goto L_002C40D0;
    case 9u: goto L_002C4120;
    case 10u: goto L_002C4144;
    case 11u: goto L_002C41B0;
    case 12u: goto L_002C41C0;
    case 13u: goto L_002C4200;
    case 14u: goto L_002C4268;
    case 15u: goto L_002C4278;
    case 16u: goto L_002C42E0;
    case 17u: goto L_002C431C;
    case 18u: goto L_002C4440;
    case 19u: goto L_002C4448;
    case 20u: goto L_002C4480;
    case 21u: goto L_002C44E4;
    case 22u: goto L_002C44F4;
    case 23u: goto L_002C4510;
    case 24u: goto L_002C4610;
    case 25u: goto L_002C4644;
    case 26u: goto L_002C4670;
    case 27u: goto L_002C4694;
    case 28u: goto L_002C46B0;
    case 29u: goto L_002C46F8;
    case 30u: goto L_002C471C;
    case 31u: goto L_002C4778;
    case 32u: goto L_002C479C;
    case 33u: goto L_002C47E8;
    case 34u: goto L_002C4810;
    case 35u: goto L_002C4820;
    case 36u: goto L_002C4860;
    case 37u: goto L_002C48B0;
    case 38u: goto L_002C4910;
    case 39u: goto L_002C4980;
    case 40u: goto L_002C4A00;
    case 41u: goto L_002C4A10;
    case 42u: goto L_002C4A50;
    case 43u: goto L_002C4A90;
    case 44u: goto L_002C4AD0;
    case 45u: goto L_002C4B10;
    case 46u: goto L_002C4B40;
    case 47u: goto L_002C4BE4;
    case 48u: goto L_002C4BF4;
    case 49u: goto L_002C4C10;
    case 50u: goto L_002C4C80;
    case 51u: goto L_002C4CA0;
    case 52u: goto L_002C4D08;
    case 53u: goto L_002C4D84;
    case 54u: goto L_002C4D8C;
    case 55u: goto L_002C4DB8;
    case 56u: goto L_002C4DC8;
    case 57u: goto L_002C4EA0;
    case 58u: goto L_002C4ED0;
    case 59u: goto L_002C4F00;
    case 60u: goto L_002C4F78;
    case 61u: goto L_002C4FF8;
    case 62u: goto L_002C5040;
    case 63u: goto L_002C505C;
    case 64u: goto L_002C5070;
    case 65u: goto L_002C5090;
    case 66u: goto L_002C50C0;
    case 67u: goto L_002C50E0;
    case 68u: goto L_002C5110;
    case 69u: goto L_002C5130;
    case 70u: goto L_002C5140;
    case 71u: goto L_002C51C0;
    case 72u: goto L_002C51D0;
    case 73u: goto L_002C5250;
    case 74u: goto L_002C5260;
    case 75u: goto L_002C52E0;
    case 76u: goto L_002C5310;
    case 77u: goto L_002C5390;
    case 78u: goto L_002C5420;
    case 79u: goto L_002C54C0;
    case 80u: goto L_002C5570;
    case 81u: goto L_002C5580;
    case 82u: goto L_002C5590;
    case 83u: goto L_002C55A0;
    case 84u: goto L_002C55A8;
    case 85u: goto L_002C55B4;
    case 86u: goto L_002C55C4;
    case 87u: goto L_002C55D4;
    case 88u: goto L_002C55E4;
    case 89u: goto L_002C5604;
    case 90u: goto L_002C5624;
    case 91u: goto L_002C562C;
    case 92u: goto L_002C563C;
    case 93u: goto L_002C5650;
    case 94u: goto L_002C5664;
    case 95u: goto L_002C5674;
    case 96u: goto L_002C5684;
    case 97u: goto L_002C5694;
    case 98u: goto L_002C569C;
    case 99u: goto L_002C56A4;
    case 100u: goto L_002C56AC;
    case 101u: goto L_002C56C0;
    case 102u: goto L_002C56D0;
    case 103u: goto L_002C5700;
    case 104u: goto L_002C5740;
    case 105u: goto L_002C5750;
    case 106u: goto L_002C5780;
    case 107u: goto L_002C57A0;
    case 108u: goto L_002C57C0;
    case 109u: goto L_002C5820;
    case 110u: goto L_002C5830;
    case 111u: goto L_002C5838;
    case 112u: goto L_002C5864;
    case 113u: goto L_002C5894;
    case 114u: goto L_002C58C0;
    case 115u: goto L_002C58EC;
    case 116u: goto L_002C5918;
    case 117u: goto L_002C5944;
    case 118u: goto L_002C594C;
    case 119u: goto L_002C5960;
    case 120u: goto L_002C5970;
    case 121u: goto L_002C5978;
    case 122u: goto L_002C59A4;
    case 123u: goto L_002C59D0;
    case 124u: goto L_002C59FC;
    case 125u: goto L_002C5A28;
    case 126u: goto L_002C5A58;
    case 127u: goto L_002C5A90;
    case 128u: goto L_002C5AD0;
    case 129u: goto L_002C5B10;
    case 130u: goto L_002C5B50;
    case 131u: goto L_002C5B58;
    case 132u: goto L_002C5B84;
    case 133u: goto L_002C5B8C;
    case 134u: goto L_002C5BA0;
    case 135u: goto L_002C5BD4;
    case 136u: goto L_002C5C04;
    case 137u: goto L_002C5C30;
    case 138u: goto L_002C5C5C;
    case 139u: goto L_002C5C64;
    case 140u: goto L_002C5C70;
    case 141u: goto L_002C5CF0;
    case 142u: goto L_002C5D70;
    case 143u: goto L_002C5D80;
    case 144u: goto L_002C5D88;
    case 145u: goto L_002C5D98;
    case 146u: goto L_002C5DA8;
    case 147u: goto L_002C5DB8;
    case 148u: goto L_002C5DCC;
    case 149u: goto L_002C5DE0;
    case 150u: goto L_002C5E50;
    case 151u: goto L_002C5E60;
    case 152u: goto L_002C5E80;
    case 153u: goto L_002C5EE0;
    case 154u: goto L_002C5F18;
    case 155u: goto L_002C5F28;
    case 156u: goto L_002C5F84;
    case 157u: goto L_002C5FB4;
    case 158u: goto L_002C5FE4;
    case 159u: goto L_002C6024;
    case 160u: goto L_002C6060;
    case 161u: goto L_002C6370;
    case 162u: goto L_002C63B0;
    case 163u: goto L_002C63C8;
    case 164u: goto L_002C63F0;
    case 165u: goto L_002C6460;
    case 166u: goto L_002C6488;
    case 167u: goto L_002C64A0;
    case 168u: goto L_002C64DC;
    case 169u: goto L_002C66B0;
    case 170u: goto L_002C66D8;
    case 171u: goto L_002C6750;
    case 172u: goto L_002C6778;
    case 173u: goto L_002C6860;
    case 174u: goto L_002C68A0;
    case 175u: goto L_002C68E0;
    case 176u: goto L_002C6938;
    case 177u: goto L_002C6948;
    case 178u: goto L_002C6960;
    case 179u: goto L_002C69F0;
    case 180u: goto L_002C6A10;
    case 181u: goto L_002C6A30;
    case 182u: goto L_002C6B78;
    case 183u: goto L_002C6CB0;
    case 184u: goto L_002C6CE0;
    case 185u: goto L_002C6D30;
    case 186u: goto L_002C6DA0;
    case 187u: goto L_002C6E10;
    case 188u: goto L_002C6E20;
    case 189u: goto L_002C6EE0;
    case 190u: goto L_002C6F18;
    case 191u: goto L_002C6F20;
    case 192u: goto L_002C6F88;
    case 193u: goto L_002C6FA0;
    case 194u: goto L_002C6FD4;
    case 195u: goto L_002C7000;
    case 196u: goto L_002C7030;
    case 197u: goto L_002C7058;
    case 198u: goto L_002C70A0;
    case 199u: goto L_002C70D4;
    case 200u: goto L_002C7104;
    case 201u: goto L_002C7130;
    case 202u: goto L_002C7160;
    case 203u: goto L_002C7194;
    case 204u: goto L_002C71A0;
    case 205u: goto L_002C71D0;
    case 206u: goto L_002C71F8;
    case 207u: goto L_002C72B4;
    case 208u: goto L_002C734C;
    case 209u: goto L_002C73C0;
    case 210u: goto L_002C73DC;
    case 211u: goto L_002C73E8;
    case 212u: goto L_002C7408;
    case 213u: goto L_002C7438;
    case 214u: goto L_002C7590;
    case 215u: goto L_002C75C0;
    case 216u: goto L_002C7640;
    case 217u: goto L_002C7650;
    case 218u: goto L_002C765C;
    case 219u: goto L_002C7668;
    case 220u: goto L_002C7700;
    case 221u: goto L_002C7720;
    case 222u: goto L_002C79A0;
    case 223u: goto L_002C79B0;
    case 224u: goto L_002C7A80;
    case 225u: goto L_002C7A9C;
    case 226u: goto L_002C7AA8;
    case 227u: goto L_002C7AC0;
    case 228u: goto L_002C7AD8;
    case 229u: goto L_002C7B48;
    case 230u: goto L_002C7B70;
    case 231u: goto L_002C7C20;
    case 232u: goto L_002C7C50;
    case 233u: goto L_002C7C80;
    case 234u: goto L_002C7CB0;
    case 235u: goto L_002C7CF0;
    case 236u: goto L_002C7D70;
    case 237u: goto L_002C7DC0;
    case 238u: goto L_002C7E70;
    case 239u: goto L_002C7F80;
    case 240u: goto L_002C7F98;
    case 241u: goto L_002C7FA4;
    case 242u: goto L_002C7FC8;
    case 243u: goto L_002C7FF0;
    default: bad_entry(c, 0x002C4000u); return;
    }
L_002C4000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C4004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C4018; } }
    c.budget -= 1;
L_002C4010:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C4018:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C40A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4030u);  if (depth < kMaxDepth) unit_0071(c, 11u, depth + 1u); else { c.pc = 0x002C41B0u; return; } if (c.pc != 0x002C4030u) [[unlikely]] return; }
L_002C4030:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 51u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[2].w[0] + 8658u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 513u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[2].w[0] + 84u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    st8((c.r[2].w[0] + 8680u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    st8((c.r[2].w[0] + 8661u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    st8((c.r[2].w[0] + 8663u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8662u)));
    st8((c.r[2].w[0] + 8662u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 8687u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 776u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 887u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 886u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 8685u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 8686u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C40A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x002C40A4u) [[unlikely]] return; }
L_002C40A4:
    c.budget -= 1;
L_002C40A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C40B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C40D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 20;
L_002C4120:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));
    set32(c.r[20], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 47u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[17].w[0] + 6u);  if (t) { goto L_002C4168; } }
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 53u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4144u); c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C4144u) [[unlikely]] return; }
L_002C4144:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002C4168; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 88u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4188; } }
    c.budget -= 1;
L_002C4168:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4120u | kUnwind; return; } goto L_002C4120; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C4188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C41B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27856u);
    c.budget -= 4;
L_002C41C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C41D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C41F0; } }
    c.budget -= 1;
L_002C41D8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C41C0u | kUnwind; return; } goto L_002C41C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C41F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 7360u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[18].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C42C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C42C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4268u); c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));  if (depth < kMaxDepth) unit_0070(c, 291u, depth + 1u); else { c.pc = 0x002C39F0u; return; } if (c.pc != 0x002C4268u) [[unlikely]] return; }
L_002C4268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C42C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4278u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 16u, depth + 1u); else { c.pc = 0x002C42E0u; return; } if (c.pc != 0x002C4278u) [[unlikely]] return; }
L_002C4278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C42C8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C42A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 274u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C42C0; } }
L_002C42A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C42C0:
    set32(c.r[3], c.r[17].w[0] + 24u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002C42C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C42E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23632u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C431Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002C431Cu) [[unlikely]] return; }
L_002C431C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C4458; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 4u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 6u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 7u));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C4388; } }
    st8((c.r[16].w[0] + 513u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C4388:
    c.r[11].d[0] = ld8((c.r[18].w[0] + 11u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[10], c.r[10].w[0] - 2960u);
    c.r[9].d[0] = 0ull | 58368ull;
    set32(c.r[8], c.r[8].w[0] - 2896u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 23744u);
    set32(c.r[2], c.r[2].w[0] - 28368u);
    set32(c.r[11], c.r[11].w[0] << 8);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[11].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 496u)));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 496u)));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[16].w[0] + 566u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[16].w[0] + 503u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4440u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002C4440u) [[unlikely]] return; }
L_002C4440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x002C4448u) [[unlikely]] return; }
L_002C4448:
    st16((c.r[16].w[0] + 632u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4460; } }
    c.budget -= 1;
L_002C4458:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002C4460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C4480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C4698; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C44C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4698; } }
    c.budget -= 1;
L_002C44C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8686u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4518; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44E4u);  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001CADF0u; return; } if (c.pc != 0x002C44E4u) [[unlikely]] return; }
L_002C44E4:
    c.f[20] = ld32((c.r[17].w[0] + 36u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44F4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x002C44F4u) [[unlikely]] return; }
L_002C44F4:
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[1]);  if (t) { goto L_002C4510; } }
    c.budget -= 1;
L_002C4508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 139u, depth + 1u); else { c.pc = 0x0025DAB0u; return; } if (c.pc != 0x002C4510u) [[unlikely]] return; }
L_002C4510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4698; } }
L_002C4518:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01180000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8685u)));
    set32(c.r[4], c.r[4].w[0] - 24320u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_002C4558; } }
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 2;
L_002C4558:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 76u);
    st8((c.r[17].w[0] + 876u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 74u);  if (t) { goto L_002C45B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C45B8; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 69u);  if (t) { goto L_002C45B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C45B8; } }
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 66u);  if (t) { goto L_002C45B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C45B8; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C45B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C45D8; } }
    c.budget -= 1;
L_002C45B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002C45D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 876u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C45D8; } }
L_002C45D0:
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 876u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C45D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[17].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4610u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002C4610u) [[unlikely]] return; }
L_002C4610:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4680; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4650; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4644u); set32(c.r[5], c.r[3].w[0] + 656u);  if (depth < kMaxDepth) unit_005A(c, 156u, depth + 1u); else { c.pc = 0x002699E0u; return; } if (c.pc != 0x002C4644u) [[unlikely]] return; }
L_002C4644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4688; } }
    c.budget -= 1;
L_002C4650:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4670u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002C4670u) [[unlikely]] return; }
L_002C4670:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002C4688; } }
    c.budget -= 1;
L_002C4680:
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_002C4688:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x002C4694u) [[unlikely]] return; }
L_002C4694:
    c.budget -= 1;
L_002C4698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C46B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[17], c.r[17].w[0] - 23568u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 18;
L_002C46F8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] << (c.r[18].w[0] & 31u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4758; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C471Cu); set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C471Cu) [[unlikely]] return; }
L_002C471C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4758; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 73u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002C4768; } }
L_002C4758:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C46F8u | kUnwind; return; } goto L_002C46F8; } }
L_002C4768:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 23600u);
    c.budget -= 4;
L_002C4778:
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C47D0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C479Cu); set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C479Cu) [[unlikely]] return; }
L_002C479C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C47D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 73u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_002C47E0; } }
L_002C47D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4778u | kUnwind; return; } goto L_002C4778; } }
L_002C47E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47E8u);  if (depth < kMaxDepth) unit_0071(c, 59u, depth + 1u); else { c.pc = 0x002C4F00u; return; } if (c.pc != 0x002C47E8u) [[unlikely]] return; }
L_002C47E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C4810:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[4].d[0] = c.r[2].d[0] ^ 1ull;  [[clang::musttail]] return unit_0074(c, 336u, depth); }
L_002C4820:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] - 24320u);
    c.r[6].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_002C4860:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] - 24320u);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C48A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 98u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C48A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C48B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] - 24320u);
    c.r[6].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4900; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 98u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002C4900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4910:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 182u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4978; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 98u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_002C4978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4980:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27358u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002C49F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[4].w[0] - 27264u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 27856u);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 15;
L_002C49F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4A00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0074(c, 336u, depth); }
L_002C4A10:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] - 24320u);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_002C4A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4A78; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002C4A78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  c.pc = t; return; }
L_002C4A90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4AB8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002C4AB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  c.pc = t; return; }
L_002C4AD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    st16((c.r[1].w[0] - 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] - 8938u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002C4B10:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 10;
    { c.r[4].d[0] = ld8((c.r[2].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002382B0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 35u, depth); }
L_002C4B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C4B80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 73u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 2ull;  if (t) { goto L_002C4B78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4BB0; } }
    c.budget -= 1;
L_002C4B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002C4BB0; } }
L_002C4B80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 73u)));
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 4ull;  if (t) { goto L_002C4BA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C4BA8; } }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4BB0; } }
    c.budget -= 1;
L_002C4BA8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_002C4BB0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C4BF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C4BF8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C4BF8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BE4u); c.r[4].d[0] = ld8((c.r[4].w[0] + 8u));  if (depth < kMaxDepth) unit_0011(c, 191u, depth + 1u); else { c.pc = 0x00146380u; return; } if (c.pc != 0x002C4BE4u) [[unlikely]] return; }
L_002C4BE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F81C0u; return; } if (c.pc != 0x002C4BF4u) [[unlikely]] return; }
L_002C4BF4:
    c.budget -= 1;
L_002C4BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C4C10:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4C50; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 73u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[6].w[0] & 31u)));
    set32(c.r[4], c.r[4].w[0] - 23544u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C4C78; } }
    c.budget -= 1;
L_002C4C50:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 73u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[6].w[0] & 31u)));
    set32(c.r[4], c.r[4].w[0] - 23536u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
L_002C4C78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 6794u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_002C4CA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 22u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C4CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4E80; } }
    c.budget -= 1;
L_002C4CE8:
    set32(c.r[17], ld32((c.r[3].w[0] + 44u)));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[16].w[0] + 8658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D08u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8658u)));  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x002C4D08u) [[unlikely]] return; }
L_002C4D08:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 8684u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 8686u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 1520u));
    c.f[2] = ld32((c.r[16].w[0] + 1524u));
    c.f[1] = ld32((c.r[16].w[0] + 1528u));
    c.f[0] = ld32((c.r[16].w[0] + 1532u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1536u));
    c.f[2] = ld32((c.r[16].w[0] + 1540u));
    c.f[1] = ld32((c.r[16].w[0] + 1544u));
    c.f[0] = ld32((c.r[16].w[0] + 1548u));
    st32((c.r[2].w[0] + 16u), c.f[3]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    st32((c.r[2].w[0] + 24u), c.f[1]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1552u));
    c.f[2] = ld32((c.r[16].w[0] + 1556u));
    c.f[1] = ld32((c.r[16].w[0] + 1560u));
    c.f[0] = ld32((c.r[16].w[0] + 1564u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D84u); st32((c.r[2].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x002C4D84u) [[unlikely]] return; }
L_002C4D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x002C4D8Cu) [[unlikely]] return; }
L_002C4D8C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C4DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DB8u);  if (depth < kMaxDepth) unit_0057(c, 5u, depth + 1u); else { c.pc = 0x0025C080u; return; } if (c.pc != 0x002C4DB8u) [[unlikely]] return; }
L_002C4DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4DC8; } }
L_002C4DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 61u, depth + 1u); else { c.pc = 0x001C8CF0u; return; } if (c.pc != 0x002C4DC8u) [[unlikely]] return; }
L_002C4DC8:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] - 21920u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[4], 0u - 1u);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 1520u), c.f[3]);
    st32((c.r[16].w[0] + 1524u), c.f[2]);
    st32((c.r[16].w[0] + 1528u), c.f[1]);
    st32((c.r[16].w[0] + 1532u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[16].w[0] + 1536u), c.f[3]);
    st32((c.r[16].w[0] + 1540u), c.f[2]);
    st32((c.r[16].w[0] + 1544u), c.f[1]);
    st32((c.r[16].w[0] + 1548u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[16].w[0] + 1552u), c.f[3]);
    st32((c.r[16].w[0] + 1556u), c.f[2]);
    st32((c.r[16].w[0] + 1560u), c.f[1]);
    st32((c.r[16].w[0] + 1564u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8684u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 776u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 8685u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8663u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8662u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 46;
L_002C4E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C4EA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));  c.pc = t; return; }
L_002C4ED0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C4EF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C4EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4EF8; } }
    c.budget -= 1;
L_002C4EF0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_002C4EF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4F00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[8], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 15;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002C5020; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002C5020; } }
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1326u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002C5020; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23520u);
    c.budget -= 3;
L_002C4F78:
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 1ull;  if (t) { goto L_002C5010; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4FB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C5010; } }
    c.budget -= 1;
L_002C4FB8:
    c.r[3].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4FE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C5010; } }
    c.budget -= 1;
L_002C4FE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4FF8u) [[unlikely]] return; }
L_002C4FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5010; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 504u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C5020; } }
L_002C5010:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4F78u | kUnwind; return; } goto L_002C4F78; } }
L_002C5020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C505Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x002C505Cu) [[unlikely]] return; }
L_002C505C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C5070:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));  [[clang::musttail]] return unit_0074(c, 336u, depth); }
L_002C5090:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_002C50C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_002C50E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_002C5110:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 182u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002C5130:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 27856u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_002C5140:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C51A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C51A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C5170; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C51A0; } }
L_002C5170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C5188; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C51A0; } }
L_002C5188:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C51A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C51B8; } }
    c.budget -= 1;
L_002C51A0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5140u | kUnwind; return; } goto L_002C5140; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C51B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C51C0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 27856u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_002C51D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5230; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5230; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C5200; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C5230; } }
L_002C5200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C5218; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C5230; } }
L_002C5218:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C5230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5248; } }
L_002C5230:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C51D0u | kUnwind; return; } goto L_002C51D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C5248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5250:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 27856u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_002C5260:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C52C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C52C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C52C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C52A0; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C52C0; } }
    c.budget -= 1;
L_002C52A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C52B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C52C0; } }
L_002C52B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C52D8; } }
L_002C52C0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5260u | kUnwind; return; } goto L_002C5260; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C52D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C52E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_002C5310:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 61440ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01190000u);
    st32((c.r[1].w[0] - 7680u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7676u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x011C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 10240ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x011D0000u);
    st32((c.r[1].w[0] - 7672u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 47104ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7668u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01240000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 16384ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01250000u);
    st32((c.r[1].w[0] - 7664u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7660u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01260000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    st32((c.r[1].w[0] - 7656u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 59392ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 7652u), c.r[3].w[0]);  c.pc = t; return; }
L_002C5390:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7680u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 7676u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 7672u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7668u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7664u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7660u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7568u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7632u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7564u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7628u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7560u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7624u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7656u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7652u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7556u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 7620u), c.r[3].w[0]);  c.pc = t; return; }
L_002C5420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x012C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 6144ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x012E0000u);
    st32((c.r[1].w[0] - 7680u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7676u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01310000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 24576ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01330000u);
    st32((c.r[1].w[0] - 7672u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7668u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01340000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[5].d[0] = c.r[3].d[0] | 36864ull;
    c.r[4].d[0] = c.r[3].d[0] | 45056ull;
    st32((c.r[1].w[0] - 7664u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x013B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7660u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] | 6144ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7656u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 14336ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7652u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 45056ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01430000u);
    st32((c.r[1].w[0] - 7648u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 7644u), c.r[3].w[0]);  c.pc = t; return; }
L_002C54C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7680u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 7676u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 7672u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7668u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7664u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7660u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7552u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7616u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7548u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7612u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7540u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7604u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 7656u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7652u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7648u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7644u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7536u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7600u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7528u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 7592u), c.r[3].w[0]);  c.pc = t; return; }
L_002C5570:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002C5580:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 481u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002C5590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002C55A0u) [[unlikely]] return; }
L_002C55A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55A8u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002C55A8u) [[unlikely]] return; }
L_002C55A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55B4u); st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002242A0u; return; } if (c.pc != 0x002C55B4u) [[unlikely]] return; }
L_002C55B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55C4u); set32(c.r[4], c.r[4].w[0] + 21264u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C55C4u) [[unlikely]] return; }
L_002C55C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], 0u + 3415u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55D4u); set32(c.r[5], c.r[5].w[0] - 7680u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x002C55D4u) [[unlikely]] return; }
L_002C55D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55E4u); set32(c.r[4], c.r[4].w[0] + 21392u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C55E4u) [[unlikely]] return; }
L_002C55E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01210000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[1].w[0] - 7608u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7608u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5604u); set32(c.r[4], 0u + 3165u);  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x002C5604u) [[unlikely]] return; }
L_002C5604:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01450000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 10240ull;
    st32((c.r[1].w[0] - 7588u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7588u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5624u); set32(c.r[4], 0u + 3164u);  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x002C5624u) [[unlikely]] return; }
L_002C5624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C562Cu);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x002C562Cu) [[unlikely]] return; }
L_002C562C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C563Cu); set32(c.r[4], c.r[4].w[0] + 9776u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C563Cu) [[unlikely]] return; }
L_002C563C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5650u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C5650u) [[unlikely]] return; }
L_002C5650:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5664u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C5664u) [[unlikely]] return; }
L_002C5664:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5674u); set32(c.r[4], c.r[4].w[0] + 21536u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C5674u) [[unlikely]] return; }
L_002C5674:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], 0u + 3416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5684u); set32(c.r[5], c.r[5].w[0] - 7680u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x002C5684u) [[unlikely]] return; }
L_002C5684:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5694u); set32(c.r[4], c.r[4].w[0] + 21696u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C5694u) [[unlikely]] return; }
L_002C5694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C569Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 102u, depth + 1u); else { c.pc = 0x002C56D0u; return; } if (c.pc != 0x002C569Cu) [[unlikely]] return; }
L_002C569C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56A4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 103u, depth + 1u); else { c.pc = 0x002C5700u; return; } if (c.pc != 0x002C56A4u) [[unlikely]] return; }
L_002C56A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56ACu);  if (depth < kMaxDepth) unit_0071(c, 106u, depth + 1u); else { c.pc = 0x002C5780u; return; } if (c.pc != 0x002C56ACu) [[unlikely]] return; }
L_002C56AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56C0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C56C0u) [[unlikely]] return; }
L_002C56C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C56D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x013E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    st32((c.r[1].w[0] - 7596u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 20672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { set32(c.r[5], ld32((c.r[1].w[0] - 7596u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002147C0u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 59u, depth); }
L_002C5700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002C5740; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x013F0000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[4].d[0] = c.r[2].d[0] | 43008ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[1].w[0] - 7580u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5740u); set32(c.r[5], ld32((c.r[1].w[0] - 7580u)));  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x002C5740u) [[unlikely]] return; }
L_002C5740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C5750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01530000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 53248ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    st32((c.r[1].w[0] - 7584u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 23104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { set32(c.r[5], ld32((c.r[1].w[0] - 7584u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002147C0u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 59u, depth); }
L_002C5780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01530000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 53248ull;
    st32((c.r[1].w[0] - 7584u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7584u)));
    c.budget -= 8;
    { set32(c.r[4], 0u + 3218u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002147C0u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 59u, depth); }
L_002C57A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[2], c.r[2].w[0] - 23104u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  c.pc = t; return; }
L_002C57C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23660u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 7568u);
    set32(c.r[2], c.r[2].w[0] - 7632u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 18512u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { set32(c.r[4], c.r[28].w[0] - 23320u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00129300u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 101u, depth); }
L_002C5820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5830u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002C5830u) [[unlikely]] return; }
L_002C5830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5838u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x002C5838u) [[unlikely]] return; }
L_002C5838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7568u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 30720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7632u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5864u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C5864u) [[unlikely]] return; }
L_002C5864:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7564u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 21120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7628u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5894u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 57u, depth + 1u); else { c.pc = 0x00128A60u; return; } if (c.pc != 0x002C5894u) [[unlikely]] return; }
L_002C5894:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7560u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 19696u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7624u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58C0u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C58C0u) [[unlikely]] return; }
L_002C58C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7556u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 5296u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7620u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58ECu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C58ECu) [[unlikely]] return; }
L_002C58EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18300u)));
    set32(c.r[5], c.r[5].w[0] + 18272u);
    set32(c.r[6], c.r[29].w[0] + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 7608u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5918u); st16((c.r[1].w[0] + 10488u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 194u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x002C5918u) [[unlikely]] return; }
L_002C5918:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18296u)));
    set32(c.r[5], c.r[5].w[0] + 18304u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 7588u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5944u); st16((c.r[1].w[0] + 10488u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 194u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x002C5944u) [[unlikely]] return; }
L_002C5944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C594Cu);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002C594Cu) [[unlikely]] return; }
L_002C594C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5970u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002C5970u) [[unlikely]] return; }
L_002C5970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5978u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x002C5978u) [[unlikely]] return; }
L_002C5978:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7568u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 30720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7632u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59A4u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C59A4u) [[unlikely]] return; }
L_002C59A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7552u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 14624u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7616u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59D0u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C59D0u) [[unlikely]] return; }
L_002C59D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7560u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 19696u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7624u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59FCu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C59FCu) [[unlikely]] return; }
L_002C59FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7548u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 29744u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7612u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A28u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C5A28u) [[unlikely]] return; }
L_002C5A28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7536u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], c.r[4].w[0] + 18240u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 32432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7600u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A58u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 57u, depth + 1u); else { c.pc = 0x00128A60u; return; } if (c.pc != 0x002C5A58u) [[unlikely]] return; }
L_002C5A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x013E0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 18244u)));
    c.r[4].d[0] = c.r[2].d[0] | 40960ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 6992u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A90u); st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 168u, depth + 1u); else { c.pc = 0x0012A1F0u; return; } if (c.pc != 0x002C5A90u) [[unlikely]] return; }
L_002C5A90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x013F0000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[2].d[0] | 43008ull;
    set32(c.r[8], ld32((c.r[1].w[0] + 17488u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st32((c.r[28].w[0] - 23324u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 18248u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AD0u); st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 168u, depth + 1u); else { c.pc = 0x0012A1F0u; return; } if (c.pc != 0x002C5AD0u) [[unlikely]] return; }
L_002C5AD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01530000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[2].d[0] | 53248ull;
    set32(c.r[8], ld32((c.r[1].w[0] + 17488u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st32((c.r[28].w[0] - 23328u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 18240u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B10u); st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 168u, depth + 1u); else { c.pc = 0x0012A1F0u; return; } if (c.pc != 0x002C5B10u) [[unlikely]] return; }
L_002C5B10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 17488u)));
    set32(c.r[4], c.r[4].w[0] + 18256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 31424u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7540u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7604u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B50u); st32((c.r[28].w[0] - 23332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 57u, depth + 1u); else { c.pc = 0x00128A60u; return; } if (c.pc != 0x002C5B50u) [[unlikely]] return; }
L_002C5B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B58u);  if (depth < kMaxDepth) unit_0070(c, 85u, depth + 1u); else { c.pc = 0x002C0B50u; return; } if (c.pc != 0x002C5B58u) [[unlikely]] return; }
L_002C5B58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18252u)));
    set32(c.r[5], c.r[5].w[0] + 18304u);
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 7588u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B84u); st16((c.r[1].w[0] + 10488u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 194u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x002C5B84u) [[unlikely]] return; }
L_002C5B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B8Cu);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002C5B8Cu) [[unlikely]] return; }
L_002C5B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7568u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 30720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7632u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BD4u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C5BD4u) [[unlikely]] return; }
L_002C5BD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7564u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 21120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7628u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C04u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 57u, depth + 1u); else { c.pc = 0x00128A60u; return; } if (c.pc != 0x002C5C04u) [[unlikely]] return; }
L_002C5C04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7528u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 18992u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7592u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C30u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002C5C30u) [[unlikely]] return; }
L_002C5C30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18300u)));
    set32(c.r[5], c.r[5].w[0] + 18272u);
    set32(c.r[6], c.r[29].w[0] + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 7608u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C5Cu); st16((c.r[1].w[0] + 10488u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 194u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x002C5C5Cu) [[unlikely]] return; }
L_002C5C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C64u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002C5C64u) [[unlikely]] return; }
L_002C5C64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5C70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 61440ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01190000u);
    st32((c.r[1].w[0] - 7680u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7676u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x011C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 10240ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x011D0000u);
    st32((c.r[1].w[0] - 7672u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 47104ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7668u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 45056ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01430000u);
    st32((c.r[1].w[0] - 7664u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7660u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01210000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 7656u), c.r[3].w[0]);  c.pc = t; return; }
L_002C5CF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 7680u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 7676u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 7672u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7668u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7664u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7660u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7568u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7632u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7564u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7628u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7528u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7592u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7656u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 7608u), c.r[3].w[0]);  c.pc = t; return; }
L_002C5D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D80u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002C5D80u) [[unlikely]] return; }
L_002C5D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D88u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002C5D88u) [[unlikely]] return; }
L_002C5D88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D98u); set32(c.r[4], c.r[4].w[0] + 23664u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C5D98u) [[unlikely]] return; }
L_002C5D98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], 0u + 3418u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DA8u); set32(c.r[5], c.r[5].w[0] - 7680u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x002C5DA8u) [[unlikely]] return; }
L_002C5DA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DB8u); set32(c.r[4], c.r[4].w[0] + 23792u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C5DB8u) [[unlikely]] return; }
L_002C5DB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DCCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C5DCCu) [[unlikely]] return; }
L_002C5DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C5DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002C5E50; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5E00; } }
    set32(c.r[3], 0u + 43u);
    c.budget -= 1;
L_002C5E00:
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C5E10; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
L_002C5E10:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C5E20; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 1;
L_002C5E20:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C5E30; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 1;
L_002C5E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E50u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002C5E50u) [[unlikely]] return; }
L_002C5E50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C5E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18272u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { set32(c.r[5], 0u + 2u);  [[clang::musttail]] return unit_0076(c, 6u, depth); }
L_002C5E80:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[7], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[29].w[0] + 12u);
    set32(c.r[5], c.r[7].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 87u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 88u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 89u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 90u));
    st8((c.r[5].w[0] + 87u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 89u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C5EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[3].w[0] - 21008u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 369u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[10], c.r[5].w[0] - 1u);
    c.budget -= 14;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[9], ld32((c.r[3].w[0])));  if (t) { goto L_002C6048; } }
L_002C5F18:
    c.r[1].d[0] = 0ll < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_002C6038; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C5F28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C5FC0; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[3].d[0];  if (t) { goto L_002C6028; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_002C5F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6028; } }
    c.budget -= 1;
L_002C5F50:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 89u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F84u); c.r[4].d[0] = c.r[11].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 152u, depth + 1u); else { c.pc = 0x002C5E80u; return; } if (c.pc != 0x002C5F84u) [[unlikely]] return; }
L_002C5F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6028; } }
    c.budget -= 1;
L_002C5F90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002C6028; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 90u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_002C6028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FB4u);  if (depth < kMaxDepth) unit_0071(c, 152u, depth + 1u); else { c.pc = 0x002C5E80u; return; } if (c.pc != 0x002C5FB4u) [[unlikely]] return; }
L_002C5FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6028; } }
    c.budget -= 1;
L_002C5FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 90u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FE4u); c.r[4].d[0] = c.r[11].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 152u, depth + 1u); else { c.pc = 0x002C5E80u; return; } if (c.pc != 0x002C5FE4u) [[unlikely]] return; }
L_002C5FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6028; } }
    c.budget -= 1;
L_002C5FF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002C6028; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 89u)));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_002C6028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6024u);  if (depth < kMaxDepth) unit_0071(c, 152u, depth + 1u); else { c.pc = 0x002C5E80u; return; } if (c.pc != 0x002C6024u) [[unlikely]] return; }
L_002C6024:
    c.budget -= 1;
L_002C6028:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5F28u | kUnwind; return; } goto L_002C5F28; } }
L_002C6038:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5F18u | kUnwind; return; } goto L_002C5F18; } }
    c.budget -= 1;
L_002C6048:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C6060:
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[8], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 26336u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[8].w[0] + 48u);  if (t) { goto L_002C63A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 14182u)));
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C63A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 18u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    c.budget -= 44;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C6168; } }
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 43u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 43u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
L_002C6168:
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x88880000u);
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 34953ull;
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 22u));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 10u));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 12u));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 92u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 42;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C6218; } }
    c.r[4].d[0] = 0ull | 50000ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002C6218:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 50000ull;  if (t) { goto L_002C6230; } }
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002C6230:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 50000ull;  if (t) { goto L_002C6248; } }
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002C6248:
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 50000ull;  if (t) { goto L_002C6260; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002C6260:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 50000ull;  if (t) { goto L_002C6278; } }
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002C6278:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 10u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 50000ull;  if (t) { goto L_002C6290; } }
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002C6290:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 12u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 50000ull;  if (t) { goto L_002C62A8; } }
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002C62A8:
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[1].d[0] = c.r[1].d[0] | 60997ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00360000u);  if (t) { goto L_002C62C8; } }
    c.r[4].d[0] = c.r[4].d[0] | 60996ull;
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 2;
L_002C62C8:
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002C62E8; } }
    c.r[4].d[0] = c.r[4].d[0] | 34463ull;
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 2;
L_002C62E8:
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002C6308; } }
    c.r[4].d[0] = c.r[4].d[0] | 34463ull;
    st32((c.r[3].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 2;
L_002C6308:
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002C6328; } }
    c.r[4].d[0] = c.r[4].d[0] | 34463ull;
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 2;
L_002C6328:
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002C6348; } }
    c.r[4].d[0] = c.r[4].d[0] | 34463ull;
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 2;
L_002C6348:
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002C6368; } }
    c.r[4].d[0] = c.r[4].d[0] | 34463ull;
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 2;
L_002C6368:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 99u);
    c.budget -= 2;
L_002C6370:
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[4].w[0] + 44u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));
    c.r[1].d[0] = c.r[4].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C6390; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_002C6390:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6370u | kUnwind; return; } goto L_002C6370; } }
L_002C63A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C63B0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 11984u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
L_002C63C8:
    set32(c.r[9], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[3].w[0] + 13676u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13676u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C6440; } }
    set32(c.r[13], ld32((c.r[10].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_002C6440; } }
L_002C63F0:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 2u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C6430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C6440; } }
L_002C6430:
    set32(c.r[13], c.r[13].w[0] + 30u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C63F0u | kUnwind; return; } goto L_002C63F0; } }
L_002C6440:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].sd[0] < 61ll ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C63C8u | kUnwind; return; } goto L_002C63C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6460:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[20].w[0] + 11984u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_002C6488:
    set32(c.r[17], ld32((c.r[20].w[0])));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C6680; } }
    c.budget -= 1;
L_002C64A0:
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[19], c.r[4].w[0] << 3);
    set32(c.r[18], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C6668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C64DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C66B0u; return; } if (c.pc != 0x002C64DCu) [[unlikely]] return; }
L_002C64DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6668; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002C6510; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1324u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C6668; } }
    c.budget -= 1;
L_002C6510:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1325u)));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C6668; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 28u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002C6560; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14181u)));
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002C6668; } }
L_002C6560:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[6], 0u - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C65A8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1326u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C65B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C65B0; } }
    c.budget -= 1;
L_002C65A8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002C65B0:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 20u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_002C65F0; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 22u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1326u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C65F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C65F8; } }
L_002C65F0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002C65F8:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_002C6638; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1326u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C6640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C6640; } }
L_002C6638:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002C6640:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002C6658; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002C6668; } }
L_002C6658:
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1324u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002C6668:
    set32(c.r[17], c.r[17].w[0] + 30u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C64A0u | kUnwind; return; } goto L_002C64A0; } }
    c.budget -= 1;
L_002C6680:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6488u | kUnwind; return; } goto L_002C6488; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C66B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27408u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C6740; } }
    c.budget -= 1;
L_002C66D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002C6730; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002C6730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6730; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1325u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002C6748; } }
    c.budget -= 1;
L_002C6730:
    set32(c.r[7], c.r[7].w[0] + 18u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C66D8u | kUnwind; return; } goto L_002C66D8; } }
L_002C6740:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002C6748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 27664u)));
    set32(c.r[4], 0u - 2u);
    set32(c.r[8], c.r[8].w[0] + 27664u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C6850; } }
    set32(c.r[3], 0u - 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
L_002C6778:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[10], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[10].w[0] + 13324u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13324u)));
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002C6840; } }
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[3].d[0];  if (t) { goto L_002C67C8; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 4u)));
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 3);
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1324u)));
    c.budget -= 10;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002C6840; } }
    c.budget -= 1;
L_002C67C8:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[3].d[0];  if (t) { goto L_002C6800; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 3);
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1325u)));
    c.r[1].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C6840; } }
L_002C6800:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[3].d[0];  if (t) { goto L_002C6838; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 12u)));
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 3);
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[10].w[0] << 2);
    set32(c.r[5], c.r[11].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1326u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C6840; } }
    c.budget -= 1;
L_002C6838:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 2;
L_002C6840:
    set32(c.r[8], c.r[8].w[0] + 20u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6778u | kUnwind; return; } goto L_002C6778; } }
L_002C6850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6860:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 27664u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002C6A10; } }
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 21616u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0071[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C68A0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u - 1u);
    c.r[11].d[0] = 0ull + 0ull;
    st16((c.r[6].w[0] + 48u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 18u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 19u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 104u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[8], c.r[7].w[0] + 104u);  if (t) { goto L_002C6900; } }
L_002C68E0:
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 104u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C68E0u | kUnwind; return; } goto L_002C68E0; } }
    c.budget -= 1;
L_002C6900:
    set32(c.r[7], c.r[11].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], 0u - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002C6A10; } }
    c.budget -= 1;
L_002C6938:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002C6A10; } }
L_002C6948:
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] - 21232u);
    set32(c.r[8], ld32((c.r[7].w[0] + 100u)));
    c.budget -= 6;
L_002C6960:
    set32(c.r[5], ld32((c.r[9].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C6980; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[5].d[0] = c.r[6].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6960u | kUnwind; return; } goto L_002C6960; } }
L_002C6980:
    set32(c.r[5], ld32((c.r[7].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002C6998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C69A0; } }
    c.budget -= 1;
L_002C6998:
    set32(c.r[5], c.r[6].w[0] - 1u);
    st8((c.r[7].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_002C69A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 25u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C69D0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002C69E0; } }
L_002C69D0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], c.r[5].w[0] + 14u);
    st16((c.r[3].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
L_002C69E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C6A10; } }
L_002C69F0:
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[3].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
L_002C6A10:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 13324u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002C6A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));  if (t) { goto L_002C6A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C6C90; } }
    c.budget -= 1;
L_002C6A80:
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], 0u + 128u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 24u));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; c.r[4].d[0] = c.r[7].d[0] & 128ull;  if (t) { goto L_002C6B00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] << 56;  if (t) { goto L_002C6AD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] - 22095u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002C6B00; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002C6AD0; } }
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C6AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C6C90; } }
L_002C6AD8:
    c.r[4].d[0] = c.r[8].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002C6B00; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002C6AF8; } }
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C6AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C6C90; } }
L_002C6B00:
    c.r[6].d[0] = c.r[8].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - 22095u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[4], c.r[5].w[0] - 133u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 135u);  if (t) { goto L_002C6B40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002C6B70; } }
    c.budget -= 1;
L_002C6B40:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[4], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 34u);  if (t) { goto L_002C6B58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002C6B70; } }
L_002C6B58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002C6B68; } }
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C6B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C6C90; } }
L_002C6B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B78u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002C6B78u) [[unlikely]] return; }
L_002C6B78:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C6C20; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C6BE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6C88; } }
L_002C6BA8:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 131u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 134u);  if (t) { goto L_002C6BC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C6C88; } }
L_002C6BC0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C6BD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002C6BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C6C90; } }
L_002C6BE0:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] - 129u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 135u);  if (t) { goto L_002C6C00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C6C88; } }
    c.budget -= 1;
L_002C6C00:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C6C18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002C6C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C6C90; } }
L_002C6C20:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] - 129u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 135u);  if (t) { goto L_002C6C40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C6C60; } }
    c.budget -= 1;
L_002C6C40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C6C58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002C6C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C6C90; } }
L_002C6C60:
    set32(c.r[2], 0u + 132u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C6C88; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C6C80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C6C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C6C90; } }
L_002C6C88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C6C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C6CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CE0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002C6CE0u) [[unlikely]] return; }
L_002C6CE0:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C6D10; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C6D10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6D18; } }
L_002C6D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C6D20; } }
L_002C6D18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C6D20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C6D30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C6D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6D98; } }
    c.budget -= 1;
L_002C6D50:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C6D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6D98; } }
L_002C6D80:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C6D98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6DA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C6DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6E00; } }
    c.budget -= 1;
L_002C6DC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C6DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6E00; } }
L_002C6DD8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C6DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6E00; } }
    c.budget -= 1;
L_002C6DF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002C6E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6E10:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_002C6E20:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[4].d[0] = c.r[7].sd[0] < 53ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 124u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 184u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 224u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 244u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 160u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6E20u | kUnwind; return; } goto L_002C6E20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 124u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 184u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002C6EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13674u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 104u);
    c.budget -= 14;
L_002C6F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F20u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0071(c, 193u, depth + 1u); else { c.pc = 0x002C6FA0u; return; } if (c.pc != 0x002C6F20u) [[unlikely]] return; }
L_002C6F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6F50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 10;
L_002C6F50:
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6F18u | kUnwind; return; } goto L_002C6F18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 369u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F88u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9u)));  if (depth < kMaxDepth) unit_0071(c, 153u, depth + 1u); else { c.pc = 0x002C5EE0u; return; } if (c.pc != 0x002C6F88u) [[unlikely]] return; }
L_002C6F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C6FA0:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 22094u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6FD4u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C6FD4u) [[unlikely]] return; }
L_002C6FD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C6FF0; } }
    c.budget -= 1;
L_002C6FE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C6FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C7000:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4520000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 14172u));
    c.f[1] = ld32((c.r[4].w[0] + 14164u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002C7028; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C7028:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7030:
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 13674u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[3].w[0] + 104u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_002C7058:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002C7080; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C7090; } }
    c.budget -= 1;
L_002C7080:
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7058u | kUnwind; return; } goto L_002C7058; } }
L_002C7090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C70A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 20496u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 5u);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_002C70E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70D4u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C70D4u) [[unlikely]] return; }
L_002C70D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C70E0; } }
    set32(c.r[16], 0u + 32u);
    c.budget -= 1;
L_002C70E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002C7110; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7104u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C7104u) [[unlikely]] return; }
L_002C7104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7110; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 1;
L_002C7110:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C7130:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] - 20432u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_002C7160:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7194u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7194u) [[unlikely]] return; }
L_002C7194:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C71A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C71A0u) [[unlikely]] return; }
L_002C71A0:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    set32(c.r[18], c.r[19].w[0] << 3);
    set32(c.r[16], c.r[29].w[0] + 180u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[29].w[0] + 184u);
    set32(c.r[22], c.r[29].w[0] + 196u);
    set32(c.r[23], c.r[29].w[0] + 200u);
    c.budget -= 9;
L_002C71D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7338; } }
    set32(c.r[20], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C7338; } }
L_002C71F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    c.r[30].d[0] = c.r[3].d[0] << 48;
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 48);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], c.r[30].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_002C7320; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.f[2] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 13680u)));
    c.f[0] = ld32((c.r[2].w[0] + 14172u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 14176u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 13682u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[21].w[0]), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[0] = ld32((c.r[2].w[0] + 14164u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 14168u));
    st32((c.r[22].w[0]), c.f[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C72B4u); st32((c.r[23].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x002C72B4u) [[unlikely]] return; }
L_002C72B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C7320; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[4], c.r[30].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[5].w[0] + 452u), static_cast<std::uint16_t>(c.r[30].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    st16((c.r[5].w[0] + 454u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[3].w[0] + 450u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 6u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 456u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 449u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C7388; } }
L_002C7320:
    set32(c.r[20], c.r[20].w[0] + 30u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C71F8u | kUnwind; return; } goto L_002C71F8; } }
    c.budget -= 1;
L_002C7338:
    set32(c.r[4], 0u + 1u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C734Cu); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C734Cu) [[unlikely]] return; }
L_002C734C:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C71D0u | kUnwind; return; } goto L_002C71D0; } }
L_002C7358:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u - 1u);
    st16((c.r[3].w[0] + 452u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[3].w[0] + 454u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[3].w[0] + 450u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 456u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 449u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 12;
L_002C7388:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002C73C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C73DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C73DCu) [[unlikely]] return; }
L_002C73DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C73E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C73E8u) [[unlikely]] return; }
L_002C73E8:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C75A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    set32(c.r[16], c.r[18].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_002C7408:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 13677u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 13678u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002C74C8; } }
    c.budget -= 1;
L_002C7438:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C74B8; } }
    set32(c.r[3], c.r[16].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    set32(c.r[6], c.r[3].w[0] + 13677u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13677u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7490; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002C7490:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 13678u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13678u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C74B8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002C74B8:
    set32(c.r[2], c.r[2].w[0] + 30u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7438u | kUnwind; return; } goto L_002C7438; } }
L_002C74C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7508; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 13674u)));
    st16((c.r[5].w[0] + 13682u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13669u)));
    st8((c.r[3].w[0] + 13677u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13670u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 13678u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C7560; } }
L_002C7508:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_002C7528; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002C7528; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002C7540; } }
    c.budget -= 1;
L_002C7528:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13677u)));
    set32(c.r[2], 0u - 5u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 13682u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C7560; } }
    c.budget -= 1;
L_002C7540:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 13674u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13670u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13677u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 5u);
    st16((c.r[5].w[0] + 13682u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002C7560:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 13682u)));
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13678u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7590u); st16((c.r[2].w[0] + 458u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7590u) [[unlikely]] return; }
L_002C7590:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7408u | kUnwind; return; } goto L_002C7408; } }
    c.budget -= 1;
L_002C75A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C75C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C7620; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C7608; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C75F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7638; } }
L_002C75F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C7600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7638; } }
L_002C7600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_002C7638; } }
L_002C7608:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_002C7618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7638; } }
L_002C7618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 41u);  if (t) { goto L_002C7638; } }
L_002C7620:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 41u);  if (t) { goto L_002C7630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7638; } }
L_002C7630:
    set32(c.r[2], 0u + 61u);
    c.budget -= 2;
L_002C7638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7650u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7650u) [[unlikely]] return; }
L_002C7650:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C765Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C765Cu) [[unlikely]] return; }
L_002C765C:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], c.r[9].w[0] << 3);  if (t) { goto L_002C7710; } }
L_002C7668:
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[6], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_002C76F0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 13682u)));
    c.f[3] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 13677u)));
    c.f[5] = ld32((c.r[7].w[0] + 14176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.f[4] = ld32((c.r[7].w[0] + 14168u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 13678u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    c.f[0] = fp::add(c.f[5], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_002C76F0; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C76F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 13674u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_002C7710; } }
    c.budget -= 1;
L_002C76F0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7700u); set32(c.r[9], c.r[9].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7700u) [[unlikely]] return; }
L_002C7700:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7668u | kUnwind; return; } goto L_002C7668; } }
    c.budget -= 1;
L_002C7710:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C7720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9680u)));
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[0];  if (t) { goto L_002C7768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2400000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C7788; } }
    c.budget -= 1;
L_002C7768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.budget -= 8;
L_002C7788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9682u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xC2400000u);  if (t) { goto L_002C77C8; } }
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C77E8; } }
    c.budget -= 1;
L_002C77C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 8;
L_002C77E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_002C7808; } }
    c.f[2] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7810; } }
L_002C7808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 2;
L_002C7810:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7820; } }
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 1;
L_002C7820:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7830; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_002C7830:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7840; } }
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.budget -= 1;
L_002C7840:
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7850; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.budget -= 1;
L_002C7850:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 14164u));
    c.f[3] = fp::add(c.f[3], c.f[1]);
    st32((c.r[3].w[0] + 14164u), c.f[3]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[3] = ld32((c.r[2].w[0] + 14168u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[2].w[0] + 14168u), c.f[3]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[3] = ld32((c.r[2].w[0] + 14164u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 14164u);  if (t) { goto L_002C7890; } }
    st32((c.r[3].w[0]), c.f[2]);
    c.budget -= 1;
L_002C7890:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 14164u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 14164u);  if (t) { goto L_002C78B0; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.budget -= 1;
L_002C78B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 14168u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[3].w[0] + 14168u);  if (t) { goto L_002C78D0; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.budget -= 1;
L_002C78D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 14168u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 14168u);  if (t) { goto L_002C78F0; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.budget -= 1;
L_002C78F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 14172u));
    st32((c.r[3].w[0] + 508u), c.f[3]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[3] = ld32((c.r[3].w[0] + 14176u));
    st32((c.r[2].w[0] + 512u), c.f[3]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.f[3] = ld32((c.r[3].w[0] + 14164u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_002C7940; } }
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C7950; } }
L_002C7940:
    c.f[2] = ld32((c.r[3].w[0] + 14172u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 14172u), c.f[1]);
    c.budget -= 4;
L_002C7950:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 14168u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_002C7980; } }
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C7990; } }
L_002C7980:
    c.f[1] = ld32((c.r[3].w[0] + 14176u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 14176u), c.f[0]);
    c.budget -= 4;
L_002C7990:
    c.budget -= 2;
    {  goto L_002C79A0; }
L_002C79A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79B0u);  if (depth < kMaxDepth) unit_0071(c, 224u, depth + 1u); else { c.pc = 0x002C7A80u; return; } if (c.pc != 0x002C79B0u) [[unlikely]] return; }
L_002C79B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 460u)));
    c.f[0] = ld32((c.r[3].w[0] + 14172u));
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[3].w[0] + 14172u);  if (t) { goto L_002C79F0; } }
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 2;
L_002C79F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4C30000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 14172u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 14172u);  if (t) { goto L_002C7A10; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 1;
L_002C7A10:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42900000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 14176u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 14176u);  if (t) { goto L_002C7A30; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 1;
L_002C7A30:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.f[1] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 458u)));
    c.f[0] = ld32((c.r[3].w[0] + 14176u));
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[3].w[0] + 14176u);  if (t) { goto L_002C7A70; } }
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 2;
L_002C7A70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C7A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 90u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A9Cu); st16((c.r[2].w[0] + 460u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7A9Cu) [[unlikely]] return; }
L_002C7A9C:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7AA8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7AA8u) [[unlikely]] return; }
L_002C7AA8:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_002C7B58; } }
    set32(c.r[4], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11984u);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_002C7AC0:
    set32(c.r[10], ld32((c.r[8].w[0])));
    set32(c.r[6], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002C7B38; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 1;
L_002C7AD8:
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7B28; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < 71ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7B28; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 460u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002C7B58; } }
L_002C7B28:
    set32(c.r[10], c.r[10].w[0] + 30u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7AD8u | kUnwind; return; } goto L_002C7AD8; } }
L_002C7B38:
    set32(c.r[4], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7B48u); set32(c.r[9], c.r[9].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7B48u) [[unlikely]] return; }
L_002C7B48:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7AC0u | kUnwind; return; } goto L_002C7AC0; } }
    c.budget -= 1;
L_002C7B58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C7B70:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 14181u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = ld16((c.r[1].w[0] + 9604u));  if (t) { goto L_002C7B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C7C18; } }
L_002C7B90:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7BD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C7BC8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C7BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C7C18; } }
L_002C7BD0:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7C10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C7C08; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C7C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C7C18; } }
L_002C7C10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C7C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 372u)));
    set32(c.r[2], c.r[2].w[0] + 2048u);
    st32((c.r[3].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 372u));
    st32((c.r[3].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C50u); set32(c.r[4], ld32((c.r[2].w[0] + 372u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x002C7C50u) [[unlikely]] return; }
L_002C7C50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 376u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C7C80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 372u)));
    set32(c.r[2], c.r[2].w[0] + 2048u);
    st32((c.r[3].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 372u));
    st32((c.r[3].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7CB0u); set32(c.r[4], ld32((c.r[2].w[0] + 372u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x002C7CB0u) [[unlikely]] return; }
L_002C7CB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 464u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C7CF0:
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3C080000u);
    c.r[5].d[0] = c.r[4].d[0] | 34953ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F880000u);
    c.r[4].d[0] = c.r[3].d[0] | 34953ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = ld32((c.r[6].w[0] + 468u));
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[6].w[0] + 468u), c.f[2]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[2] = ld32((c.r[3].w[0] + 472u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 472u), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[3].w[0] + 468u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 468u);  if (t) { goto L_002C7D48; } }
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_002C7D48:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 472u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[3].w[0] + 472u);  if (t) { goto L_002C7D68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002C7D68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7D70:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 22093u);
    set32(c.r[3], 0u + 29u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_002C7DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7DB0; } }
    c.budget -= 1;
L_002C7DA0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C7DB0; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 1;
L_002C7DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7DC0:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 22092u);
    set32(c.r[3], 0u + 74u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_002C7E60; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 73u);  if (t) { goto L_002C7E60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7E60; } }
    set32(c.r[3], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 29u);  if (t) { goto L_002C7E50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7E38; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7E68; } }
L_002C7E20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002C7E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 23u);  if (t) { goto L_002C7E68; } }
    c.budget -= 1;
L_002C7E38:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C7E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 52u);  if (t) { goto L_002C7E68; } }
    c.budget -= 1;
L_002C7E50:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002C7E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 51u);  if (t) { goto L_002C7E68; } }
L_002C7E60:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_002C7E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7E70:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 444u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C7F10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7ED8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7F70; } }
    c.budget -= 1;
L_002C7EA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 61u)));
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    st8((c.r[5].w[0] + 446u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    st8((c.r[4].w[0] + 447u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 63u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 448u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C7F70; } }
    c.budget -= 1;
L_002C7ED8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[5].w[0] + 436u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] - 23440u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 57u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[5].w[0] + 440u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 444u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 444u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_002C7F10:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] - 23440u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[5].w[0] + 440u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 57u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 440u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[0] = ld32((c.r[3].w[0] + 440u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[3].w[0] + 440u);  if (t) { goto L_002C7F70; } }
    st32((c.r[4].w[0]), c.f[3]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 444u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002C7F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F98u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7F98u) [[unlikely]] return; }
L_002C7F98:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FA4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C7FA4u) [[unlikely]] return; }
L_002C7FA4:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0072(c, 6u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002C7FC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0072(c, 4u, depth); } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0072(c, 4u, depth); } }
L_002C7FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[10].d[0];  if (t) { [[clang::musttail]] return unit_0072(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0072(c, 3u, depth); } }
    [[clang::musttail]] return unit_0072(c, 2u, depth);
}

}
