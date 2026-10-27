#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0,
};

void unit_004E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00238000;
    case 2u: goto L_00238020;
    case 3u: goto L_00238028;
    case 4u: goto L_00238030;
    case 5u: goto L_00238040;
    case 6u: goto L_00238050;
    case 7u: goto L_00238058;
    case 8u: goto L_00238070;
    case 9u: goto L_00238080;
    case 10u: goto L_00238088;
    case 11u: goto L_00238090;
    case 12u: goto L_00238098;
    case 13u: goto L_002380A0;
    case 14u: goto L_002380A8;
    case 15u: goto L_002380B0;
    case 16u: goto L_002380B8;
    case 17u: goto L_002380C0;
    case 18u: goto L_002380D0;
    case 19u: goto L_002380E0;
    case 20u: goto L_002380E8;
    case 21u: goto L_00238100;
    case 22u: goto L_00238128;
    case 23u: goto L_00238130;
    case 24u: goto L_00238190;
    case 25u: goto L_002381A0;
    case 26u: goto L_002381B0;
    case 27u: goto L_002381E0;
    case 28u: goto L_00238204;
    case 29u: goto L_00238224;
    case 30u: goto L_00238240;
    case 31u: goto L_00238260;
    case 32u: goto L_00238268;
    case 33u: goto L_00238284;
    case 34u: goto L_00238290;
    case 35u: goto L_002382B0;
    case 36u: goto L_00238328;
    case 37u: goto L_0023835C;
    case 38u: goto L_00238370;
    case 39u: goto L_00238390;
    case 40u: goto L_00238408;
    case 41u: goto L_0023843C;
    case 42u: goto L_00238450;
    case 43u: goto L_00238470;
    case 44u: goto L_00238490;
    case 45u: goto L_002384F0;
    case 46u: goto L_00238530;
    case 47u: goto L_002385DC;
    case 48u: goto L_00238664;
    case 49u: goto L_00238678;
    case 50u: goto L_002386A0;
    case 51u: goto L_002386CC;
    case 52u: goto L_002386F0;
    case 53u: goto L_002387BC;
    case 54u: goto L_002387E0;
    case 55u: goto L_00238800;
    case 56u: goto L_00238820;
    case 57u: goto L_00238840;
    case 58u: goto L_00238890;
    case 59u: goto L_002388C8;
    case 60u: goto L_002388F0;
    case 61u: goto L_00238950;
    case 62u: goto L_00238960;
    case 63u: goto L_002389A0;
    case 64u: goto L_002389E8;
    case 65u: goto L_00238A00;
    case 66u: goto L_00238A48;
    case 67u: goto L_00238A60;
    case 68u: goto L_00238AA0;
    case 69u: goto L_00238B10;
    case 70u: goto L_00238B60;
    case 71u: goto L_00238B70;
    case 72u: goto L_00238BD4;
    case 73u: goto L_00238BF0;
    case 74u: goto L_00238C4C;
    case 75u: goto L_00238C60;
    case 76u: goto L_00238C9C;
    case 77u: goto L_00238CB0;
    case 78u: goto L_00238D24;
    case 79u: goto L_00238D40;
    case 80u: goto L_00238D84;
    case 81u: goto L_00238D9C;
    case 82u: goto L_00238DAC;
    case 83u: goto L_00238DC8;
    case 84u: goto L_00238E10;
    case 85u: goto L_00238E2C;
    case 86u: goto L_00238E74;
    case 87u: goto L_00238F34;
    case 88u: goto L_00238F50;
    case 89u: goto L_00238F90;
    case 90u: goto L_00239028;
    case 91u: goto L_00239040;
    case 92u: goto L_00239058;
    case 93u: goto L_00239070;
    case 94u: goto L_00239088;
    case 95u: goto L_002390A0;
    case 96u: goto L_002390B8;
    case 97u: goto L_002390E0;
    case 98u: goto L_00239120;
    case 99u: goto L_0023913C;
    case 100u: goto L_00239184;
    case 101u: goto L_00239248;
    case 102u: goto L_00239270;
    case 103u: goto L_00239294;
    case 104u: goto L_002392DC;
    case 105u: goto L_002393A4;
    case 106u: goto L_002393D0;
    case 107u: goto L_002393EC;
    case 108u: goto L_00239434;
    case 109u: goto L_002394F4;
    case 110u: goto L_00239510;
    case 111u: goto L_00239574;
    case 112u: goto L_00239584;
    case 113u: goto L_00239598;
    case 114u: goto L_002395B4;
    case 115u: goto L_00239660;
    case 116u: goto L_00239680;
    case 117u: goto L_00239690;
    case 118u: goto L_002396C8;
    case 119u: goto L_00239790;
    case 120u: goto L_002397B0;
    case 121u: goto L_002397F0;
    case 122u: goto L_002398C0;
    case 123u: goto L_002398E0;
    case 124u: goto L_00239908;
    case 125u: goto L_002399C8;
    case 126u: goto L_002399E0;
    case 127u: goto L_00239A0C;
    case 128u: goto L_00239A1C;
    case 129u: goto L_00239AF4;
    case 130u: goto L_00239B10;
    case 131u: goto L_00239B38;
    case 132u: goto L_00239BFC;
    case 133u: goto L_00239C10;
    case 134u: goto L_00239C38;
    case 135u: goto L_00239CF8;
    case 136u: goto L_00239D10;
    case 137u: goto L_00239D44;
    case 138u: goto L_00239E0C;
    case 139u: goto L_00239E30;
    case 140u: goto L_00239E6C;
    case 141u: goto L_00239F30;
    case 142u: goto L_00239F48;
    case 143u: goto L_00239F70;
    case 144u: goto L_00239FAC;
    case 145u: goto L_0023A074;
    case 146u: goto L_0023A0A0;
    case 147u: goto L_0023A0B0;
    case 148u: goto L_0023A0C0;
    case 149u: goto L_0023A0D0;
    case 150u: goto L_0023A180;
    case 151u: goto L_0023A190;
    case 152u: goto L_0023A1A0;
    case 153u: goto L_0023A1C0;
    case 154u: goto L_0023A258;
    case 155u: goto L_0023A268;
    case 156u: goto L_0023A278;
    case 157u: goto L_0023A290;
    case 158u: goto L_0023A2A0;
    case 159u: goto L_0023A2B0;
    case 160u: goto L_0023A2C0;
    case 161u: goto L_0023A2FC;
    case 162u: goto L_0023A310;
    case 163u: goto L_0023A360;
    case 164u: goto L_0023A370;
    case 165u: goto L_0023A38C;
    case 166u: goto L_0023A3A4;
    case 167u: goto L_0023A3C0;
    case 168u: goto L_0023A414;
    case 169u: goto L_0023A430;
    case 170u: goto L_0023A470;
    case 171u: goto L_0023A494;
    case 172u: goto L_0023A550;
    case 173u: goto L_0023A570;
    case 174u: goto L_0023A5C0;
    case 175u: goto L_0023A690;
    case 176u: goto L_0023A6FC;
    case 177u: goto L_0023A720;
    case 178u: goto L_0023A7D4;
    case 179u: goto L_0023A83C;
    case 180u: goto L_0023A860;
    case 181u: goto L_0023A904;
    case 182u: goto L_0023AAB0;
    case 183u: goto L_0023AAD0;
    case 184u: goto L_0023AB50;
    case 185u: goto L_0023ABF4;
    case 186u: goto L_0023AC78;
    case 187u: goto L_0023ACA8;
    case 188u: goto L_0023ACCC;
    case 189u: goto L_0023AD2C;
    case 190u: goto L_0023AD50;
    case 191u: goto L_0023ADF4;
    case 192u: goto L_0023AECC;
    case 193u: goto L_0023AF18;
    case 194u: goto L_0023AF30;
    case 195u: goto L_0023AF60;
    case 196u: goto L_0023AFB0;
    case 197u: goto L_0023AFE0;
    case 198u: goto L_0023B050;
    case 199u: goto L_0023B160;
    case 200u: goto L_0023B25C;
    case 201u: goto L_0023B334;
    case 202u: goto L_0023B490;
    case 203u: goto L_0023B4D4;
    case 204u: goto L_0023B518;
    case 205u: goto L_0023B530;
    case 206u: goto L_0023B574;
    case 207u: goto L_0023B5B8;
    case 208u: goto L_0023B5D0;
    case 209u: goto L_0023B648;
    case 210u: goto L_0023B7B8;
    case 211u: goto L_0023B7F8;
    case 212u: goto L_0023B840;
    case 213u: goto L_0023B864;
    case 214u: goto L_0023B8B0;
    case 215u: goto L_0023B9A0;
    case 216u: goto L_0023B9AC;
    case 217u: goto L_0023B9E0;
    case 218u: goto L_0023BA10;
    case 219u: goto L_0023BA90;
    case 220u: goto L_0023BA9C;
    case 221u: goto L_0023BAD0;
    case 222u: goto L_0023BB00;
    case 223u: goto L_0023BBD8;
    case 224u: goto L_0023BC10;
    case 225u: goto L_0023BC40;
    case 226u: goto L_0023BCB8;
    case 227u: goto L_0023BCF0;
    case 228u: goto L_0023BD20;
    case 229u: goto L_0023BDF8;
    case 230u: goto L_0023BE04;
    case 231u: goto L_0023BE38;
    case 232u: goto L_0023BE60;
    case 233u: goto L_0023BED4;
    case 234u: goto L_0023BEE0;
    case 235u: goto L_0023BF50;
    case 236u: goto L_0023BF80;
    case 237u: goto L_0023BFA0;
    case 238u: goto L_0023BFE8;
    case 239u: goto L_0023BFF8;
    default: bad_entry(c, 0x00238000u); return;
    }
L_00238000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00237FE0u | kUnwind; return; } [[clang::musttail]] return unit_004D(c, 317u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 57u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00238020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238020u); set32(c.r[4], c.r[4].w[0] + 11104u);  if (depth < kMaxDepth) unit_004E(c, 236u, depth + 1u); else { c.pc = 0x0023BF80u; return; } if (c.pc != 0x00238020u) [[unlikely]] return; }
L_00238020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238028u);  if (depth < kMaxDepth) unit_004F(c, 28u, depth + 1u); else { c.pc = 0x0023C650u; return; } if (c.pc != 0x00238028u) [[unlikely]] return; }
L_00238028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238030u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0050(c, 448u, depth + 1u); else { c.pc = 0x00243F70u; return; } if (c.pc != 0x00238030u) [[unlikely]] return; }
L_00238030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00238040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238050u);  if (depth < kMaxDepth) unit_004E(c, 18u, depth + 1u); else { c.pc = 0x002380D0u; return; } if (c.pc != 0x00238050u) [[unlikely]] return; }
L_00238050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238058u);  if (depth < kMaxDepth) unit_004E(c, 30u, depth + 1u); else { c.pc = 0x00238240u; return; } if (c.pc != 0x00238058u) [[unlikely]] return; }
L_00238058:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00238070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238080u);  if (depth < kMaxDepth) unit_004E(c, 21u, depth + 1u); else { c.pc = 0x00238100u; return; } if (c.pc != 0x00238080u) [[unlikely]] return; }
L_00238080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238088u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 345u, depth + 1u); else { c.pc = 0x001236C0u; return; } if (c.pc != 0x00238088u) [[unlikely]] return; }
L_00238088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238090u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0008(c, 345u, depth + 1u); else { c.pc = 0x001236C0u; return; } if (c.pc != 0x00238090u) [[unlikely]] return; }
L_00238090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238098u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0008(c, 345u, depth + 1u); else { c.pc = 0x001236C0u; return; } if (c.pc != 0x00238098u) [[unlikely]] return; }
L_00238098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0008(c, 345u, depth + 1u); else { c.pc = 0x001236C0u; return; } if (c.pc != 0x002380A0u) [[unlikely]] return; }
L_002380A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380A8u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0008(c, 345u, depth + 1u); else { c.pc = 0x001236C0u; return; } if (c.pc != 0x002380A8u) [[unlikely]] return; }
L_002380A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380B0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0008(c, 345u, depth + 1u); else { c.pc = 0x001236C0u; return; } if (c.pc != 0x002380B0u) [[unlikely]] return; }
L_002380B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380B8u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0008(c, 345u, depth + 1u); else { c.pc = 0x001236C0u; return; } if (c.pc != 0x002380B8u) [[unlikely]] return; }
L_002380B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380C0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0008(c, 345u, depth + 1u); else { c.pc = 0x001236C0u; return; } if (c.pc != 0x002380C0u) [[unlikely]] return; }
L_002380C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002380D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380E0u);  if (depth < kMaxDepth) unit_004E(c, 21u, depth + 1u); else { c.pc = 0x00238100u; return; } if (c.pc != 0x002380E0u) [[unlikely]] return; }
L_002380E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380E8u);  if (depth < kMaxDepth) unit_004E(c, 8u, depth + 1u); else { c.pc = 0x00238070u; return; } if (c.pc != 0x002380E8u) [[unlikely]] return; }
L_002380E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00238100:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 11104u);
    c.budget -= 10;
L_00238128:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00238130:
    set32(c.r[4], ld32((c.r[16].w[0] + 668u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 660u);  if (t) { goto L_002381B0; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002381B0; } }
    c.r[4].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002381A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00238198; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00238188; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00238188; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00238188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002381B0; } }
L_00238188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238190u); set32(c.r[4], ld32((c.r[6].w[0] + 12u)));  if (depth < kMaxDepth) unit_004E(c, 147u, depth + 1u); else { c.pc = 0x0023A0B0u; return; } if (c.pc != 0x00238190u) [[unlikely]] return; }
L_00238190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002381B0; } }
L_00238198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002381A0u); set32(c.r[4], ld32((c.r[6].w[0] + 12u)));  if (depth < kMaxDepth) unit_004E(c, 130u, depth + 1u); else { c.pc = 0x00239B10u; return; } if (c.pc != 0x002381A0u) [[unlikely]] return; }
L_002381A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002381B0; } }
L_002381A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002381B0u); set32(c.r[4], ld32((c.r[6].w[0] + 12u)));  if (depth < kMaxDepth) unit_004E(c, 98u, depth + 1u); else { c.pc = 0x00239120u; return; } if (c.pc != 0x002381B0u) [[unlikely]] return; }
L_002381B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00238130u | kUnwind; return; } goto L_00238130; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00238128u | kUnwind; return; } goto L_00238128; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 11104u);
    c.budget -= 4;
L_002381E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00238208; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_00238208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238204u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 117u, depth + 1u); else { c.pc = 0x00239690u; return; } if (c.pc != 0x00238204u) [[unlikely]] return; }
L_00238204:
    c.budget -= 1;
L_00238208:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002381E0u | kUnwind; return; } goto L_002381E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238224u); set32(c.r[4], c.r[4].w[0] + 11104u);  if (depth < kMaxDepth) unit_004D(c, 304u, depth + 1u); else { c.pc = 0x00237DE0u; return; } if (c.pc != 0x00238224u) [[unlikely]] return; }
L_00238224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00238240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[17], c.r[17].w[0] + 11104u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_00238260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 63u, depth + 1u); else { c.pc = 0x002389A0u; return; } if (c.pc != 0x00238268u) [[unlikely]] return; }
L_00238268:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00238260u | kUnwind; return; } goto L_00238260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238284u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 303u, depth + 1u); else { c.pc = 0x00237D70u; return; } if (c.pc != 0x00238284u) [[unlikely]] return; }
L_00238284:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238290u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 304u, depth + 1u); else { c.pc = 0x00237DE0u; return; } if (c.pc != 0x00238290u) [[unlikely]] return; }
L_00238290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002382B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 10032u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.f[0] = 0u;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[16].w[0] + 11728u);  if (t) { goto L_002382F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EA0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 2;
L_002382F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[16].w[0] + 8u), c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8620u)));
    set32(c.r[2], c.r[2].w[0] - 9712u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238328u); st32((c.r[16].w[0] + 4u), c.f[12]);  if (depth < kMaxDepth) unit_004F(c, 34u, depth + 1u); else { c.pc = 0x0023C880u; return; } if (c.pc != 0x00238328u) [[unlikely]] return; }
L_00238328:
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], c.r[17].w[0] << 3);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 10656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023835Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 4u, depth + 1u); else { c.pc = 0x0023C050u; return; } if (c.pc != 0x0023835Cu) [[unlikely]] return; }
L_0023835C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238370u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 4u, depth + 1u); else { c.pc = 0x0023C050u; return; } if (c.pc != 0x00238370u) [[unlikely]] return; }
L_00238370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00238390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 10032u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.f[0] = 0u;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[16].w[0] + 11728u);  if (t) { goto L_002383D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EA0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 2;
L_002383D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[16].w[0] + 8u), c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8620u)));
    set32(c.r[2], c.r[2].w[0] - 9712u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238408u); st32((c.r[16].w[0] + 4u), c.f[12]);  if (depth < kMaxDepth) unit_004F(c, 34u, depth + 1u); else { c.pc = 0x0023C880u; return; } if (c.pc != 0x00238408u) [[unlikely]] return; }
L_00238408:
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], c.r[17].w[0] << 3);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 10656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023843Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 4u, depth + 1u); else { c.pc = 0x0023C050u; return; } if (c.pc != 0x0023843Cu) [[unlikely]] return; }
L_0023843C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00238450:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[7].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_004F(c, 4u, depth); }
L_00238470:
    set32(c.r[4], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[7].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_004F(c, 4u, depth); }
L_00238490:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8620u)));
    set32(c.r[2], c.r[2].w[0] - 9712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002384B8; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002384D4; } }
L_002384B8:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_002384D4:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], 0u + 2u);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { st32((c.r[1].w[0] + 11732u), c.f[12]);  [[clang::musttail]] return unit_004F(c, 34u, depth); }
L_002384F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8620u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[5].w[0] + 11728u);
    set32(c.r[2], c.r[2].w[0] - 9712u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 14;
    { st32((c.r[5].w[0] + 4u), c.f[12]);  [[clang::musttail]] return unit_004F(c, 34u, depth); }
L_00238530:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 17952u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[6].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { goto L_00238678; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[18], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 11104u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    st32((c.r[4].w[0] + 560u), c.r[2].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8618u)));
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 9680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    st32((c.r[4].w[0] + 556u), c.f[12]);
    c.f[1] = ld32((c.r[4].w[0] + 564u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], c.r[4].w[0] + 552u);  if (t) { goto L_002385E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002385DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 34u, depth + 1u); else { c.pc = 0x0023C880u; return; } if (c.pc != 0x002385DCu) [[unlikely]] return; }
L_002385DC:
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 3;
L_002385E8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11135u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00238640; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00238640; } }
    set32(c.r[2], c.r[2].w[0] + 12368u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00238640; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_00238640; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00238640:
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238664u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 4u, depth + 1u); else { c.pc = 0x0023C050u; return; } if (c.pc != 0x00238664u) [[unlikely]] return; }
L_00238664:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238678u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 4u, depth + 1u); else { c.pc = 0x0023C050u; return; } if (c.pc != 0x00238678u) [[unlikely]] return; }
L_00238678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002386A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002386CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002386CCu) [[unlikely]] return; }
L_002386CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002386E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 118u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002386E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002386F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002386F0u) [[unlikely]] return; }
L_002386F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00238708; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 119u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00238708:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 118u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[7], c.r[5].w[0] + 118u);  if (t) { goto L_00238738; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002387A8; } }
    c.budget -= 1;
L_00238738:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 119u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[5].w[0] + 119u);  if (t) { goto L_00238760; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002387A8; } }
    c.budget -= 1;
L_00238760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 121u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00238790; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002387A8; } }
    c.budget -= 1;
L_00238790:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[16], 0u + 1u);
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002387A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002387BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002387BCu) [[unlikely]] return; }
L_002387BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002387E0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[7].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_004F(c, 4u, depth); }
L_00238800:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11673u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_00238820:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11674u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  c.pc = t; return; }
L_00238840:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11677u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00238870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00238888; } }
    c.budget -= 1;
L_00238870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00238888; } }
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 4;
L_00238888:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00238890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 28384u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002388C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002388C8u);  if (depth < kMaxDepth) unit_0061(c, 254u, depth + 1u); else { c.pc = 0x00286230u; return; } if (c.pc != 0x002388C8u) [[unlikely]] return; }
L_002388C8:
    st32((c.r[28].w[0] - 23956u), c.r[17].w[0]);
    st32((c.r[28].w[0] - 23960u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002388F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] << 3);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[28].w[0] - 23956u)));
    set32(c.r[5], c.r[5].w[0] + 11104u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[16], c.r[5].w[0] + 552u);  if (t) { goto L_00238980; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28384u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00238978; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238950u); st8((c.r[28].w[0] - 23800u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0061(c, 354u, depth + 1u); else { c.pc = 0x00287248u; return; } if (c.pc != 0x00238950u) [[unlikely]] return; }
L_00238950:
    set32(c.r[5], ld32((c.r[28].w[0] - 23960u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23956u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238960u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0061(c, 382u, depth + 1u); else { c.pc = 0x002878B8u; return; } if (c.pc != 0x00238960u) [[unlikely]] return; }
L_00238960:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23956u)));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23960u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 6;
L_00238978:
    set32(c.r[3], 0u - 1u);
    st32((c.r[28].w[0] - 23956u), c.r[3].w[0]);
    c.budget -= 2;
L_00238980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002389A0:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11104u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[5].w[0] + 569u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 28384u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002389E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002389E8u);  if (depth < kMaxDepth) unit_0061(c, 254u, depth + 1u); else { c.pc = 0x00286230u; return; } if (c.pc != 0x002389E8u) [[unlikely]] return; }
L_002389E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00238A00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + 57u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 57u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00238A78; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 11104u);
    set32(c.r[17], c.r[17].w[0] + 28384u);
    c.budget -= 6;
L_00238A48:
    st8((c.r[18].w[0] + 572u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00238A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A60u);  if (depth < kMaxDepth) unit_0061(c, 354u, depth + 1u); else { c.pc = 0x00287248u; return; } if (c.pc != 0x00238A60u) [[unlikely]] return; }
L_00238A60:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 36u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00238A48u | kUnwind; return; } goto L_00238A48; } }
    c.budget -= 1;
L_00238A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00238AA0:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11104u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[7], c.r[3].w[0] + 552u);  if (t) { goto L_00238ACC; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00238AE8; } }
L_00238ACC:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00238AE8:
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 16u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_00238B10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11133u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 11104u);  if (t) { goto L_00238B50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 29u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 980u), c.r[4].w[0]);
    st8((c.r[3].w[0] + 984u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 985u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 29u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_00238B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00238B60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 11133u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00238B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00238BA0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 77u)));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00238BD8; } }
    c.budget -= 1;
L_00238BA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 29u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00238BC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00238BD8; } }
    c.budget -= 1;
L_00238BC0:
    c.r[3].d[0] = c.r[6].d[0] & 65280ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00238BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238BD4u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 349u, depth + 1u); else { c.pc = 0x00123720u; return; } if (c.pc != 0x00238BD4u) [[unlikely]] return; }
L_00238BD4:
    c.budget -= 1;
L_00238BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00238BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00238C20; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 77u)));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00238C50; } }
    c.budget -= 1;
L_00238C20:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 29u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00238C40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00238C50; } }
    c.budget -= 1;
L_00238C40:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C4Cu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 349u, depth + 1u); else { c.pc = 0x00123720u; return; } if (c.pc != 0x00238C4Cu) [[unlikely]] return; }
L_00238C4C:
    c.budget -= 1;
L_00238C50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00238C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00238C90; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 77u)));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00238CA0; } }
    c.budget -= 1;
L_00238C90:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C9Cu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 349u, depth + 1u); else { c.pc = 0x00123720u; return; } if (c.pc != 0x00238C9Cu) [[unlikely]] return; }
L_00238C9C:
    c.budget -= 1;
L_00238CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00238CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00238CE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 77u)));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00238D28; } }
    c.budget -= 1;
L_00238CE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 29u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00238D00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00238D28; } }
    c.budget -= 1;
L_00238D00:
    c.r[2].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[2].w[0] >> 16);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D24u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 342u, depth + 1u); else { c.pc = 0x00123620u; return; } if (c.pc != 0x00238D24u) [[unlikely]] return; }
L_00238D24:
    c.budget -= 1;
L_00238D28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00238D40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] & 255ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 347u, depth + 1u); else { c.pc = 0x001236E0u; return; } if (c.pc != 0x00238D84u) [[unlikely]] return; }
L_00238D84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00238DD8; } }
    c.r[6].d[0] = ld8((c.r[20].w[0]));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D9Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_004F(c, 36u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x00238D9Cu) [[unlikely]] return; }
L_00238D9C:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238DACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 348u, depth + 1u); else { c.pc = 0x00123700u; return; } if (c.pc != 0x00238DACu) [[unlikely]] return; }
L_00238DAC:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_00238DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238DC8u);  if (depth < kMaxDepth) unit_004F(c, 47u, depth + 1u); else { c.pc = 0x0023CC20u; return; } if (c.pc != 0x00238DC8u) [[unlikely]] return; }
L_00238DC8:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00238DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 268u));  if (t) { goto L_00238DE8; } }
L_00238DD8:
    set32(c.r[2], 0u + 8u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00238DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00238E10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004E(c, 89u, depth + 1u); else { c.pc = 0x00238F90u; return; } if (c.pc != 0x00238E2Cu) [[unlikely]] return; }
L_00238E2C:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[17].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00238E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00238E58; } }
    c.budget -= 1;
L_00238E48:
    set32(c.r[2], c.r[17].w[0] - 128u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_00238E58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 32u);
    set32(c.r[8], c.r[29].w[0] + 79u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E74u); set32(c.r[9], c.r[29].w[0] + 78u);  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00238E74u) [[unlikely]] return; }
L_00238E74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00238EA4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00238EC0; } }
L_00238EA4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00238EC0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00238EF0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00238F0C; } }
L_00238EF0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00238F0C:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[6], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238F34u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_004E(c, 71u, depth + 1u); else { c.pc = 0x00238B70u; return; } if (c.pc != 0x00238F34u) [[unlikely]] return; }
L_00238F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00238F50:
    c.r[2].d[0] = c.r[4].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_00238F78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00238F80; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 76u);  if (t) { goto L_00238F80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00238F80; } }
L_00238F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00238F88; } }
L_00238F80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00238F88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00238F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00238FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_00239100; } }
    c.budget -= 1;
L_00238FB8:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 138u);  if (t) { goto L_002390D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002390D8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_002390B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00239098; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_00239080; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00239068; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_00239050; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00239038; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00239020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002390F8; } }
    c.budget -= 1;
L_00239020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239028u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x00239028u) [[unlikely]] return; }
L_00239028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002390F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_00239100; } }
L_00239038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239040u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x00239040u) [[unlikely]] return; }
L_00239040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002390F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 129u);  if (t) { goto L_00239100; } }
L_00239050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239058u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x00239058u) [[unlikely]] return; }
L_00239058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002390F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 132u);  if (t) { goto L_00239100; } }
L_00239068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239070u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x00239070u) [[unlikely]] return; }
L_00239070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002390F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 141u);  if (t) { goto L_00239100; } }
L_00239080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239088u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x00239088u) [[unlikely]] return; }
L_00239088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002390F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 144u);  if (t) { goto L_00239100; } }
L_00239098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002390A0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x002390A0u) [[unlikely]] return; }
L_002390A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002390F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 146u);  if (t) { goto L_00239100; } }
L_002390B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002390B8u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x002390B8u) [[unlikely]] return; }
L_002390B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002390F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[2], 0u + 162u);
    set32(c.r[3], 0u + 160u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00239100; } }
    c.budget -= 1;
L_002390D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002390E0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x002390E0u) [[unlikely]] return; }
L_002390E0:
    set32(c.r[4], 0u + 138u);
    set32(c.r[3], 0u + 23u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00239100; } }
    c.budget -= 1;
L_002390F8:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 2;
L_00239100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00239120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023913Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004E(c, 89u, depth + 1u); else { c.pc = 0x00238F90u; return; } if (c.pc != 0x0023913Cu) [[unlikely]] return; }
L_0023913C:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[17].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00239158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239168; } }
    c.budget -= 1;
L_00239158:
    set32(c.r[2], c.r[17].w[0] - 128u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_00239168:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 32u);
    set32(c.r[8], c.r[29].w[0] + 79u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239184u); set32(c.r[9], c.r[29].w[0] + 78u);  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00239184u) [[unlikely]] return; }
L_00239184:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002391B4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002391D0; } }
L_002391B4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002391D0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239200; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023921C; } }
L_00239200:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0023921C:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[6], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239248u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 73u, depth + 1u); else { c.pc = 0x00238BF0u; return; } if (c.pc != 0x00239248u) [[unlikely]] return; }
L_00239248:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00239270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239294u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004E(c, 89u, depth + 1u); else { c.pc = 0x00238F90u; return; } if (c.pc != 0x00239294u) [[unlikely]] return; }
L_00239294:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[18].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002392B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002392C0; } }
    c.budget -= 1;
L_002392B0:
    set32(c.r[2], c.r[18].w[0] - 128u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_002392C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 32u);
    set32(c.r[8], c.r[29].w[0] + 95u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002392DCu); set32(c.r[9], c.r[29].w[0] + 94u);  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x002392DCu) [[unlikely]] return; }
L_002392DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0023930C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239328; } }
L_0023930C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239328:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239358; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00239374; } }
L_00239358:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00239374:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[4], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[19].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_002393A8; } }
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002393A4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 77u, depth + 1u); else { c.pc = 0x00238CB0u; return; } if (c.pc != 0x002393A4u) [[unlikely]] return; }
L_002393A4:
    c.budget -= 1;
L_002393A8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002393D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002393ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004E(c, 89u, depth + 1u); else { c.pc = 0x00238F90u; return; } if (c.pc != 0x002393ECu) [[unlikely]] return; }
L_002393EC:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[17].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00239408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239418; } }
    c.budget -= 1;
L_00239408:
    set32(c.r[2], c.r[17].w[0] - 128u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_00239418:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 32u);
    set32(c.r[8], c.r[29].w[0] + 79u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239434u); set32(c.r[9], c.r[29].w[0] + 78u);  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00239434u) [[unlikely]] return; }
L_00239434:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00239464; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239480; } }
L_00239464:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239480:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002394B0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002394CC; } }
L_002394B0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002394CC:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[6], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002394F4u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_004E(c, 75u, depth + 1u); else { c.pc = 0x00238C60u; return; } if (c.pc != 0x002394F4u) [[unlikely]] return; }
L_002394F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00239510:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00239548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00239558; } }
L_00239548:
    set32(c.r[3], c.r[19].w[0] - 128u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
L_00239558:
    c.r[18].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_00239660; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239574u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 347u, depth + 1u); else { c.pc = 0x001236E0u; return; } if (c.pc != 0x00239574u) [[unlikely]] return; }
L_00239574:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239584u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0008(c, 348u, depth + 1u); else { c.pc = 0x00123700u; return; } if (c.pc != 0x00239584u) [[unlikely]] return; }
L_00239584:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239598u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_004F(c, 36u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x00239598u) [[unlikely]] return; }
L_00239598:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002395B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002395B4u);  if (depth < kMaxDepth) unit_004F(c, 47u, depth + 1u); else { c.pc = 0x0023CC20u; return; } if (c.pc != 0x002395B4u) [[unlikely]] return; }
L_002395B4:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002395B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 9648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002395E0; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002395FC; } }
L_002395E0:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002395FC:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023962C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00239648; } }
L_0023962C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_00239648:
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239660u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_004E(c, 71u, depth + 1u); else { c.pc = 0x00238B70u; return; } if (c.pc != 0x00239660u) [[unlikely]] return; }
L_00239660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00239680:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238E10u | kUnwind; return; } goto L_00238E10; }
L_00239690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 79u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[9], c.r[29].w[0] + 78u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002396C8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x002396C8u) [[unlikely]] return; }
L_002396C8:
    if (c.r[18].d[0] == 0) c.r[17].d[0] = 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002396FC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239718; } }
L_002396FC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239718:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239748; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00239764; } }
L_00239748:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00239764:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[6], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239790u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 73u, depth + 1u); else { c.pc = 0x00238BF0u; return; } if (c.pc != 0x00239790u) [[unlikely]] return; }
L_00239790:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002397B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 95u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[9], c.r[29].w[0] + 94u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002397F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x002397F0u) [[unlikely]] return; }
L_002397F0:
    if (c.r[19].d[0] == 0) c.r[18].d[0] = 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00239824; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239840; } }
L_00239824:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239840:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239870; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023988C; } }
L_00239870:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0023988C:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[4], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[18].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_002398C0; } }
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002398C0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 77u, depth + 1u); else { c.pc = 0x00238CB0u; return; } if (c.pc != 0x002398C0u) [[unlikely]] return; }
L_002398C0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002398E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 47u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[29].w[0] + 46u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239908u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00239908u) [[unlikely]] return; }
L_00239908:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00239938; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239954; } }
L_00239938:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239954:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239984; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002399A0; } }
L_00239984:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002399A0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[6], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 46u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002399C8u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_004E(c, 71u, depth + 1u); else { c.pc = 0x00238B70u; return; } if (c.pc != 0x002399C8u) [[unlikely]] return; }
L_002399C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002399E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 347u, depth + 1u); else { c.pc = 0x001236E0u; return; } if (c.pc != 0x00239A0Cu) [[unlikely]] return; }
L_00239A0C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A1Cu); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0008(c, 348u, depth + 1u); else { c.pc = 0x00123700u; return; } if (c.pc != 0x00239A1Cu) [[unlikely]] return; }
L_00239A1C:
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00239A30; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.budget -= 1;
L_00239A30:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00239A3C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 268u));
    c.budget -= 1;
L_00239A3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 9648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00239A68; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239A84; } }
L_00239A68:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239A84:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239AB4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00239AD0; } }
L_00239AB4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_00239AD0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239AF4u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_004E(c, 71u, depth + 1u); else { c.pc = 0x00238B70u; return; } if (c.pc != 0x00239AF4u) [[unlikely]] return; }
L_00239AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00239B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 47u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[29].w[0] + 46u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239B38u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00239B38u) [[unlikely]] return; }
L_00239B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00239B68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239B84; } }
L_00239B68:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239B84:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239BB4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00239BD0; } }
L_00239BB4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00239BD0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[6], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 46u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239BFCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 73u, depth + 1u); else { c.pc = 0x00238BF0u; return; } if (c.pc != 0x00239BFCu) [[unlikely]] return; }
L_00239BFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00239C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 47u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[29].w[0] + 46u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239C38u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00239C38u) [[unlikely]] return; }
L_00239C38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00239C68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239C84; } }
L_00239C68:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239C84:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239CB4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00239CD0; } }
L_00239CB4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00239CD0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[6], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 46u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239CF8u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_004E(c, 71u, depth + 1u); else { c.pc = 0x00238B70u; return; } if (c.pc != 0x00239CF8u) [[unlikely]] return; }
L_00239CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00239D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 79u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[9], c.r[29].w[0] + 78u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239D44u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00239D44u) [[unlikely]] return; }
L_00239D44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00239D74; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239D90; } }
L_00239D74:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239D90:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239DC0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00239DDC; } }
L_00239DC0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00239DDC:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[4], c.r[2].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[18].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_00239E10; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E0Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 77u, depth + 1u); else { c.pc = 0x00238CB0u; return; } if (c.pc != 0x00239E0Cu) [[unlikely]] return; }
L_00239E0C:
    c.budget -= 1;
L_00239E10:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00239E30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 95u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[9], c.r[29].w[0] + 94u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 271u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E6Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00239E6Cu) [[unlikely]] return; }
L_00239E6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00239E98; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239EB4; } }
L_00239E98:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239EB4:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00239EE4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00239F00; } }
L_00239EE4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00239F00:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 268u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 95u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00239F38; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 271u)));
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F30u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 71u, depth + 1u); else { c.pc = 0x00238B70u; return; } if (c.pc != 0x00239F30u) [[unlikely]] return; }
L_00239F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239F48; } }
L_00239F38:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 271u)));
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F48u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 73u, depth + 1u); else { c.pc = 0x00238BF0u; return; } if (c.pc != 0x00239F48u) [[unlikely]] return; }
L_00239F48:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00239F70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 95u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[9], c.r[29].w[0] + 94u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 271u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239FACu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 79u, depth + 1u); else { c.pc = 0x00238D40u; return; } if (c.pc != 0x00239FACu) [[unlikely]] return; }
L_00239FAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    set32(c.r[3], c.r[3].w[0] - 9648u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00239FD8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00239FF4; } }
L_00239FD8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00239FF4:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023A024; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023A040; } }
L_0023A024:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0023A040:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 268u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 95u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[19].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { goto L_0023A078; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 271u)));
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A074u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 77u, depth + 1u); else { c.pc = 0x00238CB0u; return; } if (c.pc != 0x0023A074u) [[unlikely]] return; }
L_0023A074:
    c.budget -= 1;
L_0023A078:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023A0A0:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239E30u | kUnwind; return; } goto L_00239E30; }
L_0023A0B0:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239E30u | kUnwind; return; } goto L_00239E30; }
L_0023A0C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239F70u | kUnwind; return; } goto L_00239F70; }
L_0023A0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[6].w[0] + 11104u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 672u), c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] + 660u);
    set32(c.r[3], ld32((c.r[3].w[0] + 668u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0023A1A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 8480u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23920u)));
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023A198; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0023A188; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023A178; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023A178; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0023A178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A1A8; } }
    c.budget -= 1;
L_0023A178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A180u); c.r[5].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_004E(c, 147u, depth + 1u); else { c.pc = 0x0023A0B0u; return; } if (c.pc != 0x0023A180u) [[unlikely]] return; }
L_0023A180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023A1A8; } }
L_0023A188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A190u); c.r[5].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_004E(c, 130u, depth + 1u); else { c.pc = 0x00239B10u; return; } if (c.pc != 0x0023A190u) [[unlikely]] return; }
L_0023A190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023A1A8; } }
L_0023A198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A1A0u); c.r[5].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_004E(c, 98u, depth + 1u); else { c.pc = 0x00239120u; return; } if (c.pc != 0x0023A1A0u) [[unlikely]] return; }
L_0023A1A0:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0023A1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    set32(c.r[5], c.r[5].w[0] + 11104u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 668u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 660u);  if (t) { goto L_0023A278; } }
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023A278; } }
    c.r[6].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0023A270; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0023A260; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023A250; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0023A250; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0023A250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A278; } }
    c.budget -= 1;
L_0023A250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A258u);  if (depth < kMaxDepth) unit_004E(c, 147u, depth + 1u); else { c.pc = 0x0023A0B0u; return; } if (c.pc != 0x0023A258u) [[unlikely]] return; }
L_0023A258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A278; } }
L_0023A260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A268u);  if (depth < kMaxDepth) unit_004E(c, 130u, depth + 1u); else { c.pc = 0x00239B10u; return; } if (c.pc != 0x0023A268u) [[unlikely]] return; }
L_0023A268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A278; } }
L_0023A270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A278u);  if (depth < kMaxDepth) unit_004E(c, 98u, depth + 1u); else { c.pc = 0x00239120u; return; } if (c.pc != 0x0023A278u) [[unlikely]] return; }
L_0023A278:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023A290:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239E30u | kUnwind; return; } goto L_00239E30; }
L_0023A2A0:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239E30u | kUnwind; return; } goto L_00239E30; }
L_0023A2B0:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239E30u | kUnwind; return; } goto L_00239E30; }
L_0023A2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 98u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023A300; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023A300; } }
    c.r[5].d[0] = ld8((c.r[5].w[0] + 30u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023A300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A2FCu);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0023A2FCu) [[unlikely]] return; }
L_0023A2FC:
    c.budget -= 1;
L_0023A300:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023A310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023A348; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 268u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A3A8; } }
L_0023A348:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 269u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A3A8; } }
    c.budget -= 1;
L_0023A358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A360u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x0023A360u) [[unlikely]] return; }
L_0023A360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0023A378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A370u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0023A370u) [[unlikely]] return; }
L_0023A370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A3A8; } }
L_0023A378:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0023A398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A38Cu); set32(c.r[5], 0u + 161u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0023A38Cu) [[unlikely]] return; }
L_0023A38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A3A8; } }
    c.budget -= 1;
L_0023A398:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3A4u); set32(c.r[5], 0u + 163u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0023A3A4u) [[unlikely]] return; }
L_0023A3A4:
    c.budget -= 1;
L_0023A3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A3F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A418; } }
    c.budget -= 1;
L_0023A3F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 269u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A418; } }
    c.budget -= 1;
L_0023A408:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A414u); set32(c.r[5], 0u + 142u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0023A414u) [[unlikely]] return; }
L_0023A414:
    c.budget -= 1;
L_0023A418:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023A430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 11136u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A550; } }
    set32(c.r[2], 0u + 60u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A470u); c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x0023A470u) [[unlikely]] return; }
L_0023A470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 7u);  if (t) { goto L_0023A480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0023A488; } }
L_0023A480:
    set32(c.r[17], 0u + 44u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 2;
L_0023A488:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A494u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 347u, depth + 1u); else { c.pc = 0x001236E0u; return; } if (c.pc != 0x0023A494u) [[unlikely]] return; }
L_0023A494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 9648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0023A4C0; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023A4DC; } }
L_0023A4C0:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0023A4DC:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023A50C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0023A528; } }
L_0023A50C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0023A528:
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[6], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A550u); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_004E(c, 71u, depth + 1u); else { c.pc = 0x00238B70u; return; } if (c.pc != 0x0023A550u) [[unlikely]] return; }
L_0023A550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023A570:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 11104u);  if (t) { goto L_0023A598; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023A5B0; } }
    c.budget -= 1;
L_0023A598:
    set32(c.r[2], 0u + 2u);
    st8((c.r[5].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0023A5B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001236D0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 346u, depth); }
L_0023A5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 101u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A700; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0023A700; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A700; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A620; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023A628; } }
    c.budget -= 1;
L_0023A620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A700; } }
L_0023A628:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A700; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023A700; } }
    c.r[7].d[0] = c.r[5].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 23u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - 28128u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[16], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[17], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0023A700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A690u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023A690u) [[unlikely]] return; }
L_0023A690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023A6C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 28092u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023A700; } }
    c.budget -= 1;
L_0023A6C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 28092u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18496u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 23u)));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A6FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023A6FCu) [[unlikely]] return; }
L_0023A6FC:
    c.budget -= 1;
L_0023A700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023A720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 101u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A840; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023A840; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A840; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A780; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023A788; } }
    c.budget -= 1;
L_0023A780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A840; } }
L_0023A788:
    c.r[7].d[0] = c.r[4].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 23u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 28128u);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[6].w[0] << 1);
    set32(c.r[17], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A7D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023A7D4u) [[unlikely]] return; }
L_0023A7D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023A800; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 28092u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023A840; } }
L_0023A800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 28092u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18496u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 23u)));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A83Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023A83Cu) [[unlikely]] return; }
L_0023A83C:
    c.budget -= 1;
L_0023A840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023A860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 101u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023AAB0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023AAB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A8B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023A8B8; } }
    c.budget -= 1;
L_0023A8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023AAB0; } }
L_0023A8B8:
    c.r[7].d[0] = c.r[4].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 23u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 28128u);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[6].w[0] << 1);
    set32(c.r[17], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023AAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A904u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023A904u) [[unlikely]] return; }
L_0023A904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023A930; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 28092u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023AAB0; } }
L_0023A930:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023AA00; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 72u)));
    set32(c.r[3], 0u + 61u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 60u);  if (t) { goto L_0023A9F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A9E8; } }
    set32(c.r[3], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 58u);  if (t) { goto L_0023A9E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A9D8; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 54u);  if (t) { goto L_0023A9D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A9C8; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 48u);  if (t) { goto L_0023A9C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A9B8; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A9F8; } }
    c.budget -= 1;
L_0023A9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0023AA80; } }
L_0023A9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0023AA80; } }
L_0023A9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_0023AA80; } }
L_0023A9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_0023AA80; } }
L_0023A9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 10u);  if (t) { goto L_0023AA80; } }
L_0023A9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 11u);  if (t) { goto L_0023AA80; } }
L_0023A9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 12u);  if (t) { goto L_0023AA80; } }
L_0023A9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 13u);  if (t) { goto L_0023AA80; } }
L_0023A9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 14u);  if (t) { goto L_0023AA80; } }
L_0023A9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_0023AA80; } }
L_0023AA00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 73u)));
    set32(c.r[3], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 62u);  if (t) { goto L_0023AA70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023AA68; } }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 52u);  if (t) { goto L_0023AA60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023AA58; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 50u);  if (t) { goto L_0023AA50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023AA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023AA78; } }
L_0023AA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_0023AA80; } }
L_0023AA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_0023AA80; } }
L_0023AA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 5u);  if (t) { goto L_0023AA80; } }
L_0023AA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 9u);  if (t) { goto L_0023AA80; } }
L_0023AA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 15u);  if (t) { goto L_0023AA80; } }
L_0023AA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0023AA80; } }
L_0023AA78:
    set32(c.r[6], 0u + 9u);
    c.budget -= 2;
L_0023AA80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 28092u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AAB0u); set32(c.r[4], c.r[4].w[0] - 18496u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023AAB0u) [[unlikely]] return; }
L_0023AAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023AAD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 39u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023AB20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023AB28; } }
    c.budget -= 1;
L_0023AB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023AF30; } }
L_0023AB28:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023AF30; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023ACD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AB50u);  if (depth < kMaxDepth) unit_004E(c, 195u, depth + 1u); else { c.pc = 0x0023AF60u; return; } if (c.pc != 0x0023AB50u) [[unlikely]] return; }
L_0023AB50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0023AF30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 268u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023AB80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023AF30; } }
L_0023AB80:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0023AF30; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[16].d[0] = c.r[20].d[0] << 48;
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 1488u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[6].d[0] = c.r[6].d[0] & 7ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 22;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));  if (t) { goto L_0023AF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ABF4u); c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 18u)));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0023ABF4u) [[unlikely]] return; }
L_0023ABF4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[23].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_0023AF30; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_0023AC18; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0023AC28; } }
    c.budget -= 1;
L_0023AC18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 884u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_0023AF30; } }
    c.budget -= 1;
L_0023AC28:
    set32(c.r[3], c.r[16].w[0] - 6u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 18u);  if (t) { goto L_0023AC50; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0023AC50; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0023AC70; } }
    c.budget -= 1;
L_0023AC50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + 34u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 34u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023AF30; } }
    set32(c.r[2], 0u + 300u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0023AC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC78u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023AC78u) [[unlikely]] return; }
L_0023AC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023AC98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023AF30; } }
    c.budget -= 1;
L_0023AC98:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ACA8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 198u, depth + 1u); else { c.pc = 0x0023B050u; return; } if (c.pc != 0x0023ACA8u) [[unlikely]] return; }
L_0023ACA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18416u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ACCCu); st8((c.r[2].w[0] + 26u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023ACCCu) [[unlikely]] return; }
L_0023ACCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 884u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_0023AF30; } }
    c.budget -= 1;
L_0023ACD8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 776u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023AF30; } }
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 122u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023AF30; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 47ll ? 1ull : 0ull;  if (t) { goto L_0023AF30; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);  if (t) { goto L_0023AF30; } }
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 1488u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0023AF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD2Cu);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023AD2Cu) [[unlikely]] return; }
L_0023AD2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023AD48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 118u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0023AD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD50u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023AD50u) [[unlikely]] return; }
L_0023AD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023AD68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 119u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0023AD68:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 118u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0023AD88; } }
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0023ADC8; } }
    c.budget -= 1;
L_0023AD88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 119u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0023ADA0; } }
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 121u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0023ADC8; } }
L_0023ADA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 121u)));
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 120u)));
    c.r[1].d[0] = c.r[22].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0023ADC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023ADC8; } }
    c.budget -= 1;
L_0023ADC0:
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_0023ADC8:
    c.r[18].d[0] = c.r[20].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[23], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[23].w[0] + c.r[16].w[0]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 18u)));
    c.budget -= 9;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0023AE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ADF4u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0023ADF4u) [[unlikely]] return; }
L_0023ADF4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[30].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023AF30; } }
    c.budget -= 1;
L_0023AE08:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[23].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    c.r[6].d[0] = c.r[6].d[0] & 7ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));  if (t) { goto L_0023AF30; } }
    c.r[1].d[0] = c.r[22].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] - 6u);  if (t) { goto L_0023AF30; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023AE70; } }
    set32(c.r[4], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 19u);  if (t) { goto L_0023AE70; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_0023AED8; } }
    c.budget -= 1;
L_0023AE70:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[4].w[0] + 34u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0023AF30; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0023AEA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 118u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023AEB8; } }
    c.budget -= 1;
L_0023AEA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 119u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0023AEB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AECCu); set32(c.r[4], c.r[4].w[0] - 18224u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023AECCu) [[unlikely]] return; }
L_0023AECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023AF30; } }
    c.budget -= 1;
L_0023AED8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0023AEF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 118u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023AF08; } }
    c.budget -= 1;
L_0023AEF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 119u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0023AF08:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AF18u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 198u, depth + 1u); else { c.pc = 0x0023B050u; return; } if (c.pc != 0x0023AF18u) [[unlikely]] return; }
L_0023AF18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AF30u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023AF30u) [[unlikely]] return; }
L_0023AF30:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0023AF60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023AF80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023AFA0; } }
    c.budget -= 1;
L_0023AF80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0023AF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023AFA8; } }
    c.budget -= 1;
L_0023AF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023AFA8; } }
L_0023AFA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0023AFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023AFB0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023AFD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B038; } }
    c.budget -= 1;
L_0023AFD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0023B040; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 2;
L_0023AFE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B010; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0023B010; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023B008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B020; } }
L_0023B008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023B020; } }
L_0023B010:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AFE0u | kUnwind; return; } goto L_0023AFE0; } }
L_0023B020:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023B040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023B040; } }
    c.budget -= 1;
L_0023B038:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0023B040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023B050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 30u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 886u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0023B3E0; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 31u);  if (t) { goto L_0023B378; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023B2A0; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 28u);  if (t) { goto L_0023B1C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023B108; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0023B0D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023B0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B470; } }
L_0023B0B0:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023B470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 55u);  if (t) { goto L_0023B470; } }
L_0023B0D8:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 12u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 112u);  if (t) { goto L_0023B470; } }
    c.budget -= 1;
L_0023B108:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 54u);  if (t) { goto L_0023B120; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
L_0023B120:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 754u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B160u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0023B160u) [[unlikely]] return; }
L_0023B160:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0023B178; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0023B17C; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_0023B178:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0023B17C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0023B1C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023B1B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023B1B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B1A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B470; } }
L_0023B1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 18u);  if (t) { goto L_0023B470; } }
L_0023B1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 19u);  if (t) { goto L_0023B470; } }
L_0023B1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 20u);  if (t) { goto L_0023B470; } }
L_0023B1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 21u);  if (t) { goto L_0023B470; } }
L_0023B1C8:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0023B200; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_0023B1F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B200; } }
    c.budget -= 1;
L_0023B1F8:
    set32(c.r[16], 0u + 49u);
    c.budget -= 2;
L_0023B200:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_0023B218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
L_0023B218:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 754u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B470; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B25Cu);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0023B25Cu) [[unlikely]] return; }
L_0023B25C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0023B274; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023B278; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0023B274:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0023B278:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023B298; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B470; } }
L_0023B290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 7u);  if (t) { goto L_0023B470; } }
L_0023B298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_0023B470; } }
L_0023B2A0:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0023B2D8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_0023B2D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B2D8; } }
    c.budget -= 1;
L_0023B2D0:
    set32(c.r[16], 0u + 148u);
    c.budget -= 2;
L_0023B2D8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_0023B2F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
L_0023B2F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 754u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B470; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B334u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0023B334u) [[unlikely]] return; }
L_0023B334:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0023B34C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023B350; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0023B34C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0023B350:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023B370; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B470; } }
L_0023B368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_0023B470; } }
L_0023B370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 11u);  if (t) { goto L_0023B470; } }
L_0023B378:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_0023B390; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
L_0023B390:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 754u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B470; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_0023B470; } }
    c.budget -= 1;
L_0023B3E0:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0023B418; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_0023B410; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B418; } }
    c.budget -= 1;
L_0023B410:
    set32(c.r[16], 0u + 56u);
    c.budget -= 2;
L_0023B418:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_0023B430; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
L_0023B430:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B470; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 754u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B470; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023B470; } }
    set32(c.r[16], 0u + 11u);
    c.budget -= 1;
L_0023B470:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023B490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 776u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 122u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023B518; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.r[3].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 68ll ? 1ull : 0ull;  if (t) { goto L_0023B518; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023B518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4D4u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0023B4D4u) [[unlikely]] return; }
L_0023B4D4:
    set32(c.r[3], c.r[16].w[0] - 47u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 25008u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0023B518; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0023B518; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B518u); set32(c.r[4], c.r[4].w[0] - 18224u);  if (depth < kMaxDepth) unit_004E(c, 50u, depth + 1u); else { c.pc = 0x002386A0u; return; } if (c.pc != 0x0023B518u) [[unlikely]] return; }
L_0023B518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023B530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 776u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 122u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023B5B8; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.r[3].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 68ll ? 1ull : 0ull;  if (t) { goto L_0023B5B8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023B5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B574u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0023B574u) [[unlikely]] return; }
L_0023B574:
    set32(c.r[3], c.r[16].w[0] - 47u);
    c.r[5].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25168u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0023B5B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0023B5B8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5B8u); set32(c.r[4], c.r[4].w[0] - 18224u);  if (depth < kMaxDepth) unit_004E(c, 50u, depth + 1u); else { c.pc = 0x002386A0u; return; } if (c.pc != 0x0023B5B8u) [[unlikely]] return; }
L_0023B5B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023B5D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 39u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023B600; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B608; } }
L_0023B600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B898; } }
L_0023B608:
    c.r[17].d[0] = c.r[4].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[15], c.r[15].w[0] - 27856u);
    set32(c.r[2], c.r[2].w[0] << 9);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[15].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[9].w[0] + 8661u);
    set32(c.r[13], c.r[5].w[0] + 56u);
    set32(c.r[9], c.r[3].w[0] + c.r[17].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 317u)));
    set32(c.r[11], 0u + 1u);
    c.budget -= 16;
L_0023B648:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_0023B728; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[9], c.r[11].w[0] << (c.r[6].w[0] & 31u));
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0023B718; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 8661u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_0023B718; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[6].d[0];  if (t) { goto L_0023B718; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[9], c.r[9].w[0] + 68u);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[17].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[1].d[0] = c.r[11].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));  if (t) { goto L_0023B6C8; } }
    c.r[1].d[0] = c.r[9].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023B6C8; } }
    set32(c.r[7], c.r[11].w[0] << 5);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4736u);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));  if (t) { goto L_0023B700; } }
L_0023B6C8:
    c.r[6].d[0] = c.r[11].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[6].d[0] = c.r[9].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_0023B728; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[10], c.r[9].w[0] - 32u);  if (t) { goto L_0023B728; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[9], c.r[11].w[0] - 32u);
    set32(c.r[6], c.r[6].w[0] + 6784u);
    set32(c.r[7], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - c.r[9].w[0]);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 9;
L_0023B700:
    set32(c.r[6], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0023B728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0023B728; } }
    c.budget -= 1;
L_0023B718:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[9].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[15], c.r[15].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023B648u | kUnwind; return; } goto L_0023B648; } }
L_0023B728:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B750; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0023B748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B758; } }
    c.budget -= 1;
L_0023B748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0023B758; } }
L_0023B750:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023B758:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0023B848; } }
    set32(c.r[3], 0u + 35u);
    set32(c.r[4], c.r[4].w[0] - 19198u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023B798; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[7], 0u + 120u);  if (t) { goto L_0023B798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B828; } }
L_0023B798:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023B7E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B7B8u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0023B7B8u) [[unlikely]] return; }
L_0023B7B8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 3968u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0023B828; } }
L_0023B7E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B7F8u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0023B7F8u) [[unlikely]] return; }
L_0023B7F8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 4352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
L_0023B828:
    c.r[6].d[0] = c.r[16].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B840u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023B840u) [[unlikely]] return; }
L_0023B840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B898; } }
L_0023B848:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B864u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023B864u) [[unlikely]] return; }
L_0023B864:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0023B888; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023B888; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023B898; } }
L_0023B888:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 317u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0023B898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023B8B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[1].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0023B908; } }
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[1].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] << 5);  if (t) { goto L_0023B908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 19792u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0023B958; } }
L_0023B908:
    c.r[2].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_0023B950; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] - 32u);  if (t) { goto L_0023B950; } }
    set32(c.r[5], c.r[7].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 21840u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0023B958; } }
    c.budget -= 1;
L_0023B950:
    set32(c.r[17], 0u - 1u);
    c.budget -= 2;
L_0023B958:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);  if (t) { goto L_0023B978; } }
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 22304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
L_0023B978:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 99u);  if (t) { goto L_0023B990; } }
    set32(c.r[16], 0u + 13u);
    c.budget -= 1;
L_0023B990:
    c.r[18].d[0] = c.r[4].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B9A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 196u, depth + 1u); else { c.pc = 0x0023AFB0u; return; } if (c.pc != 0x0023B9A0u) [[unlikely]] return; }
L_0023B9A0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B9ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023B9ACu) [[unlikely]] return; }
L_0023B9AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023B9C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023B9E8; } }
L_0023B9C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B9E0u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023B9E0u) [[unlikely]] return; }
L_0023B9E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0023B9E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023BA10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 1488u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 500u)));
    c.budget -= 22;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0023BAD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 99u);  if (t) { goto L_0023BA80; } }
    set32(c.r[16], 0u + 13u);
    c.budget -= 1;
L_0023BA80:
    c.r[18].d[0] = c.r[4].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BA90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 196u, depth + 1u); else { c.pc = 0x0023AFB0u; return; } if (c.pc != 0x0023BA90u) [[unlikely]] return; }
L_0023BA90:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BA9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023BA9Cu) [[unlikely]] return; }
L_0023BA9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023BAB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023BAD8; } }
L_0023BAB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BAD0u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023BAD0u) [[unlikely]] return; }
L_0023BAD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0023BAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023BB00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0023BB50; } }
    c.r[1].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 5);  if (t) { goto L_0023BB50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 19792u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0023BB98; } }
L_0023BB50:
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_0023BB90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] - 32u);  if (t) { goto L_0023BB90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 21840u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0023BB98; } }
    c.budget -= 1;
L_0023BB90:
    set32(c.r[17], 0u - 1u);
    c.budget -= 2;
L_0023BB98:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);  if (t) { goto L_0023BBB8; } }
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 22304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
L_0023BBB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 99u);  if (t) { goto L_0023BBD0; } }
    set32(c.r[16], 0u + 13u);
    c.budget -= 1;
L_0023BBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BBD8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023BBD8u) [[unlikely]] return; }
L_0023BBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023BBF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023BC18; } }
    c.budget -= 1;
L_0023BBF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BC10u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023BC10u) [[unlikely]] return; }
L_0023BC10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0023BC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023BC40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 1488u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 500u)));
    c.budget -= 22;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0023BCF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 99u);  if (t) { goto L_0023BCB0; } }
    set32(c.r[16], 0u + 13u);
    c.budget -= 1;
L_0023BCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023BCB8u) [[unlikely]] return; }
L_0023BCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023BCD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023BCF8; } }
    c.budget -= 1;
L_0023BCD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCF0u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023BCF0u) [[unlikely]] return; }
L_0023BCF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0023BCF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023BD20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0023BD78; } }
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[1].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] << 5);  if (t) { goto L_0023BD78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 22400u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0023BDC8; } }
    c.budget -= 1;
L_0023BD78:
    c.r[2].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_0023BDC0; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] - 32u);  if (t) { goto L_0023BDC0; } }
    set32(c.r[5], c.r[7].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24448u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0023BDC8; } }
    c.budget -= 1;
L_0023BDC0:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_0023BDC8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);  if (t) { goto L_0023BDE8; } }
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 24912u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
L_0023BDE8:
    c.r[17].d[0] = c.r[4].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BDF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 196u, depth + 1u); else { c.pc = 0x0023AFB0u; return; } if (c.pc != 0x0023BDF8u) [[unlikely]] return; }
L_0023BDF8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BE04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023BE04u) [[unlikely]] return; }
L_0023BE04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023BE20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023BE48; } }
L_0023BE20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BE38u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023BE38u) [[unlikely]] return; }
L_0023BE38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0023BE48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023BE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0023BE90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023BF60; } }
    c.budget -= 1;
L_0023BE90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023BF60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023BF60; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023BF60; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 592u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8663u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0023BF60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BED4u);  if (depth < kMaxDepth) unit_004E(c, 195u, depth + 1u); else { c.pc = 0x0023AF60u; return; } if (c.pc != 0x0023BED4u) [[unlikely]] return; }
L_0023BED4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BEE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0023BEE0u) [[unlikely]] return; }
L_0023BEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023BF00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023BF60; } }
    c.budget -= 1;
L_0023BF00:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 886u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[2], 0u + 33u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));  if (t) { goto L_0023BF38; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0023BF38; } }
    set32(c.r[7], 0u + 112u);
    c.budget -= 1;
L_0023BF38:
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BF50u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x0023BF50u) [[unlikely]] return; }
L_0023BF50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0023BF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023BF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_004F(c, 3u, depth); } }
    c.budget -= 1;
L_0023BFA0:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[4].w[0] + 40u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { [[clang::musttail]] return unit_004F(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023BFF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023BFD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_004F(c, 2u, depth); } }
    c.budget -= 1;
L_0023BFD8:
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BFE8u); set32(c.r[6], ld32((c.r[6].w[0] + 12u)));  if (depth < kMaxDepth) unit_004E(c, 58u, depth + 1u); else { c.pc = 0x00238890u; return; } if (c.pc != 0x0023BFE8u) [[unlikely]] return; }
L_0023BFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_004F(c, 2u, depth); } }
L_0023BFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BFF8u); set32(c.r[4], ld32((c.r[6].w[0] + 4u)));  if (depth < kMaxDepth) unit_004E(c, 60u, depth + 1u); else { c.pc = 0x002388F0u; return; } if (c.pc != 0x0023BFF8u) [[unlikely]] return; }
L_0023BFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_004F(c, 2u, depth); } }
    [[clang::musttail]] return unit_004F(c, 1u, depth);
}

}
