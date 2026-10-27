#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BF[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95,
    0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0,
    0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0,
    0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 260, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 272, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 295, 296, 0, 297, 0, 298, 299, 300,
    301, 0, 0, 0, 302, 0, 303, 0, 304, 305, 306, 0, 307, 0, 308, 309, 310, 0, 0, 311, 312, 0, 313, 314, 315, 316, 317, 318, 0, 0, 0, 319,
};

void unit_00BF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003FC000;
    case 2u: goto L_003FC104;
    case 3u: goto L_003FC114;
    case 4u: goto L_003FC188;
    case 5u: goto L_003FC1E0;
    case 6u: goto L_003FC208;
    case 7u: goto L_003FC218;
    case 8u: goto L_003FC228;
    case 9u: goto L_003FC250;
    case 10u: goto L_003FC2C0;
    case 11u: goto L_003FC2D0;
    case 12u: goto L_003FC2E0;
    case 13u: goto L_003FC30C;
    case 14u: goto L_003FC314;
    case 15u: goto L_003FC31C;
    case 16u: goto L_003FC348;
    case 17u: goto L_003FC388;
    case 18u: goto L_003FC400;
    case 19u: goto L_003FC42C;
    case 20u: goto L_003FC440;
    case 21u: goto L_003FC454;
    case 22u: goto L_003FC45C;
    case 23u: goto L_003FC464;
    case 24u: goto L_003FC46C;
    case 25u: goto L_003FC4CC;
    case 26u: goto L_003FC500;
    case 27u: goto L_003FC530;
    case 28u: goto L_003FC590;
    case 29u: goto L_003FC5C0;
    case 30u: goto L_003FC5F0;
    case 31u: goto L_003FC620;
    case 32u: goto L_003FC680;
    case 33u: goto L_003FC6E8;
    case 34u: goto L_003FC6F0;
    case 35u: goto L_003FC6FC;
    case 36u: goto L_003FC730;
    case 37u: goto L_003FC74C;
    case 38u: goto L_003FC7E4;
    case 39u: goto L_003FC810;
    case 40u: goto L_003FC840;
    case 41u: goto L_003FC888;
    case 42u: goto L_003FC8DC;
    case 43u: goto L_003FC8E8;
    case 44u: goto L_003FC8F8;
    case 45u: goto L_003FC910;
    case 46u: goto L_003FCA68;
    case 47u: goto L_003FCA80;
    case 48u: goto L_003FCAB0;
    case 49u: goto L_003FCAF0;
    case 50u: goto L_003FCB40;
    case 51u: goto L_003FCB4C;
    case 52u: goto L_003FCB54;
    case 53u: goto L_003FCB60;
    case 54u: goto L_003FCB68;
    case 55u: goto L_003FCB7C;
    case 56u: goto L_003FCB8C;
    case 57u: goto L_003FCBB4;
    case 58u: goto L_003FCBBC;
    case 59u: goto L_003FCBE0;
    case 60u: goto L_003FCBF4;
    case 61u: goto L_003FCC7C;
    case 62u: goto L_003FCCA0;
    case 63u: goto L_003FCCD0;
    case 64u: goto L_003FCD18;
    case 65u: goto L_003FCD68;
    case 66u: goto L_003FCD80;
    case 67u: goto L_003FCD88;
    case 68u: goto L_003FCD94;
    case 69u: goto L_003FCD9C;
    case 70u: goto L_003FCDAC;
    case 71u: goto L_003FCDB4;
    case 72u: goto L_003FCDD0;
    case 73u: goto L_003FCDEC;
    case 74u: goto L_003FCE5C;
    case 75u: goto L_003FCEB0;
    case 76u: goto L_003FCEE0;
    case 77u: goto L_003FCF20;
    case 78u: goto L_003FCF78;
    case 79u: goto L_003FCFC0;
    case 80u: goto L_003FD108;
    case 81u: goto L_003FD120;
    case 82u: goto L_003FD130;
    case 83u: goto L_003FD140;
    case 84u: goto L_003FD1C8;
    case 85u: goto L_003FD274;
    case 86u: goto L_003FD568;
    case 87u: goto L_003FD5CC;
    case 88u: goto L_003FD5E8;
    case 89u: goto L_003FD5F8;
    case 90u: goto L_003FD65C;
    case 91u: goto L_003FD66C;
    case 92u: goto L_003FD6D4;
    case 93u: goto L_003FD6DC;
    case 94u: goto L_003FD6E8;
    case 95u: goto L_003FD6FC;
    case 96u: goto L_003FD704;
    case 97u: goto L_003FD710;
    case 98u: goto L_003FD718;
    case 99u: goto L_003FD734;
    case 100u: goto L_003FD73C;
    case 101u: goto L_003FD744;
    case 102u: goto L_003FD758;
    case 103u: goto L_003FD7BC;
    case 104u: goto L_003FD7D8;
    case 105u: goto L_003FD7E0;
    case 106u: goto L_003FD7EC;
    case 107u: goto L_003FD82C;
    case 108u: goto L_003FD870;
    case 109u: goto L_003FD890;
    case 110u: goto L_003FD920;
    case 111u: goto L_003FD970;
    case 112u: goto L_003FD988;
    case 113u: goto L_003FDA70;
    case 114u: goto L_003FDA90;
    case 115u: goto L_003FDAF0;
    case 116u: goto L_003FDC34;
    case 117u: goto L_003FDC44;
    case 118u: goto L_003FDC78;
    case 119u: goto L_003FDCB0;
    case 120u: goto L_003FDCC0;
    case 121u: goto L_003FDCE0;
    case 122u: goto L_003FDD30;
    case 123u: goto L_003FDD78;
    case 124u: goto L_003FDDD4;
    case 125u: goto L_003FDE4C;
    case 126u: goto L_003FDE70;
    case 127u: goto L_003FDE80;
    case 128u: goto L_003FDE90;
    case 129u: goto L_003FDEF8;
    case 130u: goto L_003FDF28;
    case 131u: goto L_003FDF5C;
    case 132u: goto L_003FDF74;
    case 133u: goto L_003FDF88;
    case 134u: goto L_003FDFA4;
    case 135u: goto L_003FDFE0;
    case 136u: goto L_003FE000;
    case 137u: goto L_003FE0C8;
    case 138u: goto L_003FE0D0;
    case 139u: goto L_003FE0E0;
    case 140u: goto L_003FE10C;
    case 141u: goto L_003FE118;
    case 142u: goto L_003FE130;
    case 143u: goto L_003FE140;
    case 144u: goto L_003FE194;
    case 145u: goto L_003FE238;
    case 146u: goto L_003FE30C;
    case 147u: goto L_003FE350;
    case 148u: goto L_003FE3E0;
    case 149u: goto L_003FE470;
    case 150u: goto L_003FE480;
    case 151u: goto L_003FE490;
    case 152u: goto L_003FE4B0;
    case 153u: goto L_003FE4B8;
    case 154u: goto L_003FE4D0;
    case 155u: goto L_003FE4F0;
    case 156u: goto L_003FE61C;
    case 157u: goto L_003FE624;
    case 158u: goto L_003FE640;
    case 159u: goto L_003FE674;
    case 160u: goto L_003FE680;
    case 161u: goto L_003FE6B0;
    case 162u: goto L_003FE6CC;
    case 163u: goto L_003FE700;
    case 164u: goto L_003FE71C;
    case 165u: goto L_003FE76C;
    case 166u: goto L_003FE7B0;
    case 167u: goto L_003FE80C;
    case 168u: goto L_003FE824;
    case 169u: goto L_003FE844;
    case 170u: goto L_003FE888;
    case 171u: goto L_003FE8D0;
    case 172u: goto L_003FE8E0;
    case 173u: goto L_003FE8F0;
    case 174u: goto L_003FE910;
    case 175u: goto L_003FE930;
    case 176u: goto L_003FE938;
    case 177u: goto L_003FE950;
    case 178u: goto L_003FE964;
    case 179u: goto L_003FE96C;
    case 180u: goto L_003FE978;
    case 181u: goto L_003FE988;
    case 182u: goto L_003FE990;
    case 183u: goto L_003FE998;
    case 184u: goto L_003FE9A0;
    case 185u: goto L_003FE9C0;
    case 186u: goto L_003FEA18;
    case 187u: goto L_003FEA64;
    case 188u: goto L_003FEA6C;
    case 189u: goto L_003FEA80;
    case 190u: goto L_003FEB2C;
    case 191u: goto L_003FEB38;
    case 192u: goto L_003FEB40;
    case 193u: goto L_003FEB8C;
    case 194u: goto L_003FEBA0;
    case 195u: goto L_003FEBC0;
    case 196u: goto L_003FEBD0;
    case 197u: goto L_003FEBE8;
    case 198u: goto L_003FEBF0;
    case 199u: goto L_003FEC08;
    case 200u: goto L_003FEC10;
    case 201u: goto L_003FECC4;
    case 202u: goto L_003FECE0;
    case 203u: goto L_003FED00;
    case 204u: goto L_003FEDB0;
    case 205u: goto L_003FEDF0;
    case 206u: goto L_003FEE60;
    case 207u: goto L_003FEF38;
    case 208u: goto L_003FEF58;
    case 209u: goto L_003FEF70;
    case 210u: goto L_003FEF88;
    case 211u: goto L_003FEFFC;
    case 212u: goto L_003FF030;
    case 213u: goto L_003FF1C0;
    case 214u: goto L_003FF254;
    case 215u: goto L_003FF340;
    case 216u: goto L_003FF350;
    case 217u: goto L_003FF360;
    case 218u: goto L_003FF3A0;
    case 219u: goto L_003FF3DC;
    case 220u: goto L_003FF428;
    case 221u: goto L_003FF494;
    case 222u: goto L_003FF4BC;
    case 223u: goto L_003FF4E4;
    case 224u: goto L_003FF50C;
    case 225u: goto L_003FF534;
    case 226u: goto L_003FF558;
    case 227u: goto L_003FF560;
    case 228u: goto L_003FF604;
    case 229u: goto L_003FF660;
    case 230u: goto L_003FF680;
    case 231u: goto L_003FF68C;
    case 232u: goto L_003FF7A0;
    case 233u: goto L_003FF7C8;
    case 234u: goto L_003FF800;
    case 235u: goto L_003FF864;
    case 236u: goto L_003FF880;
    case 237u: goto L_003FF888;
    case 238u: goto L_003FF890;
    case 239u: goto L_003FF8B8;
    case 240u: goto L_003FF8C0;
    case 241u: goto L_003FF8C8;
    case 242u: goto L_003FF8D0;
    case 243u: goto L_003FF8D8;
    case 244u: goto L_003FF8F0;
    case 245u: goto L_003FF900;
    case 246u: goto L_003FF910;
    case 247u: goto L_003FF954;
    case 248u: goto L_003FF988;
    case 249u: goto L_003FF9A4;
    case 250u: goto L_003FF9B8;
    case 251u: goto L_003FF9C0;
    case 252u: goto L_003FF9C8;
    case 253u: goto L_003FF9D0;
    case 254u: goto L_003FF9E4;
    case 255u: goto L_003FFA0C;
    case 256u: goto L_003FFA50;
    case 257u: goto L_003FFA70;
    case 258u: goto L_003FFBA0;
    case 259u: goto L_003FFBF4;
    case 260u: goto L_003FFC14;
    case 261u: goto L_003FFC18;
    case 262u: goto L_003FFC40;
    case 263u: goto L_003FFC54;
    case 264u: goto L_003FFC8C;
    case 265u: goto L_003FFCA8;
    case 266u: goto L_003FFCFC;
    case 267u: goto L_003FFD04;
    case 268u: goto L_003FFD0C;
    case 269u: goto L_003FFD14;
    case 270u: goto L_003FFD1C;
    case 271u: goto L_003FFD40;
    case 272u: goto L_003FFD44;
    case 273u: goto L_003FFD50;
    case 274u: goto L_003FFD60;
    case 275u: goto L_003FFD68;
    case 276u: goto L_003FFD84;
    case 277u: goto L_003FFD90;
    case 278u: goto L_003FFD9C;
    case 279u: goto L_003FFDAC;
    case 280u: goto L_003FFDC4;
    case 281u: goto L_003FFDDC;
    case 282u: goto L_003FFDE8;
    case 283u: goto L_003FFE00;
    case 284u: goto L_003FFE20;
    case 285u: goto L_003FFE50;
    case 286u: goto L_003FFE58;
    case 287u: goto L_003FFE9C;
    case 288u: goto L_003FFEF0;
    case 289u: goto L_003FFEFC;
    case 290u: goto L_003FFF00;
    case 291u: goto L_003FFF30;
    case 292u: goto L_003FFF44;
    case 293u: goto L_003FFF4C;
    case 294u: goto L_003FFF5C;
    case 295u: goto L_003FFF60;
    case 296u: goto L_003FFF64;
    case 297u: goto L_003FFF6C;
    case 298u: goto L_003FFF74;
    case 299u: goto L_003FFF78;
    case 300u: goto L_003FFF7C;
    case 301u: goto L_003FFF80;
    case 302u: goto L_003FFF90;
    case 303u: goto L_003FFF98;
    case 304u: goto L_003FFFA0;
    case 305u: goto L_003FFFA4;
    case 306u: goto L_003FFFA8;
    case 307u: goto L_003FFFB0;
    case 308u: goto L_003FFFB8;
    case 309u: goto L_003FFFBC;
    case 310u: goto L_003FFFC0;
    case 311u: goto L_003FFFCC;
    case 312u: goto L_003FFFD0;
    case 313u: goto L_003FFFD8;
    case 314u: goto L_003FFFDC;
    case 315u: goto L_003FFFE0;
    case 316u: goto L_003FFFE4;
    case 317u: goto L_003FFFE8;
    case 318u: goto L_003FFFEC;
    case 319u: goto L_003FFFFC;
    default: bad_entry(c, 0x003FC000u); return;
    }
L_003FC000:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8658u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FC038; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003FC038; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FC038; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_003FC038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FC068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FC068; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FC078; } }
L_003FC068:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FC2A0; } }
L_003FC078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_003FC140; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC0C0; } }
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_003FC0E0; } }
L_003FC0C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_003FC0E0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FC178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC104u); st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FC104u) [[unlikely]] return; }
L_003FC104:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC114u); st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FC114u) [[unlikely]] return; }
L_003FC114:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC130; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003FC130:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003FC178; } }
L_003FC140:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC158; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003FC178; } }
L_003FC158:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 8;
L_003FC178:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], 0u + 55u);
    c.budget -= 4;
L_003FC188:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FC1C0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC1B0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003FC280; } }
    c.budget -= 1;
L_003FC1B0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 5u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003FC1C0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FC248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1E0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FC1E0u) [[unlikely]] return; }
L_003FC1E0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC208u); st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FC208u) [[unlikely]] return; }
L_003FC208:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC218u); st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FC218u) [[unlikely]] return; }
L_003FC218:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC228u); st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FC228u) [[unlikely]] return; }
L_003FC228:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC280; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003FC280; } }
L_003FC248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC250u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FC250u) [[unlikely]] return; }
L_003FC250:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_003FC268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC268; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_003FC268:
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003FC280:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 5u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC188u | kUnwind; return; } goto L_003FC188; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003FC2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FC2C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FC2D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FC2E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC30Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FC30Cu) [[unlikely]] return; }
L_003FC30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC314u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003FC314u) [[unlikely]] return; }
L_003FC314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC31Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FC31Cu) [[unlikely]] return; }
L_003FC31C:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[28].w[0] - 25276u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[4], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC348u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x003FC348u) [[unlikely]] return; }
L_003FC348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC388u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003FC388u) [[unlikely]] return; }
L_003FC388:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_003FC430; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 29584u);
    set32(c.r[3], c.r[3].w[0] - 29456u);
    set32(c.r[2], c.r[2].w[0] - 29520u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    st32((c.r[1].w[0] + 20232u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20228u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.budget -= 27;
L_003FC400:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC42Cu); st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x003FC42Cu) [[unlikely]] return; }
L_003FC42C:
    c.budget -= 1;
L_003FC430:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
L_003FC440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_003FC4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC454u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FC454u) [[unlikely]] return; }
L_003FC454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC45Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FC45Cu) [[unlikely]] return; }
L_003FC45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC464u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003FC464u) [[unlikely]] return; }
L_003FC464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC46Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FC46Cu) [[unlikely]] return; }
L_003FC46C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 29584u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 29456u);
    set32(c.r[2], c.r[2].w[0] - 29520u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4CCu); st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x003FC4CCu) [[unlikely]] return; }
L_003FC4CC:
    c.budget -= 1;
L_003FC4D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC440u | kUnwind; return; } goto L_003FC440; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003FC500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC530u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003FC530u) [[unlikely]] return; }
L_003FC530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC578; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 46u);
    set32(c.r[4], c.r[4].w[0] - 11968u);
    set32(c.r[3], c.r[3].w[0] - 14960u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 16;
L_003FC578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FC590:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9840u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FC5C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9808u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FC5F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC620u); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FC620u) [[unlikely]] return; }
L_003FC620:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] - 9968u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] - 11968u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 24;
L_003FC680:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 16u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 16u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC680u | kUnwind; return; } goto L_003FC680; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9872u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6E8u); set32(c.r[8], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00BF(c, 108u, depth + 1u); else { c.pc = 0x003FD870u; return; } if (c.pc != 0x003FC6E8u) [[unlikely]] return; }
L_003FC6E8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FC6F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 36u, depth + 1u); else { c.pc = 0x003FC730u; return; } if (c.pc != 0x003FC6FCu) [[unlikely]] return; }
L_003FC6FC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC6F0u | kUnwind; return; } goto L_003FC6F0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FC730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC74Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 111u, depth + 1u); else { c.pc = 0x003FD970u; return; } if (c.pc != 0x003FC74Cu) [[unlikely]] return; }
L_003FC74C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC768; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FC7F0; } }
    c.budget -= 1;
L_003FC768:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 15u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[4], c.r[5].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FC7E8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7E4u); set32(c.r[8], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00BF(c, 108u, depth + 1u); else { c.pc = 0x003FD870u; return; } if (c.pc != 0x003FC7E4u) [[unlikely]] return; }
L_003FC7E4:
    c.budget -= 1;
L_003FC7E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FC7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC810:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9792u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FC840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 18;
L_003FC888:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC888u | kUnwind; return; } goto L_003FC888; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8DCu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00BF(c, 108u, depth + 1u); else { c.pc = 0x003FD870u; return; } if (c.pc != 0x003FC8DCu) [[unlikely]] return; }
L_003FC8DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8E8u); set32(c.r[4], c.r[4].w[0] - 25232u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FC8E8u) [[unlikely]] return; }
L_003FC8E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8F8u); set32(c.r[4], c.r[4].w[0] - 10272u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003FC8F8u) [[unlikely]] return; }
L_003FC8F8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 10480u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 21;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003FC978; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_003FC978; } }
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003FC978:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 10336u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003FC9C0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_003FC9C0; } }
    set32(c.r[7], c.r[7].w[0] + 8u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FC9C0:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003FC9E0; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003FC9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FCA00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FCA70; } }
    c.budget -= 1;
L_003FCA00:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 3u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[4], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FCA68; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FCA68; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[5], 0u + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA68u); c.r[6].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00BF(c, 26u, depth + 1u); else { c.pc = 0x003FC500u; return; } if (c.pc != 0x003FCA68u) [[unlikely]] return; }
L_003FCA68:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FCA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCA80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9776u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FCAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 16;
L_003FCAF0:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCAF0u | kUnwind; return; } goto L_003FCAF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB40u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00BF(c, 108u, depth + 1u); else { c.pc = 0x003FD870u; return; } if (c.pc != 0x003FCB40u) [[unlikely]] return; }
L_003FCB40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB4Cu); set32(c.r[4], c.r[4].w[0] - 24912u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FCB4Cu) [[unlikely]] return; }
L_003FCB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB54u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003FCB54u) [[unlikely]] return; }
L_003FCB54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB60u); set32(c.r[4], c.r[4].w[0] - 25872u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FCB60u) [[unlikely]] return; }
L_003FCB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB68u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003FCB68u) [[unlikely]] return; }
L_003FCB68:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 25808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB7Cu); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FCB7Cu) [[unlikely]] return; }
L_003FCB7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB8Cu); set32(c.r[4], c.r[4].w[0] - 9856u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x003FCB8Cu) [[unlikely]] return; }
L_003FCB8C:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBB4u); st32((c.r[16].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003FCBB4u) [[unlikely]] return; }
L_003FCBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBBCu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FCBBCu) [[unlikely]] return; }
L_003FCBBC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 111u, depth + 1u); else { c.pc = 0x003FD970u; return; } if (c.pc != 0x003FCBF4u) [[unlikely]] return; }
L_003FCBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FCC10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FCC88; } }
    c.budget -= 1;
L_003FCC10:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[1].w[0] - 19548u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FCC80; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FCC80; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FCC80; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[5], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 26u, depth + 1u); else { c.pc = 0x003FC500u; return; } if (c.pc != 0x003FCC7Cu) [[unlikely]] return; }
L_003FCC7C:
    c.budget -= 1;
L_003FCC80:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FCC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCCA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9760u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FCCD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 18;
L_003FCD18:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCD18u | kUnwind; return; } goto L_003FCD18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD68u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_00BF(c, 108u, depth + 1u); else { c.pc = 0x003FD870u; return; } if (c.pc != 0x003FCD68u) [[unlikely]] return; }
L_003FCD68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 25872u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD80u); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FCD80u) [[unlikely]] return; }
L_003FCD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD88u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003FCD88u) [[unlikely]] return; }
L_003FCD88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD94u); set32(c.r[4], c.r[4].w[0] - 25808u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FCD94u) [[unlikely]] return; }
L_003FCD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD9Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003FCD9Cu) [[unlikely]] return; }
L_003FCD9C:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDACu); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003FCDACu) [[unlikely]] return; }
L_003FCDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDB4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FCDB4u) [[unlikely]] return; }
L_003FCDB4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 111u, depth + 1u); else { c.pc = 0x003FD970u; return; } if (c.pc != 0x003FCDECu) [[unlikely]] return; }
L_003FCDEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FCE08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FCE90; } }
    c.budget -= 1;
L_003FCE08:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FCE88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FCE88; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE5Cu); set32(c.r[8], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_00BF(c, 108u, depth + 1u); else { c.pc = 0x003FD870u; return; } if (c.pc != 0x003FCE5Cu) [[unlikely]] return; }
L_003FCE5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FCE88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003FCE88:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FCE90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCEB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9744u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FCEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 16;
L_003FCF20:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCF20u | kUnwind; return; } goto L_003FCF20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 10u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF78u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00BF(c, 108u, depth + 1u); else { c.pc = 0x003FD870u; return; } if (c.pc != 0x003FCF78u) [[unlikely]] return; }
L_003FCF78:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FCFA0; } }
    c.f[0] = ld32((c.r[3].w[0] + 240u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 244u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 248u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 7;
L_003FCFA0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 10480u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 21;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003FD028; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_003FD028; } }
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003FD028:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 10336u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003FD070; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_003FD070; } }
    set32(c.r[7], c.r[7].w[0] + 8u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FD070:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003FD0B0; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FD0B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FD110; } }
L_003FD0B0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FD108; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FD108; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[5], 0u + 4u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD108u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00BF(c, 26u, depth + 1u); else { c.pc = 0x003FC500u; return; } if (c.pc != 0x003FD108u) [[unlikely]] return; }
L_003FD108:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FD110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD120:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FD130:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FD140:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 152u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[21].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[29].w[0] + 254u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[17], c.r[29].w[0] + 253u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 255u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[29].w[0] + 252u);
    st32((c.r[1].w[0] + 20244u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[1].w[0] + 20280u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 34;
L_003FD1C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003FD830; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[6], c.r[6].w[0] - 10880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 10800u);
    set32(c.r[4], c.r[4].w[0] - 10720u);
    set32(c.r[3], c.r[3].w[0] - 10896u);
    set32(c.r[2], c.r[2].w[0] + 912u);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 6u)));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD274u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x003FD274u) [[unlikely]] return; }
L_003FD274:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 10480u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FD2C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003FD2D8; } }
L_003FD2C8:
    c.f[20] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[6].w[0] + 4u));  if (t) { goto L_003FD338; } }
    c.budget -= 1;
L_003FD2D8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FD338; } }
    set32(c.r[2], ld32((c.r[6].w[0] - 12u)));
    c.f[5] = ld32((c.r[6].w[0] - 8u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = ld32((c.r[6].w[0] - 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.f[3] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[21] = fp::add(c.f[5], c.f[1]);
    c.f[20] = fp::add(c.f[4], c.f[0]);
    c.budget -= 20;
L_003FD338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 10336u);
    st32((c.r[1].w[0] + 20228u), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003FD380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[5].w[0] + 4u));  if (t) { goto L_003FD3C8; } }
L_003FD380:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FD3C8; } }
    set32(c.r[2], ld32((c.r[5].w[0] - 8u)));
    c.f[2] = ld32((c.r[5].w[0] - 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.f[21] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 21u, c.f[21], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[2]);
    c.budget -= 14;
L_003FD3C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 128u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FD408; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FD424; } }
L_003FD408:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003FD424:
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003FD7F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FD760; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FD678; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FD600; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FD460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD820; } }
L_003FD460:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003FD478; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FD490; } }
L_003FD478:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003FD490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FD4D8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FD4F4; } }
L_003FD4D8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003FD4F4:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 7u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003FD514; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FD530; } }
L_003FD514:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_003FD530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | 2910ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_003FD558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 4;
L_003FD558:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD568u);  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x003FD568u) [[unlikely]] return; }
L_003FD568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 7u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003FD588; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FD5A0; } }
L_003FD588:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003FD5A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 10144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5CCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003FD5CCu) [[unlikely]] return; }
L_003FD5CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 10320u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5E8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003FD5E8u) [[unlikely]] return; }
L_003FD5E8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5F8u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003FD5F8u) [[unlikely]] return; }
L_003FD5F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD820; } }
L_003FD600:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003FD618; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FD630; } }
L_003FD618:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003FD630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 10144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD65Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003FD65Cu) [[unlikely]] return; }
L_003FD65C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD66Cu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003FD66Cu) [[unlikely]] return; }
L_003FD66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD820; } }
    c.budget -= 1;
L_003FD678:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003FD690; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FD6A8; } }
L_003FD690:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003FD6A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 10144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6D4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003FD6D4u) [[unlikely]] return; }
L_003FD6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6DCu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FD6DCu) [[unlikely]] return; }
L_003FD6DC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6E8u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003FD6E8u) [[unlikely]] return; }
L_003FD6E8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[5].w[0] + 29040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6FCu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003FD6FCu) [[unlikely]] return; }
L_003FD6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD704u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003FD704u) [[unlikely]] return; }
L_003FD704:
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD710u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003FD710u) [[unlikely]] return; }
L_003FD710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD718u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FD718u) [[unlikely]] return; }
L_003FD718:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[1].w[0] + 20224u));
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD734u); c.f[13] = ld32((c.r[1].w[0] + 20228u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003FD734u) [[unlikely]] return; }
L_003FD734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD73Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003FD73Cu) [[unlikely]] return; }
L_003FD73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD744u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FD744u) [[unlikely]] return; }
L_003FD744:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD758u); st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x003FD758u) [[unlikely]] return; }
L_003FD758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD830; } }
L_003FD760:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003FD778; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FD790; } }
L_003FD778:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003FD790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 10144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7BCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003FD7BCu) [[unlikely]] return; }
L_003FD7BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 10320u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7D8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003FD7D8u) [[unlikely]] return; }
L_003FD7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7E0u); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FD7E0u) [[unlikely]] return; }
L_003FD7E0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7ECu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003FD7ECu) [[unlikely]] return; }
L_003FD7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD820; } }
    c.budget -= 1;
L_003FD7F8:
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.f[3] = ld32((c.r[21].w[0] + 32u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_003FD820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD82Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x003FD82Cu) [[unlikely]] return; }
L_003FD82C:
    c.budget -= 1;
L_003FD830:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD1C8u | kUnwind; return; } goto L_003FD1C8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003FD870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 8;
L_003FD890:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003FD940; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] - 10904u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_003FD918; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003FD918; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003FD910; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003FD910; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FD910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD930; } }
    c.budget -= 1;
L_003FD910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003FD930; } }
L_003FD918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD920u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FD920u) [[unlikely]] return; }
L_003FD920:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003FD930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FD950; } }
L_003FD940:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD890u | kUnwind; return; } goto L_003FD890; } }
L_003FD950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FD970:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 10480u);
    set32(c.r[10], c.r[10].w[0] - 10336u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_003FD988:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003FDA48; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[11], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], ld32((c.r[11].w[0])));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.budget -= 15;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_003FD9E8; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[9].w[0] + 1u);  if (t) { goto L_003FD9E8; } }
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_003FD9E8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[11], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[11].w[0])));
    c.budget -= 10;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_003FDA28; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[9].w[0] + 1u);  if (t) { goto L_003FDA28; } }
    set32(c.r[11], c.r[11].w[0] + 8u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_003FDA28:
    set32(c.r[7], ld32((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_003FDA48; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 5;
L_003FDA48:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[7].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD988u | kUnwind; return; } goto L_003FD988; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003FDA70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FDA90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9440u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 9728u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAF0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003FDAF0u) [[unlikely]] return; }
L_003FDAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 8560u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[12], c.r[12].w[0] - 9567u);
    set32(c.r[11], c.r[11].w[0] - 9566u);
    set32(c.r[10], c.r[10].w[0] - 9565u);
    set32(c.r[9], 0u + 4u);
    set32(c.r[8], c.r[8].w[0] - 9536u);
    set32(c.r[7], c.r[7].w[0] - 9532u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 9528u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] - 9524u);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[2], c.r[2].w[0] - 9728u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    st16((c.r[16].w[0] + 86u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 81;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC34u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003FDC34u) [[unlikely]] return; }
L_003FDC34:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC44u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003FDC44u) [[unlikely]] return; }
L_003FDC44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC78u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003FDC78u) [[unlikely]] return; }
L_003FDC78:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] - 9568u);
    set32(c.r[2], c.r[2].w[0] - 29104u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDCB0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003FDCB0u) [[unlikely]] return; }
L_003FDCB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDCC0u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 121u, depth + 1u); else { c.pc = 0x003FDCE0u; return; } if (c.pc != 0x003FDCC0u) [[unlikely]] return; }
L_003FDCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FDCE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18776u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FDE40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003FDD30; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 28u);  if (t) { goto L_003FDD30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD30u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x003FDD30u) [[unlikely]] return; }
L_003FDD30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003FDDD8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FDD80; } }
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD78u); st32((c.r[16].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003FDD78u) [[unlikely]] return; }
L_003FDD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FDDD8; } }
L_003FDD80:
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    st8((c.r[1].w[0] + 18776u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FDDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDDD4u); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x003FDDD4u) [[unlikely]] return; }
L_003FDDD4:
    c.budget -= 1;
L_003FDDD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 26;
L_003FDE40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x003FDE4Cu) [[unlikely]] return; }
L_003FDE4C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FDE70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FDE80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FDE90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[20].w[0] + 304u);  if (t) { goto L_003FDFC0; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 176u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 86u)));
    set32(c.r[4], c.r[4].w[0] + 7840u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] << 6);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_003FDFC0; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003FDEF8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[20].w[0] + 192u);  if (t) { goto L_003FDFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF28u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FDF28u) [[unlikely]] return; }
L_003FDF28:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FDF88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.f[14] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF5Cu); c.f[12] = ld32((c.r[2].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FDF5Cu) [[unlikely]] return; }
L_003FDF5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FDF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF74u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003FDF74u) [[unlikely]] return; }
L_003FDF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FDF88; } }
    c.budget -= 1;
L_003FDF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF88u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FDF88u) [[unlikely]] return; }
L_003FDF88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDFA4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003FDFA4u) [[unlikely]] return; }
L_003FDFA4:
    c.budget -= 1;
L_003FDFA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 86u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDEF8u | kUnwind; return; } goto L_003FDEF8; } }
    c.budget -= 1;
L_003FDFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FDFE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 9248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FE000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], c.r[9].w[0] - 9424u);
    set32(c.r[8], c.r[8].w[0] - 7024u);
    set32(c.r[7], c.r[7].w[0] - 9263u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] - 9264u);
    set32(c.r[2], c.r[2].w[0] - 29104u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[3] = ld32((c.r[9].w[0]));
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0C8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003FE0C8u) [[unlikely]] return; }
L_003FE0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 139u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x003FE0D0u) [[unlikely]] return; }
L_003FE0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9232u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE10Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE10Cu) [[unlikely]] return; }
L_003FE10C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x003FE118u) [[unlikely]] return; }
L_003FE118:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FE140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18777u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FE250; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 27856u);  if (t) { goto L_003FE198; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 27572u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE198; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE194u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x003FE194u) [[unlikely]] return; }
L_003FE194:
    c.budget -= 1;
L_003FE198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[3] = ld32((c.r[1].w[0] - 24860u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[5].w[0] - 9296u);
    set32(c.r[4], c.r[4].w[0] - 9292u);
    set32(c.r[3], c.r[3].w[0] - 9288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.f[2] = ld32((c.r[1].w[0] - 24856u));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[1] = ld32((c.r[1].w[0] - 24864u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8532u));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 34;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003FE338; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE338; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 166u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE238u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x0018ACC0u; return; } if (c.pc != 0x003FE238u) [[unlikely]] return; }
L_003FE238:
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003FE338; } }
    c.budget -= 1;
L_003FE250:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003FE338; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 1u);  if (t) { goto L_003FE288; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[3], 0u + 10u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003FE288:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE2A0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003FE338; } }
L_003FE2A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] | 29491ull;
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 40u), c.f[1]);  if (t) { goto L_003FE338; } }
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FE310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE30Cu); set32(c.r[5], 0u + 94u);  if (depth < kMaxDepth) unit_001A(c, 166u, depth + 1u); else { c.pc = 0x0016AA50u; return; } if (c.pc != 0x003FE30Cu) [[unlikely]] return; }
L_003FE30C:
    c.budget -= 1;
L_003FE310:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003FE338; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 18777u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FE338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE350:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003FE3D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FE3A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FE378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FE3D8; } }
L_003FE378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18776u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE3D8; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
L_003FE3A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446F0000u);
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 40u), c.f[1]);  if (t) { goto L_003FE3D8; } }
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003FE3D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FE3E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003FE468; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FE430; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FE408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FE468; } }
L_003FE408:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18778u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE468; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
L_003FE430:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446D0000u);
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 40u), c.f[1]);  if (t) { goto L_003FE468; } }
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003FE468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FE470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FE480:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FE490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FE4B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE4B0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FE4B0u) [[unlikely]] return; }
L_003FE4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE4B8u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003FE4B8u) [[unlikely]] return; }
L_003FE4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE4D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 8496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FE4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[13], 0u + 1u);
    set32(c.r[12], c.r[12].w[0] - 9200u);
    set32(c.r[11], c.r[11].w[0] - 8848u);
    set32(c.r[10], c.r[10].w[0] - 5904u);
    set32(c.r[9], c.r[9].w[0] - 8895u);
    set32(c.r[8], c.r[8].w[0] - 8544u);
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - 8543u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[3], c.r[3].w[0] - 8896u);
    st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[2], c.r[2].w[0] - 29104u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 84u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.f[3] = ld32((c.r[11].w[0]));
    c.f[2] = ld32((c.r[11].w[0] + 4u));
    c.f[1] = ld32((c.r[11].w[0] + 8u));
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 168u), c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = ld8((c.r[9].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 322u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 75;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE61Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003FE61Cu) [[unlikely]] return; }
L_003FE61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 158u, depth + 1u); else { c.pc = 0x003FE640u; return; } if (c.pc != 0x003FE624u) [[unlikely]] return; }
L_003FE624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE674u); set32(c.r[17], c.r[16].w[0] + 304u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE674u) [[unlikely]] return; }
L_003FE674:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE680u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x003FE680u) [[unlikely]] return; }
L_003FE680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003FE690; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003FE690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6CCu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003FE6CCu) [[unlikely]] return; }
L_003FE6CC:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4810000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x45780000u);  if (t) { goto L_003FE6F0; } }
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 2;
L_003FE6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE71Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003FE71Cu) [[unlikely]] return; }
L_003FE71C:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43280000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42880000u);  if (t) { goto L_003FE740; } }
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_003FE740:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] << 15);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE76Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x003FE76Cu) [[unlikely]] return; }
L_003FE76C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E570000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.r[3].d[0] = c.r[3].d[0] | 2621ull;
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003FE898; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003FE848; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FE8B8; } }
L_003FE7F0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE80Cu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0078(c, 235u, depth + 1u); else { c.pc = 0x002E2A30u; return; } if (c.pc != 0x003FE80Cu) [[unlikely]] return; }
L_003FE80C:
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    set32(c.r[2], c.r[2].w[0] - 16384u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE824u); st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0078(c, 235u, depth + 1u); else { c.pc = 0x002E2A30u; return; } if (c.pc != 0x003FE824u) [[unlikely]] return; }
L_003FE824:
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    set32(c.r[2], c.r[2].w[0] - 16384u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] >> 16);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE844u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0078(c, 235u, depth + 1u); else { c.pc = 0x002E2A30u; return; } if (c.pc != 0x003FE844u) [[unlikely]] return; }
L_003FE844:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003FE848:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[3].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FE8B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE888u); st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0078(c, 235u, depth + 1u); else { c.pc = 0x002E2A30u; return; } if (c.pc != 0x003FE888u) [[unlikely]] return; }
L_003FE888:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003FE898:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FE8B8; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003FE8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE8D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FE8E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FE8F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 322u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 8464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FE910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FE938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE930u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FE930u) [[unlikely]] return; }
L_003FE930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE938u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003FE938u) [[unlikely]] return; }
L_003FE938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE950:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003FE964u) [[unlikely]] return; }
L_003FE964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE96Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FE96Cu) [[unlikely]] return; }
L_003FE96C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE978u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003FE978u) [[unlikely]] return; }
L_003FE978:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE988u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x003FE988u) [[unlikely]] return; }
L_003FE988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE990u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x003FE990u) [[unlikely]] return; }
L_003FE990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE998u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FE998u) [[unlikely]] return; }
L_003FE998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9A0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x003FE9A0u) [[unlikely]] return; }
L_003FE9A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9C0u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003FE9C0u) [[unlikely]] return; }
L_003FE9C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);  if (t) { goto L_003FE9F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 19876u)));
    set32(c.r[3], c.r[3].w[0] - 8448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20300u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);  if (t) { goto L_003FEA10; } }
L_003FE9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 19864u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.budget -= 8;
L_003FEA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA18u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FEA18u) [[unlikely]] return; }
L_003FEA18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], c.r[28].w[0] - 25260u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA64u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0067(c, 136u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x003FEA64u) [[unlikely]] return; }
L_003FEA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003FEA6Cu) [[unlikely]] return; }
L_003FEA6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003FEA80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FEBA0; } }
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55040ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[21] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FEAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_003FEAF0; } }
L_003FEAD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FEAF0; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_003FEAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    fpu_div(c, 1u, c.f[21], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB2Cu); c.f[20] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FEB2Cu) [[unlikely]] return; }
L_003FEB2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB38u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003FEB38u) [[unlikely]] return; }
L_003FEB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB40u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FEB40u) [[unlikely]] return; }
L_003FEB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[4] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[3]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB8Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FEB8Cu) [[unlikely]] return; }
L_003FEB8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEBA0u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003FEBA0u) [[unlikely]] return; }
L_003FEBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FEBC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEA80u | kUnwind; return; } goto L_003FEA80; }
L_003FEBD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] + 304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEBE8u); set32(c.r[4], c.r[4].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FEBE8u) [[unlikely]] return; }
L_003FEBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEBF0u); c.r[4].d[0] = ld16((c.r[16].w[0] + 20u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003FEBF0u) [[unlikely]] return; }
L_003FEBF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC5830000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC08u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FEC08u) [[unlikely]] return; }
L_003FEC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC10u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FEC10u) [[unlikely]] return; }
L_003FEC10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 7904u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 7920u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 25256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 7936u);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 81u)));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);  if (t) { goto L_003FEC90; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 13616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);  if (t) { goto L_003FEC98; } }
L_003FEC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FECC8; } }
L_003FEC98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECC4u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x003FECC4u) [[unlikely]] return; }
L_003FECC4:
    c.budget -= 1;
L_003FECC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FECE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 4928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FED00:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[8], c.r[8].w[0] - 27856u);
    set32(c.r[6], c.r[6].w[0] - 3232u);
    set32(c.r[5], c.r[5].w[0] - 7520u);
    set32(c.r[3], c.r[3].w[0] - 7488u);
    set32(c.r[2], c.r[2].w[0] - 7484u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[9], c.r[10].w[0] << 4);
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[7], c.r[9].w[0] << 9);
    st32((c.r[4].w[0] + 80u), 0u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st8((c.r[4].w[0] + 364u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 365u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 366u), static_cast<std::uint8_t>(0u));
    c.budget -= 41;
    { st8((c.r[4].w[0] + 367u), static_cast<std::uint8_t>(0u));  goto L_003FEDB0; }
L_003FEDB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18777u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    c.budget -= 16;
L_003FEDF0:
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003FEFF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FEFE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_003FEF40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FEE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FEFF0; } }
L_003FEE28:
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 7616u);
    c.r[13].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[19].d[0] + 0ull;
    c.r[11].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 17u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 14;
L_003FEE60:
    st32((c.r[12].w[0] + 32u), c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[14].w[0]));
    c.r[9].d[0] = c.r[13].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    set32(c.r[8], c.r[19].w[0] + c.r[9].w[0]);
    st8((c.r[8].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    st16((c.r[11].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[14].w[0] + 4u));
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0] + 8u));
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FEEA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003FEEB0; } }
    c.budget -= 1;
L_003FEEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 60u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_003FEEE0; } }
L_003FEEB0:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FEEC8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003FEED0; } }
L_003FEEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003FEEE0; } }
L_003FEED0:
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FEEE0; } }
    st8((c.r[8].w[0] + 60u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_003FEEE0:
    set32(c.r[2], c.r[13].w[0] + 1u);
    c.r[13].d[0] = c.r[2].d[0] << 56;
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    set32(c.r[14], c.r[14].w[0] + 12u);
    c.r[2].d[0] = c.r[13].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEE60u | kUnwind; return; } goto L_003FEE60; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] - 4960u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FEFF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF38u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x003FEF38u) [[unlikely]] return; }
L_003FEF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FEFF0; } }
L_003FEF40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003FEF58:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003FEF78; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF70u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 212u, depth + 1u); else { c.pc = 0x003FF030u; return; } if (c.pc != 0x003FEF70u) [[unlikely]] return; }
L_003FEF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FEF88; } }
L_003FEF78:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF88u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 213u, depth + 1u); else { c.pc = 0x003FF1C0u; return; } if (c.pc != 0x003FEF88u) [[unlikely]] return; }
L_003FEF88:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_003FEFA8; } }
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 2;
L_003FEFA8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEF58u | kUnwind; return; } goto L_003FEF58; } }
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FEFF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003FEFF0; } }
L_003FEFE0:
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 18777u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003FEFF0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEFFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x003FEFFCu) [[unlikely]] return; }
L_003FEFFC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FF030:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);  if (t) { goto L_003FF058; } }
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003FF058:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; c.r[3].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_003FF06C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FF06C; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003FF06C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FF168; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FF0B8; } }
    set32(c.r[4], c.r[7].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_003FF1B0; } }
L_003FF0B8:
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[7].w[0] << 3);  if (t) { goto L_003FF0F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C6A0000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 3749ull;
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_003FF1B0; } }
    c.budget -= 1;
L_003FF0F8:
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBC880000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCBF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 34953ull;
    c.r[3].d[0] = c.r[3].d[0] | 9613ull;
    c.f[0] = c.r[5].w[0];
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_003FF1B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_003FF1B0; } }
L_003FF168:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FF1B0; } }
    set32(c.r[4], c.r[7].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 32u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_003FF1B0; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_003FF1B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF1C0:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);  if (t) { goto L_003FF1E8; } }
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003FF1E8:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; c.r[3].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_003FF1FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FF1FC; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003FF1FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FF2F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FF248; } }
    set32(c.r[4], c.r[7].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_003FF338; } }
L_003FF248:
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[7].w[0] << 3);  if (t) { goto L_003FF288; } }
L_003FF254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C6A0000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 3749ull;
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_003FF338; } }
    c.budget -= 1;
L_003FF288:
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC880000u);
    set32(c.r[7], c.r[4].w[0] + 32u);
    c.r[5].d[0] = c.r[3].d[0] | 34953ull;
    c.f[2] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.f[3] = c.r[5].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[6].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_003FF338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_003FF338; } }
    c.budget -= 1;
L_003FF2F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FF338; } }
    set32(c.r[4], c.r[7].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 32u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_003FF338; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_003FF338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FF350:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FF360:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[28].w[0] - 25252u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[30], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 16;
L_003FF3A0:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[2], c.r[3].w[0] << 9);
    set32(c.r[19], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3DCu); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x003FF3DCu) [[unlikely]] return; }
L_003FF3DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[23].d[0] = c.r[30].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_003FF428:
    set32(c.r[4], c.r[30].w[0] + c.r[21].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FF608; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    set32(c.r[2], 0u + 93u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FF450; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_003FF450:
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FF460; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_003FF460:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FF470; } }
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_003FF470:
    set32(c.r[2], 0u + 95u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FF480; } }
    set32(c.r[18], 0u + 4u);
    c.budget -= 1;
L_003FF480:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF494u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FF494u) [[unlikely]] return; }
L_003FF494:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 7312u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4BCu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FF4BCu) [[unlikely]] return; }
L_003FF4BC:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 5968u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4E4u); c.r[4].d[0] = ld16((c.r[2].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003FF4E4u) [[unlikely]] return; }
L_003FF4E4:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 5968u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF50Cu); c.r[4].d[0] = ld16((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FF50Cu) [[unlikely]] return; }
L_003FF50C:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 5968u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF534u); c.r[4].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003FF534u) [[unlikely]] return; }
L_003FF534:
    c.f[3] = ld32((c.r[20].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 116u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF558u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003FF558u) [[unlikely]] return; }
L_003FF558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF560u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FF560u) [[unlikely]] return; }
L_003FF560:
    c.f[1] = ld32((c.r[23].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FF598; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25249u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FF5B4; } }
L_003FF598:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 25249u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003FF5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 4832u);
    set32(c.r[2], c.r[2].w[0] - 4912u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 4752u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF604u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x003FF604u) [[unlikely]] return; }
L_003FF604:
    c.budget -= 1;
L_003FF608:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[22], c.r[22].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 12u);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF428u | kUnwind; return; } goto L_003FF428; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003FF660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 4624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FF680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 3;
L_003FF68C:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[11], c.r[11].w[0] - 1776u);
    set32(c.r[10], c.r[10].w[0] - 4704u);
    set32(c.r[9], c.r[9].w[0] - 4700u);
    set32(c.r[8], c.r[8].w[0] - 4696u);
    set32(c.r[5], c.r[5].w[0] - 4692u);
    set32(c.r[3], c.r[3].w[0] - 4688u);
    set32(c.r[2], c.r[2].w[0] - 28608u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[17], c.r[18].w[0] + 304u);
    st32((c.r[4].w[0] + 168u), c.r[11].w[0]);
    set32(c.r[16], c.r[18].w[0] + 416u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 69;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7A0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003FF7A0u) [[unlikely]] return; }
L_003FF7A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7C8u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0025(c, 7u, depth + 1u); else { c.pc = 0x001940A0u; return; } if (c.pc != 0x003FF7C8u) [[unlikely]] return; }
L_003FF7C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FF800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[16], c.r[18].w[0] + 416u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));  if (t) { goto L_003FF840; } }
    set32(c.r[2], c.r[3].w[0] + 2047u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 2;
L_003FF840:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_003FF878; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF864u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 7u, depth + 1u); else { c.pc = 0x001940A0u; return; } if (c.pc != 0x003FF864u) [[unlikely]] return; }
L_003FF864:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003FF888; } }
L_003FF878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF880u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 8u, depth + 1u); else { c.pc = 0x001942A0u; return; } if (c.pc != 0x003FF880u) [[unlikely]] return; }
L_003FF880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF888u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 376u, depth + 1u); else { c.pc = 0x0020F540u; return; } if (c.pc != 0x003FF888u) [[unlikely]] return; }
L_003FF888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF890u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003FF890u) [[unlikely]] return; }
L_003FF890:
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8B8u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FF8B8u) [[unlikely]] return; }
L_003FF8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8C0u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003FF8C0u) [[unlikely]] return; }
L_003FF8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8C8u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FF8C8u) [[unlikely]] return; }
L_003FF8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8D0u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003FF8D0u) [[unlikely]] return; }
L_003FF8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8D8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FF8D8u) [[unlikely]] return; }
L_003FF8D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FF8F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FF900:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FF910:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[20].w[0] + 416u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 308u));
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF954u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FF954u) [[unlikely]] return; }
L_003FF954:
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[3].w[0] - 7712u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
L_003FF988:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FF9E8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003FF9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9A4u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003FF9A4u) [[unlikely]] return; }
L_003FF9A4:
    c.budget -= 1;
L_003FF9A8:
    c.f[13] = ld32((c.r[19].w[0] + 68u));
    c.f[14] = ld32((c.r[19].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9B8u); c.f[12] = ld32((c.r[19].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FF9B8u) [[unlikely]] return; }
L_003FF9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9C0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003FF9C0u) [[unlikely]] return; }
L_003FF9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9C8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FF9C8u) [[unlikely]] return; }
L_003FF9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9D0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003FF9D0u) [[unlikely]] return; }
L_003FF9D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FF9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9E4u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003FF9E4u) [[unlikely]] return; }
L_003FF9E4:
    c.budget -= 1;
L_003FF9E8:
    set32(c.r[4], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FFA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA0Cu);  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003FFA0Cu) [[unlikely]] return; }
L_003FFA0C:
    c.budget -= 1;
L_003FFA10:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 240u);
    set32(c.r[18], c.r[18].w[0] + 6u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF988u | kUnwind; return; } goto L_003FF988; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FFA50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 4048u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FFA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[10], c.r[10].w[0] - 4608u);
    set32(c.r[9], c.r[9].w[0] - 4607u);
    set32(c.r[8], c.r[8].w[0] - 4606u);
    set32(c.r[7], c.r[7].w[0] - 4604u);
    set32(c.r[6], c.r[6].w[0] - 4600u);
    set32(c.r[5], c.r[5].w[0] - 4596u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 4592u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4588u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    st8((c.r[4].w[0] + 307u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[4].w[0] + 304u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 76;
L_003FFBA0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 307u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FFBE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_003FFBF0; } }
L_003FFBE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[2], c.r[2].w[0] - 672u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_003FFBF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 1;
L_003FFBF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28608u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC14u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003FFC14u) [[unlikely]] return; }
L_003FFC14:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 1;
L_003FFC18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FFC30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FFC30; } }
L_003FFC30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 376u, depth + 1u); else { c.pc = 0x0020F540u; return; } if (c.pc != 0x003FFC54u) [[unlikely]] return; }
L_003FFC54:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003FFCA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003FFC80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FFCA0; } }
    c.budget -= 1;
L_003FFC80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC8Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0022(c, 254u, depth + 1u); else { c.pc = 0x0018B100u; return; } if (c.pc != 0x003FFC8Cu) [[unlikely]] return; }
L_003FFC8C:
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003FFCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCA8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003FFCA8u) [[unlikely]] return; }
L_003FFCA8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 4272u);
    set32(c.r[3], c.r[3].w[0] - 4268u);
    set32(c.r[2], c.r[2].w[0] - 4264u);
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCFCu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FFCFCu) [[unlikely]] return; }
L_003FFCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD04u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003FFD04u) [[unlikely]] return; }
L_003FFD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FFD0Cu) [[unlikely]] return; }
L_003FFD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD14u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003FFD14u) [[unlikely]] return; }
L_003FFD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD1Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FFD1Cu) [[unlikely]] return; }
L_003FFD1C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFD40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003FFD44:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FFD50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FFD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003FFD68:
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003FFDA0; } }
    goto L_003FFD88;
L_003FFD84:
    c.budget -= 1;
L_003FFD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD90u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003FFD90u) [[unlikely]] return; }
L_003FFD90:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD9Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003FFD9Cu) [[unlikely]] return; }
L_003FFD9C:
    c.budget -= 1;
L_003FFDA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
L_003FFDAC:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003FFDE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40700000u);
    c.r[3].d[0] = c.r[2].d[0] | 2886ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.budget -= 3;
L_003FFDC4:
    c.r[2].d[0] = c.r[2].d[0] | 642ull;
    c.f[12] = 0u;
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDDCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FFDDCu) [[unlikely]] return; }
L_003FFDDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDE8u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003FFDE8u) [[unlikely]] return; }
L_003FFDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFE00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 3792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FFE20:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[11], c.r[11].w[0] - 16u);
    set32(c.r[10], c.r[10].w[0] - 4032u);
    set32(c.r[9], c.r[9].w[0] - 4028u);
    set32(c.r[8], c.r[8].w[0] - 4024u);
    c.budget -= 12;
L_003FFE50:
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - 4020u);
    c.budget -= 2;
L_003FFE58:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[3], c.r[3].w[0] - 4016u);
    st32((c.r[4].w[0] + 168u), c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28608u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 17;
L_003FFE9C:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.budget -= 21;
L_003FFEF0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 3;
L_003FFEFC:
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 1;
L_003FFF00:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F5B0u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 379u, depth); }
L_003FFF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 376u, depth + 1u); else { c.pc = 0x0020F540u; return; } if (c.pc != 0x003FFF44u) [[unlikely]] return; }
L_003FFF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF4Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003FFF4Cu) [[unlikely]] return; }
L_003FFF4C:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF5Cu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FFF5Cu) [[unlikely]] return; }
L_003FFF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF64u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003FFF64u) [[unlikely]] return; }
    goto L_003FFF64;
L_003FFF60:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_003FFF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF6Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FFF6Cu) [[unlikely]] return; }
L_003FFF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF74u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003FFF74u) [[unlikely]] return; }
L_003FFF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF7Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FFF7Cu) [[unlikely]] return; }
    goto L_003FFF7C;
L_003FFF78:
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 1;
L_003FFF7C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003FFF80:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFF90:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x003FFF94u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_003FFF98:
    c.budget -= 2;
L_003FFFA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003FFFA4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003FFFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FFFB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003FFFB8:
    c.budget -= 1;
L_003FFFBC:
    c.budget -= 1;
L_003FFFC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 3632u);
    c.budget -= 3;
L_003FFFCC:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_003FFFD0:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_003FFFD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FFFDC:
    c.budget -= 1;
L_003FFFE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003FFFE4:
    set32(c.r[13], c.r[4].w[0] + 304u);
    c.budget -= 1;
L_003FFFE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 1;
L_003FFFEC:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 2192u);
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 4;
L_003FFFFC:
    set32(c.r[10], c.r[10].w[0] - 3776u);
    c.budget -= 1;
    [[clang::musttail]] return unit_00C0(c, 1u, depth);
}

}
