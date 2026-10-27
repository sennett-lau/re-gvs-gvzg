#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004B[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112,
    0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0,
    202, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219,
    0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0,
    283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338,
    0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 344, 0, 345, 346, 0, 0, 347, 0,
};

void unit_004B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0022C000;
    case 2u: goto L_0022C010;
    case 3u: goto L_0022C020;
    case 4u: goto L_0022C030;
    case 5u: goto L_0022C040;
    case 6u: goto L_0022C050;
    case 7u: goto L_0022C058;
    case 8u: goto L_0022C060;
    case 9u: goto L_0022C080;
    case 10u: goto L_0022C0B8;
    case 11u: goto L_0022C0C8;
    case 12u: goto L_0022C0D8;
    case 13u: goto L_0022C0E8;
    case 14u: goto L_0022C100;
    case 15u: goto L_0022C1A0;
    case 16u: goto L_0022C1D0;
    case 17u: goto L_0022C238;
    case 18u: goto L_0022C268;
    case 19u: goto L_0022C300;
    case 20u: goto L_0022C464;
    case 21u: goto L_0022C4B8;
    case 22u: goto L_0022C4E0;
    case 23u: goto L_0022C500;
    case 24u: goto L_0022C518;
    case 25u: goto L_0022C5A0;
    case 26u: goto L_0022C5C8;
    case 27u: goto L_0022C640;
    case 28u: goto L_0022C678;
    case 29u: goto L_0022C6F0;
    case 30u: goto L_0022C700;
    case 31u: goto L_0022C710;
    case 32u: goto L_0022C730;
    case 33u: goto L_0022C754;
    case 34u: goto L_0022C790;
    case 35u: goto L_0022C79C;
    case 36u: goto L_0022C7C4;
    case 37u: goto L_0022C7D0;
    case 38u: goto L_0022C7DC;
    case 39u: goto L_0022C7FC;
    case 40u: goto L_0022C80C;
    case 41u: goto L_0022C850;
    case 42u: goto L_0022C868;
    case 43u: goto L_0022C8C0;
    case 44u: goto L_0022C8D0;
    case 45u: goto L_0022C8E0;
    case 46u: goto L_0022C900;
    case 47u: goto L_0022C950;
    case 48u: goto L_0022C99C;
    case 49u: goto L_0022C9B0;
    case 50u: goto L_0022C9E0;
    case 51u: goto L_0022C9F0;
    case 52u: goto L_0022CA1C;
    case 53u: goto L_0022CA80;
    case 54u: goto L_0022CA90;
    case 55u: goto L_0022CAA0;
    case 56u: goto L_0022CAD8;
    case 57u: goto L_0022CAE0;
    case 58u: goto L_0022CAF0;
    case 59u: goto L_0022CB10;
    case 60u: goto L_0022CB20;
    case 61u: goto L_0022CB30;
    case 62u: goto L_0022CB68;
    case 63u: goto L_0022CB70;
    case 64u: goto L_0022CB80;
    case 65u: goto L_0022CBA0;
    case 66u: goto L_0022CBB0;
    case 67u: goto L_0022CBC0;
    case 68u: goto L_0022CBF8;
    case 69u: goto L_0022CC00;
    case 70u: goto L_0022CC10;
    case 71u: goto L_0022CC30;
    case 72u: goto L_0022CC40;
    case 73u: goto L_0022CC50;
    case 74u: goto L_0022CC88;
    case 75u: goto L_0022CC90;
    case 76u: goto L_0022CCA0;
    case 77u: goto L_0022CFE0;
    case 78u: goto L_0022D000;
    case 79u: goto L_0022D00C;
    case 80u: goto L_0022D030;
    case 81u: goto L_0022D150;
    case 82u: goto L_0022D180;
    case 83u: goto L_0022D1A0;
    case 84u: goto L_0022D1D0;
    case 85u: goto L_0022D1F0;
    case 86u: goto L_0022D348;
    case 87u: goto L_0022D374;
    case 88u: goto L_0022D3B0;
    case 89u: goto L_0022D3D8;
    case 90u: goto L_0022D440;
    case 91u: goto L_0022D460;
    case 92u: goto L_0022D48C;
    case 93u: goto L_0022D4B0;
    case 94u: goto L_0022D4D0;
    case 95u: goto L_0022D4E0;
    case 96u: goto L_0022D4F0;
    case 97u: goto L_0022D528;
    case 98u: goto L_0022D5B0;
    case 99u: goto L_0022D650;
    case 100u: goto L_0022D6A8;
    case 101u: goto L_0022D6F0;
    case 102u: goto L_0022D738;
    case 103u: goto L_0022D788;
    case 104u: goto L_0022D7D0;
    case 105u: goto L_0022D85C;
    case 106u: goto L_0022D9A0;
    case 107u: goto L_0022D9A8;
    case 108u: goto L_0022D9B8;
    case 109u: goto L_0022D9C8;
    case 110u: goto L_0022D9D0;
    case 111u: goto L_0022D9EC;
    case 112u: goto L_0022D9FC;
    case 113u: goto L_0022DA04;
    case 114u: goto L_0022DA0C;
    case 115u: goto L_0022DB08;
    case 116u: goto L_0022DB10;
    case 117u: goto L_0022DB20;
    case 118u: goto L_0022DB30;
    case 119u: goto L_0022DB38;
    case 120u: goto L_0022DB54;
    case 121u: goto L_0022DB64;
    case 122u: goto L_0022DB6C;
    case 123u: goto L_0022DB74;
    case 124u: goto L_0022DC98;
    case 125u: goto L_0022DCA0;
    case 126u: goto L_0022DCB0;
    case 127u: goto L_0022DCC0;
    case 128u: goto L_0022DCC8;
    case 129u: goto L_0022DCE4;
    case 130u: goto L_0022DCF4;
    case 131u: goto L_0022DCFC;
    case 132u: goto L_0022DD04;
    case 133u: goto L_0022DE00;
    case 134u: goto L_0022DE08;
    case 135u: goto L_0022DE18;
    case 136u: goto L_0022DE28;
    case 137u: goto L_0022DE30;
    case 138u: goto L_0022DE4C;
    case 139u: goto L_0022DE5C;
    case 140u: goto L_0022DE64;
    case 141u: goto L_0022DE6C;
    case 142u: goto L_0022DF68;
    case 143u: goto L_0022E03C;
    case 144u: goto L_0022E110;
    case 145u: goto L_0022E1E4;
    case 146u: goto L_0022E2B8;
    case 147u: goto L_0022E38C;
    case 148u: goto L_0022E45C;
    case 149u: goto L_0022E490;
    case 150u: goto L_0022E4A0;
    case 151u: goto L_0022E4B0;
    case 152u: goto L_0022E4C0;
    case 153u: goto L_0022E540;
    case 154u: goto L_0022E578;
    case 155u: goto L_0022E598;
    case 156u: goto L_0022E5D0;
    case 157u: goto L_0022E5F0;
    case 158u: goto L_0022E610;
    case 159u: goto L_0022E61C;
    case 160u: goto L_0022E640;
    case 161u: goto L_0022E658;
    case 162u: goto L_0022E670;
    case 163u: goto L_0022E67C;
    case 164u: goto L_0022E6D0;
    case 165u: goto L_0022E708;
    case 166u: goto L_0022E784;
    case 167u: goto L_0022E78C;
    case 168u: goto L_0022E7DC;
    case 169u: goto L_0022E7F8;
    case 170u: goto L_0022E82C;
    case 171u: goto L_0022E834;
    case 172u: goto L_0022E888;
    case 173u: goto L_0022E8C4;
    case 174u: goto L_0022E8E4;
    case 175u: goto L_0022E900;
    case 176u: goto L_0022E960;
    case 177u: goto L_0022E9F0;
    case 178u: goto L_0022EA28;
    case 179u: goto L_0022EA34;
    case 180u: goto L_0022EA7C;
    case 181u: goto L_0022EA8C;
    case 182u: goto L_0022EA98;
    case 183u: goto L_0022EAC0;
    case 184u: goto L_0022EAD0;
    case 185u: goto L_0022EB60;
    case 186u: goto L_0022EB68;
    case 187u: goto L_0022EB74;
    case 188u: goto L_0022EBAC;
    case 189u: goto L_0022EBB8;
    case 190u: goto L_0022EBC4;
    case 191u: goto L_0022EBFC;
    case 192u: goto L_0022EC0C;
    case 193u: goto L_0022EC18;
    case 194u: goto L_0022EC30;
    case 195u: goto L_0022EC64;
    case 196u: goto L_0022EC74;
    case 197u: goto L_0022ECA0;
    case 198u: goto L_0022ECD4;
    case 199u: goto L_0022ECDC;
    case 200u: goto L_0022ECE4;
    case 201u: goto L_0022ECF8;
    case 202u: goto L_0022ED00;
    case 203u: goto L_0022ED08;
    case 204u: goto L_0022ED14;
    case 205u: goto L_0022ED24;
    case 206u: goto L_0022ED54;
    case 207u: goto L_0022ED5C;
    case 208u: goto L_0022ED64;
    case 209u: goto L_0022EDB4;
    case 210u: goto L_0022EDC0;
    case 211u: goto L_0022EDD0;
    case 212u: goto L_0022EDEC;
    case 213u: goto L_0022EE28;
    case 214u: goto L_0022EE30;
    case 215u: goto L_0022EEA0;
    case 216u: goto L_0022EEBC;
    case 217u: goto L_0022EEE4;
    case 218u: goto L_0022EEF4;
    case 219u: goto L_0022EEFC;
    case 220u: goto L_0022EF04;
    case 221u: goto L_0022EF20;
    case 222u: goto L_0022EF48;
    case 223u: goto L_0022EF58;
    case 224u: goto L_0022EF60;
    case 225u: goto L_0022EF78;
    case 226u: goto L_0022EF90;
    case 227u: goto L_0022EFA8;
    case 228u: goto L_0022EFC0;
    case 229u: goto L_0022EFE0;
    case 230u: goto L_0022F008;
    case 231u: goto L_0022F070;
    case 232u: goto L_0022F090;
    case 233u: goto L_0022F0B0;
    case 234u: goto L_0022F0D0;
    case 235u: goto L_0022F0E0;
    case 236u: goto L_0022F0F0;
    case 237u: goto L_0022F100;
    case 238u: goto L_0022F140;
    case 239u: goto L_0022F154;
    case 240u: goto L_0022F178;
    case 241u: goto L_0022F190;
    case 242u: goto L_0022F1BC;
    case 243u: goto L_0022F1D4;
    case 244u: goto L_0022F1F0;
    case 245u: goto L_0022F200;
    case 246u: goto L_0022F240;
    case 247u: goto L_0022F260;
    case 248u: goto L_0022F268;
    case 249u: goto L_0022F284;
    case 250u: goto L_0022F294;
    case 251u: goto L_0022F2B0;
    case 252u: goto L_0022F2C8;
    case 253u: goto L_0022F2D0;
    case 254u: goto L_0022F2D8;
    case 255u: goto L_0022F2F8;
    case 256u: goto L_0022F308;
    case 257u: goto L_0022F320;
    case 258u: goto L_0022F338;
    case 259u: goto L_0022F340;
    case 260u: goto L_0022F348;
    case 261u: goto L_0022F35C;
    case 262u: goto L_0022F364;
    case 263u: goto L_0022F384;
    case 264u: goto L_0022F394;
    case 265u: goto L_0022F3B0;
    case 266u: goto L_0022F3B8;
    case 267u: goto L_0022F3CC;
    case 268u: goto L_0022F3D4;
    case 269u: goto L_0022F3F4;
    case 270u: goto L_0022F404;
    case 271u: goto L_0022F420;
    case 272u: goto L_0022F428;
    case 273u: goto L_0022F43C;
    case 274u: goto L_0022F45C;
    case 275u: goto L_0022F46C;
    case 276u: goto L_0022F488;
    case 277u: goto L_0022F490;
    case 278u: goto L_0022F4A4;
    case 279u: goto L_0022F4AC;
    case 280u: goto L_0022F4CC;
    case 281u: goto L_0022F4DC;
    case 282u: goto L_0022F4F8;
    case 283u: goto L_0022F500;
    case 284u: goto L_0022F514;
    case 285u: goto L_0022F51C;
    case 286u: goto L_0022F53C;
    case 287u: goto L_0022F54C;
    case 288u: goto L_0022F568;
    case 289u: goto L_0022F570;
    case 290u: goto L_0022F584;
    case 291u: goto L_0022F5A4;
    case 292u: goto L_0022F5B4;
    case 293u: goto L_0022F5D0;
    case 294u: goto L_0022F5E8;
    case 295u: goto L_0022F5F0;
    case 296u: goto L_0022F5F8;
    case 297u: goto L_0022F614;
    case 298u: goto L_0022F624;
    case 299u: goto L_0022F650;
    case 300u: goto L_0022F658;
    case 301u: goto L_0022F660;
    case 302u: goto L_0022F688;
    case 303u: goto L_0022F6A8;
    case 304u: goto L_0022F6E0;
    case 305u: goto L_0022F700;
    case 306u: goto L_0022F740;
    case 307u: goto L_0022F7CC;
    case 308u: goto L_0022F7D4;
    case 309u: goto L_0022F7F0;
    case 310u: goto L_0022F800;
    case 311u: goto L_0022F810;
    case 312u: goto L_0022F924;
    case 313u: goto L_0022F93C;
    case 314u: goto L_0022F964;
    case 315u: goto L_0022F984;
    case 316u: goto L_0022F994;
    case 317u: goto L_0022F9A0;
    case 318u: goto L_0022FAB4;
    case 319u: goto L_0022FACC;
    case 320u: goto L_0022FAF4;
    case 321u: goto L_0022FB14;
    case 322u: goto L_0022FB24;
    case 323u: goto L_0022FB30;
    case 324u: goto L_0022FC44;
    case 325u: goto L_0022FC5C;
    case 326u: goto L_0022FC84;
    case 327u: goto L_0022FCA4;
    case 328u: goto L_0022FCB4;
    case 329u: goto L_0022FCC0;
    case 330u: goto L_0022FDD4;
    case 331u: goto L_0022FDEC;
    case 332u: goto L_0022FE14;
    case 333u: goto L_0022FE34;
    case 334u: goto L_0022FE44;
    case 335u: goto L_0022FE5C;
    case 336u: goto L_0022FE68;
    case 337u: goto L_0022FF68;
    case 338u: goto L_0022FF7C;
    case 339u: goto L_0022FF84;
    case 340u: goto L_0022FF94;
    case 341u: goto L_0022FFA8;
    case 342u: goto L_0022FFBC;
    case 343u: goto L_0022FFDC;
    case 344u: goto L_0022FFE0;
    case 345u: goto L_0022FFE8;
    case 346u: goto L_0022FFEC;
    case 347u: goto L_0022FFF8;
    default: bad_entry(c, 0x0022C000u); return;
    }
L_0022C000:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022C058; } }
    c.budget -= 1;
L_0022C010:
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022C058; } }
    c.budget -= 1;
L_0022C020:
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022C058; } }
    c.budget -= 1;
L_0022C030:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022C058; } }
    c.budget -= 1;
L_0022C040:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022C058; } }
    c.budget -= 1;
L_0022C050:
    set32(c.r[3], 0u + 41u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022C058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C060:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022C080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022C0D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022C0C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C0E0; } }
L_0022C0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0B8u);  if (depth < kMaxDepth) unit_004B(c, 8u, depth + 1u); else { c.pc = 0x0022C060u; return; } if (c.pc != 0x0022C0B8u) [[unlikely]] return; }
L_0022C0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C0E0; } }
L_0022C0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0C8u);  if (depth < kMaxDepth) unit_004A(c, 395u, depth + 1u); else { c.pc = 0x0022BD60u; return; } if (c.pc != 0x0022C0C8u) [[unlikely]] return; }
L_0022C0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C0E0; } }
L_0022C0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0D8u);  if (depth < kMaxDepth) unit_004B(c, 46u, depth + 1u); else { c.pc = 0x0022C900u; return; } if (c.pc != 0x0022C0D8u) [[unlikely]] return; }
L_0022C0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C0E8; } }
L_0022C0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0E8u);  if (depth < kMaxDepth) unit_004B(c, 14u, depth + 1u); else { c.pc = 0x0022C100u; return; } if (c.pc != 0x0022C0E8u) [[unlikely]] return; }
L_0022C0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022C100:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 15568u);
    set32(c.r[6], 0u + 26064u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[9], c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] - 608u);
    set32(c.r[8], c.r[4].w[0] + 80u);
    set32(c.r[10], c.r[4].w[0] + 64u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st128((c.r[9].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 97u));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 768u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[7]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[9]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[8].w[3]);
    vu::add(c.vu0, 15u, 6u, 9u, 10u);
    st128((c.r[10].w[0]) & ~15u, c.vu0.vf[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022C1A0:
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_0022C1D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[12].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[25].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 23088u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 23008u)));
    set32(c.r[18], c.r[18].w[0] + 23010u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[13], 0u + 32767u);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_0022C240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C238u);  if (depth < kMaxDepth) unit_004B(c, 15u, depth + 1u); else { c.pc = 0x0022C1A0u; return; } if (c.pc != 0x0022C238u) [[unlikely]] return; }
L_0022C238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C4B8; } }
L_0022C240:
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[8].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[24].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[11], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[5].w[0] + 240u);  if (t) { goto L_0022C410; } }
    c.budget -= 1;
L_0022C268:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C3D0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { goto L_0022C3D0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_0022C3A0; } }
    c.r[6].d[0] = ld8((c.r[19].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0022C2E8; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 61u));
    c.r[3].d[0] = c.r[25].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C2B8; } }
    c.r[14].d[0] = c.r[9].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 48);  if (t) { goto L_0022C388; } }
L_0022C2B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022C388; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[13].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C388; } }
    c.r[14].d[0] = c.r[9].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 48);  if (t) { goto L_0022C388; } }
    c.budget -= 1;
L_0022C2E8:
    c.r[3].d[0] = c.r[13].d[0] << 48;
    c.r[15].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[25].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_0022C370; } }
    c.budget -= 1;
L_0022C300:
    c.r[20].d[0] = c.r[15].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[20], c.r[20].w[0] + c.r[19].w[0]);
    c.r[20].d[0] = ld8((c.r[20].w[0] + 98u));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] != c.r[7].d[0];  if (t) { goto L_0022C360; } }
    c.r[20].d[0] = ld8((c.r[19].w[0] + 61u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0022C350; } }
L_0022C330:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[4].d[0];  if (t) { goto L_0022C350; } }
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C350; } }
    c.r[14].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_0022C350:
    c.r[20].d[0] = c.r[14].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0022C388; } }
L_0022C360:
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[15].d[0] = c.r[15].d[0] << 48;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    c.budget -= 4;
L_0022C370:
    c.r[20].d[0] = c.r[15].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[20].d[0] = c.r[20].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C300u | kUnwind; return; } goto L_0022C300; } }
    c.budget -= 1;
L_0022C388:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + 64u);  if (t) { goto L_0022C3A0; } }
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 6u, 4u, 5u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 4;
L_0022C3A0:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_0022C3D0; } }
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[25].d[0] = ld8((c.r[19].w[0] + 61u));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.budget -= 10;
L_0022C3D0:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);  if (t) { goto L_0022C3F8; } }
    set32(c.r[3], c.r[12].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 23008u)));
    c.r[12].d[0] = c.r[3].d[0] << 48;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    c.r[1].d[0] = c.r[12].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C428; } }
L_0022C3F8:
    set32(c.r[3], c.r[24].w[0] + 1u);
    c.r[24].d[0] = c.r[3].d[0] << 48;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 48);
    set32(c.r[19], c.r[19].w[0] + 128u);
    c.budget -= 6;
L_0022C410:
    c.r[3].d[0] = c.r[24].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C268u | kUnwind; return; } goto L_0022C268; } }
    c.budget -= 1;
L_0022C428:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022C4B0; } }
    set32(c.r[2], c.r[5].w[0] + 192u);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C464u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0022C464u) [[unlikely]] return; }
L_0022C464:
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[3], c.r[16].w[0] + 16u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.f[0]);  if (t) { goto L_0022C4B8; } }
L_0022C4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C4B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 15u, depth + 1u); else { c.pc = 0x0022C1A0u; return; } if (c.pc != 0x0022C4B8u) [[unlikely]] return; }
L_0022C4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0022C4E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 23088u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[5], c.r[4].w[0] + 8192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C500u); st16((c.r[1].w[0] + 23008u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x0022C500u) [[unlikely]] return; }
L_0022C500:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[8], c.r[8].w[0] + 31152u);
    set32(c.r[7], 0u + 63u);
    set32(c.r[6], c.r[6].w[0] + 23071u);
    c.budget -= 6;
L_0022C518:
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[7].w[0] - 1u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[7].w[0] - 2u);
    st16((c.r[8].w[0] - 126u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[7].w[0] - 5u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] - 256u);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[7].w[0] - 3u);
    st8((c.r[6].w[0] - 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[7].w[0] - 4u);
    st16((c.r[8].w[0] - 126u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] - 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] - 256u);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[7].w[0] - 6u);
    st8((c.r[6].w[0] - 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[7].w[0] - 7u);
    st16((c.r[8].w[0] - 126u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] - 8u);
    st8((c.r[6].w[0] - 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] - 256u);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] - 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[8].w[0] - 126u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 8u);
    c.budget -= 30;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[8], c.r[8].w[0] - 256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C518u | kUnwind; return; } goto L_0022C518; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022C5A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 23008u)));
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 23010u);  if (t) { goto L_0022C5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022C638; } }
L_0022C5C0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022C5C8:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0022C618; } }
    c.r[2].d[0] = c.r[3].d[0] << 48;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 23008u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[2], c.r[2].w[0] + 23088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st16((c.r[1].w[0] + 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0022C638; } }
    c.budget -= 1;
L_0022C618:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C5C8u | kUnwind; return; } goto L_0022C5C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022C638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C640:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C678u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004B(c, 25u, depth + 1u); else { c.pc = 0x0022C5A0u; return; } if (c.pc != 0x0022C678u) [[unlikely]] return; }
L_0022C678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022C688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022C718; } }
L_0022C688:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8680u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C6B0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 25968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_0022C6C8; } }
L_0022C6B0:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 26288u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_0022C6C8:
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], 0u + 3u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C6F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0022C6F0u) [[unlikely]] return; }
L_0022C6F0:
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C700u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0022C700u) [[unlikely]] return; }
L_0022C700:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C710u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0022C710u) [[unlikely]] return; }
L_0022C710:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0022C718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022C730:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C754u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 25u, depth + 1u); else { c.pc = 0x0022C5A0u; return; } if (c.pc != 0x0022C754u) [[unlikely]] return; }
L_0022C754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022C768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022C838; } }
    c.budget -= 1;
L_0022C768:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 24768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C790u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0022C790u) [[unlikely]] return; }
L_0022C790:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C79Cu); set32(c.r[5], c.r[4].w[0] + 16u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x0022C79Cu) [[unlikely]] return; }
L_0022C79C:
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], 0u + 26064u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[2], c.r[2].w[0] - 608u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7C4u); set32(c.r[6], c.r[17].w[0] + 816u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x0022C7C4u) [[unlikely]] return; }
L_0022C7C4:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7D0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0022C7D0u) [[unlikely]] return; }
L_0022C7D0:
    set32(c.r[5], c.r[17].w[0] + 768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7DCu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x0022C7DCu) [[unlikely]] return; }
L_0022C7DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7FCu); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0022C7FCu) [[unlikely]] return; }
L_0022C7FC:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C80Cu); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x0022C80Cu) [[unlikely]] return; }
L_0022C80C:
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.budget -= 11;
L_0022C838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0022C850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C868u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004B(c, 25u, depth + 1u); else { c.pc = 0x0022C5A0u; return; } if (c.pc != 0x0022C868u) [[unlikely]] return; }
L_0022C868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022C878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022C8E8; } }
L_0022C878:
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[2], c.r[4].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 19198u);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 24240u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C8C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0022C8C0u) [[unlikely]] return; }
L_0022C8C0:
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C8D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0022C8D0u) [[unlikely]] return; }
L_0022C8D0:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C8E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0022C8E0u) [[unlikely]] return; }
L_0022C8E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0022C8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022C900:
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[3].d[0] = 0ull & 255ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 23010u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 23008u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0022C948; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st16((c.r[1].w[0] + 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0022C948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022C988; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022C9A0; } }
L_0022C988:
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[6].d[0] = ld8((c.r[5].w[0] + 268u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C99Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 32u, depth + 1u); else { c.pc = 0x0022C730u; return; } if (c.pc != 0x0022C99Cu) [[unlikely]] return; }
L_0022C99C:
    c.budget -= 1;
L_0022C9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022C9B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 27856u);
    set32(c.r[17], c.r[17].w[0] + 21088u);
    c.budget -= 12;
L_0022C9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0022CA38; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022C9F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022CA20; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 15584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022CA1Cu) [[unlikely]] return; }
L_0022CA1C:
    c.budget -= 1;
L_0022CA20:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C9F0u | kUnwind; return; } goto L_0022C9F0; } }
L_0022CA38:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[3].d[0] << 48;
    set32(c.r[18], c.r[18].w[0] + 8704u);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[3].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C9E0u | kUnwind; return; } goto L_0022C9E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022CA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    c.budget -= 3;
    { c.r[5].d[0] = c.r[2].d[0] | 63999ull;  goto L_0022CCC0; }
L_0022CA90:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022CAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022CAE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022CAD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CAF8; } }
L_0022CAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CAD8u);  if (depth < kMaxDepth) unit_004B(c, 54u, depth + 1u); else { c.pc = 0x0022CA90u; return; } if (c.pc != 0x0022CAD8u) [[unlikely]] return; }
L_0022CAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CAE0u);  if (depth < kMaxDepth) unit_004B(c, 53u, depth + 1u); else { c.pc = 0x0022CA80u; return; } if (c.pc != 0x0022CAE0u) [[unlikely]] return; }
L_0022CAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CAF8; } }
L_0022CAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CAF0u);  if (depth < kMaxDepth) unit_004B(c, 84u, depth + 1u); else { c.pc = 0x0022D1D0u; return; } if (c.pc != 0x0022CAF0u) [[unlikely]] return; }
L_0022CAF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CAF8; } }
L_0022CAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022CB10:
    c.budget -= 2;
    { c.r[5].sd[0] = static_cast<std::int32_t>(0x01800000u);  goto L_0022CCC0; }
L_0022CB20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022CB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022CB78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022CB68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CB88; } }
L_0022CB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB68u);  if (depth < kMaxDepth) unit_004B(c, 60u, depth + 1u); else { c.pc = 0x0022CB20u; return; } if (c.pc != 0x0022CB68u) [[unlikely]] return; }
L_0022CB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB70u);  if (depth < kMaxDepth) unit_004B(c, 59u, depth + 1u); else { c.pc = 0x0022CB10u; return; } if (c.pc != 0x0022CB70u) [[unlikely]] return; }
L_0022CB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CB88; } }
L_0022CB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB80u);  if (depth < kMaxDepth) unit_004B(c, 84u, depth + 1u); else { c.pc = 0x0022D1D0u; return; } if (c.pc != 0x0022CB80u) [[unlikely]] return; }
L_0022CB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CB88; } }
L_0022CB88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022CBA0:
    c.budget -= 2;
    { c.r[5].sd[0] = static_cast<std::int32_t>(0x01800000u);  goto L_0022CCC0; }
L_0022CBB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022CBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022CC08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022CBF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CC18; } }
L_0022CBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBF8u);  if (depth < kMaxDepth) unit_004B(c, 66u, depth + 1u); else { c.pc = 0x0022CBB0u; return; } if (c.pc != 0x0022CBF8u) [[unlikely]] return; }
L_0022CBF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC00u);  if (depth < kMaxDepth) unit_004B(c, 65u, depth + 1u); else { c.pc = 0x0022CBA0u; return; } if (c.pc != 0x0022CC00u) [[unlikely]] return; }
L_0022CC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CC18; } }
L_0022CC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC10u);  if (depth < kMaxDepth) unit_004B(c, 84u, depth + 1u); else { c.pc = 0x0022D1D0u; return; } if (c.pc != 0x0022CC10u) [[unlikely]] return; }
L_0022CC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CC18; } }
L_0022CC18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022CC30:
    c.budget -= 2;
    { c.r[5].sd[0] = static_cast<std::int32_t>(0x04000000u);  goto L_0022CCC0; }
L_0022CC40:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022CC50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022CC98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022CC88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CCA8; } }
L_0022CC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC88u);  if (depth < kMaxDepth) unit_004B(c, 72u, depth + 1u); else { c.pc = 0x0022CC40u; return; } if (c.pc != 0x0022CC88u) [[unlikely]] return; }
L_0022CC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC90u);  if (depth < kMaxDepth) unit_004B(c, 71u, depth + 1u); else { c.pc = 0x0022CC30u; return; } if (c.pc != 0x0022CC90u) [[unlikely]] return; }
L_0022CC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CCA8; } }
L_0022CC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCA0u);  if (depth < kMaxDepth) unit_004B(c, 84u, depth + 1u); else { c.pc = 0x0022D1D0u; return; } if (c.pc != 0x0022CCA0u) [[unlikely]] return; }
L_0022CCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CCA8; } }
L_0022CCA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022CCC0:
    c.r[12].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 15600u);
    set32(c.r[9], 0u + 26064u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[10], c.r[10].w[0] - 27856u);
    set32(c.r[8], c.r[8].w[0] - 608u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    set32(c.r[11], c.r[11].w[0] << 9);
    set32(c.r[7], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.r[8].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[8].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0022CD38; } }
    c.r[8].d[0] = ld8((c.r[7].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0022CD38; } }
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022CFD8; } }
    c.budget -= 1;
L_0022CD38:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[8], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[8].d[0]; set32(c.r[8], 0u + 1u);  if (t) { goto L_0022CE90; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_0022CDE0; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0022CD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CF10; } }
L_0022CD60:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0022CDC8; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1628u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0022CDC8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);  if (t) { goto L_0022CDB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022CDB0; } }
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), 0u);  if (t) { goto L_0022CFD8; } }
    c.budget -= 1;
L_0022CDB0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0022CF10; } }
    c.budget -= 1;
L_0022CDC8:
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), 0u);  if (t) { goto L_0022CF10; } }
    c.budget -= 1;
L_0022CDE0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CE00; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1628u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0022CE10; } }
L_0022CE00:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0022CF10; } }
    c.budget -= 1;
L_0022CE10:
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[8].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[8].w[0];
    set32(c.r[5], 0u + 48u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 276u)));
    c.budget -= 11;
    { const bool t = c.r[8].d[0] != c.r[5].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_0022CE68; } }
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[5].d[0] = c.r[5].d[0] | 39322ull;
    c.f[0] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022CF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0022CF10; } }
    c.budget -= 1;
L_0022CE68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022CF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0022CF10; } }
L_0022CE90:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CEC8; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1628u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CEC8; } }
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0022CF10; } }
    c.budget -= 1;
L_0022CEC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 12u), c.f[1]);  if (t) { goto L_0022CF08; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { goto L_0022CF10; } }
L_0022CF08:
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_0022CF10:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1628u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[8].w[0] + 1628u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1628u)));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0022CF40; } }
    st8((c.r[7].w[0] + 1628u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022CF40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022CF70; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[5], c.r[4].w[0] + 16u);
    set32(c.r[3], c.r[4].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 6u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 10;
L_0022CF70:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 48u));
    set32(c.r[8], c.r[29].w[0]);
    set32(c.r[7], c.r[4].w[0] + 80u);
    set32(c.r[9], c.r[4].w[0] + 32u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 768u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[9]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[8].w[3]);
    vu::add(c.vu0, 15u, 6u, 9u, 10u);
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 26;
L_0022CFD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022CFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[16], 0u + 4u);
    set32(c.r[17], c.r[17].w[0] + 22624u);
    c.budget -= 8;
L_0022D000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D00Cu); set32(c.r[5], c.r[17].w[0] + 384u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x0022D00Cu) [[unlikely]] return; }
L_0022D00C:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] - 384u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D000u | kUnwind; return; } goto L_0022D000; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022D030:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 21088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[2].w[0] << 7);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D098; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022D088; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D090; } }
L_0022D088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022D148; } }
L_0022D090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022D148; } }
L_0022D098:
    set32(c.r[2], 0u + 1u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = 0u;
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = c.r[2].w[0];
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[8].w[0] + 28u), 0u);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    st32((c.r[8].w[0] + 24u), 0u);
    st32((c.r[8].w[0] + 20u), 0u);
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[8].w[0] + 16u), 0u);  if (t) { goto L_0022D0E0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0022D0FC; } }
L_0022D0E0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_0022D0FC:
    st32((c.r[8].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[8].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 17536u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 19;
L_0022D148:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022D150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 15616u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
L_0022D180:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0022D1A0; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8656u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1A0u); c.r[7].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_004B(c, 80u, depth + 1u); else { c.pc = 0x0022D030u; return; } if (c.pc != 0x0022D1A0u) [[unlikely]] return; }
L_0022D1A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D180u | kUnwind; return; } goto L_0022D180; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022D1D0:
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = 0ull & 255ull;
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022D1F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], 0u + 26064u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8656u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] - 12496u);
    set32(c.r[7], c.r[7].w[0] - 608u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] + 25920u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0] + 64u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 96u) & ~15u, c.vu0.vf[10]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[0]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[16].w[0] + 64u) & ~15u, c.vu0.vf[8]);
    st128((c.r[16].w[0] + 80u) & ~15u, c.vu0.vf[0]);
    c.budget -= 30;
    { const bool t = c.r[9].d[0] == 0ull; st128((c.r[16].w[0] + 96u) & ~15u, c.vu0.vf[10]);  if (t) { goto L_0022D398; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022D280; } }
    set32(c.r[9], c.r[9].w[0] + 48u);
    c.budget -= 2;
L_0022D280:
    set32(c.r[3], c.r[9].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022D398; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8656u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[9], c.r[9].w[0] + 21088u);
    c.r[5].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[8], c.r[5].w[0] - 1u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 7);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.budget -= 18;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0022D398; } }
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[10].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[8], c.r[10].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 816u);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);
    vu::sub(c.vu0, 15u, 7u, 6u, 5u);
    vu::move(c.vu0, 1u, 7u, 0u);
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022D378; } }
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D348u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x0022D348u) [[unlikely]] return; }
L_0022D348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D374u);  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x0022D374u) [[unlikely]] return; }
L_0022D374:
    c.budget -= 1;
L_0022D378:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 8;
L_0022D398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022D3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3D8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0022D3D8u) [[unlikely]] return; }
L_0022D3D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D428; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 12016u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 11200u);
    set32(c.r[4], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
L_0022D428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022D440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 12000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022D460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11984u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D48Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022D48Cu) [[unlikely]] return; }
L_0022D48C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022D4B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022D4D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022D4E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0022D4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D528u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0022D528u) [[unlikely]] return; }
L_0022D528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D588; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 11200u);
    set32(c.r[3], c.r[3].w[0] - 12016u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 304u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 312u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st16((c.r[2].w[0] + 314u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 22;
L_0022D588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022D5B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_0022D5D0; } }
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), 0u);  if (t) { goto L_0022D5D8; } }
    c.budget -= 1;
L_0022D5D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 2;
L_0022D5D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3EA0000u);
    st32((c.r[4].w[0] + 320u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    st32((c.r[4].w[0] + 328u), 0u);
    st32((c.r[4].w[0] + 332u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 324u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44000000u);
    st32((c.r[4].w[0] + 336u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 340u), 0u);
    st32((c.r[4].w[0] + 344u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F80000u);
    st32((c.r[4].w[0] + 360u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3F80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    st32((c.r[4].w[0] + 352u), 0u);
    st32((c.r[4].w[0] + 356u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 348u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43D70000u);
    st32((c.r[4].w[0] + 364u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3D70000u);
    st32((c.r[4].w[0] + 368u), 0u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 372u), c.r[3].w[0]);  c.pc = t; return; }
L_0022D650:
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);  if (t) { goto L_0022D690; } }
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_0022D690; } }
    st32((c.r[4].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_0022D690:
    set32(c.r[3], c.r[4].w[0] + 304u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43EA0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC3EA0000u);
    c.f[0] = c.r[5].w[0];
    c.budget -= 6;
L_0022D6A8:
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0] + 24u), c.f[1]);  if (t) { goto L_0022D6C8; } }
    st32((c.r[7].w[0] + 24u), c.r[6].w[0]);
    c.budget -= 2;
L_0022D6C8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D6A8u | kUnwind; return; } goto L_0022D6A8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC4000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[0] = c.r[5].w[0];
    c.budget -= 6;
L_0022D6F0:
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[8].w[0] + 32u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[8].w[0] + 32u), c.f[1]);  if (t) { goto L_0022D710; } }
    st32((c.r[8].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 2;
L_0022D710:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D6F0u | kUnwind; return; } goto L_0022D6F0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x443A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC43A0000u);
    c.f[0] = c.r[5].w[0];
    c.budget -= 6;
L_0022D738:
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[8].w[0] + 48u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[8].w[0] + 48u), c.f[1]);  if (t) { goto L_0022D758; } }
    st32((c.r[8].w[0] + 48u), c.r[6].w[0]);
    c.budget -= 2;
L_0022D758:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D738u | kUnwind; return; } goto L_0022D738; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44210000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC4210000u);
    c.r[6].d[0] = c.r[5].d[0] | 16384ull;
    c.r[5].d[0] = c.r[7].d[0] | 16384ull;
    c.f[0] = c.r[5].w[0];
    c.budget -= 8;
L_0022D788:
    c.f[2] = ld32((c.r[3].w[0] + 44u));
    c.f[1] = ld32((c.r[9].w[0] + 60u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[9].w[0] + 60u), c.f[1]);  if (t) { goto L_0022D7A8; } }
    st32((c.r[9].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 2;
L_0022D7A8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D788u | kUnwind; return; } goto L_0022D788; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022D7D0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 304u)));
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 200u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 208u), 0u);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D85Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022D85Cu) [[unlikely]] return; }
L_0022D85C:
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11937u));
    c.budget -= 20;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[16], c.r[29].w[0] + 264u);  if (t) { goto L_0022D8B8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022D8D4; } }
L_0022D8B8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022D8D4:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11936u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[22], c.r[29].w[0] + 268u);  if (t) { goto L_0022D8F4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022D910; } }
L_0022D8F4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022D910:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11935u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[23], c.r[29].w[0] + 272u);  if (t) { goto L_0022D930; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022D94C; } }
L_0022D930:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022D94C:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[30], c.r[29].w[0] + 276u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 5u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] + 5u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 21;
L_0022D9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022D9A8u) [[unlikely]] return; }
L_0022D9A8:
    c.f[13] = ld32((c.r[20].w[0] + 48u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9B8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022D9B8u) [[unlikely]] return; }
L_0022D9B8:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022D9C8u) [[unlikely]] return; }
L_0022D9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022D9D0u) [[unlikely]] return; }
L_0022D9D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9ECu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022D9ECu) [[unlikely]] return; }
L_0022D9EC:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022D9FCu) [[unlikely]] return; }
L_0022D9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA04u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022DA04u) [[unlikely]] return; }
L_0022DA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA0Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022DA0Cu) [[unlikely]] return; }
L_0022DA0C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D9A0u | kUnwind; return; } goto L_0022D9A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11934u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DA38; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DA50; } }
L_0022DA38:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DA50:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11933u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DA70; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DA88; } }
L_0022DA70:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DA88:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11932u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DAA8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DAC0; } }
L_0022DAA8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DAC0:
    st32((c.r[23].w[0]), c.f[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 6u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 6u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 18;
L_0022DB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022DB10u) [[unlikely]] return; }
L_0022DB10:
    c.f[13] = ld32((c.r[21].w[0] + 60u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB20u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022DB20u) [[unlikely]] return; }
L_0022DB20:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022DB30u) [[unlikely]] return; }
L_0022DB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022DB38u) [[unlikely]] return; }
L_0022DB38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB54u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022DB54u) [[unlikely]] return; }
L_0022DB54:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022DB64u) [[unlikely]] return; }
L_0022DB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022DB6Cu) [[unlikely]] return; }
L_0022DB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB74u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022DB74u) [[unlikely]] return; }
L_0022DB74:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DB08u | kUnwind; return; } goto L_0022DB08; } }
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11943u));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DBC8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DBE0; } }
L_0022DBC8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DBE0:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11942u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DC00; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DC18; } }
L_0022DC00:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DC18:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11941u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DC38; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DC50; } }
L_0022DC38:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DC50:
    st32((c.r[23].w[0]), c.f[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 18;
L_0022DC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022DCA0u) [[unlikely]] return; }
L_0022DCA0:
    c.f[13] = ld32((c.r[21].w[0] + 24u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCB0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022DCB0u) [[unlikely]] return; }
L_0022DCB0:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022DCC0u) [[unlikely]] return; }
L_0022DCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022DCC8u) [[unlikely]] return; }
L_0022DCC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCE4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022DCE4u) [[unlikely]] return; }
L_0022DCE4:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022DCF4u) [[unlikely]] return; }
L_0022DCF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCFCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022DCFCu) [[unlikely]] return; }
L_0022DCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD04u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022DD04u) [[unlikely]] return; }
L_0022DD04:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DC98u | kUnwind; return; } goto L_0022DC98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11940u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DD30; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DD48; } }
L_0022DD30:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DD48:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11939u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DD68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DD80; } }
L_0022DD68:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DD80:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11938u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DDA0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DDB8; } }
L_0022DDA0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DDB8:
    st32((c.r[23].w[0]), c.f[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 18;
L_0022DE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022DE08u) [[unlikely]] return; }
L_0022DE08:
    c.f[13] = ld32((c.r[21].w[0] + 32u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE18u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022DE18u) [[unlikely]] return; }
L_0022DE18:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE28u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022DE28u) [[unlikely]] return; }
L_0022DE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE30u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022DE30u) [[unlikely]] return; }
L_0022DE30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE4Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022DE4Cu) [[unlikely]] return; }
L_0022DE4C:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022DE5Cu) [[unlikely]] return; }
L_0022DE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE64u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022DE64u) [[unlikely]] return; }
L_0022DE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022DE6Cu) [[unlikely]] return; }
L_0022DE6C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DE00u | kUnwind; return; } goto L_0022DE00; } }
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11928u));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DEB0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DEC8; } }
L_0022DEB0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DEC8:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11927u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DEE8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DF00; } }
L_0022DEE8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DF00:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11926u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DF20; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DF38; } }
L_0022DF20:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DF38:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DF68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022DF68u) [[unlikely]] return; }
L_0022DF68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11931u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DF84; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DF9C; } }
L_0022DF84:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DF9C:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11930u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DFBC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022DFD4; } }
L_0022DFBC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022DFD4:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11929u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022DFF4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E00C; } }
L_0022DFF4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E00C:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 7u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E03Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022E03Cu) [[unlikely]] return; }
L_0022E03C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11922u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E058; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E070; } }
L_0022E058:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E070:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11921u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E090; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E0A8; } }
L_0022E090:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E0A8:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11920u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E0C8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E0E0; } }
L_0022E0C8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E0E0:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 10u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E110u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022E110u) [[unlikely]] return; }
L_0022E110:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11925u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E12C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E144; } }
L_0022E12C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E144:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11924u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E164; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E17C; } }
L_0022E164:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E17C:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11923u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E19C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E1B4; } }
L_0022E19C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E1B4:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 9u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E1E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022E1E4u) [[unlikely]] return; }
L_0022E1E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11946u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E200; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E218; } }
L_0022E200:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E218:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11945u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E238; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E250; } }
L_0022E238:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E250:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11944u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E270; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E288; } }
L_0022E270:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E288:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E2B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022E2B8u) [[unlikely]] return; }
L_0022E2B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11949u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E2D4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E2EC; } }
L_0022E2D4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E2EC:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11948u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E30C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E324; } }
L_0022E30C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E324:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11947u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E344; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E35C; } }
L_0022E344:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E35C:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E38Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022E38Cu) [[unlikely]] return; }
L_0022E38C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11952u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E3A8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E3C0; } }
L_0022E3A8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E3C0:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11951u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E3E0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E3F8; } }
L_0022E3E0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E3F8:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 11950u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022E418; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022E430; } }
L_0022E418:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022E430:
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E45Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022E45Cu) [[unlikely]] return; }
L_0022E45C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0022E490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E4C0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[6].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u - 65u);  if (t) { goto L_0022E4E0; } }
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0022E4E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E528; } }
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0022E538; } }
    c.budget -= 1;
L_0022E528:
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0022E538:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022E6A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 17520u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022E578:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022E6A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E6A0; } }
L_0022E598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 104u), c.f[1]);  if (t) { goto L_0022E6A0; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E6A0; } }
L_0022E5D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 629u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 629u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E6A0; } }
L_0022E5F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0022E6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E6A0; } }
    c.budget -= 1;
L_0022E610:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E61Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x0022E61Cu) [[unlikely]] return; }
L_0022E61C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_0022E6A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E6A0; } }
L_0022E640:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 628u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0022E6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E6A0; } }
L_0022E658:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 628u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0022E6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E6A0; } }
L_0022E670:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E67Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x0022E67Cu) [[unlikely]] return; }
L_0022E67C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_0022E6A0; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0022E6A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 628u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0022E6B8; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022E6B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022E6D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12064u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[17], c.r[3].w[0] + 19u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E708u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022E708u) [[unlikely]] return; }
L_0022E708:
    set32(c.r[7], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022E730; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022E838; } }
L_0022E730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E784u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022E784u) [[unlikely]] return; }
L_0022E784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E78Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022E78Cu) [[unlikely]] return; }
L_0022E78C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - 11854u);
    c.f[14] = 0u;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E7DCu); c.f[12] = fp::mul(c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022E7DCu) [[unlikely]] return; }
L_0022E7DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E7F8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0022E7F8u) [[unlikely]] return; }
L_0022E7F8:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E82Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022E82Cu) [[unlikely]] return; }
L_0022E82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E834u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022E834u) [[unlikely]] return; }
L_0022E834:
    c.budget -= 1;
L_0022E838:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[4].w[0] - 11904u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - 11902u);
    c.f[14] = 0u;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E888u); c.f[12] = fp::mul(c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022E888u) [[unlikely]] return; }
L_0022E888:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022E8B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022E8D0; } }
L_0022E8B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E8C4u); set32(c.r[4], c.r[2].w[0] + 4080u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022E8C4u) [[unlikely]] return; }
L_0022E8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E8E8; } }
    c.budget -= 1;
L_0022E8D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E8E4u); set32(c.r[4], c.r[2].w[0] + 4320u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022E8E4u) [[unlikely]] return; }
L_0022E8E4:
    c.budget -= 1;
L_0022E8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022E900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022E930; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022E938; } }
L_0022E930:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022E938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + 700u);
    set32(c.r[5], c.r[3].w[0] + 3600u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E960u); set32(c.r[6], c.r[3].w[0] + 3840u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0022E960u) [[unlikely]] return; }
L_0022E960:
    set32(c.r[7], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = c.r[5].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[6].w[0] - 11904u);
    set32(c.r[4], c.r[4].w[0] - 11902u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[7].w[0] + 604u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 604u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 604u)));
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022E9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022EC78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 17552u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022EA28:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA34u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x0022EA34u) [[unlikely]] return; }
L_0022EA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022EA70; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], 0u - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 630u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 630u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0022EC78; } }
    c.budget -= 1;
L_0022EA70:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA7Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x0022EA7Cu) [[unlikely]] return; }
L_0022EA7C:
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA8Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 59u, depth + 1u); else { c.pc = 0x003B0860u; return; } if (c.pc != 0x0022EA8Cu) [[unlikely]] return; }
L_0022EA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.f[0]);  if (t) { goto L_0022EC78; } }
    c.budget -= 1;
L_0022EA98:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0022EAC8; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EAC0u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0022EAC0u) [[unlikely]] return; }
L_0022EAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022EC78; } }
L_0022EAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EAD0u); set32(c.r[4], c.r[3].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x0022EAD0u) [[unlikely]] return; }
L_0022EAD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 304u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0022EC78; } }
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] - 11904u);
    set32(c.r[2], c.r[2].w[0] - 11902u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 604u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 604u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EB60u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0022EB60u) [[unlikely]] return; }
L_0022EB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022EC78; } }
L_0022EB68:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EB74u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x0022EB74u) [[unlikely]] return; }
L_0022EB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022EB90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022EC78; } }
L_0022EB90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EBACu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0022EBACu) [[unlikely]] return; }
L_0022EBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022EC78; } }
    c.budget -= 1;
L_0022EBB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EBC4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x0022EBC4u) [[unlikely]] return; }
L_0022EBC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022EBF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0022EC78; } }
    c.budget -= 1;
L_0022EBF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EBFCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x0022EBFCu) [[unlikely]] return; }
L_0022EBFC:
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EC0Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 59u, depth + 1u); else { c.pc = 0x003B0860u; return; } if (c.pc != 0x0022EC0Cu) [[unlikely]] return; }
L_0022EC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.f[0]);  if (t) { goto L_0022EC78; } }
    c.budget -= 1;
L_0022EC18:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 628u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0022EC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022EC78; } }
L_0022EC30:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 628u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022EC78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + 700u);
    set32(c.r[5], c.r[3].w[0] + 3600u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EC64u); set32(c.r[6], c.r[3].w[0] + 3840u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0022EC64u) [[unlikely]] return; }
L_0022EC64:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EC74u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0022EC74u) [[unlikely]] return; }
L_0022EC74:
    c.budget -= 1;
L_0022EC78:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 628u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0022EC90; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022EC90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022ECA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12064u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ECD4u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022ECD4u) [[unlikely]] return; }
L_0022ECD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ECDCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022ECDCu) [[unlikely]] return; }
L_0022ECDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ECE4u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0022ECE4u) [[unlikely]] return; }
L_0022ECE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ECF8u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0022ECF8u) [[unlikely]] return; }
L_0022ECF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED00u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022ED00u) [[unlikely]] return; }
L_0022ED00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022ED08u) [[unlikely]] return; }
L_0022ED08:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED14u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022ED14u) [[unlikely]] return; }
L_0022ED14:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED24u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022ED24u) [[unlikely]] return; }
L_0022ED24:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], c.r[16].w[0] + 19u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED54u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022ED54u) [[unlikely]] return; }
L_0022ED54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022ED5Cu) [[unlikely]] return; }
L_0022ED5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED64u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022ED64u) [[unlikely]] return; }
L_0022ED64:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - 11854u);
    c.f[14] = 0u;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EDB4u); c.f[12] = fp::mul(c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022EDB4u) [[unlikely]] return; }
L_0022EDB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EDC0u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022EDC0u) [[unlikely]] return; }
L_0022EDC0:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EDD0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022EDD0u) [[unlikely]] return; }
L_0022EDD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EDECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0022EDECu) [[unlikely]] return; }
L_0022EDEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[16], c.r[4].w[0] << 4);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE28u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022EE28u) [[unlikely]] return; }
L_0022EE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE30u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022EE30u) [[unlikely]] return; }
L_0022EE30:
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEA0u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022EEA0u) [[unlikely]] return; }
L_0022EEA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEBCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022EEBCu) [[unlikely]] return; }
L_0022EEBC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] - 11808u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEE4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0022EEE4u) [[unlikely]] return; }
L_0022EEE4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022EEF4u) [[unlikely]] return; }
L_0022EEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEFCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022EEFCu) [[unlikely]] return; }
L_0022EEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF04u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022EF04u) [[unlikely]] return; }
L_0022EF04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3320000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF20u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022EF20u) [[unlikely]] return; }
L_0022EF20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] - 11808u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF48u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0022EF48u) [[unlikely]] return; }
L_0022EF48:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022EF58u) [[unlikely]] return; }
L_0022EF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022EF60u) [[unlikely]] return; }
L_0022EF60:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF78u); set32(c.r[4], c.r[2].w[0] + 2880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022EF78u) [[unlikely]] return; }
L_0022EF78:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF90u); set32(c.r[4], c.r[2].w[0] + 3360u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022EF90u) [[unlikely]] return; }
L_0022EF90:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFA8u); set32(c.r[4], c.r[2].w[0] + 2640u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022EFA8u) [[unlikely]] return; }
L_0022EFA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFC0u); set32(c.r[4], c.r[2].w[0] + 3120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022EFC0u) [[unlikely]] return; }
L_0022EFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022EFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F008u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0022F008u) [[unlikely]] return; }
L_0022F008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F058; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 11568u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] - 3984u);
    set32(c.r[4], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
L_0022F058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022F070:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022F090:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11504u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022F0B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022F0D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022F0E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0022F0F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022F100:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_0022F128; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022F130; } }
L_0022F128:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022F130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022F140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022F154u) [[unlikely]] return; }
L_0022F154:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0022F198; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F178u); set32(c.r[4], c.r[2].w[0] + 1920u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F178u) [[unlikely]] return; }
L_0022F178:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F190u); set32(c.r[4], c.r[2].w[0] + 2160u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F190u) [[unlikely]] return; }
L_0022F190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F1D8; } }
L_0022F198:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F1D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F1BCu); set32(c.r[4], c.r[2].w[0] + 960u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F1BCu) [[unlikely]] return; }
L_0022F1BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F1D4u); set32(c.r[4], c.r[2].w[0] + 1200u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F1D4u) [[unlikely]] return; }
L_0022F1D4:
    c.budget -= 1;
L_0022F1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022F1F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022F200:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_0022F228; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022F230; } }
L_0022F228:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022F230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022F240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F260u); c.f[20] = ld32((c.r[4].w[0] + 104u));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022F260u) [[unlikely]] return; }
L_0022F260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F268u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F268u) [[unlikely]] return; }
L_0022F268:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F298; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F284u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F284u) [[unlikely]] return; }
L_0022F284:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F294u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F294u) [[unlikely]] return; }
L_0022F294:
    c.budget -= 1;
L_0022F298:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2B0u); set32(c.r[4], c.r[2].w[0] + 1680u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F2B0u) [[unlikely]] return; }
L_0022F2B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2C8u); set32(c.r[4], c.r[2].w[0] + 4320u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F2C8u) [[unlikely]] return; }
L_0022F2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022F2D0u) [[unlikely]] return; }
L_0022F2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F2D8u) [[unlikely]] return; }
L_0022F2D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F308; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2F8u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F2F8u) [[unlikely]] return; }
L_0022F2F8:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F308u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F308u) [[unlikely]] return; }
L_0022F308:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F320u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F320u) [[unlikely]] return; }
L_0022F320:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F338u); set32(c.r[4], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F338u) [[unlikely]] return; }
L_0022F338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F340u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022F340u) [[unlikely]] return; }
L_0022F340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F348u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022F348u) [[unlikely]] return; }
L_0022F348:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F35Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F35Cu) [[unlikely]] return; }
L_0022F35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F364u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F364u) [[unlikely]] return; }
L_0022F364:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F398; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F384u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F384u) [[unlikely]] return; }
L_0022F384:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F394u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F394u) [[unlikely]] return; }
L_0022F394:
    c.budget -= 1;
L_0022F398:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3B0u); set32(c.r[4], c.r[2].w[0] + 9840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F3B0u) [[unlikely]] return; }
L_0022F3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022F3B8u) [[unlikely]] return; }
L_0022F3B8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3CCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F3CCu) [[unlikely]] return; }
L_0022F3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F3D4u) [[unlikely]] return; }
L_0022F3D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F408; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3F4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F3F4u) [[unlikely]] return; }
L_0022F3F4:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F404u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F404u) [[unlikely]] return; }
L_0022F404:
    c.budget -= 1;
L_0022F408:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F420u); set32(c.r[4], c.r[2].w[0] + 9840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F420u) [[unlikely]] return; }
L_0022F420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F428u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022F428u) [[unlikely]] return; }
L_0022F428:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F43Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F43Cu) [[unlikely]] return; }
L_0022F43C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F470; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F45Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F45Cu) [[unlikely]] return; }
L_0022F45C:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F46Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F46Cu) [[unlikely]] return; }
L_0022F46C:
    c.budget -= 1;
L_0022F470:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F488u); set32(c.r[4], c.r[2].w[0] + 9840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F488u) [[unlikely]] return; }
L_0022F488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F490u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022F490u) [[unlikely]] return; }
L_0022F490:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4A4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F4A4u) [[unlikely]] return; }
L_0022F4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F4ACu) [[unlikely]] return; }
L_0022F4AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F4E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4CCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F4CCu) [[unlikely]] return; }
L_0022F4CC:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4DCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F4DCu) [[unlikely]] return; }
L_0022F4DC:
    c.budget -= 1;
L_0022F4E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4F8u); set32(c.r[4], c.r[2].w[0] + 10560u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F4F8u) [[unlikely]] return; }
L_0022F4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F500u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022F500u) [[unlikely]] return; }
L_0022F500:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F514u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F514u) [[unlikely]] return; }
L_0022F514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F51Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F51Cu) [[unlikely]] return; }
L_0022F51C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F550; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F53Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F53Cu) [[unlikely]] return; }
L_0022F53C:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F54Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F54Cu) [[unlikely]] return; }
L_0022F54C:
    c.budget -= 1;
L_0022F550:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F568u); set32(c.r[4], c.r[2].w[0] + 10560u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F568u) [[unlikely]] return; }
L_0022F568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F570u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022F570u) [[unlikely]] return; }
L_0022F570:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F584u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F584u) [[unlikely]] return; }
L_0022F584:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F5B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5A4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F5A4u) [[unlikely]] return; }
L_0022F5A4:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5B4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F5B4u) [[unlikely]] return; }
L_0022F5B4:
    c.budget -= 1;
L_0022F5B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5D0u); set32(c.r[4], c.r[2].w[0] + 10560u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F5D0u) [[unlikely]] return; }
L_0022F5D0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 11416u);
    set32(c.r[16], c.r[16].w[0] - 11728u);
    c.budget -= 6;
L_0022F5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022F5F0u) [[unlikely]] return; }
L_0022F5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F5F8u) [[unlikely]] return; }
L_0022F5F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0022F628; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F614u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F614u) [[unlikely]] return; }
L_0022F614:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F624u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F624u) [[unlikely]] return; }
L_0022F624:
    c.budget -= 1;
L_0022F628:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F650u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F650u) [[unlikely]] return; }
L_0022F650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F658u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022F658u) [[unlikely]] return; }
L_0022F658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F660u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0022F660u) [[unlikely]] return; }
L_0022F660:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0022F690; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 13u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F688u); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F688u) [[unlikely]] return; }
L_0022F688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F6A8; } }
L_0022F690:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 13u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F6A8u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022F6A8u) [[unlikely]] return; }
L_0022F6A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F5E8u | kUnwind; return; } goto L_0022F5E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022F6E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { set32(c.r[4], c.r[4].w[0] + 368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_0022F700:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_0022F728; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022F730; } }
L_0022F728:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022F730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022F740:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.f[1] = c.r[5].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[23], c.r[23].w[0] - 8624u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[4].w[0] + 368u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 200u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 204u);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    set32(c.r[2], 0u + 4u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    st32((c.r[21].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[30].d[0] = c.r[3].d[0] << 56;
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F7CCu); c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022F7CCu) [[unlikely]] return; }
L_0022F7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F7D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F7D4u) [[unlikely]] return; }
L_0022F7D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F800; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F7F0u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F7F0u) [[unlikely]] return; }
L_0022F7F0:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F800u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F800u) [[unlikely]] return; }
L_0022F800:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 212u);
    c.budget -= 4;
L_0022F810:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 1u)));
    c.r[3].d[0] = c.r[30].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0022F830; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
L_0022F830:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_0022F848; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_0022F848:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0022F878; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022F894; } }
L_0022F878:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022F894:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022F8B0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022F8C8; } }
L_0022F8B0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022F8C8:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022F8E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022F8FC; } }
L_0022F8E4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022F8FC:
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[3], c.r[19].w[0] + 2160u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F924u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022F924u) [[unlikely]] return; }
L_0022F924:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F810u | kUnwind; return; } goto L_0022F810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F93Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022F93Cu) [[unlikely]] return; }
L_0022F93C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0022F954; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022F954:
    c.r[30].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F964u); c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022F964u) [[unlikely]] return; }
L_0022F964:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F998; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F984u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022F984u) [[unlikely]] return; }
L_0022F984:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F994u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022F994u) [[unlikely]] return; }
L_0022F994:
    c.budget -= 1;
L_0022F998:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022F9A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.r[3].d[0] = c.r[30].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0022F9C0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
L_0022F9C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_0022F9D8; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_0022F9D8:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0022FA08; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FA24; } }
L_0022FA08:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022FA24:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022FA40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FA58; } }
L_0022FA40:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022FA58:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022FA74; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FA8C; } }
L_0022FA74:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022FA8C:
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[3], c.r[20].w[0] + 5040u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAB4u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022FAB4u) [[unlikely]] return; }
L_0022FAB4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F9A0u | kUnwind; return; } goto L_0022F9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FACCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022FACCu) [[unlikely]] return; }
L_0022FACC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0022FAE4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022FAE4:
    c.r[30].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAF4u); c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022FAF4u) [[unlikely]] return; }
L_0022FAF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022FB28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB14u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022FB14u) [[unlikely]] return; }
L_0022FB14:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB24u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022FB24u) [[unlikely]] return; }
L_0022FB24:
    c.budget -= 1;
L_0022FB28:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022FB30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 2u)));
    c.r[3].d[0] = c.r[30].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0022FB50; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
L_0022FB50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_0022FB68; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_0022FB68:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0022FB98; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FBB4; } }
L_0022FB98:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022FBB4:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022FBD0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FBE8; } }
L_0022FBD0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022FBE8:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022FC04; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FC1C; } }
L_0022FC04:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022FC1C:
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[3], c.r[20].w[0] + 6480u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC44u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022FC44u) [[unlikely]] return; }
L_0022FC44:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FB30u | kUnwind; return; } goto L_0022FB30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022FC5Cu) [[unlikely]] return; }
L_0022FC5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0022FC74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022FC74:
    c.r[30].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC84u); c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022FC84u) [[unlikely]] return; }
L_0022FC84:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022FCB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FCA4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022FCA4u) [[unlikely]] return; }
L_0022FCA4:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FCB4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022FCB4u) [[unlikely]] return; }
L_0022FCB4:
    c.budget -= 1;
L_0022FCB8:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022FCC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 20u)));
    c.r[3].d[0] = c.r[30].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0022FCE0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
L_0022FCE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_0022FCF8; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_0022FCF8:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0022FD28; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FD44; } }
L_0022FD28:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022FD44:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022FD60; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FD78; } }
L_0022FD60:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022FD78:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022FD94; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FDAC; } }
L_0022FD94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022FDAC:
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[3], c.r[20].w[0] + 7920u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDD4u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022FDD4u) [[unlikely]] return; }
L_0022FDD4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FCC0u | kUnwind; return; } goto L_0022FCC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022FDECu) [[unlikely]] return; }
L_0022FDEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022FE04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022FE04:
    c.r[30].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE14u); c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022FE14u) [[unlikely]] return; }
L_0022FE14:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022FE48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE34u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022FE34u) [[unlikely]] return; }
L_0022FE34:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE44u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022FE44u) [[unlikely]] return; }
L_0022FE44:
    c.budget -= 1;
L_0022FE48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE5Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022FE5Cu) [[unlikely]] return; }
L_0022FE5C:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022FE68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 21u)));
    c.r[3].d[0] = c.r[30].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0022FE88; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
L_0022FE88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_0022FEA0; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_0022FEA0:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0022FED0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FEEC; } }
L_0022FED0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022FEEC:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022FF08; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FF20; } }
L_0022FF08:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022FF20:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0022FF3C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022FF54; } }
L_0022FF3C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0022FF54:
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[3], c.r[20].w[0] + 7920u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
L_0022FF68:
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF7Cu); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022FF7Cu) [[unlikely]] return; }
L_0022FF7C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 2;
L_0022FF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FE68u | kUnwind; return; } goto L_0022FE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF94u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022FF94u) [[unlikely]] return; }
L_0022FF94:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0022FFAC; } }
L_0022FFA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022FFAC:
    c.r[30].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFBCu); c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022FFBCu) [[unlikely]] return; }
L_0022FFBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022FFF0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFDCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022FFDCu) [[unlikely]] return; }
L_0022FFDC:
    c.f[12] = 0u;
    c.budget -= 1;
L_0022FFE0:
    c.f[13] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFECu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022FFECu) [[unlikely]] return; }
    goto L_0022FFEC;
L_0022FFE8:
    c.f[14] = c.f[12];
    c.budget -= 1;
L_0022FFEC:
    c.budget -= 1;
L_0022FFF0:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022FFF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 3u)));
    c.r[3].d[0] = c.r[30].d[0] << 56;
    c.budget -= 2;
    [[clang::musttail]] return unit_004C(c, 1u, depth);
}

}
