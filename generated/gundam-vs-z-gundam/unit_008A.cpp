#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135,
    0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00328000;
    case 2u: goto L_00328090;
    case 3u: goto L_003280B0;
    case 4u: goto L_003280E0;
    case 5u: goto L_003280E8;
    case 6u: goto L_00328100;
    case 7u: goto L_00328110;
    case 8u: goto L_00328128;
    case 9u: goto L_00328190;
    case 10u: goto L_003281EC;
    case 11u: goto L_003281F4;
    case 12u: goto L_00328224;
    case 13u: goto L_00328240;
    case 14u: goto L_00328258;
    case 15u: goto L_00328308;
    case 16u: goto L_00328330;
    case 17u: goto L_00328340;
    case 18u: goto L_00328380;
    case 19u: goto L_003283A8;
    case 20u: goto L_00328450;
    case 21u: goto L_00328510;
    case 22u: goto L_003287F8;
    case 23u: goto L_00328880;
    case 24u: goto L_003288E0;
    case 25u: goto L_003288FC;
    case 26u: goto L_00328910;
    case 27u: goto L_00328920;
    case 28u: goto L_00328938;
    case 29u: goto L_00328970;
    case 30u: goto L_00328990;
    case 31u: goto L_003289A0;
    case 32u: goto L_003289F0;
    case 33u: goto L_00328C2C;
    case 34u: goto L_00328C40;
    case 35u: goto L_00328C9C;
    case 36u: goto L_00328CB0;
    case 37u: goto L_00328CBC;
    case 38u: goto L_00328CDC;
    case 39u: goto L_00328D00;
    case 40u: goto L_00328D18;
    case 41u: goto L_00328D2C;
    case 42u: goto L_00328D34;
    case 43u: goto L_00328D54;
    case 44u: goto L_00328D70;
    case 45u: goto L_00328D80;
    case 46u: goto L_00328D90;
    case 47u: goto L_00328E48;
    case 48u: goto L_00328E60;
    case 49u: goto L_00328EB0;
    case 50u: goto L_00328EE0;
    case 51u: goto L_00328F50;
    case 52u: goto L_00328F6C;
    case 53u: goto L_00328F90;
    case 54u: goto L_00328FF0;
    case 55u: goto L_00329020;
    case 56u: goto L_0032906C;
    case 57u: goto L_0032908C;
    case 58u: goto L_003290B0;
    case 59u: goto L_003290C0;
    case 60u: goto L_003290E0;
    case 61u: goto L_00329174;
    case 62u: goto L_00329188;
    case 63u: goto L_00329198;
    case 64u: goto L_003291C0;
    case 65u: goto L_0032923C;
    case 66u: goto L_00329250;
    case 67u: goto L_00329270;
    case 68u: goto L_003292B8;
    case 69u: goto L_003292F4;
    case 70u: goto L_00329374;
    case 71u: goto L_00329380;
    case 72u: goto L_003293A4;
    case 73u: goto L_003293C4;
    case 74u: goto L_003293E0;
    case 75u: goto L_00329404;
    case 76u: goto L_00329424;
    case 77u: goto L_00329488;
    case 78u: goto L_003296A0;
    case 79u: goto L_003296C0;
    case 80u: goto L_003296DC;
    case 81u: goto L_003298D0;
    case 82u: goto L_003298E0;
    case 83u: goto L_003298F0;
    case 84u: goto L_00329960;
    case 85u: goto L_0032999C;
    case 86u: goto L_003299CC;
    case 87u: goto L_003299DC;
    case 88u: goto L_00329A08;
    case 89u: goto L_00329A18;
    case 90u: goto L_00329A2C;
    case 91u: goto L_00329A50;
    case 92u: goto L_00329AA4;
    case 93u: goto L_00329AB4;
    case 94u: goto L_00329AD0;
    case 95u: goto L_00329AE0;
    case 96u: goto L_00329AFC;
    case 97u: goto L_00329B0C;
    case 98u: goto L_00329B2C;
    case 99u: goto L_00329B3C;
    case 100u: goto L_00329B5C;
    case 101u: goto L_00329B6C;
    case 102u: goto L_00329B7C;
    case 103u: goto L_00329BAC;
    case 104u: goto L_00329BD0;
    case 105u: goto L_00329C0C;
    case 106u: goto L_00329C1C;
    case 107u: goto L_00329C28;
    case 108u: goto L_00329C34;
    case 109u: goto L_00329C40;
    case 110u: goto L_00329C50;
    case 111u: goto L_00329C70;
    case 112u: goto L_00329C7C;
    case 113u: goto L_00329CC0;
    case 114u: goto L_00329CFC;
    case 115u: goto L_00329D2C;
    case 116u: goto L_00329D3C;
    case 117u: goto L_00329D68;
    case 118u: goto L_00329D78;
    case 119u: goto L_00329D8C;
    case 120u: goto L_00329DB0;
    case 121u: goto L_00329E04;
    case 122u: goto L_00329E14;
    case 123u: goto L_00329E30;
    case 124u: goto L_00329E40;
    case 125u: goto L_00329E5C;
    case 126u: goto L_00329E6C;
    case 127u: goto L_00329E8C;
    case 128u: goto L_00329E9C;
    case 129u: goto L_00329EBC;
    case 130u: goto L_00329ECC;
    case 131u: goto L_00329EDC;
    case 132u: goto L_00329F0C;
    case 133u: goto L_00329F30;
    case 134u: goto L_00329F6C;
    case 135u: goto L_00329F7C;
    case 136u: goto L_00329F88;
    case 137u: goto L_00329F94;
    case 138u: goto L_00329FA0;
    case 139u: goto L_00329FB0;
    case 140u: goto L_00329FBC;
    case 141u: goto L_0032A000;
    case 142u: goto L_0032A0A0;
    case 143u: goto L_0032A0D0;
    case 144u: goto L_0032A0E8;
    case 145u: goto L_0032A100;
    case 146u: goto L_0032A150;
    case 147u: goto L_0032A160;
    case 148u: goto L_0032A178;
    case 149u: goto L_0032A1A0;
    case 150u: goto L_0032A1B0;
    case 151u: goto L_0032A1C0;
    case 152u: goto L_0032A220;
    case 153u: goto L_0032A240;
    case 154u: goto L_0032A278;
    case 155u: goto L_0032A2F8;
    case 156u: goto L_0032A350;
    case 157u: goto L_0032A378;
    case 158u: goto L_0032A388;
    case 159u: goto L_0032A3C0;
    case 160u: goto L_0032A3D8;
    case 161u: goto L_0032A420;
    case 162u: goto L_0032A460;
    case 163u: goto L_0032A4A0;
    case 164u: goto L_0032A530;
    case 165u: goto L_0032A5F0;
    case 166u: goto L_0032A61C;
    case 167u: goto L_0032A648;
    case 168u: goto L_0032A678;
    case 169u: goto L_0032A6E8;
    case 170u: goto L_0032A6F8;
    case 171u: goto L_0032A730;
    case 172u: goto L_0032A748;
    case 173u: goto L_0032A760;
    case 174u: goto L_0032A80C;
    case 175u: goto L_0032A8F8;
    case 176u: goto L_0032A924;
    case 177u: goto L_0032A9C4;
    case 178u: goto L_0032A9E0;
    case 179u: goto L_0032AA00;
    case 180u: goto L_0032AA20;
    case 181u: goto L_0032AA50;
    case 182u: goto L_0032AA7C;
    case 183u: goto L_0032AAA8;
    case 184u: goto L_0032AAC0;
    case 185u: goto L_0032AAC8;
    case 186u: goto L_0032AB98;
    case 187u: goto L_0032ABA8;
    case 188u: goto L_0032ACA0;
    case 189u: goto L_0032ACD0;
    case 190u: goto L_0032AD08;
    case 191u: goto L_0032AD30;
    case 192u: goto L_0032AD68;
    case 193u: goto L_0032AD90;
    case 194u: goto L_0032ADB0;
    case 195u: goto L_0032AEB8;
    case 196u: goto L_0032AEE0;
    case 197u: goto L_0032AF10;
    case 198u: goto L_0032AF38;
    case 199u: goto L_0032AF58;
    case 200u: goto L_0032AFE0;
    case 201u: goto L_0032AFF8;
    case 202u: goto L_0032B014;
    case 203u: goto L_0032B030;
    case 204u: goto L_0032B068;
    case 205u: goto L_0032B07C;
    case 206u: goto L_0032B098;
    case 207u: goto L_0032B0DC;
    case 208u: goto L_0032B0EC;
    case 209u: goto L_0032B10C;
    case 210u: goto L_0032B11C;
    case 211u: goto L_0032B134;
    case 212u: goto L_0032B140;
    case 213u: goto L_0032B14C;
    case 214u: goto L_0032B164;
    case 215u: goto L_0032B16C;
    case 216u: goto L_0032B174;
    case 217u: goto L_0032B17C;
    case 218u: goto L_0032B194;
    case 219u: goto L_0032B1BC;
    case 220u: goto L_0032B1CC;
    case 221u: goto L_0032B1D4;
    case 222u: goto L_0032B1DC;
    case 223u: goto L_0032B1F4;
    case 224u: goto L_0032B250;
    case 225u: goto L_0032B26C;
    case 226u: goto L_0032B33C;
    case 227u: goto L_0032B348;
    case 228u: goto L_0032B354;
    case 229u: goto L_0032B380;
    case 230u: goto L_0032B434;
    case 231u: goto L_0032B43C;
    case 232u: goto L_0032B460;
    case 233u: goto L_0032B590;
    case 234u: goto L_0032B5F0;
    case 235u: goto L_0032B610;
    case 236u: goto L_0032B660;
    case 237u: goto L_0032B730;
    case 238u: goto L_0032B750;
    case 239u: goto L_0032B790;
    case 240u: goto L_0032B7A8;
    case 241u: goto L_0032B820;
    case 242u: goto L_0032B858;
    case 243u: goto L_0032B92C;
    case 244u: goto L_0032B938;
    case 245u: goto L_0032B944;
    case 246u: goto L_0032B958;
    case 247u: goto L_0032BBCC;
    case 248u: goto L_0032BBD4;
    case 249u: goto L_0032BC10;
    case 250u: goto L_0032BC50;
    case 251u: goto L_0032BC90;
    case 252u: goto L_0032BCD4;
    case 253u: goto L_0032BD00;
    case 254u: goto L_0032BD10;
    case 255u: goto L_0032BD28;
    case 256u: goto L_0032BD44;
    case 257u: goto L_0032BD50;
    case 258u: goto L_0032BD5C;
    case 259u: goto L_0032BD80;
    case 260u: goto L_0032BD8C;
    case 261u: goto L_0032BDAC;
    case 262u: goto L_0032BDB8;
    case 263u: goto L_0032BDD0;
    case 264u: goto L_0032BE20;
    case 265u: goto L_0032BE40;
    case 266u: goto L_0032BE78;
    case 267u: goto L_0032BF88;
    case 268u: goto L_0032BFB8;
    case 269u: goto L_0032BFD0;
    case 270u: goto L_0032BFE0;
    default: bad_entry(c, 0x00328000u); return;
    }
L_00328000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10296u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 10290u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 10184u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10160u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10168u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10158u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10159u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10157u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10168u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[2], c.r[2].w[0] >> 3);
    st32((c.r[1].w[0] - 10164u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_00328090; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10180u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 10168u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328090u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0089(c, 343u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x00328090u) [[unlikely]] return; }
L_00328090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10180u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 10184u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003280B0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003280B0u) [[unlikely]] return; }
L_003280B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] - 10184u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10157u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10304u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003280E0u); set32(c.r[6], c.r[2].w[0] >> 3);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003280E0u) [[unlikely]] return; }
L_003280E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003280E8u);  if (depth < kMaxDepth) unit_0089(c, 359u, depth + 1u); else { c.pc = 0x00327D90u; return; } if (c.pc != 0x003280E8u) [[unlikely]] return; }
L_003280E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00328100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328110u);  if (depth < kMaxDepth) unit_008A(c, 24u, depth + 1u); else { c.pc = 0x003288E0u; return; } if (c.pc != 0x00328110u) [[unlikely]] return; }
L_00328110:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10448u);
    set32(c.r[4], c.r[4].w[0] - 10576u);
    c.budget -= 6;
L_00328128:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328128u | kUnwind; return; } goto L_00328128; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00328190:
    set32(c.r[29], c.r[29].w[0] - 2144u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 2072u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 2088u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 2096u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 2104u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 2112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 2120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 2128u), c.r[10].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 2136u), c.r[11].d[0]);  if (t) { goto L_003281CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003281D8; } }
L_003281CC:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_003281D8:
    set32(c.r[5], ld32((c.r[29].w[0] + 2072u)));
    set32(c.r[2], c.r[29].w[0] + 2144u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003281ECu); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0008(c, 321u, depth + 1u); else { c.pc = 0x00123268u; return; } if (c.pc != 0x003281ECu) [[unlikely]] return; }
L_003281EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003281F4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003281F4u) [[unlikely]] return; }
L_003281F4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], 0u + 10u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 4560u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328224u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00328224u) [[unlikely]] return; }
L_00328224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2144u);  c.pc = t; return; }
L_00328240:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00328328; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[14], c.r[6].w[0] - 8u);  if (t) { goto L_003282F8; } }
L_00328258:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[7].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[13].w[0] + 1u);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[12].w[0] + 1u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[11].w[0] + 1u);
    c.r[7].d[0] = c.r[3].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[10].w[0] + 1u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 39;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328258u | kUnwind; return; } goto L_00328258; } }
    c.budget -= 1;
L_003282F8:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00328328; } }
    c.budget -= 1;
L_00328308:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328308u | kUnwind; return; } goto L_00328308; } }
L_00328328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328330:
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_00328340:
    set32(c.r[3], c.r[2].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00328360; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_00328370; } }
    c.budget -= 1;
L_00328360:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328340u | kUnwind; return; } goto L_00328340; } }
L_00328370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328380:
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_00328440; } }
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u + 2u);
    set32(c.r[10], 0u + 10u);
    set32(c.r[11], 0u + 19u);
    set32(c.r[12], 0u + 27u);
    set32(c.r[13], 0u + 20u);
    c.budget -= 6;
L_003283A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[13].d[0];  if (t) { goto L_00328418; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[12].d[0];  if (t) { goto L_00328408; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[11].d[0];  if (t) { goto L_00328408; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[10].d[0];  if (t) { goto L_003283F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[9].d[0];  if (t) { goto L_003283F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[8].d[0];  if (t) { goto L_003283E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003283E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328428; } }
L_003283E8:
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00328428; } }
L_003283F8:
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00328428; } }
L_00328408:
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00328428; } }
    c.budget -= 1;
L_00328418:
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00328428:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[3].d[0] = c.r[14].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003283A8u | kUnwind; return; } goto L_003283A8; } }
    c.budget -= 1;
L_00328440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 20u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_003284D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003284C0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003284B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003284B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003284A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003284A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003284D8; } }
L_003284A0:
    set32(c.r[14], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], 0u + 32u);  if (t) { goto L_003284D8; } }
    c.budget -= 1;
L_003284B0:
    set32(c.r[14], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_003284D8; } }
    c.budget -= 1;
L_003284C0:
    set32(c.r[14], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], 0u + 64u);  if (t) { goto L_003284D8; } }
    c.budget -= 1;
L_003284D0:
    set32(c.r[14], 0u + 128u);
    c.r[13].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 2;
L_003284D8:
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00328870; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[6].w[0] - 8u);  if (t) { goto L_003287E0; } }
    c.r[8].d[0] = c.r[13].d[0] << 48;
    c.r[7].d[0] = c.r[14].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 4;
L_00328510:
    c.r[5].d[0] = c.r[11].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[12].d[0] << 48;
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[15], c.r[4].w[0] + c.r[7].w[0]);
    mmi::div(c, 1, c.r[3].w[0], c.r[8].w[0]);
    set32(c.r[16], c.r[15].w[0] - 1u);
    set32(c.r[10], c.r[10].w[0] + 8u);
    c.r[15].d[0] = c.lo.d[1];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    mmi::div(c, 0, c.r[16].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[16].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[15].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    mmi::div(c, 1, c.r[15].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[24].d[0] = c.lo.d[1];
    set32(c.r[15], c.r[16].w[0] << 5);
    mmi::div(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[15].d[0] = c.r[15].d[0] << 48;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = c.lo.d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[15], c.r[3].w[0] - 1u);
    mmi::div(c, 0, c.r[15].w[0], c.r[7].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    mmi::mult(c, 1, c.r[24].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[1];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[25].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[16].w[0] << 5);
    c.r[15].d[0] = c.r[15].d[0] << 48;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    mmi::div(c, 1, c.r[3].w[0], c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[24].d[0] = c.lo.d[1];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    mmi::mult(c, 0, c.r[25].w[0], c.r[24].w[0]);
    c.r[24].d[0] = c.lo.d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[16], c.r[3].w[0] - 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    mmi::div(c, 1, c.r[16].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[24], c.r[24].w[0] << 5);
    set32(c.r[15], c.r[3].w[0] + c.r[8].w[0]);
    c.r[24].d[0] = c.r[24].d[0] << 48;
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[16], c.r[15].w[0] - 1u);
    c.r[3].d[0] = c.lo.d[1];
    mmi::div(c, 0, c.r[16].w[0], c.r[8].w[0]);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[15].d[0] = c.r[15].d[0] << 48;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    set32(c.r[15], c.r[15].w[0] + c.r[7].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[15].w[0] - 1u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[15].d[0] = c.r[15].d[0] << 48;
    mmi::div(c, 0, c.r[16].w[0], c.r[7].w[0]);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    set32(c.r[15], c.r[15].w[0] + c.r[8].w[0]);
    mmi::mult(c, 1, c.r[3].w[0], c.r[25].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[24], c.r[15].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[15].d[0] = c.r[15].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[15].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[16].d[0] = c.lo.d[0];
    mmi::div(c, 1, c.r[24].w[0], c.r[8].w[0]);
    c.r[25].d[0] = c.lo.d[1];
    set32(c.r[24], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[25].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[15], c.r[3].w[0] + c.r[8].w[0]);
    mmi::div(c, 1, c.r[24].w[0], c.r[7].w[0]);
    set32(c.r[25], c.r[25].w[0] << 5);
    c.r[25].d[0] = c.r[25].d[0] << 48;
    c.r[25].d[0] = static_cast<std::uint64_t>(c.r[25].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[25].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[24], c.r[15].w[0] - 1u);
    c.r[3].d[0] = c.lo.d[1];
    mmi::div(c, 0, c.r[24].w[0], c.r[8].w[0]);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 6));
    c.r[15].d[0] = c.r[15].d[0] << 48;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 7));
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[15], c.r[15].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    set32(c.r[24], c.r[15].w[0] - 1u);
    set32(c.r[15], c.r[4].w[0] - 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 6));
    mmi::div(c, 0, c.r[24].w[0], c.r[7].w[0]);
    mmi::mult(c, 1, c.r[3].w[0], c.r[25].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[25].d[0] = c.lo.d[0];
    mmi::div(c, 1, c.r[3].w[0], c.r[8].w[0]);
    c.r[24].d[0] = c.lo.d[1];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 7));
    mmi::mult(c, 0, c.r[25].w[0], c.r[24].w[0]);
    c.r[24].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] - 1u);
    mmi::div(c, 1, c.r[15].w[0], c.r[7].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    c.r[12].d[0] = c.r[3].d[0] << 48;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    c.r[11].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[15], c.r[24].w[0] << 5);
    mmi::div(c, 0, c.r[4].w[0], c.r[8].w[0]);
    c.r[15].d[0] = c.r[15].d[0] << 48;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[4].w[0] << 5);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 179;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328510u | kUnwind; return; } goto L_00328510; } }
    c.budget -= 1;
L_003287E0:
    c.r[1].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = c.r[13].d[0] << 48;  if (t) { goto L_00328870; } }
    c.r[7].d[0] = c.r[14].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 3;
L_003287F8:
    c.r[3].d[0] = c.r[12].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[11].d[0] << 48;
    mmi::div(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.lo.d[0];
    mmi::div(c, 1, c.r[3].w[0], c.r[8].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 1));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[3].d[0] << 48;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 1));
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    c.r[11].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] << 5);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003287F8u | kUnwind; return; } goto L_003287F8; } }
L_00328870:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00328880:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00328898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003288D0; } }
L_00328898:
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003288C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003288C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003288C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003288D0; } }
L_003288C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003288D0; } }
L_003288C8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_003288D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003288E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 8336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003288FCu); set32(c.r[6], 0u + 1792u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003288FCu) [[unlikely]] return; }
L_003288FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 10128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328910u); set32(c.r[6], 0u + 1792u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00328910u) [[unlikely]] return; }
L_00328910:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00328920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8336u);
    c.budget -= 6;
L_00328938:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328958; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328938u | kUnwind; return; } goto L_00328938; } }
    c.budget -= 1;
L_00328958:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00328978; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328970u); set32(c.r[4], c.r[4].w[0] - 4544u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00328970u) [[unlikely]] return; }
L_00328970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00328980; } }
L_00328978:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00328980:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00328990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10128u);
    c.budget -= 4;
L_003289A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003289C0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003289A0u | kUnwind; return; } goto L_003289A0; } }
    c.budget -= 1;
L_003289C0:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003289D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003289E0; } }
    c.budget -= 1;
L_003289D8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 2;
L_003289E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003289F0:
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], c.r[2].w[0] - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[8].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 8336u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st8((c.r[16].w[0] + 55u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 29;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00328BC8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00328BB8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00328BA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_00328B20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00328A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328BD0; } }
    c.budget -= 1;
L_00328A98:
    set32(c.r[2], 0u + 20u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_00328ABC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328ABC; } }
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 1;
L_00328ABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00328BD0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_00328ADC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328ADC; } }
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 1;
L_00328ADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00328BD0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00328B00; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00328B00:
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00328B18; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00328B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00328BD0; } }
L_00328B20:
    set32(c.r[2], 0u + 19u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_00328B44; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328B44; } }
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 1;
L_00328B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00328BD0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 63ull;  if (t) { goto L_00328B64; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328B64; } }
    set32(c.r[2], c.r[2].w[0] - 64u);
    c.budget -= 1;
L_00328B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00328BD0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00328B88; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00328B88:
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00328BA0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00328BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00328BD0; } }
L_00328BA8:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00328BD0; } }
    c.budget -= 1;
L_00328BB8:
    st32((c.r[16].w[0] + 32u), c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00328BD0; } }
    c.budget -= 1;
L_00328BC8:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00328BD0:
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328C38; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328C38; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328C38; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328C38; } }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328C38; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328C38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C2Cu); set32(c.r[4], c.r[4].w[0] - 4512u);  if (depth < kMaxDepth) unit_008A(c, 9u, depth + 1u); else { c.pc = 0x00328190u; return; } if (c.pc != 0x00328C2Cu) [[unlikely]] return; }
L_00328C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00328CE8; } }
    c.budget -= 1;
L_00328C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C40u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));  if (depth < kMaxDepth) unit_008A(c, 16u, depth + 1u); else { c.pc = 0x00328330u; return; } if (c.pc != 0x00328C40u) [[unlikely]] return; }
L_00328C40:
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328CA8; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328CA8; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328CA8; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328CA8; } }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328CA8; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00328CA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C9Cu); set32(c.r[4], c.r[4].w[0] - 4448u);  if (depth < kMaxDepth) unit_008A(c, 9u, depth + 1u); else { c.pc = 0x00328190u; return; } if (c.pc != 0x00328C9Cu) [[unlikely]] return; }
L_00328C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00328CE8; } }
    c.budget -= 1;
L_00328CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328CB0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_008A(c, 16u, depth + 1u); else { c.pc = 0x00328330u; return; } if (c.pc != 0x00328CB0u) [[unlikely]] return; }
L_00328CB0:
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328CBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 20u, depth + 1u); else { c.pc = 0x00328450u; return; } if (c.pc != 0x00328CBCu) [[unlikely]] return; }
L_00328CBC:
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328CDCu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));  if (depth < kMaxDepth) unit_008A(c, 18u, depth + 1u); else { c.pc = 0x00328380u; return; } if (c.pc != 0x00328CDCu) [[unlikely]] return; }
L_00328CDC:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00328CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00328D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008B(c, 171u, depth + 1u); else { c.pc = 0x0032E1A0u; return; } if (c.pc != 0x00328D18u) [[unlikely]] return; }
L_00328D18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00328D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D2Cu);  if (depth < kMaxDepth) unit_008B(c, 175u, depth + 1u); else { c.pc = 0x0032E1E0u; return; } if (c.pc != 0x00328D2Cu) [[unlikely]] return; }
L_00328D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 172u, depth + 1u); else { c.pc = 0x0032E1B0u; return; } if (c.pc != 0x00328D34u) [[unlikely]] return; }
L_00328D34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00328D58; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 4384u);
    set32(c.r[5], 0u + 1248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D54u); set32(c.r[6], c.r[6].w[0] - 4368u);  if (depth < kMaxDepth) unit_0005(c, 100u, depth + 1u); else { c.pc = 0x001165C0u; return; } if (c.pc != 0x00328D54u) [[unlikely]] return; }
L_00328D54:
    c.budget -= 1;
L_00328D58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00328D70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_008B(c, 173u, depth); }
L_00328D80:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_008B(c, 174u, depth); }
L_00328D90:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[4].w[0] >> 5);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] - 6992u);  if (t) { goto L_00328DA8; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_00328DA8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00328E18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[8].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17464u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_00328DD0; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00328DD0:
    set32(c.r[3], c.r[3].w[0] - 13440u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_00328DE4; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00328DE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[8].w[0] + c.r[1].w[0]);
    set32(c.r[6], c.r[3].w[0] + 16384u);
    set32(c.r[2], ld32((c.r[1].w[0] + 17468u)));
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00328E48; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328E48; } }
    c.budget -= 1;
L_00328E18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[8].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 17476u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[8].w[0] + 16476u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00328E40; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00328E40:
    set32(c.r[7], c.r[7].w[0] << 2);
    c.budget -= 2;
L_00328E48:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00328E98; } }
    c.budget -= 1;
L_00328E60:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00328E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00328EA8; } }
    c.budget -= 1;
L_00328E80:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328E60u | kUnwind; return; } goto L_00328E60; } }
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328E48u | kUnwind; return; } goto L_00328E48; } }
L_00328E98:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[7].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328E48u | kUnwind; return; } goto L_00328E48; } }
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 1;
L_00328EA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00328EB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00328FC0; } }
    c.budget -= 1;
L_00328EE0:
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_00328FB0; } }
    set32(c.r[4], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8336u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 53u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00328FB0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] ^ 19ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 27ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].sd[0] < 257ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328F80; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008A(c, 46u, depth + 1u); else { c.pc = 0x00328D90u; return; } if (c.pc != 0x00328F50u) [[unlikely]] return; }
L_00328F50:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00328FA8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 46u, depth + 1u); else { c.pc = 0x00328D90u; return; } if (c.pc != 0x00328F6Cu) [[unlikely]] return; }
L_00328F6C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00328FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00328FC8; } }
L_00328F80:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 46u, depth + 1u); else { c.pc = 0x00328D90u; return; } if (c.pc != 0x00328F90u) [[unlikely]] return; }
L_00328F90:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00328FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00328FC8; } }
    c.budget -= 1;
L_00328FA8:
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00328FB0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328EE0u | kUnwind; return; } goto L_00328EE0; } }
L_00328FC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00328FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00328FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8336u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 44u));
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_00329020:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00329060; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00329060; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00329060; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00329090; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00329090; } }
    c.budget -= 1;
L_00329060:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032906Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008A(c, 49u, depth + 1u); else { c.pc = 0x00328EB0u; return; } if (c.pc != 0x0032906Cu) [[unlikely]] return; }
L_0032906C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00329080; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329020u | kUnwind; return; } goto L_00329020; } }
L_00329080:
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032908Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 265u, depth + 1u); else { c.pc = 0x0032BE40u; return; } if (c.pc != 0x0032908Cu) [[unlikely]] return; }
L_0032908C:
    c.budget -= 1;
L_00329090:
    set32(c.r[3], ld32((c.r[28].w[0] - 22672u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 22672u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003290B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003290C0u);  if (depth < kMaxDepth) unit_008B(c, 1u, depth + 1u); else { c.pc = 0x0032C000u; return; } if (c.pc != 0x003290C0u) [[unlikely]] return; }
L_003290C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22676u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 22676u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003290E0:
    set32(c.r[3], c.r[4].w[0] - 1u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[3].w[0] << 3);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[2].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] - 8336u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 10452u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00329130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003291A8; } }
    c.budget -= 1;
L_00329130:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003291A8; } }
    c.budget -= 1;
L_00329148:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003291A8; } }
    c.budget -= 1;
L_00329160:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00329178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329174u);  if (depth < kMaxDepth) unit_008A(c, 45u, depth + 1u); else { c.pc = 0x00328D80u; return; } if (c.pc != 0x00329174u) [[unlikely]] return; }
L_00329174:
    c.budget -= 1;
L_00329178:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329188u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00329188u) [[unlikely]] return; }
L_00329188:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00329198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329198u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x00329198u) [[unlikely]] return; }
L_00329198:
    set32(c.r[3], ld32((c.r[28].w[0] - 22672u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 22672u), c.r[3].w[0]);
    c.budget -= 4;
L_003291A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003291C0:
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003291F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329260; } }
    c.budget -= 1;
L_003291F8:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329260; } }
    c.budget -= 1;
L_00329210:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329260; } }
    c.budget -= 1;
L_00329228:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00329240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032923Cu);  if (depth < kMaxDepth) unit_008A(c, 45u, depth + 1u); else { c.pc = 0x00328D80u; return; } if (c.pc != 0x0032923Cu) [[unlikely]] return; }
L_0032923C:
    c.budget -= 1;
L_00329240:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329250u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00329250u) [[unlikely]] return; }
L_00329250:
    set32(c.r[3], ld32((c.r[28].w[0] - 22676u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 22676u), c.r[3].w[0]);
    c.budget -= 4;
L_00329260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00329270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[2].w[0] >> 16);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], c.r[5].w[0] - 1u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 10128u);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] << 3);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[15], c.r[3].w[0] + c.r[7].w[0]);  if (t) { goto L_003292C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292B8u); set32(c.r[4], c.r[4].w[0] - 4352u);  if (depth < kMaxDepth) unit_008A(c, 9u, depth + 1u); else { c.pc = 0x00328190u; return; } if (c.pc != 0x003292B8u) [[unlikely]] return; }
L_003292B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003293D0; } }
L_003292C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329320; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329310; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329300; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292F4u); set32(c.r[4], c.r[4].w[0] - 4288u);  if (depth < kMaxDepth) unit_008A(c, 9u, depth + 1u); else { c.pc = 0x00328190u; return; } if (c.pc != 0x003292F4u) [[unlikely]] return; }
L_003292F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003293D0; } }
    c.budget -= 1;
L_00329300:
    st32((c.r[15].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00329328; } }
    c.budget -= 1;
L_00329310:
    st32((c.r[15].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00329328; } }
    c.budget -= 1;
L_00329320:
    st32((c.r[15].w[0] + 32u), 0u);
    st32((c.r[15].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00329328:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 256u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00329348; } }
    set32(c.r[2], 0u + 16u);
    st16((c.r[15].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[15].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00329358; } }
L_00329348:
    set32(c.r[2], 0u + 8u);
    st16((c.r[15].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st16((c.r[15].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00329358:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[15].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[15].w[0]), c.r[6].w[0]);
    st8((c.r[15].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329374u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 26u)));  if (depth < kMaxDepth) unit_008A(c, 16u, depth + 1u); else { c.pc = 0x00328330u; return; } if (c.pc != 0x00329374u) [[unlikely]] return; }
L_00329374:
    st16((c.r[15].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329380u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 28u)));  if (depth < kMaxDepth) unit_008A(c, 16u, depth + 1u); else { c.pc = 0x00328330u; return; } if (c.pc != 0x00329380u) [[unlikely]] return; }
L_00329380:
    st16((c.r[15].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[15].d[0] + 0ull;
    st8((c.r[15].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[15].w[0] + 36u), 0u);
    st32((c.r[15].w[0] + 44u), 0u);
    st8((c.r[15].w[0] + 55u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003293A4u); st32((c.r[15].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 23u, depth + 1u); else { c.pc = 0x00328880u; return; } if (c.pc != 0x003293A4u) [[unlikely]] return; }
L_003293A4:
    st16((c.r[15].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[15].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[15].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[15].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003293C4u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 26u)));  if (depth < kMaxDepth) unit_008A(c, 18u, depth + 1u); else { c.pc = 0x00328380u; return; } if (c.pc != 0x003293C4u) [[unlikely]] return; }
L_003293C4:
    st32((c.r[15].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_003293D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003293E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329404u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 141u, depth + 1u); else { c.pc = 0x0032A000u; return; } if (c.pc != 0x00329404u) [[unlikely]] return; }
L_00329404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00329418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329688; } }
    c.budget -= 1;
L_00329418:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A0A0u; return; } if (c.pc != 0x00329424u) [[unlikely]] return; }
L_00329424:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 17u));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00329440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329688; } }
    c.budget -= 1;
L_00329440:
    c.r[12].d[0] = ld16((c.r[2].w[0] + 20u));
    c.r[11].d[0] = ld16((c.r[2].w[0] + 22u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_00329680; } }
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u + 2u);
    set32(c.r[18], 0u + 8u);
    set32(c.r[17], 0u + 16u);
    set32(c.r[25], 0u + 255u);
    set32(c.r[15], 0u + 24u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], 0u + 31u);
    set32(c.r[3], 0u + 15u);
    set32(c.r[10], 0u + 3u);
    c.budget -= 13;
L_00329488:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[11].w[0]);
    c.r[14].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 6;
    { const bool t = c.r[14].d[0] == c.r[10].d[0];  if (t) { goto L_00329610; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[9].d[0];  if (t) { goto L_003295C0; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[8].d[0];  if (t) { goto L_00329570; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[7].d[0];  if (t) { goto L_00329518; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[6].d[0];  if (t) { goto L_003294C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329660; } }
L_003294C8:
    set32(c.r[14], ld32((c.r[16].w[0])));
    c.r[14].d[0] = c.r[14].d[0] | 20ull;
    st32((c.r[16].w[0]), c.r[14].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 1));
    st32((c.r[16].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_00329660; } }
L_00329518:
    set32(c.r[14], ld32((c.r[16].w[0])));
    c.r[14].d[0] = c.r[14].d[0] | 4ull;
    st32((c.r[16].w[0]), c.r[14].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[8].w[0]);
    set32(c.r[24], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    mmi::mult(c, 0, c.r[24].w[0], c.r[14].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_00329660; } }
    c.budget -= 1;
L_00329570:
    st32((c.r[16].w[0] + 20u), c.r[9].w[0]);
    set32(c.r[24], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    mmi::mult(c, 0, c.r[24].w[0], c.r[14].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[5].w[0]);  if (t) { goto L_00329660; } }
L_003295C0:
    st32((c.r[16].w[0] + 20u), c.r[10].w[0]);
    set32(c.r[24], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    mmi::mult(c, 0, c.r[24].w[0], c.r[14].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[25].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[25].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[25].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[17].w[0]);  if (t) { goto L_00329660; } }
L_00329610:
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[24], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    mmi::mult(c, 0, c.r[24].w[0], c.r[14].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[25].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[25].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[25].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[15].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[25].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    c.budget -= 20;
L_00329660:
    c.r[14].d[0] = ld8((c.r[2].w[0] + 17u));
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 72u);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 1));
    c.r[14].d[0] = c.r[13].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 1));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329488u | kUnwind; return; } goto L_00329488; } }
    c.budget -= 1;
L_00329680:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00329688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003296A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003296C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 141u, depth + 1u); else { c.pc = 0x0032A000u; return; } if (c.pc != 0x003296C0u) [[unlikely]] return; }
L_003296C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003296D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003298B8; } }
L_003296D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003296DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A0A0u; return; } if (c.pc != 0x003296DCu) [[unlikely]] return; }
L_003296DC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 17u));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003296F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003298B8; } }
    c.budget -= 1;
L_003296F8:
    st32((c.r[16].w[0]), 0u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 18u));
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003297C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_00329778; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_00329728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329820; } }
    c.budget -= 1;
L_00329728:
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[16].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[4], 0u + 31u);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], 0u + 15u);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[5].w[0]);  if (t) { goto L_00329828; } }
L_00329778:
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[4].w[0]);  if (t) { goto L_00329828; } }
    c.budget -= 1;
L_003297C8:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[6], 0u + 8u);
    st32((c.r[16].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[5], 0u + 16u);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[4], 0u + 255u);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[3], 0u + 24u);
    st32((c.r[16].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[5].w[0]);  if (t) { goto L_00329828; } }
    c.budget -= 1;
L_00329820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003298B8; } }
L_00329828:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 19u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00329870; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00329848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329898; } }
L_00329848:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 14u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003298B8; } }
L_00329860:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003298A0; } }
L_00329870:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 14u));
    set32(c.r[2], 0u + 256u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003298B8; } }
L_00329888:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003298A0; } }
L_00329898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003298B8; } }
L_003298A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_003298B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003298D0:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00329950; } }
    set32(c.r[7], 0u + 255u);
    c.budget -= 1;
L_003298E0:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00329940; } }
    c.budget -= 1;
L_003298F0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_00329908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_00329928; } }
    c.budget -= 1;
L_00329908:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00329928; } }
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00329928; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00329928:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003298F0u | kUnwind; return; } goto L_003298F0; } }
    c.budget -= 1;
L_00329940:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003298E0u | kUnwind; return; } goto L_003298E0; } }
L_00329950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329960:
    set32(c.r[29], c.r[29].w[0] - 800u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032999Cu); st32((c.r[29].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_008A(c, 27u, depth + 1u); else { c.pc = 0x00328920u; return; } if (c.pc != 0x0032999Cu) [[unlikely]] return; }
L_0032999C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8336u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003299CCu); st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032A150u; return; } if (c.pc != 0x003299CCu) [[unlikely]] return; }
L_003299CC:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003299DCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 74u, depth + 1u); else { c.pc = 0x003293E0u; return; } if (c.pc != 0x003299DCu) [[unlikely]] return; }
L_003299DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003299F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329C88; } }
    c.budget -= 1;
L_003299F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329A08u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_008A(c, 32u, depth + 1u); else { c.pc = 0x003289F0u; return; } if (c.pc != 0x00329A08u) [[unlikely]] return; }
L_00329A08:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329A18u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 39u, depth + 1u); else { c.pc = 0x00328D00u; return; } if (c.pc != 0x00329A18u) [[unlikely]] return; }
L_00329A18:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329A2Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x00329A2Cu) [[unlikely]] return; }
L_00329A2C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00329BA0; } }
    set32(c.r[22], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_00329A50:
    set32(c.r[3], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00329B48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329B18; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00329AE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329AC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00329A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329B80; } }
    c.budget -= 1;
L_00329A90:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329AA4u); set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329AA4u) [[unlikely]] return; }
L_00329AA4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329AB4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329AB4u) [[unlikely]] return; }
L_00329AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329B80; } }
    c.budget -= 1;
L_00329AC0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329AD0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329AD0u) [[unlikely]] return; }
L_00329AD0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329AE0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329AE0u) [[unlikely]] return; }
L_00329AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329B80; } }
L_00329AE8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329AFCu); set32(c.r[16], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329AFCu) [[unlikely]] return; }
L_00329AFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B0Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329B0Cu) [[unlikely]] return; }
L_00329B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329B80; } }
    c.budget -= 1;
L_00329B18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B2Cu); set32(c.r[16], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329B2Cu) [[unlikely]] return; }
L_00329B2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329B3Cu) [[unlikely]] return; }
L_00329B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329B80; } }
    c.budget -= 1;
L_00329B48:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B5Cu); set32(c.r[16], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329B5Cu) [[unlikely]] return; }
L_00329B5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B6Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329B6Cu) [[unlikely]] return; }
L_00329B6C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B7Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 81u, depth + 1u); else { c.pc = 0x003298D0u; return; } if (c.pc != 0x00329B7Cu) [[unlikely]] return; }
L_00329B7C:
    c.budget -= 1;
L_00329B80:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329A50u | kUnwind; return; } goto L_00329A50; } }
L_00329BA0:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329BACu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 54u, depth + 1u); else { c.pc = 0x00328FF0u; return; } if (c.pc != 0x00329BACu) [[unlikely]] return; }
L_00329BAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_00329BC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00329C80; } }
L_00329BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329BD0u);  if (depth < kMaxDepth) unit_008A(c, 30u, depth + 1u); else { c.pc = 0x00328990u; return; } if (c.pc != 0x00329BD0u) [[unlikely]] return; }
L_00329BD0:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C0Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_008A(c, 78u, depth + 1u); else { c.pc = 0x003296A0u; return; } if (c.pc != 0x00329C0Cu) [[unlikely]] return; }
L_00329C0C:
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C1Cu); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 67u, depth + 1u); else { c.pc = 0x00329270u; return; } if (c.pc != 0x00329C1Cu) [[unlikely]] return; }
L_00329C1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C28u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 39u, depth + 1u); else { c.pc = 0x00328D00u; return; } if (c.pc != 0x00329C28u) [[unlikely]] return; }
L_00329C28:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C34u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x00329C34u) [[unlikely]] return; }
L_00329C34:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C40u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 150u, depth + 1u); else { c.pc = 0x0032A1B0u; return; } if (c.pc != 0x00329C40u) [[unlikely]] return; }
L_00329C40:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329C50u) [[unlikely]] return; }
L_00329C50:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00329C70; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 81u, depth + 1u); else { c.pc = 0x003298D0u; return; } if (c.pc != 0x00329C70u) [[unlikely]] return; }
L_00329C70:
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C7Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 58u, depth + 1u); else { c.pc = 0x003290B0u; return; } if (c.pc != 0x00329C7Cu) [[unlikely]] return; }
L_00329C7C:
    c.budget -= 1;
L_00329C80:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[2].d[0] = c.r[30].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_00329C88:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 800u);  c.pc = t; return; }
L_00329CC0:
    set32(c.r[29], c.r[29].w[0] - 800u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329CFCu); st32((c.r[29].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_008A(c, 27u, depth + 1u); else { c.pc = 0x00328920u; return; } if (c.pc != 0x00329CFCu) [[unlikely]] return; }
L_00329CFC:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8336u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D2Cu); st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032A150u; return; } if (c.pc != 0x00329D2Cu) [[unlikely]] return; }
L_00329D2C:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D3Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 74u, depth + 1u); else { c.pc = 0x003293E0u; return; } if (c.pc != 0x00329D3Cu) [[unlikely]] return; }
L_00329D3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00329D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00329FC8; } }
    c.budget -= 1;
L_00329D50:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D68u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_008A(c, 32u, depth + 1u); else { c.pc = 0x003289F0u; return; } if (c.pc != 0x00329D68u) [[unlikely]] return; }
L_00329D68:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D78u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 39u, depth + 1u); else { c.pc = 0x00328D00u; return; } if (c.pc != 0x00329D78u) [[unlikely]] return; }
L_00329D78:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D8Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x00329D8Cu) [[unlikely]] return; }
L_00329D8C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00329F00; } }
    set32(c.r[22], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_00329DB0:
    set32(c.r[3], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00329EA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329E78; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00329E48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00329E20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00329DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329EE0; } }
    c.budget -= 1;
L_00329DF0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E04u); set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329E04u) [[unlikely]] return; }
L_00329E04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E14u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329E14u) [[unlikely]] return; }
L_00329E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329EE0; } }
    c.budget -= 1;
L_00329E20:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E30u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329E30u) [[unlikely]] return; }
L_00329E30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E40u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329E40u) [[unlikely]] return; }
L_00329E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329EE0; } }
L_00329E48:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E5Cu); set32(c.r[16], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329E5Cu) [[unlikely]] return; }
L_00329E5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E6Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329E6Cu) [[unlikely]] return; }
L_00329E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329EE0; } }
    c.budget -= 1;
L_00329E78:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E8Cu); set32(c.r[16], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329E8Cu) [[unlikely]] return; }
L_00329E8C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329E9Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329E9Cu) [[unlikely]] return; }
L_00329E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00329EE0; } }
    c.budget -= 1;
L_00329EA8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329EBCu); set32(c.r[16], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032A1A0u; return; } if (c.pc != 0x00329EBCu) [[unlikely]] return; }
L_00329EBC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329ECCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329ECCu) [[unlikely]] return; }
L_00329ECC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329EDCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 81u, depth + 1u); else { c.pc = 0x003298D0u; return; } if (c.pc != 0x00329EDCu) [[unlikely]] return; }
L_00329EDC:
    c.budget -= 1;
L_00329EE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329DB0u | kUnwind; return; } goto L_00329DB0; } }
L_00329F00:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F0Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 54u, depth + 1u); else { c.pc = 0x00328FF0u; return; } if (c.pc != 0x00329F0Cu) [[unlikely]] return; }
L_00329F0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_00329F28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00329FC0; } }
L_00329F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F30u);  if (depth < kMaxDepth) unit_008A(c, 30u, depth + 1u); else { c.pc = 0x00328990u; return; } if (c.pc != 0x00329F30u) [[unlikely]] return; }
L_00329F30:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F6Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_008A(c, 78u, depth + 1u); else { c.pc = 0x003296A0u; return; } if (c.pc != 0x00329F6Cu) [[unlikely]] return; }
L_00329F6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F7Cu); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 67u, depth + 1u); else { c.pc = 0x00329270u; return; } if (c.pc != 0x00329F7Cu) [[unlikely]] return; }
L_00329F7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F88u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 39u, depth + 1u); else { c.pc = 0x00328D00u; return; } if (c.pc != 0x00329F88u) [[unlikely]] return; }
L_00329F88:
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F94u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x00329F94u) [[unlikely]] return; }
L_00329F94:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329FA0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 150u, depth + 1u); else { c.pc = 0x0032A1B0u; return; } if (c.pc != 0x00329FA0u) [[unlikely]] return; }
L_00329FA0:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329FB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 13u, depth + 1u); else { c.pc = 0x00328240u; return; } if (c.pc != 0x00329FB0u) [[unlikely]] return; }
L_00329FB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329FBCu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 58u, depth + 1u); else { c.pc = 0x003290B0u; return; } if (c.pc != 0x00329FBCu) [[unlikely]] return; }
L_00329FBC:
    c.budget -= 1;
L_00329FC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[2].d[0] = c.r[30].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_00329FC8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 800u);  c.pc = t; return; }
L_0032A000:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], 0u + 84u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032A040; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], 0u + 73u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032A040; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 77u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032A040; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032A048; } }
L_0032A040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032A090; } }
L_0032A048:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = ld8((c.r[4].w[0] + 5u));  if (t) { goto L_0032A078; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0032A070; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032A078; } }
L_0032A070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032A090; } }
L_0032A078:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032A090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032A090; } }
L_0032A090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A0A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A0D0u); c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 151u, depth + 1u); else { c.pc = 0x0032A1C0u; return; } if (c.pc != 0x0032A0D0u) [[unlikely]] return; }
L_0032A0D0:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0032A120; } }
    c.budget -= 1;
L_0032A0E8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032A120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A100u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_008A(c, 151u, depth + 1u); else { c.pc = 0x0032A1C0u; return; } if (c.pc != 0x0032A100u) [[unlikely]] return; }
L_0032A100:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032A0E8u | kUnwind; return; } goto L_0032A0E8; } }
    c.budget -= 1;
L_0032A120:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0032A150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A160u);  if (depth < kMaxDepth) unit_008A(c, 141u, depth + 1u); else { c.pc = 0x0032A000u; return; } if (c.pc != 0x0032A160u) [[unlikely]] return; }
L_0032A160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032A170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032A188; } }
L_0032A170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A178u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A0A0u; return; } if (c.pc != 0x0032A178u) [[unlikely]] return; }
L_0032A178:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 17u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_0032A188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032A1A0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_0032A220; }
L_0032A1B0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_0032A3C0; }
L_0032A1C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[2], 0u + 128u);
    set32(c.r[4], 0u + 16u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032A218; } }
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 12;
L_0032A218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0032A220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A240u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A0A0u; return; } if (c.pc != 0x0032A240u) [[unlikely]] return; }
L_0032A240:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 17u));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 48u);  if (t) { goto L_0032A348; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032A320; } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[11], c.r[4].w[0] - 9u);  if (t) { goto L_0032A2D8; } }
    set32(c.r[10], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0032A278:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[9], c.r[3].w[0] + 48u);
    set32(c.r[8], c.r[9].w[0] + 32u);
    set32(c.r[4], c.r[9].w[0] + 36u);
    st32((c.r[10].w[0]), c.r[8].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    st32((c.r[10].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[8], c.r[9].w[0] + 40u);
    st32((c.r[10].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[4], c.r[9].w[0] + 44u);
    st32((c.r[10].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[8], c.r[9].w[0] + 48u);
    st32((c.r[10].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[4], c.r[9].w[0] + 52u);
    st32((c.r[10].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[8], c.r[9].w[0] + 56u);
    set32(c.r[4], c.r[9].w[0] + 60u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032A278u | kUnwind; return; } goto L_0032A278; } }
    c.budget -= 1;
L_0032A2D8:
    c.r[4].d[0] = ld8((c.r[7].w[0] + 17u));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0032A320; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[3].w[0] + 48u);
    c.budget -= 3;
L_0032A2F8:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 80u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 17u));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032A2F8u | kUnwind; return; } goto L_0032A2F8; } }
L_0032A320:
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0032A338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A340; } }
    c.budget -= 1;
L_0032A338:
    set32(c.r[2], 0u + 48u);
    c.budget -= 2;
L_0032A340:
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0032A348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 151u, depth + 1u); else { c.pc = 0x0032A1C0u; return; } if (c.pc != 0x0032A350u) [[unlikely]] return; }
L_0032A350:
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 17u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0032A3A8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0032A3A0; } }
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0032A378:
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 151u, depth + 1u); else { c.pc = 0x0032A1C0u; return; } if (c.pc != 0x0032A388u) [[unlikely]] return; }
L_0032A388:
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032A378u | kUnwind; return; } goto L_0032A378; } }
    c.budget -= 1;
L_0032A3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);  if (t) { goto L_0032A3A8; } }
L_0032A3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032A3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A3D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A0A0u; return; } if (c.pc != 0x0032A3D8u) [[unlikely]] return; }
L_0032A3D8:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 48u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 17u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0032A418; } }
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032A408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0032A410; } }
    c.budget -= 1;
L_0032A408:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0032A410:
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0032A418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 151u, depth + 1u); else { c.pc = 0x0032A1C0u; return; } if (c.pc != 0x0032A420u) [[unlikely]] return; }
L_0032A420:
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032A440; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);  if (t) { goto L_0032A448; } }
    c.budget -= 1;
L_0032A440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032A448; } }
L_0032A448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032A460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10290u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032A498; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0032A498; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032A4A8; } }
    c.budget -= 1;
L_0032A498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A4A0u);  if (depth < kMaxDepth) unit_008A(c, 164u, depth + 1u); else { c.pc = 0x0032A530u; return; } if (c.pc != 0x0032A4A0u) [[unlikely]] return; }
L_0032A4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A518; } }
L_0032A4A8:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032A510; } }
    set32(c.r[5], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0032A510; } }
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032A510; } }
    c.r[1].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032A4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A508; } }
    c.budget -= 1;
L_0032A4E8:
    c.r[1].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032A500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032A508; } }
    c.budget -= 1;
L_0032A500:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0032A508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A518; } }
L_0032A510:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0032A518:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032A530:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032A5E0; } }
    set32(c.r[7], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_0032A5E0; } }
    set32(c.r[6], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0032A5E0; } }
    set32(c.r[5], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0032A5E0; } }
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032A5E0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032A588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A5D8; } }
    c.budget -= 1;
L_0032A588:
    c.r[1].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032A5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0032A5D8; } }
    c.budget -= 1;
L_0032A5A0:
    c.r[1].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032A5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0032A5D8; } }
    c.budget -= 1;
L_0032A5B8:
    c.r[1].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032A5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032A5D8; } }
    c.budget -= 1;
L_0032A5D0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0032A5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A5E8; } }
L_0032A5E0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0032A5E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032A5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A61Cu); set32(c.r[5], c.r[5].w[0] - 4576u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0032A61Cu) [[unlikely]] return; }
L_0032A61C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032A630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032AC80; } }
    c.budget -= 1;
L_0032A630:
    set32(c.r[2], 0u + 8448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10204u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A648u); set32(c.r[4], ld32((c.r[1].w[0] - 10204u)));  if (depth < kMaxDepth) unit_0089(c, 338u, depth + 1u); else { c.pc = 0x00327410u; return; } if (c.pc != 0x0032A648u) [[unlikely]] return; }
L_0032A648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10208u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 10320u);
    set32(c.r[4], c.r[4].w[0] - 10280u);
    st32((c.r[1].w[0] - 10232u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4232u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A678u); set32(c.r[6], 0u + 72u);  call(c, 0x011AE360u, depth + 1u); if (c.pc != 0x0032A678u) [[unlikely]] return; }
L_0032A678:
    set32(c.r[3], 0u - 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032A6A8; } }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032A6A8; } }
    set32(c.r[3], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032A6A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032A6B0; } }
    c.budget -= 1;
L_0032A6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032AC80; } }
L_0032A6B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10152u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - 10320u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10208u)));
    set32(c.r[5], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10204u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10264u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A6E8u); st32((c.r[1].w[0] - 10260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032A6E8u) [[unlikely]] return; }
L_0032A6E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - 10320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A6F8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032A6F8u) [[unlikely]] return; }
L_0032A6F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10312u)));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] << 24);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A730u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032A730u) [[unlikely]] return; }
L_0032A730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10312u)));
    set32(c.r[5], c.r[5].w[0] - 4608u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A748u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0032A748u) [[unlikely]] return; }
L_0032A748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032A8E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A760u); set32(c.r[4], c.r[4].w[0] - 10320u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032A760u) [[unlikely]] return; }
L_0032A760:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10312u)));
    c.r[8].d[0] = ld8((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] << 24);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] - 10304u), c.r[3].w[0]);
    c.r[8].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 7u));
    set32(c.r[8], c.r[8].w[0] << 24);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] - 10300u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10296u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10295u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10294u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 11u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A80Cu); st8((c.r[1].w[0] - 10292u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032A80Cu) [[unlikely]] return; }
L_0032A80C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10295u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032A888; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032A878; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032A868; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032A858; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032A858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032A898; } }
    c.budget -= 1;
L_0032A858:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 10291u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032A898; } }
L_0032A868:
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 10291u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032A898; } }
L_0032A878:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 10291u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032A898; } }
L_0032A888:
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10291u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0032A898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 10296u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10291u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10304u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10290u));
    mmi::mult(c, 1, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 10288u), c.r[2].w[0]);  if (t) { goto L_0032AAC8; } }
    c.budget -= 1;
L_0032A8E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10312u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 4584u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A8F8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0032A8F8u) [[unlikely]] return; }
L_0032A8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032A9E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10295u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032A988; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A924u); set32(c.r[4], c.r[4].w[0] - 10320u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032A924u) [[unlikely]] return; }
L_0032A924:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10312u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[1].w[0] - 10283u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[1].w[0] - 10282u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 10281u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032A9D0; } }
    c.budget -= 1;
L_0032A988:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032A9D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10312u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 10320u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A9C4u); st32((c.r[1].w[0] - 10136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032A9C4u) [[unlikely]] return; }
L_0032A9C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 10132u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 3;
L_0032A9D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - 10320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A9E0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032A9E0u) [[unlikely]] return; }
L_0032A9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AAC8; } }
L_0032A9E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10312u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 4592u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AA00u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0032AA00u) [[unlikely]] return; }
L_0032AA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032AAE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10312u)));
    set32(c.r[5], c.r[5].w[0] - 4600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AA20u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0032AA20u) [[unlikely]] return; }
L_0032AA20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032AA38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 10172u), c.r[16].w[0]);  if (t) { goto L_0032AAE0; } }
    c.budget -= 1;
L_0032AA38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10312u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 4568u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AA50u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0032AA50u) [[unlikely]] return; }
L_0032AA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032AAB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10312u)));
    set32(c.r[4], c.r[4].w[0] - 10320u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AA7Cu); st32((c.r[1].w[0] - 10144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032AA7Cu) [[unlikely]] return; }
L_0032AA7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xAAAA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    set32(c.r[5], 0u + 4u);
    mmi::multu(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AAA8u); st16((c.r[1].w[0] - 10140u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032AAA8u) [[unlikely]] return; }
L_0032AAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AAC8; } }
L_0032AAB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AAC0u); set32(c.r[4], c.r[4].w[0] - 10320u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032AAC0u) [[unlikely]] return; }
L_0032AAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AAC8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x0032AAC8u) [[unlikely]] return; }
L_0032AAC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 10308u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032A6E8u | kUnwind; return; } goto L_0032A6E8; } }
L_0032AAE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 10308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032AAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032AC80; } }
L_0032AAF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 10296u));
    set32(c.r[4], 0u + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0032AB78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 10304u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032AB78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10300u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032AB78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10295u));
    c.r[6].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0032AB80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 24u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10290u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032AB80; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0032AB80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0032AB80; } }
    c.budget -= 1;
L_0032AB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032AC80; } }
L_0032AB80:
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10300u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AB98u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_008A(c, 164u, depth + 1u); else { c.pc = 0x0032A530u; return; } if (c.pc != 0x0032AB98u) [[unlikely]] return; }
L_0032AB98:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ABA8u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_008A(c, 162u, depth + 1u); else { c.pc = 0x0032A460u; return; } if (c.pc != 0x0032ABA8u) [[unlikely]] return; }
L_0032ABA8:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[6], 0u + 8u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 10290u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0032AC20; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 24u);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[4].w[0]);  if (t) { goto L_0032AC78; } }
L_0032AC20:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 22;
L_0032AC78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0032AC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032ACA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] - 10288u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ACD0u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0089(c, 338u, depth + 1u); else { c.pc = 0x00327410u; return; } if (c.pc != 0x0032ACD0u) [[unlikely]] return; }
L_0032ACD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 10290u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032AEA8; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032ACF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AFB8; } }
L_0032ACF8:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032AFB8; } }
L_0032AD08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10300u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032AD60; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0032AE88; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_0032AD30:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032AD30u | kUnwind; return; } goto L_0032AD30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AE88; } }
L_0032AD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AD68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 361u, depth + 1u); else { c.pc = 0x00327DE0u; return; } if (c.pc != 0x0032AD68u) [[unlikely]] return; }
L_0032AD68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 10308u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032AFB8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0032AE88; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_0032AD90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10304u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_0032ADE0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_0032AE88; } }
    c.budget -= 1;
L_0032ADB0:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ADB0u | kUnwind; return; } goto L_0032ADB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AE88; } }
L_0032ADE0:
    c.r[5].d[0] = ld8((c.r[9].w[0]));
    c.r[7].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[6].d[0] = ld8((c.r[9].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[18], c.r[18].w[0] + 2u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10284u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_0032AE68; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] - 10283u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0032AE58; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[5].d[0] = ld8((c.r[1].w[0] - 10282u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032AE58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[5].d[0] = ld8((c.r[1].w[0] - 10281u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032AE58; } }
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_0032AE70; } }
    c.budget -= 1;
L_0032AE58:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_0032AE70; } }
    c.budget -= 1;
L_0032AE68:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 2;
L_0032AE70:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032AD90u | kUnwind; return; } goto L_0032AD90; } }
    c.budget -= 1;
L_0032AE88:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032AD08u | kUnwind; return; } goto L_0032AD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AFB8; } }
    c.budget -= 1;
L_0032AEA8:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032AFB8; } }
L_0032AEB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10300u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032AF08; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0032AFA0; } }
    c.budget -= 1;
L_0032AEE0:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032AEE0u | kUnwind; return; } goto L_0032AEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AFA0; } }
    c.budget -= 1;
L_0032AF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AF10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 361u, depth + 1u); else { c.pc = 0x00327DE0u; return; } if (c.pc != 0x0032AF10u) [[unlikely]] return; }
L_0032AF10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 10308u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032AFB8; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0032AFA0; } }
    c.budget -= 1;
L_0032AF38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10304u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_0032AF80; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032AFA0; } }
    c.budget -= 1;
L_0032AF58:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032AF58u | kUnwind; return; } goto L_0032AF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AFA0; } }
    c.budget -= 1;
L_0032AF80:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032AF38u | kUnwind; return; } goto L_0032AF38; } }
L_0032AFA0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032AEB8u | kUnwind; return; } goto L_0032AEB8; } }
    c.budget -= 1;
L_0032AFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032AFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AFF8u); c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x003290E0u; return; } if (c.pc != 0x0032AFF8u) [[unlikely]] return; }
L_0032AFF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[3].w[0] >> 16);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032B018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B014u);  if (depth < kMaxDepth) unit_008A(c, 64u, depth + 1u); else { c.pc = 0x003291C0u; return; } if (c.pc != 0x0032B014u) [[unlikely]] return; }
L_0032B014:
    c.budget -= 1;
L_0032B018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032B030:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B068u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 329u, depth + 1u); else { c.pc = 0x003271E0u; return; } if (c.pc != 0x0032B068u) [[unlikely]] return; }
L_0032B068:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 10320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B07Cu); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0032B07Cu) [[unlikely]] return; }
L_0032B07C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10316u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10320u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B098u); st32((c.r[1].w[0] - 10312u), 0u);  if (depth < kMaxDepth) unit_008A(c, 27u, depth + 1u); else { c.pc = 0x00328920u; return; } if (c.pc != 0x0032B098u) [[unlikely]] return; }
L_0032B098:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0032B0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0032B220; } }
    c.budget -= 1;
L_0032B0B0:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 8336u);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0DCu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_008A(c, 165u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0032B0DCu) [[unlikely]] return; }
L_0032B0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032B0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0ECu);  if (depth < kMaxDepth) unit_0089(c, 339u, depth + 1u); else { c.pc = 0x00327420u; return; } if (c.pc != 0x0032B0ECu) [[unlikely]] return; }
L_0032B0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0032B220; } }
    c.budget -= 1;
L_0032B0F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B10Cu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 32u, depth + 1u); else { c.pc = 0x003289F0u; return; } if (c.pc != 0x0032B10Cu) [[unlikely]] return; }
L_0032B10C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032B128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B11Cu);  if (depth < kMaxDepth) unit_0089(c, 339u, depth + 1u); else { c.pc = 0x00327420u; return; } if (c.pc != 0x0032B11Cu) [[unlikely]] return; }
L_0032B11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0032B220; } }
    c.budget -= 1;
L_0032B128:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B134u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 39u, depth + 1u); else { c.pc = 0x00328D00u; return; } if (c.pc != 0x0032B134u) [[unlikely]] return; }
L_0032B134:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B140u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x0032B140u) [[unlikely]] return; }
L_0032B140:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B14Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_008A(c, 188u, depth + 1u); else { c.pc = 0x0032ACA0u; return; } if (c.pc != 0x0032B14Cu) [[unlikely]] return; }
L_0032B14C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 10308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0032B188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B164u); set32(c.r[4], c.r[4].w[0] - 10280u);  call(c, 0x011AE160u, depth + 1u); if (c.pc != 0x0032B164u) [[unlikely]] return; }
L_0032B164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B16Cu);  if (depth < kMaxDepth) unit_0089(c, 339u, depth + 1u); else { c.pc = 0x00327420u; return; } if (c.pc != 0x0032B16Cu) [[unlikely]] return; }
L_0032B16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B174u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 45u, depth + 1u); else { c.pc = 0x00328D80u; return; } if (c.pc != 0x0032B174u) [[unlikely]] return; }
L_0032B174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B17Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 200u, depth + 1u); else { c.pc = 0x0032AFE0u; return; } if (c.pc != 0x0032B17Cu) [[unlikely]] return; }
L_0032B17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0032B220; } }
    c.budget -= 1;
L_0032B188:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B194u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 54u, depth + 1u); else { c.pc = 0x00328FF0u; return; } if (c.pc != 0x0032B194u) [[unlikely]] return; }
L_0032B194:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0032B1C0; } }
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 10290u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0032B1C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B1BCu);  if (depth < kMaxDepth) unit_008A(c, 224u, depth + 1u); else { c.pc = 0x0032B250u; return; } if (c.pc != 0x0032B1BCu) [[unlikely]] return; }
L_0032B1BC:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_0032B1C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B1CCu); set32(c.r[4], c.r[4].w[0] - 10280u);  call(c, 0x011AE160u, depth + 1u); if (c.pc != 0x0032B1CCu) [[unlikely]] return; }
L_0032B1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B1D4u);  if (depth < kMaxDepth) unit_0089(c, 339u, depth + 1u); else { c.pc = 0x00327420u; return; } if (c.pc != 0x0032B1D4u) [[unlikely]] return; }
L_0032B1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B1DCu); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 45u, depth + 1u); else { c.pc = 0x00328D80u; return; } if (c.pc != 0x0032B1DCu) [[unlikely]] return; }
L_0032B1DC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032B200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B1F4u);  if (depth < kMaxDepth) unit_008A(c, 200u, depth + 1u); else { c.pc = 0x0032AFE0u; return; } if (c.pc != 0x0032B1F4u) [[unlikely]] return; }
L_0032B1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0032B220; } }
    c.budget -= 1;
L_0032B200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10304u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10300u)));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0032B220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0032B250:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B26Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008A(c, 30u, depth + 1u); else { c.pc = 0x00328990u; return; } if (c.pc != 0x0032B26Cu) [[unlikely]] return; }
L_0032B26C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0032B280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B440; } }
L_0032B280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[2].w[0] >> 16);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[9], c.r[29].w[0] + 84u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[9].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[12], c.r[29].w[0] + 92u);
    set32(c.r[8], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[12].w[0]), c.r[8].w[0]);
    set32(c.r[7], 0u + 255u);
    set32(c.r[2], c.r[4].w[0] << 3);
    st32((c.r[29].w[0] + 96u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[11], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 100u), c.r[5].w[0]);
    set32(c.r[6], 0u + 24u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10128u);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[7].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[11].w[0]), 0u);
    set32(c.r[10], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 124u), c.r[5].w[0]);
    set32(c.r[3], 0u + 256u);
    st32((c.r[29].w[0] + 128u), c.r[6].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 120u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 132u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[12].w[0]), 0u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[11].w[0]), c.r[8].w[0]);
    st32((c.r[10].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[2], ld32((c.r[10].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B33Cu); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 67u, depth + 1u); else { c.pc = 0x00329270u; return; } if (c.pc != 0x0032B33Cu) [[unlikely]] return; }
L_0032B33C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B348u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 39u, depth + 1u); else { c.pc = 0x00328D00u; return; } if (c.pc != 0x0032B348u) [[unlikely]] return; }
L_0032B348:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B354u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x0032B354u) [[unlikely]] return; }
L_0032B354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 10144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 10140u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0032B428; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[8], 0u + 255u);
    set32(c.r[7], 0u + 128u);
    set32(c.r[3], c.r[3].w[0] - 1664u);
    c.budget -= 4;
L_0032B380:
    c.r[6].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[9].d[0] = c.r[4].d[0] & 224ull;
    c.r[10].d[0] = ld8((c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[9], c.r[9].w[0] << 2);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[9], c.r[2].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[1].w[0] - 10284u));
    c.budget -= 20;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0032B408; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = ld16((c.r[1].w[0] - 10132u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0032B400; } }
    set32(c.r[6], ld32((c.r[1].w[0] - 10136u)));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_0032B400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032B410; } }
L_0032B400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0032B410; } }
L_0032B408:
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_0032B410:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = ld16((c.r[1].w[0] - 10140u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[6].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B380u | kUnwind; return; } goto L_0032B380; } }
L_0032B428:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 58u, depth + 1u); else { c.pc = 0x003290B0u; return; } if (c.pc != 0x0032B434u) [[unlikely]] return; }
L_0032B434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B43Cu); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 45u, depth + 1u); else { c.pc = 0x00328D80u; return; } if (c.pc != 0x0032B43Cu) [[unlikely]] return; }
L_0032B43C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032B440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0032B460:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], 0u + 19778u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032B478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B588; } }
L_0032B478:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 20u));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 18u));
    set32(c.r[2], 0u + 24u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 24u));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 22u));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 28u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_0032B4C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032B4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032B588; } }
L_0032B4C0:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[4].w[0]), 0u);  if (t) { goto L_0032B528; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 255u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { goto L_0032B580; } }
    c.budget -= 1;
L_0032B528:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    c.budget -= 22;
L_0032B580:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0032B588:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B590:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 24u);  if (t) { goto L_0032B6E8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0032B5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B810; } }
    c.budget -= 1;
L_0032B5B0:
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[11].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_0032B5C8; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0032B5C8; } }
    set32(c.r[11], c.r[11].w[0] - 4u);
    c.budget -= 1;
L_0032B5C8:
    set32(c.r[10], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);  if (t) { goto L_0032B810; } }
    c.r[24].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[15], c.r[24].w[0] - 1u);
    c.budget -= 3;
L_0032B5F0:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[24].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032B640; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0032B6C8; } }
    c.budget -= 1;
L_0032B610:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[9], ld32((c.r[4].w[0] + 4u)));
    c.r[9].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B610u | kUnwind; return; } goto L_0032B610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B6C8; } }
    c.budget -= 1;
L_0032B640:
    set32(c.r[9], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0032B6C8; } }
    set32(c.r[9], c.r[15].w[0] - c.r[8].w[0]);
    c.r[14].d[0] = c.r[6].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.budget -= 4;
L_0032B660:
    c.r[1].d[0] = c.r[12].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032B688; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0032B6B0; } }
    c.budget -= 1;
L_0032B688:
    set32(c.r[9], c.r[14].w[0] + c.r[13].w[0]);
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[9].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 10;
L_0032B6B0:
    set32(c.r[9], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[9].d[0] = c.r[12].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B660u | kUnwind; return; } goto L_0032B660; } }
    c.budget -= 1;
L_0032B6C8:
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[9].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B5F0u | kUnwind; return; } goto L_0032B5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B810; } }
    c.budget -= 1;
L_0032B6E8:
    c.r[10].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[10].sd[0] >= 0; c.r[7].d[0] = c.r[10].d[0] & 3ull;  if (t) { goto L_0032B700; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0032B700; } }
    set32(c.r[7], c.r[7].w[0] - 4u);
    c.budget -= 1;
L_0032B700:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0032B710; } }
    set32(c.r[7], c.r[3].w[0] - c.r[7].w[0]);
    c.budget -= 2;
L_0032B710:
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032B810; } }
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[8], c.r[9].w[0] - 1u);
    c.budget -= 2;
L_0032B730:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032B778; } }
    set32(c.r[11], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0032B7F8; } }
    c.budget -= 1;
L_0032B750:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[11], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[11].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B750u | kUnwind; return; } goto L_0032B750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B7F8; } }
    c.budget -= 1;
L_0032B778:
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0032B7F8; } }
    set32(c.r[11], c.r[8].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[11].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.budget -= 2;
L_0032B790:
    c.r[11].d[0] = c.r[12].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull; c.r[1].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;  if (t) { goto L_0032B7D0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032B7F8; } }
    c.budget -= 1;
L_0032B7A8:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[11], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[11].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B7A8u | kUnwind; return; } goto L_0032B7A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032B7F8; } }
    c.budget -= 1;
L_0032B7D0:
    set32(c.r[11], c.r[6].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    c.r[11].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B790u | kUnwind; return; } goto L_0032B790; } }
    c.budget -= 1;
L_0032B7F8:
    set32(c.r[11], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[11].d[0] = c.r[3].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B730u | kUnwind; return; } goto L_0032B730; } }
    c.budget -= 1;
L_0032B810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032B820:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B858u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008A(c, 30u, depth + 1u); else { c.pc = 0x00328990u; return; } if (c.pc != 0x0032B858u) [[unlikely]] return; }
L_0032B858:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0032B870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032BBD8; } }
    c.budget -= 1;
L_0032B870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[2].w[0] >> 16);
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[9], c.r[29].w[0] + 180u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[9].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    st32((c.r[29].w[0] + 184u), c.r[5].w[0]);
    set32(c.r[12], c.r[29].w[0] + 188u);
    set32(c.r[8], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[12].w[0]), c.r[8].w[0]);
    set32(c.r[7], 0u + 255u);
    set32(c.r[2], c.r[4].w[0] << 3);
    st32((c.r[29].w[0] + 192u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[11], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[6], 0u + 24u);
    st32((c.r[29].w[0] + 200u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10128u);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[29].w[0] + 204u), c.r[7].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    st32((c.r[11].w[0]), 0u);
    set32(c.r[10], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    set32(c.r[3], 0u + 256u);
    st32((c.r[29].w[0] + 224u), c.r[6].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 216u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 228u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[12].w[0]), 0u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[11].w[0]), c.r[8].w[0]);
    st32((c.r[10].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[2], ld32((c.r[10].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B92Cu); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 67u, depth + 1u); else { c.pc = 0x00329270u; return; } if (c.pc != 0x0032B92Cu) [[unlikely]] return; }
L_0032B92C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B938u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 39u, depth + 1u); else { c.pc = 0x00328D00u; return; } if (c.pc != 0x0032B938u) [[unlikely]] return; }
L_0032B938:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B944u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x0032B944u) [[unlikely]] return; }
L_0032B944:
    set32(c.r[21], c.r[19].w[0] + 54u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[15], 0u + 128u);
    set32(c.r[25], c.r[25].w[0] - 1664u);
    c.budget -= 5;
L_0032B958:
    c.r[3].d[0] = c.r[20].d[0] & 31ull;
    set32(c.r[3], c.r[25].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 1u);
    c.r[8].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[20].w[0] + 2u);
    set32(c.r[22], c.r[20].w[0] + 7u);
    c.r[13].d[0] = c.r[4].d[0] & 224ull;
    c.r[23].d[0] = c.r[22].d[0] & 31ull;
    c.r[7].d[0] = c.r[20].d[0] & 224ull;
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    c.r[11].d[0] = c.r[5].d[0] & 224ull;
    set32(c.r[23], c.r[25].w[0] + c.r[23].w[0]);
    c.r[22].d[0] = c.r[22].d[0] & 224ull;
    c.r[3].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[14], c.r[25].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 3u);
    c.r[3].d[0] = c.r[5].d[0] & 31ull;
    c.r[9].d[0] = c.r[4].d[0] & 224ull;
    set32(c.r[12], c.r[25].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[10], c.r[25].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[7].d[0] = c.r[4].d[0] & 224ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[19], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 31ull;
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], c.r[20].w[0] + 5u);
    c.r[24].d[0] = ld8((c.r[21].w[0] + 1u));
    set32(c.r[8], c.r[25].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 31ull;
    c.r[5].d[0] = c.r[4].d[0] & 224ull;
    set32(c.r[6], c.r[25].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[20].w[0] + 6u);
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[4], c.r[25].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[24].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[30].d[0] = ld8((c.r[21].w[0]));
    c.r[24].d[0] = c.r[20].sd[0] < 256ll ? 1ull : 0ull;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[19].d[0] = ld8((c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[13], c.r[13].w[0] + c.r[19].w[0]);
    c.r[13].d[0] = c.r[13].d[0] & 65535ull;
    set32(c.r[13], c.r[13].w[0] << 2);
    c.r[13].d[0] = c.r[13].d[0] & 65535ull;
    set32(c.r[19], c.r[2].w[0] + c.r[13].w[0]);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[13].d[0] = ld8((c.r[21].w[0] + 1u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[13].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[13].d[0] = ld8((c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[11], c.r[11].w[0] + c.r[13].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[13], c.r[2].w[0] + c.r[11].w[0]);
    st8((c.r[13].w[0] + 2u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[11].d[0] = ld8((c.r[21].w[0] + 1u));
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[11].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    st8((c.r[13].w[0] + 3u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[11].d[0] = ld8((c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[9], c.r[9].w[0] << 2);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[11], c.r[2].w[0] + c.r[9].w[0]);
    st8((c.r[11].w[0] + 2u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].d[0] = ld8((c.r[21].w[0] + 1u));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    st8((c.r[11].w[0] + 3u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[9], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].d[0] = ld8((c.r[21].w[0] + 1u));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[7].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[7].d[0] = ld8((c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[7], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld8((c.r[21].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[5].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[4].d[0] = ld8((c.r[23].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.budget -= 154;
    { const bool t = c.r[24].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B958u | kUnwind; return; } goto L_0032B958; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BBCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 58u, depth + 1u); else { c.pc = 0x003290B0u; return; } if (c.pc != 0x0032BBCCu) [[unlikely]] return; }
L_0032BBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BBD4u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 45u, depth + 1u); else { c.pc = 0x00328D80u; return; } if (c.pc != 0x0032BBD4u) [[unlikely]] return; }
L_0032BBD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032BBD8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0032BC10:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u + 19778u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032BC28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032BC40; } }
L_0032BC28:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_0032BC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032BC50:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BC90u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008A(c, 27u, depth + 1u); else { c.pc = 0x00328920u; return; } if (c.pc != 0x0032BC90u) [[unlikely]] return; }
L_0032BC90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0032BCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0032BDE8; } }
    c.budget -= 1;
L_0032BCA8:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[5].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8336u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BCD4u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_008A(c, 232u, depth + 1u); else { c.pc = 0x0032B460u; return; } if (c.pc != 0x0032BCD4u) [[unlikely]] return; }
L_0032BCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032BCE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0032BDE8; } }
    c.budget -= 1;
L_0032BCE8:
    set32(c.r[8], c.r[29].w[0] + 168u);
    set32(c.r[22], c.r[29].w[0] + 164u);
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[19].d[0] = ld16((c.r[22].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD00u); c.r[18].d[0] = c.r[4].d[0] & 65535ull;  if (depth < kMaxDepth) unit_008A(c, 164u, depth + 1u); else { c.pc = 0x0032A530u; return; } if (c.pc != 0x0032BD00u) [[unlikely]] return; }
L_0032BD00:
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD10u); set32(c.r[5], ld32((c.r[8].w[0])));  if (depth < kMaxDepth) unit_008A(c, 162u, depth + 1u); else { c.pc = 0x0032A460u; return; } if (c.pc != 0x0032BD10u) [[unlikely]] return; }
L_0032BD10:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD28u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 32u, depth + 1u); else { c.pc = 0x003289F0u; return; } if (c.pc != 0x0032BD28u) [[unlikely]] return; }
L_0032BD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032BD38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0032BDE8; } }
L_0032BD38:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD44u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 39u, depth + 1u); else { c.pc = 0x00328D00u; return; } if (c.pc != 0x0032BD44u) [[unlikely]] return; }
L_0032BD44:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD50u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x0032BD50u) [[unlikely]] return; }
L_0032BD50:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD5Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 249u, depth + 1u); else { c.pc = 0x0032BC10u; return; } if (c.pc != 0x0032BD5Cu) [[unlikely]] return; }
L_0032BD5C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[22].d[0] = ld16((c.r[21].w[0] + 28u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD80u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 233u, depth + 1u); else { c.pc = 0x0032B590u; return; } if (c.pc != 0x0032BD80u) [[unlikely]] return; }
L_0032BD80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD8Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 54u, depth + 1u); else { c.pc = 0x00328FF0u; return; } if (c.pc != 0x0032BD8Cu) [[unlikely]] return; }
L_0032BD8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_0032BDB0; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0032BDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BDACu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 241u, depth + 1u); else { c.pc = 0x0032B820u; return; } if (c.pc != 0x0032BDACu) [[unlikely]] return; }
L_0032BDAC:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_0032BDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BDB8u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 45u, depth + 1u); else { c.pc = 0x00328D80u; return; } if (c.pc != 0x0032BDB8u) [[unlikely]] return; }
L_0032BDB8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032BDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BDD0u);  if (depth < kMaxDepth) unit_008A(c, 200u, depth + 1u); else { c.pc = 0x0032AFE0u; return; } if (c.pc != 0x0032BDD0u) [[unlikely]] return; }
L_0032BDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0032BDE8; } }
L_0032BDD8:
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0032BDE8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0032BE20:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 10452u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0032BE40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032BFA8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032BFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BE78u);  if (depth < kMaxDepth) unit_000B(c, 60u, depth + 1u); else { c.pc = 0x0012D170u; return; } if (c.pc != 0x0032BE78u) [[unlikely]] return; }
L_0032BE78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 10452u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[5].w[0]), c.r[16].w[0]);
    set32(c.r[3], 0u + 19u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0032BEC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < 13440ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 27u);  if (t) { goto L_0032BEC8; } }
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0032BEC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032BEF0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].sd[0] < 13440ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0032BEF0; } }
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0032BEF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_0032BF04; } }
    set32(c.r[2], c.r[3].w[0] + 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_0032BF04:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 63ull;  if (t) { goto L_0032BF20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032BF20; } }
    set32(c.r[2], c.r[2].w[0] - 64u);
    c.budget -= 1;
L_0032BF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032BF38; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
L_0032BF38:
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0032BF60; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0032BF60:
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032BF80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0032BF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF88u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x0032BF88u) [[unlikely]] return; }
L_0032BF88:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0032BFA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012B970u; return; } if (c.pc != 0x0032BFB8u) [[unlikely]] return; }
L_0032BFB8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032BFD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFD0u);  if (depth < kMaxDepth) unit_000B(c, 85u, depth + 1u); else { c.pc = 0x0012D9E0u; return; } if (c.pc != 0x0032BFD0u) [[unlikely]] return; }
L_0032BFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032BFE0; } }
L_0032BFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 82u, depth + 1u); else { c.pc = 0x0012D910u; return; } if (c.pc != 0x0032BFE0u) [[unlikely]] return; }
L_0032BFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
}

}
