#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0069[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 6, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115,
    0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0,
    198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0,
    0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0,
    0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0069(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A4000;
    case 2u: goto L_002A401C;
    case 3u: goto L_002A4028;
    case 4u: goto L_002A40DC;
    case 5u: goto L_002A40E0;
    case 6u: goto L_002A40E8;
    case 7u: goto L_002A40F8;
    case 8u: goto L_002A4120;
    case 9u: goto L_002A4164;
    case 10u: goto L_002A4188;
    case 11u: goto L_002A4198;
    case 12u: goto L_002A41B4;
    case 13u: goto L_002A41E0;
    case 14u: goto L_002A4210;
    case 15u: goto L_002A426C;
    case 16u: goto L_002A42AC;
    case 17u: goto L_002A42CC;
    case 18u: goto L_002A4310;
    case 19u: goto L_002A4370;
    case 20u: goto L_002A4398;
    case 21u: goto L_002A43A8;
    case 22u: goto L_002A43C4;
    case 23u: goto L_002A43F4;
    case 24u: goto L_002A4408;
    case 25u: goto L_002A4440;
    case 26u: goto L_002A449C;
    case 27u: goto L_002A44B8;
    case 28u: goto L_002A44E0;
    case 29u: goto L_002A44F0;
    case 30u: goto L_002A4508;
    case 31u: goto L_002A4540;
    case 32u: goto L_002A45B4;
    case 33u: goto L_002A45E0;
    case 34u: goto L_002A45F0;
    case 35u: goto L_002A45FC;
    case 36u: goto L_002A461C;
    case 37u: goto L_002A4648;
    case 38u: goto L_002A4650;
    case 39u: goto L_002A470C;
    case 40u: goto L_002A4750;
    case 41u: goto L_002A4E00;
    case 42u: goto L_002A4E10;
    case 43u: goto L_002A4E74;
    case 44u: goto L_002A4EC4;
    case 45u: goto L_002A4EF8;
    case 46u: goto L_002A4F28;
    case 47u: goto L_002A4F30;
    case 48u: goto L_002A4F50;
    case 49u: goto L_002A4F58;
    case 50u: goto L_002A4F70;
    case 51u: goto L_002A4FA0;
    case 52u: goto L_002A4FCC;
    case 53u: goto L_002A4FF0;
    case 54u: goto L_002A5030;
    case 55u: goto L_002A5058;
    case 56u: goto L_002A5080;
    case 57u: goto L_002A50CC;
    case 58u: goto L_002A5108;
    case 59u: goto L_002A5130;
    case 60u: goto L_002A5160;
    case 61u: goto L_002A518C;
    case 62u: goto L_002A51B0;
    case 63u: goto L_002A51D8;
    case 64u: goto L_002A51FC;
    case 65u: goto L_002A5204;
    case 66u: goto L_002A5228;
    case 67u: goto L_002A5240;
    case 68u: goto L_002A5270;
    case 69u: goto L_002A5278;
    case 70u: goto L_002A529C;
    case 71u: goto L_002A52A4;
    case 72u: goto L_002A52D8;
    case 73u: goto L_002A5300;
    case 74u: goto L_002A5360;
    case 75u: goto L_002A538C;
    case 76u: goto L_002A539C;
    case 77u: goto L_002A53C0;
    case 78u: goto L_002A54F0;
    case 79u: goto L_002A551C;
    case 80u: goto L_002A552C;
    case 81u: goto L_002A5560;
    case 82u: goto L_002A5570;
    case 83u: goto L_002A55C0;
    case 84u: goto L_002A5610;
    case 85u: goto L_002A5630;
    case 86u: goto L_002A5640;
    case 87u: goto L_002A5700;
    case 88u: goto L_002A571C;
    case 89u: goto L_002A572C;
    case 90u: goto L_002A574C;
    case 91u: goto L_002A5778;
    case 92u: goto L_002A57A4;
    case 93u: goto L_002A57B8;
    case 94u: goto L_002A5804;
    case 95u: goto L_002A5810;
    case 96u: goto L_002A58C8;
    case 97u: goto L_002A58F8;
    case 98u: goto L_002A5904;
    case 99u: goto L_002A5920;
    case 100u: goto L_002A5948;
    case 101u: goto L_002A5954;
    case 102u: goto L_002A5960;
    case 103u: goto L_002A5998;
    case 104u: goto L_002A59A4;
    case 105u: goto L_002A59BC;
    case 106u: goto L_002A5A54;
    case 107u: goto L_002A5A64;
    case 108u: goto L_002A5A74;
    case 109u: goto L_002A5AB0;
    case 110u: goto L_002A5AC4;
    case 111u: goto L_002A5AD0;
    case 112u: goto L_002A5ADC;
    case 113u: goto L_002A5B00;
    case 114u: goto L_002A5B70;
    case 115u: goto L_002A5B7C;
    case 116u: goto L_002A5B94;
    case 117u: goto L_002A5BA0;
    case 118u: goto L_002A5BAC;
    case 119u: goto L_002A5BC8;
    case 120u: goto L_002A5BD8;
    case 121u: goto L_002A5C50;
    case 122u: goto L_002A5C60;
    case 123u: goto L_002A5C78;
    case 124u: goto L_002A5C84;
    case 125u: goto L_002A5D14;
    case 126u: goto L_002A5D50;
    case 127u: goto L_002A5DE8;
    case 128u: goto L_002A5E2C;
    case 129u: goto L_002A5E58;
    case 130u: goto L_002A5EA0;
    case 131u: goto L_002A5EC0;
    case 132u: goto L_002A5F58;
    case 133u: goto L_002A5F9C;
    case 134u: goto L_002A5FC8;
    case 135u: goto L_002A6010;
    case 136u: goto L_002A6030;
    case 137u: goto L_002A6158;
    case 138u: goto L_002A618C;
    case 139u: goto L_002A619C;
    case 140u: goto L_002A61AC;
    case 141u: goto L_002A61C8;
    case 142u: goto L_002A61F4;
    case 143u: goto L_002A6218;
    case 144u: goto L_002A6248;
    case 145u: goto L_002A6258;
    case 146u: goto L_002A62A0;
    case 147u: goto L_002A6360;
    case 148u: goto L_002A6398;
    case 149u: goto L_002A63A8;
    case 150u: goto L_002A63B8;
    case 151u: goto L_002A63D4;
    case 152u: goto L_002A6400;
    case 153u: goto L_002A6424;
    case 154u: goto L_002A6454;
    case 155u: goto L_002A64A0;
    case 156u: goto L_002A6544;
    case 157u: goto L_002A6558;
    case 158u: goto L_002A6690;
    case 159u: goto L_002A66F0;
    case 160u: goto L_002A66FC;
    case 161u: goto L_002A673C;
    case 162u: goto L_002A6748;
    case 163u: goto L_002A67F8;
    case 164u: goto L_002A6818;
    case 165u: goto L_002A6984;
    case 166u: goto L_002A698C;
    case 167u: goto L_002A69C0;
    case 168u: goto L_002A6A38;
    case 169u: goto L_002A6AA8;
    case 170u: goto L_002A6AE0;
    case 171u: goto L_002A6B20;
    case 172u: goto L_002A6B88;
    case 173u: goto L_002A6BD8;
    case 174u: goto L_002A6C58;
    case 175u: goto L_002A6CE0;
    case 176u: goto L_002A6D30;
    case 177u: goto L_002A6DB8;
    case 178u: goto L_002A6E08;
    case 179u: goto L_002A6E90;
    case 180u: goto L_002A7028;
    case 181u: goto L_002A7088;
    case 182u: goto L_002A7110;
    case 183u: goto L_002A71C0;
    case 184u: goto L_002A7208;
    case 185u: goto L_002A7290;
    case 186u: goto L_002A73C8;
    case 187u: goto L_002A7428;
    case 188u: goto L_002A74B0;
    case 189u: goto L_002A7558;
    case 190u: goto L_002A7560;
    case 191u: goto L_002A75C8;
    case 192u: goto L_002A75D0;
    case 193u: goto L_002A75D8;
    case 194u: goto L_002A75E0;
    case 195u: goto L_002A75E8;
    case 196u: goto L_002A75F0;
    case 197u: goto L_002A75F8;
    case 198u: goto L_002A7600;
    case 199u: goto L_002A7608;
    case 200u: goto L_002A7610;
    case 201u: goto L_002A7618;
    case 202u: goto L_002A7620;
    case 203u: goto L_002A7628;
    case 204u: goto L_002A7630;
    case 205u: goto L_002A7640;
    case 206u: goto L_002A7678;
    case 207u: goto L_002A76D0;
    case 208u: goto L_002A76EC;
    case 209u: goto L_002A7708;
    case 210u: goto L_002A7724;
    case 211u: goto L_002A7738;
    case 212u: goto L_002A7748;
    case 213u: goto L_002A775C;
    case 214u: goto L_002A7768;
    case 215u: goto L_002A7770;
    case 216u: goto L_002A7798;
    case 217u: goto L_002A77A0;
    case 218u: goto L_002A77B0;
    case 219u: goto L_002A77C0;
    case 220u: goto L_002A77D8;
    case 221u: goto L_002A77E8;
    case 222u: goto L_002A77F0;
    case 223u: goto L_002A7800;
    case 224u: goto L_002A7810;
    case 225u: goto L_002A7858;
    case 226u: goto L_002A78B4;
    case 227u: goto L_002A78C4;
    case 228u: goto L_002A78CC;
    case 229u: goto L_002A78DC;
    case 230u: goto L_002A78E4;
    case 231u: goto L_002A78F4;
    case 232u: goto L_002A7904;
    case 233u: goto L_002A7918;
    case 234u: goto L_002A79A0;
    case 235u: goto L_002A79AC;
    case 236u: goto L_002A79E0;
    case 237u: goto L_002A7B18;
    case 238u: goto L_002A7B2C;
    case 239u: goto L_002A7B34;
    case 240u: goto L_002A7B3C;
    case 241u: goto L_002A7B44;
    case 242u: goto L_002A7B54;
    case 243u: goto L_002A7B64;
    case 244u: goto L_002A7B78;
    case 245u: goto L_002A7B88;
    case 246u: goto L_002A7B90;
    case 247u: goto L_002A7BA0;
    case 248u: goto L_002A7BB0;
    case 249u: goto L_002A7BF8;
    case 250u: goto L_002A7C60;
    case 251u: goto L_002A7C70;
    case 252u: goto L_002A7C84;
    case 253u: goto L_002A7C8C;
    case 254u: goto L_002A7C94;
    case 255u: goto L_002A7C9C;
    case 256u: goto L_002A7CAC;
    case 257u: goto L_002A7CB4;
    case 258u: goto L_002A7CC4;
    case 259u: goto L_002A7CD4;
    case 260u: goto L_002A7CE0;
    case 261u: goto L_002A7D64;
    case 262u: goto L_002A7DA0;
    case 263u: goto L_002A7DD4;
    case 264u: goto L_002A7DE8;
    case 265u: goto L_002A7E28;
    case 266u: goto L_002A7E68;
    case 267u: goto L_002A7F24;
    case 268u: goto L_002A7F30;
    case 269u: goto L_002A7F3C;
    case 270u: goto L_002A7F80;
    case 271u: goto L_002A7FC8;
    case 272u: goto L_002A7FD4;
    case 273u: goto L_002A7FE0;
    default: bad_entry(c, 0x002A4000u); return;
    }
L_002A4000:
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 816u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A401Cu); c.r[8].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x002A5080u; return; } if (c.pc != 0x002A401Cu) [[unlikely]] return; }
L_002A401C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A40E0; } }
    c.budget -= 1;
L_002A4028:
    set32(c.r[2], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[29].w[0] + 832u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[5].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 844u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 840u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 840u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A4070; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 840u), c.f[0]);  if (t) { goto L_002A40A0; } }
L_002A4070:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 840u), c.f[0]);  if (t) { goto L_002A40A0; } }
L_002A4088:
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A40A0; } }
    st32((c.r[29].w[0] + 840u), c.f[0]);
    c.budget -= 2;
L_002A40A0:
    set32(c.r[2], c.r[29].w[0] + 832u);
    set32(c.r[3], c.r[29].w[0] + 800u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 4);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 816u);
    set32(c.r[2], ld32((c.r[29].w[0] + 808u)));
    st32((c.r[19].w[0] + 576u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.r[8].d[0] = c.r[2].d[0] << 56;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40DCu); c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (depth < kMaxDepth) unit_0069(c, 53u, depth + 1u); else { c.pc = 0x002A4FF0u; return; } if (c.pc != 0x002A40DCu) [[unlikely]] return; }
L_002A40DC:
    c.budget -= 1;
L_002A40E0:
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 2;
L_002A40E8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3910u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 150u, depth); } }
    st32((c.r[28].w[0] - 23504u), 0u);
    c.budget -= 2;
L_002A40F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 848u);  c.pc = t; return; }
L_002A4120:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23512u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_002A42E8; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    st32((c.r[29].w[0] + 420u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4164u); st32((c.r[29].w[0] + 416u), 0u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A4164u) [[unlikely]] return; }
L_002A4164:
    set32(c.r[18], ld32((c.r[28].w[0] - 23512u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[22], ld32((c.r[28].w[0] - 23508u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 15664u);  if (t) { goto L_002A42E0; } }
    set32(c.r[17], c.r[29].w[0] + 156u);
    set32(c.r[16], c.r[29].w[0] + 152u);
    set32(c.r[21], c.r[29].w[0] + 148u);
    c.budget -= 4;
L_002A4188:
    set32(c.r[22], c.r[22].w[0] - 4u);
    set32(c.r[19], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4198u); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0050(c, 395u, depth + 1u); else { c.pc = 0x002436F0u; return; } if (c.pc != 0x002A4198u) [[unlikely]] return; }
L_002A4198:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[8], c.r[20].w[0] + 4544u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41B4u); set32(c.r[9], c.r[20].w[0] + 4048u);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00125A80u; return; } if (c.pc != 0x002A41B4u) [[unlikely]] return; }
L_002A41B4:
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[19].w[0] + 272u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[19].w[0] + 336u);
    set32(c.r[6], c.r[19].w[0] + 400u);
    set32(c.r[7], c.r[19].w[0] + 464u);
    set32(c.r[8], c.r[19].w[0] + 208u);
    set32(c.r[9], c.r[29].w[0] + 352u);
    set32(c.r[10], c.r[29].w[0] + 288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41E0u); set32(c.r[11], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 134u, depth + 1u); else { c.pc = 0x00125BB0u; return; } if (c.pc != 0x002A41E0u) [[unlikely]] return; }
L_002A41E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A41F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4218; } }
L_002A41F8:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4210u); c.r[8].d[0] = 0ull | 32774ull;  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x002A5080u; return; } if (c.pc != 0x002A4210u) [[unlikely]] return; }
L_002A4210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A42D0; } }
L_002A4218:
    set32(c.r[2], 0u - 128u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4278; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[19].w[0] + 16u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[11], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A426Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0050(c, 287u, depth + 1u); else { c.pc = 0x00242570u; return; } if (c.pc != 0x002A426Cu) [[unlikely]] return; }
L_002A426C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A42D0; } }
    c.budget -= 1;
L_002A4278:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 98u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A42B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 416u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42ACu); c.r[8].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x002A5080u; return; } if (c.pc != 0x002A42ACu) [[unlikely]] return; }
L_002A42AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A42D0; } }
    c.budget -= 1;
L_002A42B8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42CCu); set32(c.r[7], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x002A5080u; return; } if (c.pc != 0x002A42CCu) [[unlikely]] return; }
L_002A42CC:
    c.budget -= 1;
L_002A42D0:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4188u | kUnwind; return; } goto L_002A4188; } }
    c.budget -= 1;
L_002A42E0:
    st32((c.r[28].w[0] - 23512u), 0u);
    c.budget -= 2;
L_002A42E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_002A4310:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 3152u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4420; } }
    set32(c.r[4], 0u + 21728u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 1360u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4370u);  if (depth < kMaxDepth) unit_000A(c, 217u, depth + 1u); else { c.pc = 0x0012B470u; return; } if (c.pc != 0x002A4370u) [[unlikely]] return; }
L_002A4370:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 3216u);
    set32(c.r[4], c.r[4].w[0] << 5);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002A4418; } }
L_002A4398:
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43A8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x002A43A8u) [[unlikely]] return; }
L_002A43A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A43D0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43C4u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0069(c, 50u, depth + 1u); else { c.pc = 0x002A4F70u; return; } if (c.pc != 0x002A43C4u) [[unlikely]] return; }
L_002A43C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4408; } }
    c.budget -= 1;
L_002A43D0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4400; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43F4u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0069(c, 59u, depth + 1u); else { c.pc = 0x002A5130u; return; } if (c.pc != 0x002A43F4u) [[unlikely]] return; }
L_002A43F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4408; } }
    c.budget -= 1;
L_002A4400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4408u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));  if (depth < kMaxDepth) unit_0069(c, 84u, depth + 1u); else { c.pc = 0x002A5610u; return; } if (c.pc != 0x002A4408u) [[unlikely]] return; }
L_002A4408:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4398u | kUnwind; return; } goto L_002A4398; } }
    c.budget -= 1;
L_002A4418:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 2;
L_002A4420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A4440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 2096u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 21728u);  if (t) { goto L_002A4520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A44A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A449Cu);  if (depth < kMaxDepth) unit_000A(c, 217u, depth + 1u); else { c.pc = 0x0012B470u; return; } if (c.pc != 0x002A449Cu) [[unlikely]] return; }
L_002A449C:
    c.budget -= 1;
L_002A44A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44B8u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A44B8u) [[unlikely]] return; }
L_002A44B8:
    set32(c.r[4], c.r[17].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - 2032u);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002A4518; } }
L_002A44E0:
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44F0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x002A44F0u) [[unlikely]] return; }
L_002A44F0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4508u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x002A5080u; return; } if (c.pc != 0x002A4508u) [[unlikely]] return; }
L_002A4508:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A44E0u | kUnwind; return; } goto L_002A44E0; } }
    c.budget -= 1;
L_002A4518:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 2;
L_002A4520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A4540:
    set32(c.r[29], c.r[29].w[0] - 528u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 3152u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);  if (t) { goto L_002A4728; } }
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10517u)));
    set32(c.r[3], c.r[21].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] - 7712u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[20], c.r[20].w[0] + 15664u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45B4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 222u, depth + 1u); else { c.pc = 0x0012B530u; return; } if (c.pc != 0x002A45B4u) [[unlikely]] return; }
L_002A45B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[4], c.r[21].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] - 3120u);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 3152u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_002A4710; } }
    c.budget -= 1;
L_002A45E0:
    set32(c.r[19], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45F0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0050(c, 395u, depth + 1u); else { c.pc = 0x002436F0u; return; } if (c.pc != 0x002A45F0u) [[unlikely]] return; }
L_002A45F0:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45FCu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0050(c, 184u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002A45FCu) [[unlikely]] return; }
L_002A45FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[8], c.r[20].w[0] + 4544u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A461Cu); set32(c.r[9], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00125A80u; return; } if (c.pc != 0x002A461Cu) [[unlikely]] return; }
L_002A461C:
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[19].w[0] + 272u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[19].w[0] + 336u);
    set32(c.r[6], c.r[19].w[0] + 400u);
    set32(c.r[7], c.r[19].w[0] + 464u);
    set32(c.r[8], c.r[19].w[0] + 208u);
    set32(c.r[9], c.r[29].w[0] + 320u);
    set32(c.r[10], c.r[29].w[0] + 256u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4648u); set32(c.r[11], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 134u, depth + 1u); else { c.pc = 0x00125BB0u; return; } if (c.pc != 0x002A4648u) [[unlikely]] return; }
L_002A4648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x002A4650u) [[unlikely]] return; }
L_002A4650:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10528u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[29].w[0] + 512u);
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[2].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 524u));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 520u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 520u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A46B0; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 520u), c.f[0]);  if (t) { goto L_002A46E0; } }
L_002A46B0:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A46C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 520u), c.f[0]);  if (t) { goto L_002A46E0; } }
L_002A46C8:
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A46E0; } }
    st32((c.r[29].w[0] + 520u), c.f[0]);
    c.budget -= 2;
L_002A46E0:
    set32(c.r[2], c.r[29].w[0] + 512u);
    set32(c.r[3], c.r[29].w[0] + 496u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 4);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], ld32((c.r[29].w[0] + 504u)));
    st32((c.r[19].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A470Cu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0069(c, 50u, depth + 1u); else { c.pc = 0x002A4F70u; return; } if (c.pc != 0x002A470Cu) [[unlikely]] return; }
L_002A470C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_002A4710:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A45E0u | kUnwind; return; } goto L_002A45E0; } }
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 3152u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 4;
L_002A4728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_002A4750:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 26u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 81u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4900; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[3], 0u + 115u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4DF8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4DF8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[3], 0u + 107u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4DF8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 83u));
    set32(c.r[7], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A47B0; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_002A4830; } }
L_002A47B0:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002A47D0; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002A4830; } }
    c.budget -= 1;
L_002A47D0:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002A47F0; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002A4830; } }
    c.budget -= 1;
L_002A47F0:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002A4810; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002A4830; } }
    c.budget -= 1;
L_002A4810:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002A4858; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4858; } }
    c.budget -= 1;
L_002A4830:
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = ld32((c.r[1].w[0] + 9880u));
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = ld32((c.r[1].w[0] + 9884u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 516u), c.f[0]);  if (t) { goto L_002A4DF8; } }
    c.budget -= 1;
L_002A4858:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002A4878; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002A48D8; } }
    c.budget -= 1;
L_002A4878:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002A4898; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 54u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002A48D8; } }
    c.budget -= 1;
L_002A4898:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002A48B8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 55u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002A48D8; } }
    c.budget -= 1;
L_002A48B8:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002A4DF8; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[3], 0u + 56u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A4DF8; } }
    c.budget -= 1;
L_002A48D8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = ld32((c.r[1].w[0] + 9872u));
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = ld32((c.r[1].w[0] + 9876u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 516u), c.f[0]);  if (t) { goto L_002A4DF8; } }
    c.budget -= 1;
L_002A4900:
    set32(c.r[3], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4B20; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[3], 0u + 101u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4DF8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[3], 0u + 102u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4DF8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4DF8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 83u));
    set32(c.r[8], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_002A4960; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_002A4960; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A4960:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4980; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4980; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002A4980:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A49A0; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A49A0; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_002A49A0:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A49C0; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A49C0; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_002A49C0:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A49E0; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A49E0; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 1;
L_002A49E0:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A00; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A00; } }
    set32(c.r[6], 0u + 5u);
    c.budget -= 1;
L_002A4A00:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A20; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 54u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A20; } }
    set32(c.r[6], 0u + 6u);
    c.budget -= 1;
L_002A4A20:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A40; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 55u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A40; } }
    set32(c.r[6], 0u + 7u);
    c.budget -= 1;
L_002A4A40:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A60; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 56u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A60; } }
    set32(c.r[6], 0u + 8u);
    c.budget -= 1;
L_002A4A60:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A80; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4A80; } }
    set32(c.r[6], 0u + 9u);
    c.budget -= 1;
L_002A4A80:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4AA0; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 97u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4AA0; } }
    set32(c.r[6], 0u + 10u);
    c.budget -= 1;
L_002A4AA0:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4AC0; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[7], 0u + 98u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4AC0; } }
    set32(c.r[6], 0u + 11u);
    c.budget -= 1;
L_002A4AC0:
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002A4AE0; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[3], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A4AE0; } }
    set32(c.r[6], 0u + 12u);
    c.budget -= 1;
L_002A4AE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A4DF8; } }
    set32(c.r[6], c.r[6].w[0] << 3);
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 9904u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 9908u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 516u), c.f[0]);  if (t) { goto L_002A4DF8; } }
L_002A4B20:
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A4C70; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[6], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_002A4BC0; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4BC0; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[6], 0u + 95u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4BC0; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 83u));
    set32(c.r[6], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_002A4B80; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4B80; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002A4B80:
    set32(c.r[6], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_002A4BA0; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4BA0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002A4BA0:
    set32(c.r[6], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_002A4BC0; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4BC0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_002A4BC0:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002A4C30; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[6], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4C30; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[6], 0u + 95u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4C30; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 83u));
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002A4C10; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 54u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4C10; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A4C10:
    set32(c.r[6], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002A4C30; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002A4C30; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A4C30:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[3].w[0] << 3);  if (t) { goto L_002A4DF8; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 7264u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 7268u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 516u), c.f[0]);  if (t) { goto L_002A4DF8; } }
L_002A4C70:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[6], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_002A4CE8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4CE8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[6], 0u + 95u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4CE8; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 83u));
    set32(c.r[6], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_002A4CC8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 56u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4CC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_002A4CC8:
    set32(c.r[6], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_002A4CE8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4CE8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002A4CE8:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002A4DB8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[6], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4DB8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[6], 0u + 95u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4DB8; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 83u));
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002A4D38; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4D38; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002A4D38:
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002A4D58; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 56u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4D58; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_002A4D58:
    set32(c.r[7], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002A4D78; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002A4D78; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 2;
L_002A4D78:
    set32(c.r[6], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002A4D98; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[6], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002A4D98; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_002A4D98:
    set32(c.r[6], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002A4DB8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 84u));
    set32(c.r[4], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002A4DB8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_002A4DB8:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[3].w[0] << 3);  if (t) { goto L_002A4DF8; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] - 25888u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] - 25884u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[5].w[0] + 516u), c.f[0]);
    c.budget -= 13;
L_002A4DF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4E10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002A4F58; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4F58; } }
    st64((c.r[29].w[0]), c.r[7].d[0]);
    set32(c.r[2], c.r[5].w[0] + 560u);
    st64((c.r[29].w[0] + 8u), c.r[8].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[6], c.r[5].w[0] + 64u);
    set32(c.r[7], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[8], c.r[5].w[0] + 256u);
    set32(c.r[9], c.r[5].w[0] + 320u);
    set32(c.r[10], c.r[5].w[0] + 384u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E74u); set32(c.r[11], c.r[5].w[0] + 448u);  if (depth < kMaxDepth) unit_0009(c, 247u, depth + 1u); else { c.pc = 0x00127A50u; return; } if (c.pc != 0x002A4E74u) [[unlikely]] return; }
L_002A4E74:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A4E98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A4EB8; } }
    c.budget -= 1;
L_002A4E98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4EC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A4EC8; } }
    c.budget -= 1;
L_002A4EB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4EC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 40u, depth + 1u); else { c.pc = 0x002A4750u; return; } if (c.pc != 0x002A4EC4u) [[unlikely]] return; }
L_002A4EC4:
    c.budget -= 1;
L_002A4EC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A4EF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 22u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002A4EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4EF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 83u, depth + 1u); else { c.pc = 0x002A55C0u; return; } if (c.pc != 0x002A4EF8u) [[unlikely]] return; }
L_002A4EF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A4F28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A4F28; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 41u, depth + 1u); else { c.pc = 0x002A4E00u; return; } if (c.pc != 0x002A4F28u) [[unlikely]] return; }
L_002A4F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 171u, depth + 1u); else { c.pc = 0x002AE230u; return; } if (c.pc != 0x002A4F30u) [[unlikely]] return; }
L_002A4F30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23904u)));
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A4F50; } }
    st32((c.r[28].w[0] - 23904u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F50u); set32(c.r[4], ld32((c.r[28].w[0] - 23904u)));  if (depth < kMaxDepth) unit_006B(c, 174u, depth + 1u); else { c.pc = 0x002AE540u; return; } if (c.pc != 0x002A4F50u) [[unlikely]] return; }
L_002A4F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F58u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_006B(c, 167u, depth + 1u); else { c.pc = 0x002AE160u; return; } if (c.pc != 0x002A4F58u) [[unlikely]] return; }
L_002A4F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A4F70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FA0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A4FA0u) [[unlikely]] return; }
L_002A4FA0:
    st32((c.r[29].w[0] + 68u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 572u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[8], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FCCu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 42u, depth + 1u); else { c.pc = 0x002A4E10u; return; } if (c.pc != 0x002A4FCCu) [[unlikely]] return; }
L_002A4FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A4FF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5030u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A5030u) [[unlikely]] return; }
L_002A5030:
    c.r[9].d[0] = c.r[16].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5058u); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0069(c, 42u, depth + 1u); else { c.pc = 0x002A4E10u; return; } if (c.pc != 0x002A5058u) [[unlikely]] return; }
L_002A5058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A5080:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = c.r[8].d[0] & 65535ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002A50D8; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50CCu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A50CCu) [[unlikely]] return; }
L_002A50CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A50E8; } }
    c.budget -= 1;
L_002A50D8:
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 4;
L_002A50E8:
    c.r[9].d[0] = c.r[16].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5108u); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0069(c, 42u, depth + 1u); else { c.pc = 0x002A4E10u; return; } if (c.pc != 0x002A5108u) [[unlikely]] return; }
L_002A5108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A5130:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5160u); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A5160u) [[unlikely]] return; }
L_002A5160:
    st32((c.r[29].w[0] + 68u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 572u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 98u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A518Cu); set32(c.r[8], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0069(c, 42u, depth + 1u); else { c.pc = 0x002A4E10u; return; } if (c.pc != 0x002A518Cu) [[unlikely]] return; }
L_002A518C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A51B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23352u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5228; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 31952u);
    c.budget -= 3;
L_002A51D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5208; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_002A5208; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51FCu); set32(c.r[4], c.r[4].w[0] - 16800u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A51FCu) [[unlikely]] return; }
L_002A51FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5204u); set32(c.r[4], ld32((c.r[17].w[0] + 4816u)));  if (depth < kMaxDepth) unit_000A(c, 125u, depth + 1u); else { c.pc = 0x00129850u; return; } if (c.pc != 0x002A5204u) [[unlikely]] return; }
L_002A5204:
    c.budget -= 1;
L_002A5208:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A51D8u | kUnwind; return; } goto L_002A51D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5228u); set32(c.r[4], c.r[4].w[0] - 16800u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A5228u) [[unlikely]] return; }
L_002A5228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23344u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A52D8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 7840u);
    c.budget -= 3;
L_002A5270:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002A5278:
    set32(c.r[2], ld32((c.r[17].w[0] + 5776u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A52A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_002A52A8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A529Cu); set32(c.r[4], c.r[4].w[0] - 16800u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A529Cu) [[unlikely]] return; }
L_002A529C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A52A4u); set32(c.r[4], ld32((c.r[17].w[0] + 5776u)));  if (depth < kMaxDepth) unit_000A(c, 125u, depth + 1u); else { c.pc = 0x00129850u; return; } if (c.pc != 0x002A52A4u) [[unlikely]] return; }
L_002A52A4:
    c.budget -= 1;
L_002A52A8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5278u | kUnwind; return; } goto L_002A5278; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 6240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5270u | kUnwind; return; } goto L_002A5270; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A52D8u); set32(c.r[4], c.r[4].w[0] - 16800u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A52D8u) [[unlikely]] return; }
L_002A52D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A5300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23348u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_002A5540; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 20304u);
    set32(c.r[7], c.r[5].w[0] << 7);
    c.r[3].d[0] = c.r[4].d[0] ^ 4ull;
    c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A53C8; } }
L_002A5360:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A53A0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_002A53A0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A538Cu); set32(c.r[4], c.r[4].w[0] - 16800u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A538Cu) [[unlikely]] return; }
L_002A538C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A539Cu); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_000A(c, 125u, depth + 1u); else { c.pc = 0x00129850u; return; } if (c.pc != 0x002A539Cu) [[unlikely]] return; }
L_002A539C:
    c.budget -= 1;
L_002A53A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(60ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5360u | kUnwind; return; } goto L_002A5360; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53C0u); set32(c.r[4], c.r[4].w[0] - 16800u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A53C0u) [[unlikely]] return; }
L_002A53C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A5540; } }
L_002A53C8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A5540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A53F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A53F8:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A5410; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A5410:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A5428; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A5428:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A5440; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A5440:
    set32(c.r[5], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A5458; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A5458:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A5470; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A5470:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A5488; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A5488:
    set32(c.r[5], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A54A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A54A0:
    set32(c.r[5], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A54B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A54B8:
    set32(c.r[5], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A54D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002A54E8; } }
    c.budget -= 1;
L_002A54D0:
    set32(c.r[5], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002A5540; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A5540; } }
L_002A54E8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A54F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5530; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_002A5530; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A551Cu); set32(c.r[4], c.r[4].w[0] - 16800u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002A551Cu) [[unlikely]] return; }
L_002A551C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A552Cu); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_000A(c, 125u, depth + 1u); else { c.pc = 0x00129850u; return; } if (c.pc != 0x002A552Cu) [[unlikely]] return; }
L_002A552C:
    c.budget -= 1;
L_002A5530:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(60ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A54F0u | kUnwind; return; } goto L_002A54F0; } }
L_002A5540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5560:
    st32((c.r[28].w[0] - 23516u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23520u), 0u);  c.pc = t; return; }
L_002A5570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B440000u);
    c.r[4].d[0] = c.r[3].d[0] | 39846ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[4] = ld32((c.r[28].w[0] - 23520u));
    c.f[3] = c.r[4].w[0];
    c.f[2] = ld32((c.r[28].w[0] - 23516u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[3];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[28].w[0] - 23520u), c.f[3]);
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[28].w[0] - 23516u), c.f[2]);  if (t) { goto L_002A55B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[28].w[0] - 23520u), c.r[3].w[0]);
    c.budget -= 2;
L_002A55B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A55C0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A5608; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002A5608; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[3], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A5608; } }
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 23516u));
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 23520u));
    st32((c.r[5].w[0] + 516u), c.f[0]);
    c.budget -= 6;
L_002A5608:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A5610:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 32432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A5630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A5640:
    set32(c.r[29], c.r[29].w[0] - 832u);
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 32112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[29].w[0] + 222u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[2], c.r[2].w[0] - 32108u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], 0u + 26064u);
    st32((c.r[29].w[0] + 216u), c.r[20].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 608u);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 32104u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 32100u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[30], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[22].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 576u);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5700u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 395u, depth + 1u); else { c.pc = 0x002436F0u; return; } if (c.pc != 0x002A5700u) [[unlikely]] return; }
L_002A5700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15664u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A571Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 175u, depth + 1u); else { c.pc = 0x00240E90u; return; } if (c.pc != 0x002A571Cu) [[unlikely]] return; }
L_002A571C:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A572Cu); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_004B(c, 85u, depth + 1u); else { c.pc = 0x0022D1F0u; return; } if (c.pc != 0x002A572Cu) [[unlikely]] return; }
L_002A572C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 224u);
    set32(c.r[9], c.r[29].w[0] + 480u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A574Cu); set32(c.r[8], c.r[2].w[0] + 4544u);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00125A80u; return; } if (c.pc != 0x002A574Cu) [[unlikely]] return; }
L_002A574C:
    set32(c.r[2], c.r[29].w[0] + 224u);
    set32(c.r[4], c.r[17].w[0] + 256u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[17].w[0] + 320u);
    set32(c.r[6], c.r[17].w[0] + 384u);
    set32(c.r[7], c.r[17].w[0] + 448u);
    set32(c.r[8], c.r[17].w[0] + 192u);
    set32(c.r[9], c.r[29].w[0] + 416u);
    set32(c.r[10], c.r[29].w[0] + 352u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5778u); set32(c.r[11], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 134u, depth + 1u); else { c.pc = 0x00125BB0u; return; } if (c.pc != 0x002A5778u) [[unlikely]] return; }
L_002A5778:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 572u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 5u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 560u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57A4u); st32((c.r[17].w[0] + 560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x002A57A4u) [[unlikely]] return; }
L_002A57A4:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57B8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 52u, depth + 1u); else { c.pc = 0x00124FF0u; return; } if (c.pc != 0x002A57B8u) [[unlikely]] return; }
L_002A57B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[4].d[0] << 32;
    set32(c.r[20], c.r[20].w[0] + 32u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[4], 0u + 14u);
    st64((c.r[20].w[0]), c.r[5].d[0]);
    set32(c.r[2], 0u + 8u);
    st64((c.r[20].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[3], c.r[30].w[0] << 6);
    set32(c.r[20], c.r[20].w[0] + 16u);
    st64((c.r[20].w[0]), 0ull);
    st64((c.r[20].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 26044u)));
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 21210u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5804u); set32(c.r[19], c.r[2].w[0] + 21200u);  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x002A5804u) [[unlikely]] return; }
L_002A5804:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5810u); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x002A5810u) [[unlikely]] return; }
L_002A5810:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[10].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x303E0000u);
    c.r[7].d[0] = c.r[6].d[0] | 16384ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[16].d[0] << 32;
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[14].d[0] = c.r[14].d[0] << 14;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[14].d[0] = c.r[5].d[0] | c.r[14].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.r[6].d[0] = c.r[13].d[0] << 20;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] << 26;
    c.r[7].d[0] = c.r[6].d[0] | c.r[14].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 30;
    c.r[7].d[0] = c.r[4].d[0] | c.r[7].d[0];
    set32(c.r[2], 0u + 4u);
    c.r[7].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[12].d[0] << 37;
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[11].d[0] << 51;
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[9], 0u + 6u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    c.r[5].d[0] = c.r[8].d[0] | c.r[5].d[0];
    st64((c.r[20].w[0]), c.r[2].d[0]);
    set32(c.r[3], 0u + 1042u);
    st64((c.r[20].w[0] + 8u), c.r[9].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] + 16u);
    st64((c.r[20].w[0]), c.r[5].d[0]);
    st64((c.r[20].w[0] + 8u), c.r[3].d[0]);
    st32((c.r[29].w[0] + 828u), 0u);
    c.budget -= 46;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { goto L_002A5D00; } }
L_002A58C8:
    set32(c.r[2], c.r[29].w[0] + 640u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 829u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 828u));
    st8((c.r[29].w[0] + 830u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58F8u); st8((c.r[29].w[0] + 829u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A58F8u) [[unlikely]] return; }
L_002A58F8:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5904u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_0000(c, 256u, depth + 1u); else { c.pc = 0x00102938u; return; } if (c.pc != 0x002A5904u) [[unlikely]] return; }
L_002A5904:
    set32(c.r[19], ld32((c.r[29].w[0] + 636u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5920u); set32(c.r[6], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x002A5920u) [[unlikely]] return; }
L_002A5920:
    c.f[0] = ld32((c.r[29].w[0] + 652u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5948u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x002A5948u) [[unlikely]] return; }
L_002A5948:
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5954u); set32(c.r[5], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0000(c, 253u, depth + 1u); else { c.pc = 0x001028E8u; return; } if (c.pc != 0x002A5954u) [[unlikely]] return; }
L_002A5954:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5960u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A5960u) [[unlikely]] return; }
L_002A5960:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 222u));
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[2], c.r[2].w[0] - 15280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5998u); st32((c.r[29].w[0] + 688u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 316u, depth + 1u); else { c.pc = 0x00103540u; return; } if (c.pc != 0x002A5998u) [[unlikely]] return; }
L_002A5998:
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A59A4u) [[unlikely]] return; }
L_002A59A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 736u);
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59BCu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x002A59BCu) [[unlikely]] return; }
L_002A59BC:
    c.f[0] = ld32((c.r[29].w[0] + 744u));
    c.f[2] = ld32((c.r[29].w[0] + 748u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2] ^ fp::kSign;  if (t) { goto L_002A5A18; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5A18; } }
    c.f[0] = ld32((c.r[29].w[0] + 736u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5A18; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5A18; } }
    c.f[0] = ld32((c.r[29].w[0] + 740u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5A18; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5A28; } }
    c.budget -= 1;
L_002A5A18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 828u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A5A30; } }
    c.budget -= 1;
L_002A5A28:
    st8((c.r[29].w[0] + 828u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002A5A30:
    set32(c.r[2], ld32((c.r[29].w[0] + 828u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5A40; } }
    c.r[19].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002A5A40:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 736u);  if (t) { goto L_002A5A98; } }
    set32(c.r[5], c.r[29].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A54u); set32(c.r[6], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x002A5A54u) [[unlikely]] return; }
L_002A5A54:
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A64u); set32(c.r[6], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x002A5A64u) [[unlikely]] return; }
L_002A5A64:
    set32(c.r[4], c.r[29].w[0] + 736u);
    set32(c.r[5], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A74u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x002A5A74u) [[unlikely]] return; }
L_002A5A74:
    c.f[2] = ld32((c.r[29].w[0] + 744u));
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5A98; } }
    c.r[19].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002A5A98:
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    set32(c.r[4], c.r[29].w[0] + 736u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5AB0u); st32((c.r[29].w[0] + 620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A5AB0u) [[unlikely]] return; }
L_002A5AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 752u);
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5AC4u); set32(c.r[5], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A5AC4u) [[unlikely]] return; }
L_002A5AC4:
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5AD0u); set32(c.r[5], c.r[17].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A5AD0u) [[unlikely]] return; }
L_002A5AD0:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5ADCu); set32(c.r[5], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A5ADCu) [[unlikely]] return; }
L_002A5ADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 736u);
    st32((c.r[29].w[0] + 812u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 752u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 808u), 0u);
    st32((c.r[29].w[0] + 804u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B00u); st32((c.r[29].w[0] + 800u), 0u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x002A5B00u) [[unlikely]] return; }
L_002A5B00:
    c.f[1] = ld32((c.r[29].w[0] + 736u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5B20; } }
    st32((c.r[29].w[0] + 736u), c.f[0]);
    c.budget -= 2;
L_002A5B20:
    c.f[1] = ld32((c.r[29].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5B40; } }
    st32((c.r[29].w[0] + 740u), c.f[0]);
    c.budget -= 2;
L_002A5B40:
    c.f[1] = ld32((c.r[29].w[0] + 744u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5B60; } }
    st32((c.r[29].w[0] + 744u), c.f[0]);
    c.budget -= 2;
L_002A5B60:
    set32(c.r[4], c.r[29].w[0] + 736u);
    set32(c.r[5], c.r[17].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B70u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x002A5B70u) [[unlikely]] return; }
L_002A5B70:
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B7Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A5B7Cu) [[unlikely]] return; }
L_002A5B7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 704u);
    st32((c.r[29].w[0] + 732u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 720u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B94u); set32(c.r[6], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_0000(c, 241u, depth + 1u); else { c.pc = 0x001026E0u; return; } if (c.pc != 0x002A5B94u) [[unlikely]] return; }
L_002A5B94:
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BA0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A5BA0u) [[unlikely]] return; }
L_002A5BA0:
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BACu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A5BACu) [[unlikely]] return; }
L_002A5BAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 736u);
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 732u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BC8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x002A5BC8u) [[unlikely]] return; }
L_002A5BC8:
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[5], c.r[29].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BD8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 241u, depth + 1u); else { c.pc = 0x001026E0u; return; } if (c.pc != 0x002A5BD8u) [[unlikely]] return; }
L_002A5BD8:
    c.f[1] = ld32((c.r[29].w[0] + 736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[7] = ld32((c.r[29].w[0] + 740u));
    c.f[6] = ld32((c.r[29].w[0] + 744u));
    c.f[5] = c.r[2].w[0];
    c.f[4] = ld32((c.r[29].w[0] + 720u));
    c.f[3] = ld32((c.r[29].w[0] + 724u));
    c.f[8] = fp::mul(c.f[1], c.f[1]);
    c.f[7] = fp::mul(c.f[7], c.f[7]);
    c.facc = fp::add(c.f[8], c.f[7]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    fpu_div(c, 20u, c.f[5], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 728u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[0] = 0u;
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5C40; } }
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002A5C40:
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C50u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x002A5C50u) [[unlikely]] return; }
L_002A5C50:
    set32(c.r[4], c.r[29].w[0] + 736u);
    set32(c.r[5], c.r[29].w[0] + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C60u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102610u; return; } if (c.pc != 0x002A5C60u) [[unlikely]] return; }
L_002A5C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C78u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 281u, depth + 1u); else { c.pc = 0x00102E28u; return; } if (c.pc != 0x002A5C78u) [[unlikely]] return; }
L_002A5C78:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C84u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_0000(c, 256u, depth + 1u); else { c.pc = 0x00102938u; return; } if (c.pc != 0x002A5C84u) [[unlikely]] return; }
L_002A5C84:
    c.f[1] = ld32((c.r[17].w[0] + 572u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5CB0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 604u), c.r[3].w[0]);  if (t) { goto L_002A5CCC; } }
L_002A5CB0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 604u), c.r[3].w[0]);
    c.budget -= 7;
L_002A5CCC:
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[3], c.r[29].w[0] + 592u);
    set32(c.r[2], c.r[29].w[0] + 608u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    set32(c.r[18], c.r[18].w[0] + 64u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 48u);
    c.budget -= 13;
L_002A5D00:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A58C8u | kUnwind; return; } goto L_002A58C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D14u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_006B(c, 151u, depth + 1u); else { c.pc = 0x002ADB60u; return; } if (c.pc != 0x002A5D14u) [[unlikely]] return; }
L_002A5D14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 832u);  c.pc = t; return; }
L_002A5D50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 26064u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[6], c.r[6].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[5], c.r[5].w[0] + 108u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[8], c.r[8].w[0] - 608u);
    set32(c.r[17], c.r[17].w[0] - 8560u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[7].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[10].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[1].w[0] - 15280u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[1].w[0] - 15276u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 33;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[8].w[0] + c.r[9].w[0]);  if (t) { goto L_002A5E30; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 12672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DE8u); set32(c.r[7], 0u + 21u);  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A5DE8u) [[unlikely]] return; }
L_002A5DE8:
    set32(c.r[8], ld32((c.r[17].w[0] + 816u)));
    set32(c.r[3], 0u + 11200u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23484u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E2Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5640u; return; } if (c.pc != 0x002A5E2Cu) [[unlikely]] return; }
L_002A5E2C:
    c.budget -= 1;
L_002A5E30:
    set32(c.r[4], ld32((c.r[18].w[0] + 1236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5EA0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    set32(c.r[5], c.r[16].w[0] + 14400u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E58u); set32(c.r[7], 0u + 24u);  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A5E58u) [[unlikely]] return; }
L_002A5E58:
    set32(c.r[8], ld32((c.r[17].w[0] + 816u)));
    set32(c.r[3], 0u + 11200u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23484u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[7], 0u + 1u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1120u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5EA0u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5640u; return; } if (c.pc != 0x002A5EA0u) [[unlikely]] return; }
L_002A5EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A5EC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 26064u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[6], c.r[6].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[5], c.r[5].w[0] + 108u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[8], c.r[8].w[0] - 608u);
    set32(c.r[17], c.r[17].w[0] - 8560u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[7].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[10].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[1].w[0] - 15272u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[1].w[0] - 15268u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 33;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[8].w[0] + c.r[9].w[0]);  if (t) { goto L_002A5FA0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 12096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F58u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A5F58u) [[unlikely]] return; }
L_002A5F58:
    set32(c.r[8], ld32((c.r[17].w[0] + 816u)));
    set32(c.r[3], 0u + 11200u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23484u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[7], 0u + 2u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F9Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5640u; return; } if (c.pc != 0x002A5F9Cu) [[unlikely]] return; }
L_002A5F9C:
    c.budget -= 1;
L_002A5FA0:
    set32(c.r[4], ld32((c.r[18].w[0] + 1236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6010; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    set32(c.r[5], c.r[16].w[0] + 12672u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FC8u); set32(c.r[7], 0u + 21u);  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A5FC8u) [[unlikely]] return; }
L_002A5FC8:
    set32(c.r[8], ld32((c.r[17].w[0] + 816u)));
    set32(c.r[3], 0u + 11200u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23484u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[7], 0u + 3u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1120u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6010u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5640u; return; } if (c.pc != 0x002A6010u) [[unlikely]] return; }
L_002A6010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A6030:
    set32(c.r[29], c.r[29].w[0] - 592u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[7], 0u + 26064u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[6], c.r[6].w[0] - 608u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[8], c.r[8].w[0] - 8560u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[23], c.r[23].w[0] + 15664u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 23;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_002A60F0; } }
    set32(c.r[6], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - 15264u);
    set32(c.r[5], 0u + 11200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.r[30].d[0] = ld32((c.r[17].w[0] + 1236u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[20], 0u + 2u);
    set32(c.r[18], c.r[7].w[0] + 4u);
    set32(c.r[4], 0u + 560u);
    set32(c.r[5], c.r[3].w[0] << 6);
    set32(c.r[3], ld32((c.r[28].w[0] - 23484u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_002A6268; } }
    c.budget -= 1;
L_002A60F0:
    set32(c.r[7], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[20], 0u + 1u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 11200u);
    set32(c.r[9], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] - 15264u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[28].w[0] - 23484u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[18], c.r[8].w[0] + 28u);
    set32(c.r[6], c.r[3].w[0] << 6);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + 1120u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[19], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; mmi::pcpyld(c.r[30], c.r[0], c.r[3]);  if (t) { goto L_002A6268; } }
L_002A6158:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[4].w[0] & 63u);
    c.r[3].d[0] = c.r[30].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6248; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[21], c.r[2].w[0] + 576u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A618Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 395u, depth + 1u); else { c.pc = 0x002436F0u; return; } if (c.pc != 0x002A618Cu) [[unlikely]] return; }
L_002A618C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A619Cu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 175u, depth + 1u); else { c.pc = 0x00240E90u; return; } if (c.pc != 0x002A619Cu) [[unlikely]] return; }
L_002A619C:
    c.r[6].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A61ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 85u, depth + 1u); else { c.pc = 0x0022D1F0u; return; } if (c.pc != 0x002A61ACu) [[unlikely]] return; }
L_002A61AC:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[8], c.r[23].w[0] + 4544u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A61C8u); set32(c.r[9], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00125A80u; return; } if (c.pc != 0x002A61C8u) [[unlikely]] return; }
L_002A61C8:
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[21].w[0] + 256u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[21].w[0] + 320u);
    set32(c.r[6], c.r[21].w[0] + 384u);
    set32(c.r[7], c.r[21].w[0] + 448u);
    set32(c.r[8], c.r[21].w[0] + 192u);
    set32(c.r[9], c.r[29].w[0] + 368u);
    set32(c.r[10], c.r[29].w[0] + 304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A61F4u); set32(c.r[11], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 134u, depth + 1u); else { c.pc = 0x00125BB0u; return; } if (c.pc != 0x002A61F4u) [[unlikely]] return; }
L_002A61F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 560u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    st32((c.r[21].w[0] + 560u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 572u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[7].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6218u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A6218u) [[unlikely]] return; }
L_002A6218:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 26044u)));
    set32(c.r[7], c.r[29].w[0] + 544u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6248u); set32(c.r[5], c.r[2].w[0] + 21200u);  if (depth < kMaxDepth) unit_0050(c, 231u, depth + 1u); else { c.pc = 0x00241B50u; return; } if (c.pc != 0x002A6248u) [[unlikely]] return; }
L_002A6248:
    set32(c.r[19], c.r[19].w[0] + c.r[22].w[0]);
    set32(c.r[18], c.r[18].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 4;
L_002A6258:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6158u | kUnwind; return; } goto L_002A6158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6270; } }
L_002A6268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[4].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6258u | kUnwind; return; } goto L_002A6258; } }
L_002A6270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_002A62A0:
    set32(c.r[29], c.r[29].w[0] - 576u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[6], 0u + 26064u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[5], 0u + 11200u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[8], c.r[8].w[0] - 15264u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 2240u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[10], c.r[10].w[0] - 608u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[23], c.r[23].w[0] + 15664u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[1].w[0] - 7744u)));
    mmi::mult(c, 0, c.r[12].w[0], c.r[6].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 23484u)));
    mmi::mult(c, 1, c.r[7].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    set32(c.r[6], c.r[12].w[0] << 3);
    set32(c.r[21], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[12].w[0]);
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] - c.r[12].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[12].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[19], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[17], c.r[6].w[0] + 4u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 47;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002A6468; } }
    set32(c.r[22], c.r[3].w[0] << 4);
    c.budget -= 1;
L_002A6360:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6458; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[2].w[0] + 576u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6398u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 395u, depth + 1u); else { c.pc = 0x002436F0u; return; } if (c.pc != 0x002A6398u) [[unlikely]] return; }
L_002A6398:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63A8u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 175u, depth + 1u); else { c.pc = 0x00240E90u; return; } if (c.pc != 0x002A63A8u) [[unlikely]] return; }
L_002A63A8:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 85u, depth + 1u); else { c.pc = 0x0022D1F0u; return; } if (c.pc != 0x002A63B8u) [[unlikely]] return; }
L_002A63B8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[8], c.r[23].w[0] + 4544u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63D4u); set32(c.r[9], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00125A80u; return; } if (c.pc != 0x002A63D4u) [[unlikely]] return; }
L_002A63D4:
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[20].w[0] + 256u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[20].w[0] + 320u);
    set32(c.r[6], c.r[20].w[0] + 384u);
    set32(c.r[7], c.r[20].w[0] + 448u);
    set32(c.r[8], c.r[20].w[0] + 192u);
    set32(c.r[9], c.r[29].w[0] + 352u);
    set32(c.r[10], c.r[29].w[0] + 288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6400u); set32(c.r[11], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 134u, depth + 1u); else { c.pc = 0x00125BB0u; return; } if (c.pc != 0x002A6400u) [[unlikely]] return; }
L_002A6400:
    set32(c.r[3], ld32((c.r[21].w[0] + 560u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    st32((c.r[20].w[0] + 560u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 572u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6424u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 16u, depth + 1u); else { c.pc = 0x0022C1D0u; return; } if (c.pc != 0x002A6424u) [[unlikely]] return; }
L_002A6424:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 26044u)));
    set32(c.r[7], c.r[29].w[0] + 528u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6454u); set32(c.r[5], c.r[2].w[0] + 21200u);  if (depth < kMaxDepth) unit_0050(c, 231u, depth + 1u); else { c.pc = 0x00241B50u; return; } if (c.pc != 0x002A6454u) [[unlikely]] return; }
L_002A6454:
    c.budget -= 1;
L_002A6458:
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[22].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6360u | kUnwind; return; } goto L_002A6360; } }
L_002A6468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_002A64A0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 8560u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[8], c.r[8].w[0] - 6768u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[7].w[0] - 7280u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[6].w[0] - 7792u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 8304u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] - 8816u);
    set32(c.r[2], c.r[2].w[0] - 9328u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[4], 0u + 52u);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[18], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[17], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[21], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[22], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[23], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6544u); set32(c.r[30], c.r[2].w[0] + c.r[9].w[0]);  if (depth < kMaxDepth) unit_0049(c, 184u, depth + 1u); else { c.pc = 0x002253F0u; return; } if (c.pc != 0x002A6544u) [[unlikely]] return; }
L_002A6544:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[19], 0u + 25u);
    set32(c.r[16], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002A65B0; } }
L_002A6558:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[21], c.r[21].w[0] + 4u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.f[0] = ld32((c.r[23].w[0]));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    set32(c.r[23], c.r[23].w[0] + 4u);
    c.f[0] = ld32((c.r[30].w[0]));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    set32(c.r[30], c.r[30].w[0] + 4u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 22;
L_002A65B0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6558u | kUnwind; return; } goto L_002A6558; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[10], c.r[10].w[0] - 9360u);
    set32(c.r[9], c.r[9].w[0] - 9392u);
    set32(c.r[7], c.r[7].w[0] - 9424u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 9456u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] - 9488u);
    c.f[0] = ld32((c.r[10].w[0]));
    set32(c.r[4], c.r[4].w[0] - 9520u);
    set32(c.r[3], 0u + 26064u);
    set32(c.r[2], c.r[2].w[0] - 608u);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 28u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[16].w[0] + 20736u);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6690u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 395u, depth + 1u); else { c.pc = 0x002436F0u; return; } if (c.pc != 0x002A6690u) [[unlikely]] return; }
L_002A6690:
    set32(c.r[2], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[3], 0u + 11200u);
    set32(c.r[5], 0u + 155u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 26044u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 816u)));
    set32(c.r[18], c.r[9].w[0] + 21392u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23484u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66F0u); c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x002A66F0u) [[unlikely]] return; }
L_002A66F0:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66FCu); set32(c.r[5], 0u + 154u);  if (depth < kMaxDepth) unit_0009(c, 52u, depth + 1u); else { c.pc = 0x00124FF0u; return; } if (c.pc != 0x002A66FCu) [[unlikely]] return; }
L_002A66FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[21].w[0]), c.r[3].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[21].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], 0u + 5u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[21].w[0]), c.r[3].d[0]);
    st64((c.r[21].w[0] + 8u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A673Cu); set32(c.r[21], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x002A673Cu) [[unlikely]] return; }
L_002A673C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6748u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x002A6748u) [[unlikely]] return; }
L_002A6748:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.r[9].d[0] = c.r[2].d[0] << 30;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], 0u + 4u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[10].d[0] = c.r[3].d[0] << 26;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x303E0000u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    c.r[12].d[0] = c.r[12].d[0] << 14;
    c.r[2].d[0] = 0ull | 32818ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[16], ld32((c.r[29].w[0] + 160u)));
    c.r[12].d[0] = c.r[13].d[0] | c.r[12].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 37;
    c.r[2].d[0] = c.r[11].d[0] << 20;
    c.r[6].d[0] = c.r[6].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    set32(c.r[4], 0u + 6u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[2], 0u + 1042u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[21].w[0]), c.r[5].d[0]);
    st64((c.r[21].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[21], c.r[21].w[0] + 16u);
    st64((c.r[21].w[0]), c.r[3].d[0]);
    st64((c.r[21].w[0] + 8u), c.r[2].d[0]);
    st32((c.r[29].w[0] + 268u), 0u);
    c.budget -= 44;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { goto L_002A6970; } }
L_002A67F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 269u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 268u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 270u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6818u); st8((c.r[29].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x002A6818u) [[unlikely]] return; }
L_002A6818:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[2] = ld32((c.r[29].w[0] + 252u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2] ^ fp::kSign;  if (t) { goto L_002A6870; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6870; } }
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6870; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6870; } }
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6870; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6888; } }
L_002A6870:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_002A6960; } }
    c.budget -= 1;
L_002A6888:
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull | 32768ull;  if (t) { goto L_002A68A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A68C0; } }
L_002A68A0:
    c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull | 32768ull;  if (t) { goto L_002A68B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A68C0; } }
    c.budget -= 1;
L_002A68B8:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A68C0:
    c.r[2].d[0] = c.r[19].d[0] & 3ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 32032u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[11]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 10u, 9u, c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 14u, 11u, 11u, c.vu0.vf[5].w[0]);
    vu::ftoi(c.vu0, 15u, 12u, 10u, 4);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[10]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[11]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 32048u);
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[21].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    c.budget -= 40;
L_002A6960:
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 4;
L_002A6970:
    c.r[2].d[0] = c.r[19].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A67F8u | kUnwind; return; } goto L_002A67F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6984u);  if (depth < kMaxDepth) unit_006B(c, 151u, depth + 1u); else { c.pc = 0x002ADB60u; return; } if (c.pc != 0x002A6984u) [[unlikely]] return; }
L_002A6984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A698Cu); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0049(c, 185u, depth + 1u); else { c.pc = 0x00225430u; return; } if (c.pc != 0x002A698Cu) [[unlikely]] return; }
L_002A698C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002A69C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01F80000u);
    c.r[5].d[0] = c.r[3].d[0] | 34816ull;
    st32((c.r[28].w[0] - 23484u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + 16672u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6AD8; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[8], c.r[8].w[0] - 14880u);
    set32(c.r[6], c.r[6].w[0] - 15264u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[7], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 9);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[10], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[6].w[0] + 4u);
    c.budget -= 19;
L_002A6A38:
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002A6A70; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[3], c.r[3].w[0] - 15264u);
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_002A6AD8; } }
L_002A6A70:
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[7].w[0] + 2u));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002A6AC8; } }
    c.budget -= 1;
L_002A6AA8:
    ld128((c.r[9].w[0]) & ~15u, c.r[6]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6AA8u | kUnwind; return; } goto L_002A6AA8; } }
    c.budget -= 1;
L_002A6AC8:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 12u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6A38u | kUnwind; return; } goto L_002A6A38; } }
L_002A6AD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A6AE0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 15252u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002A6B20:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 13952u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 16592u);
    set32(c.r[4], c.r[4].w[0] + 14095u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A7558; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 22240u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A6B88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16672u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_002A7558; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16272u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0])));
    set32(c.r[13], ld32((c.r[10].w[0])));
    c.budget -= 7;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { goto L_002A6DA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 144u);
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_002A6BD8:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[1].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A6DA0; } }
    set32(c.r[12], ld32((c.r[7].w[0])));
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[13].w[0])));
    st32((c.r[5].w[0] + 13824u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[13].w[0] + 4u)));
    st32((c.r[5].w[0] + 13848u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[13].w[0] + 8u)));
    st32((c.r[5].w[0] + 13872u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 12u)));
    st8((c.r[4].w[0] + 13920u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 13u)));
    st8((c.r[4].w[0] + 13926u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 14u)));
    st8((c.r[4].w[0] + 13932u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 15u)));
    st8((c.r[4].w[0] + 13938u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 16u)));
    st8((c.r[4].w[0] + 13944u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[12].w[0] + 4u)));
    st32((c.r[5].w[0] + 13896u), c.r[6].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13938u)));
    set32(c.r[24], ld32((c.r[5].w[0] + 13824u)));
    c.r[1].d[0] = 0ll < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { goto L_002A6CC8; } }
    c.r[14].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_002A6C58:
    set32(c.r[15], ld32((c.r[24].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[12], c.r[15].w[0] << 4);
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[13], c.r[6].w[0] + c.r[12].w[0]);
    c.f[3] = ld32((c.r[13].w[0]));
    set32(c.r[12], c.r[15].w[0] + 1u);
    c.f[2] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[12], c.r[12].w[0] << 4);
    c.f[1] = ld32((c.r[13].w[0] + 8u));
    set32(c.r[12], c.r[6].w[0] + c.r[12].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    st32((c.r[14].w[0]), c.f[3]);
    st32((c.r[14].w[0] + 4u), c.f[2]);
    st32((c.r[14].w[0] + 8u), c.f[1]);
    st32((c.r[14].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[14].w[0] + 6912u), c.f[3]);
    st32((c.r[14].w[0] + 6916u), c.f[2]);
    st32((c.r[14].w[0] + 6920u), c.f[1]);
    st32((c.r[14].w[0] + 6924u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13938u)));
    c.r[12].d[0] = c.r[11].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6C58u | kUnwind; return; } goto L_002A6C58; } }
L_002A6CC8:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13944u)));
    set32(c.r[15], ld32((c.r[5].w[0] + 13872u)));
    c.r[1].d[0] = 0ll < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_002A6D18; } }
    c.r[13].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002A6CE0:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[2] = ld32((c.r[15].w[0] + 4u));
    c.f[1] = ld32((c.r[15].w[0] + 8u));
    c.f[0] = ld32((c.r[15].w[0] + 12u));
    st32((c.r[13].w[0] + 3456u), c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 16u);
    st32((c.r[13].w[0] + 3460u), c.f[2]);
    st32((c.r[13].w[0] + 3464u), c.f[1]);
    st32((c.r[13].w[0] + 3468u), c.f[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13944u)));
    c.r[11].d[0] = c.r[12].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6CE0u | kUnwind; return; } goto L_002A6CE0; } }
L_002A6D18:
    set32(c.r[13], ld32((c.r[5].w[0] + 13848u)));
    c.r[1].d[0] = 0ll < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_002A6D78; } }
    c.r[14].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_002A6D30:
    set32(c.r[11], ld32((c.r[13].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    c.f[3] = ld32((c.r[11].w[0]));
    c.f[2] = ld32((c.r[11].w[0] + 4u));
    c.f[1] = ld32((c.r[11].w[0] + 8u));
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    st32((c.r[14].w[0] + 10368u), c.f[3]);
    st32((c.r[14].w[0] + 10372u), c.f[2]);
    st32((c.r[14].w[0] + 10376u), c.f[1]);
    st32((c.r[14].w[0] + 10380u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13944u)));
    c.r[11].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6D30u | kUnwind; return; } goto L_002A6D30; } }
L_002A6D78:
    set32(c.r[13], ld32((c.r[10].w[0])));
    set32(c.r[6], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 576u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[13].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6BD8u | kUnwind; return; } goto L_002A6BD8; } }
    c.budget -= 1;
L_002A6DA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 14094u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_002A7558; } }
    c.budget -= 1;
L_002A6DB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16672u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_002A7558; } }
    set32(c.r[11], c.r[11].w[0] + 9120u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_002A7558; } }
    set32(c.r[13], ld32((c.r[11].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { goto L_002A71A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 144u);
    set32(c.r[10], c.r[3].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 6;
L_002A6E08:
    set32(c.r[12], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[13].w[0] + 4u)));
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 13824u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[13].w[0] + 12u)));
    st32((c.r[10].w[0] + 13848u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[13].w[0])));
    st32((c.r[10].w[0] + 13832u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[13].w[0] + 8u)));
    st32((c.r[10].w[0] + 13856u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[13].w[0] + 16u)));
    st32((c.r[10].w[0] + 13872u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 20u)));
    st8((c.r[9].w[0] + 13920u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 21u)));
    st8((c.r[9].w[0] + 13926u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 22u)));
    st8((c.r[9].w[0] + 13932u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 23u)));
    st8((c.r[9].w[0] + 13938u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 24u)));
    st8((c.r[9].w[0] + 13944u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 25u)));
    st8((c.r[9].w[0] + 13940u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 26u)));
    st8((c.r[9].w[0] + 13946u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[12].w[0] + 4u)));
    st32((c.r[10].w[0] + 13896u), c.r[4].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13938u)));
    set32(c.r[15], ld32((c.r[10].w[0] + 13824u)));
    c.r[1].d[0] = 0ll < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 33;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { goto L_002A6F00; } }
    c.r[24].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002A6E90:
    set32(c.r[14], ld32((c.r[15].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[12], c.r[14].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[13], c.r[4].w[0] + c.r[12].w[0]);
    c.f[3] = ld32((c.r[13].w[0]));
    set32(c.r[12], c.r[14].w[0] + 1u);
    c.f[2] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[12], c.r[12].w[0] << 4);
    c.f[1] = ld32((c.r[13].w[0] + 8u));
    set32(c.r[12], c.r[4].w[0] + c.r[12].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    st32((c.r[24].w[0]), c.f[3]);
    st32((c.r[24].w[0] + 4u), c.f[2]);
    st32((c.r[24].w[0] + 8u), c.f[1]);
    st32((c.r[24].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[24].w[0] + 6912u), c.f[3]);
    st32((c.r[24].w[0] + 6916u), c.f[2]);
    st32((c.r[24].w[0] + 6920u), c.f[1]);
    st32((c.r[24].w[0] + 6924u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13938u)));
    c.r[12].d[0] = c.r[3].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[24], c.r[24].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6E90u | kUnwind; return; } goto L_002A6E90; } }
L_002A6F00:
    set32(c.r[3], ld32((c.r[10].w[0] + 13872u)));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[7].w[0] + 3456u), c.f[3]);
    st32((c.r[7].w[0] + 3460u), c.f[2]);
    st32((c.r[7].w[0] + 3464u), c.f[1]);
    st32((c.r[7].w[0] + 3468u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[7].w[0] + 3472u), c.f[3]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st32((c.r[7].w[0] + 3476u), c.f[2]);
    st32((c.r[7].w[0] + 3480u), c.f[1]);
    st32((c.r[7].w[0] + 3484u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[7].w[0] + 3488u), c.f[3]);
    st32((c.r[7].w[0] + 3492u), c.f[2]);
    st32((c.r[7].w[0] + 3496u), c.f[1]);
    st32((c.r[7].w[0] + 3500u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[7].w[0] + 3504u), c.f[3]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st32((c.r[7].w[0] + 3508u), c.f[2]);
    st32((c.r[7].w[0] + 3512u), c.f[1]);
    st32((c.r[7].w[0] + 3516u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[7].w[0] + 3520u), c.f[3]);
    st32((c.r[7].w[0] + 3524u), c.f[2]);
    st32((c.r[7].w[0] + 3528u), c.f[1]);
    st32((c.r[7].w[0] + 3532u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[7].w[0] + 3536u), c.f[3]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st32((c.r[7].w[0] + 3540u), c.f[2]);
    st32((c.r[7].w[0] + 3544u), c.f[1]);
    st32((c.r[7].w[0] + 3548u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[7].w[0] + 3552u), c.f[3]);
    st32((c.r[7].w[0] + 3556u), c.f[2]);
    st32((c.r[7].w[0] + 3560u), c.f[1]);
    st32((c.r[7].w[0] + 3564u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[7].w[0] + 3568u), c.f[3]);
    st32((c.r[7].w[0] + 3572u), c.f[2]);
    st32((c.r[7].w[0] + 3576u), c.f[1]);
    st32((c.r[7].w[0] + 3580u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13944u)));
    set32(c.r[13], ld32((c.r[10].w[0] + 13848u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 73;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_002A7070; } }
    c.r[14].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002A7028:
    set32(c.r[3], ld32((c.r[13].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[14].w[0] + 10368u), c.f[3]);
    st32((c.r[14].w[0] + 10372u), c.f[2]);
    st32((c.r[14].w[0] + 10376u), c.f[1]);
    st32((c.r[14].w[0] + 10380u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13944u)));
    c.r[3].d[0] = c.r[12].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7028u | kUnwind; return; } goto L_002A7028; } }
L_002A7070:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13940u)));
    set32(c.r[15], ld32((c.r[10].w[0] + 13832u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002A70F8; } }
    c.r[24].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002A7088:
    set32(c.r[13], ld32((c.r[15].w[0])));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[3], c.r[13].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[12], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    set32(c.r[3], c.r[13].w[0] + 1u);
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[24].w[0] + 1152u), c.f[3]);
    st32((c.r[24].w[0] + 1156u), c.f[2]);
    st32((c.r[24].w[0] + 1160u), c.f[1]);
    st32((c.r[24].w[0] + 1164u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[24].w[0] + 8064u), c.f[3]);
    st32((c.r[24].w[0] + 8068u), c.f[2]);
    st32((c.r[24].w[0] + 8072u), c.f[1]);
    st32((c.r[24].w[0] + 8076u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13940u)));
    c.r[3].d[0] = c.r[14].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[24], c.r[24].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7088u | kUnwind; return; } goto L_002A7088; } }
L_002A70F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13946u)));
    set32(c.r[15], ld32((c.r[10].w[0] + 13856u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002A7180; } }
    c.r[24].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002A7110:
    set32(c.r[13], ld32((c.r[15].w[0])));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[3], c.r[13].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[12], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    set32(c.r[3], c.r[13].w[0] + 1u);
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[24].w[0] + 4608u), c.f[3]);
    st32((c.r[24].w[0] + 4612u), c.f[2]);
    st32((c.r[24].w[0] + 4616u), c.f[1]);
    st32((c.r[24].w[0] + 4620u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[24].w[0] + 11520u), c.f[3]);
    st32((c.r[24].w[0] + 11524u), c.f[2]);
    st32((c.r[24].w[0] + 11528u), c.f[1]);
    st32((c.r[24].w[0] + 11532u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13946u)));
    c.r[3].d[0] = c.r[14].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[24], c.r[24].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7110u | kUnwind; return; } goto L_002A7110; } }
L_002A7180:
    set32(c.r[13], ld32((c.r[11].w[0])));
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 576u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[13].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6E08u | kUnwind; return; } goto L_002A6E08; } }
    c.budget -= 1;
L_002A71A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 14094u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002A7558; } }
    c.budget -= 1;
L_002A71C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16672u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_002A7558; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[13], ld32((c.r[1].w[0] + 13152u)));
    set32(c.r[3], c.r[3].w[0] + 13152u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[13].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002A7548; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[11], c.r[4].w[0] + c.r[8].w[0]);
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
L_002A7208:
    set32(c.r[12], ld32((c.r[7].w[0])));
    set32(c.r[5], ld32((c.r[13].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[11].w[0] + 13824u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[13].w[0] + 12u)));
    st32((c.r[11].w[0] + 13848u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[13].w[0])));
    st32((c.r[11].w[0] + 13832u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[13].w[0] + 8u)));
    st32((c.r[11].w[0] + 13856u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[13].w[0] + 16u)));
    st32((c.r[11].w[0] + 13872u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 20u)));
    st8((c.r[10].w[0] + 13920u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 21u)));
    st8((c.r[10].w[0] + 13926u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 22u)));
    st8((c.r[10].w[0] + 13932u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 23u)));
    st8((c.r[10].w[0] + 13938u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 24u)));
    st8((c.r[10].w[0] + 13944u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 25u)));
    st8((c.r[10].w[0] + 13940u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 26u)));
    st8((c.r[10].w[0] + 13946u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[12].w[0] + 4u)));
    st32((c.r[11].w[0] + 13896u), c.r[5].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13938u)));
    set32(c.r[15], ld32((c.r[11].w[0] + 13824u)));
    c.r[1].d[0] = 0ll < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 33;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { goto L_002A7300; } }
    c.r[24].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_002A7290:
    set32(c.r[14], ld32((c.r[15].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[12], c.r[14].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[13], c.r[5].w[0] + c.r[12].w[0]);
    c.f[3] = ld32((c.r[13].w[0]));
    set32(c.r[12], c.r[14].w[0] + 1u);
    c.f[2] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[12], c.r[12].w[0] << 4);
    c.f[1] = ld32((c.r[13].w[0] + 8u));
    set32(c.r[12], c.r[5].w[0] + c.r[12].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    st32((c.r[24].w[0]), c.f[3]);
    st32((c.r[24].w[0] + 4u), c.f[2]);
    st32((c.r[24].w[0] + 8u), c.f[1]);
    st32((c.r[24].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[24].w[0] + 6912u), c.f[3]);
    st32((c.r[24].w[0] + 6916u), c.f[2]);
    st32((c.r[24].w[0] + 6920u), c.f[1]);
    st32((c.r[24].w[0] + 6924u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13938u)));
    c.r[12].d[0] = c.r[4].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[24], c.r[24].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7290u | kUnwind; return; } goto L_002A7290; } }
L_002A7300:
    set32(c.r[4], ld32((c.r[11].w[0] + 13872u)));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[9].w[0] + 3456u), c.f[3]);
    st32((c.r[9].w[0] + 3460u), c.f[2]);
    st32((c.r[9].w[0] + 3464u), c.f[1]);
    st32((c.r[9].w[0] + 3468u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[9].w[0] + 3472u), c.f[3]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    st32((c.r[9].w[0] + 3476u), c.f[2]);
    st32((c.r[9].w[0] + 3480u), c.f[1]);
    st32((c.r[9].w[0] + 3484u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[9].w[0] + 3488u), c.f[3]);
    st32((c.r[9].w[0] + 3492u), c.f[2]);
    st32((c.r[9].w[0] + 3496u), c.f[1]);
    st32((c.r[9].w[0] + 3500u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[9].w[0] + 3504u), c.f[3]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    st32((c.r[9].w[0] + 3508u), c.f[2]);
    st32((c.r[9].w[0] + 3512u), c.f[1]);
    st32((c.r[9].w[0] + 3516u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[9].w[0] + 3520u), c.f[3]);
    st32((c.r[9].w[0] + 3524u), c.f[2]);
    st32((c.r[9].w[0] + 3528u), c.f[1]);
    st32((c.r[9].w[0] + 3532u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13944u)));
    set32(c.r[13], ld32((c.r[11].w[0] + 13848u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 48;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_002A7410; } }
    c.r[14].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_002A73C8:
    set32(c.r[4], ld32((c.r[13].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[14].w[0] + 10368u), c.f[3]);
    st32((c.r[14].w[0] + 10372u), c.f[2]);
    st32((c.r[14].w[0] + 10376u), c.f[1]);
    st32((c.r[14].w[0] + 10380u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13944u)));
    c.r[4].d[0] = c.r[12].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A73C8u | kUnwind; return; } goto L_002A73C8; } }
L_002A7410:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13940u)));
    set32(c.r[15], ld32((c.r[11].w[0] + 13832u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002A7498; } }
    c.r[24].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_002A7428:
    set32(c.r[13], ld32((c.r[15].w[0])));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[4], c.r[13].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[12], c.r[5].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    set32(c.r[4], c.r[13].w[0] + 1u);
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[24].w[0] + 1152u), c.f[3]);
    st32((c.r[24].w[0] + 1156u), c.f[2]);
    st32((c.r[24].w[0] + 1160u), c.f[1]);
    st32((c.r[24].w[0] + 1164u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[24].w[0] + 8064u), c.f[3]);
    st32((c.r[24].w[0] + 8068u), c.f[2]);
    st32((c.r[24].w[0] + 8072u), c.f[1]);
    st32((c.r[24].w[0] + 8076u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13940u)));
    c.r[4].d[0] = c.r[14].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[24], c.r[24].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7428u | kUnwind; return; } goto L_002A7428; } }
L_002A7498:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13946u)));
    set32(c.r[15], ld32((c.r[11].w[0] + 13856u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002A7520; } }
    c.r[24].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_002A74B0:
    set32(c.r[13], ld32((c.r[15].w[0])));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[4], c.r[13].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[12], c.r[5].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    set32(c.r[4], c.r[13].w[0] + 1u);
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[24].w[0] + 4608u), c.f[3]);
    st32((c.r[24].w[0] + 4612u), c.f[2]);
    st32((c.r[24].w[0] + 4616u), c.f[1]);
    st32((c.r[24].w[0] + 4620u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[24].w[0] + 11520u), c.f[3]);
    st32((c.r[24].w[0] + 11524u), c.f[2]);
    st32((c.r[24].w[0] + 11528u), c.f[1]);
    st32((c.r[24].w[0] + 11532u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 13946u)));
    c.r[4].d[0] = c.r[14].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[24], c.r[24].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A74B0u | kUnwind; return; } goto L_002A74B0; } }
L_002A7520:
    set32(c.r[13], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.r[6].d[0] = c.r[4].d[0] << 56;
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 576u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[13].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7208u | kUnwind; return; } goto L_002A7208; } }
    c.budget -= 1;
L_002A7548:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 14094u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
L_002A7558:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[7], 0u + 26064u);
    set32(c.r[6], c.r[6].w[0] - 608u);
    set32(c.r[5], 0u + 13952u);
    set32(c.r[3], c.r[3].w[0] + 14095u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 26044u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002A7630; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 22192u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A75C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75D0u);  if (depth < kMaxDepth) unit_0069(c, 205u, depth + 1u); else { c.pc = 0x002A7640u; return; } if (c.pc != 0x002A75D0u) [[unlikely]] return; }
L_002A75D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7630; } }
L_002A75D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75E0u);  if (depth < kMaxDepth) unit_0069(c, 236u, depth + 1u); else { c.pc = 0x002A79E0u; return; } if (c.pc != 0x002A75E0u) [[unlikely]] return; }
L_002A75E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7630; } }
L_002A75E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75F0u);  if (depth < kMaxDepth) unit_0069(c, 262u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A75F0u) [[unlikely]] return; }
L_002A75F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7630; } }
L_002A75F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7600u);  if (depth < kMaxDepth) unit_006A(c, 35u, depth + 1u); else { c.pc = 0x002A8650u; return; } if (c.pc != 0x002A7600u) [[unlikely]] return; }
L_002A7600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7630; } }
L_002A7608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7610u);  if (depth < kMaxDepth) unit_006A(c, 38u, depth + 1u); else { c.pc = 0x002A89E0u; return; } if (c.pc != 0x002A7610u) [[unlikely]] return; }
L_002A7610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7630; } }
L_002A7618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7620u);  if (depth < kMaxDepth) unit_006A(c, 68u, depth + 1u); else { c.pc = 0x002A91A0u; return; } if (c.pc != 0x002A7620u) [[unlikely]] return; }
L_002A7620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7630; } }
L_002A7628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7630u);  if (depth < kMaxDepth) unit_006A(c, 71u, depth + 1u); else { c.pc = 0x002A94C0u; return; } if (c.pc != 0x002A7630u) [[unlikely]] return; }
L_002A7630:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A7640:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7678u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0049(c, 184u, depth + 1u); else { c.pc = 0x002253F0u; return; } if (c.pc != 0x002A7678u) [[unlikely]] return; }
L_002A7678:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 13952u);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 176u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 14094u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A7998; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st32((c.r[29].w[0] + 176u), 0u);
    set32(c.r[2], c.r[2].w[0] + 144u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + 13950u);
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    c.r[23].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 9;
L_002A76D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13920u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76ECu); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x002A76ECu) [[unlikely]] return; }
L_002A76EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13926u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7708u); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x002A7708u) [[unlikely]] return; }
L_002A7708:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13932u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7724u); set32(c.r[5], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002A7724u) [[unlikely]] return; }
L_002A7724:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 304u);
    set32(c.r[30], c.r[29].w[0] + 240u);
    set32(c.r[16], c.r[29].w[0] + 368u);
    c.budget -= 5;
L_002A7738:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7748u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002A7748u) [[unlikely]] return; }
L_002A7748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A775Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002A775Cu) [[unlikely]] return; }
L_002A775C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7768u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002A7768u) [[unlikely]] return; }
L_002A7768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x002A7770u) [[unlikely]] return; }
L_002A7770:
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[30], c.r[30].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7738u | kUnwind; return; } goto L_002A7738; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13938u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7798u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A7798u) [[unlikely]] return; }
L_002A7798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77A0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002A77A0u) [[unlikely]] return; }
L_002A77A0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77B0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A77B0u) [[unlikely]] return; }
L_002A77B0:
    set32(c.r[4], c.r[22].w[0] + 6912u);
    set32(c.r[5], c.r[21].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77C0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A77C0u) [[unlikely]] return; }
L_002A77C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13932u)));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77D8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A77D8u) [[unlikely]] return; }
L_002A77D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x002A77E8u) [[unlikely]] return; }
L_002A77E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77F0u); set32(c.r[4], c.r[21].w[0] + 1280u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002A77F0u) [[unlikely]] return; }
L_002A77F0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7800u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7800u) [[unlikely]] return; }
L_002A7800:
    set32(c.r[4], c.r[21].w[0] + 640u);
    set32(c.r[5], c.r[21].w[0] + 960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7810u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7810u) [[unlikely]] return; }
L_002A7810:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[4], c.r[4].w[0] - 15264u);
    set32(c.r[2], ld32((c.r[23].w[0] + 13824u)));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8656u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002A78A8; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002A7858:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = ld32((c.r[5].w[0] + 320u));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 324u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 328u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 960u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 964u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 968u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7858u | kUnwind; return; } goto L_002A7858; } }
L_002A78A8:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78B4u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A78B4u) [[unlikely]] return; }
L_002A78B4:
    set32(c.r[4], c.r[22].w[0] + 3456u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A78C4u) [[unlikely]] return; }
L_002A78C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78CCu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002A78CCu) [[unlikely]] return; }
L_002A78CC:
    set32(c.r[4], c.r[22].w[0] + 10368u);
    set32(c.r[5], c.r[21].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A78DCu) [[unlikely]] return; }
L_002A78DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78E4u); set32(c.r[4], c.r[21].w[0] + 1280u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A78E4u) [[unlikely]] return; }
L_002A78E4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78F4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A78F4u) [[unlikely]] return; }
L_002A78F4:
    set32(c.r[4], c.r[21].w[0] + 640u);
    set32(c.r[5], c.r[21].w[0] + 960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7904u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7904u) [[unlikely]] return; }
L_002A7904:
    set32(c.r[4], ld32((c.r[23].w[0] + 13848u)));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A7968; } }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002A7918:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[6].w[0] + 320u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 324u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 328u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 960u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 964u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 968u));
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7918u | kUnwind; return; } goto L_002A7918; } }
L_002A7968:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 576u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A76D0u | kUnwind; return; } goto L_002A76D0; } }
    c.budget -= 1;
L_002A7998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A79A0u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0049(c, 185u, depth + 1u); else { c.pc = 0x00225430u; return; } if (c.pc != 0x002A79A0u) [[unlikely]] return; }
L_002A79A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A79ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x002A79ACu) [[unlikely]] return; }
L_002A79AC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_002A79E0:
    set32(c.r[29], c.r[29].w[0] - 1216u);
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
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5208u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5204u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5200u)));
    set32(c.r[2], 0u - c.r[6].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - c.r[8].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - c.r[7].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 26;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_002A7A50; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 2;
L_002A7A50:
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    set32(c.r[6], 0u - c.r[6].w[0]);
    c.r[9].d[0] = c.r[6].d[0] << 48;
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] >= 0; c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);  if (t) { goto L_002A7A74; } }
    set32(c.r[5], c.r[8].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 2;
L_002A7A74:
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    set32(c.r[6], 0u - c.r[6].w[0]);
    c.r[8].d[0] = c.r[6].d[0] << 48;
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] >= 0; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (t) { goto L_002A7A98; } }
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 2;
L_002A7A98:
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = c.r[9].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    st32((c.r[29].w[0] + 240u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[8].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u - c.r[6].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], 0u + 13952u);
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 144u);
    set32(c.r[4], ld32((c.r[21].w[0] + 176u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 32;
L_002A7B18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 13932u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B2Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A7B2Cu) [[unlikely]] return; }
L_002A7B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B34u); set32(c.r[4], ld32((c.r[29].w[0] + 240u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002A7B34u) [[unlikely]] return; }
L_002A7B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B3Cu); set32(c.r[4], ld32((c.r[29].w[0] + 224u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002A7B3Cu) [[unlikely]] return; }
L_002A7B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B44u); set32(c.r[4], ld32((c.r[29].w[0] + 208u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002A7B44u) [[unlikely]] return; }
L_002A7B44:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B54u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7B54u) [[unlikely]] return; }
L_002A7B54:
    set32(c.r[4], c.r[19].w[0] + 6912u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B64u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7B64u) [[unlikely]] return; }
L_002A7B64:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 13932u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B78u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A7B78u) [[unlikely]] return; }
L_002A7B78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B88u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x002A7B88u) [[unlikely]] return; }
L_002A7B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B90u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002A7B90u) [[unlikely]] return; }
L_002A7B90:
    set32(c.r[4], c.r[29].w[0] + 768u);
    set32(c.r[5], c.r[29].w[0] + 992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BA0u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7BA0u) [[unlikely]] return; }
L_002A7BA0:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BB0u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7BB0u) [[unlikely]] return; }
L_002A7BB0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00AE0000u);
    set32(c.r[17], c.r[29].w[0] + 992u);
    set32(c.r[16], c.r[29].w[0] + 544u);
    set32(c.r[6], c.r[6].w[0] - 15264u);
    set32(c.r[5], ld32((c.r[18].w[0] + 13824u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[23].w[0] + c.r[6].w[0]);
    set32(c.r[30], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 18;
L_002A7BF8:
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[6].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[30].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7BF8u | kUnwind; return; } goto L_002A7BF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 13926u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C60u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A7C60u) [[unlikely]] return; }
L_002A7C60:
    set32(c.r[4], c.r[19].w[0] + 3456u);
    set32(c.r[5], c.r[29].w[0] + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C70u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7C70u) [[unlikely]] return; }
L_002A7C70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 13932u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C84u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A7C84u) [[unlikely]] return; }
L_002A7C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C8Cu); set32(c.r[4], ld32((c.r[29].w[0] + 192u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002A7C8Cu) [[unlikely]] return; }
L_002A7C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C94u); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002A7C94u) [[unlikely]] return; }
L_002A7C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C9Cu); set32(c.r[4], ld32((c.r[29].w[0] + 160u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002A7C9Cu) [[unlikely]] return; }
L_002A7C9C:
    set32(c.r[4], c.r[19].w[0] + 10368u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CACu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7CACu) [[unlikely]] return; }
L_002A7CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CB4u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A7CB4u) [[unlikely]] return; }
L_002A7CB4:
    set32(c.r[4], c.r[29].w[0] + 768u);
    set32(c.r[5], c.r[29].w[0] + 992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CC4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7CC4u) [[unlikely]] return; }
L_002A7CC4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CD4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7CD4u) [[unlikely]] return; }
L_002A7CD4:
    set32(c.r[5], ld32((c.r[18].w[0] + 13848u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002A7CE0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[30].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7CE0u | kUnwind; return; } goto L_002A7CE0; } }
    set32(c.r[2], c.r[22].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[22].d[0] = c.r[2].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 576u);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7B18u | kUnwind; return; } goto L_002A7B18; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x002A7D64u) [[unlikely]] return; }
L_002A7D64:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1216u);  c.pc = t; return; }
L_002A7DA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 390u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7DD4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0049(c, 184u, depth + 1u); else { c.pc = 0x002253F0u; return; } if (c.pc != 0x002A7DD4u) [[unlikely]] return; }
L_002A7DD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_006A(c, 32u, depth); } }
L_002A7DE8:
    c.r[4].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 14064u);
    set32(c.r[5], c.r[16].w[0] + 6208u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E28u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 318u, depth + 1u); else { c.pc = 0x001BB220u; return; } if (c.pc != 0x002A7E28u) [[unlikely]] return; }
L_002A7E28:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 13952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[16].w[0] + 6224u);
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
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E68u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 318u, depth + 1u); else { c.pc = 0x001BB220u; return; } if (c.pc != 0x002A7E68u) [[unlikely]] return; }
L_002A7E68:
    set32(c.r[3], ld32((c.r[16].w[0] + 6224u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 6208u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 6208u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 6232u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 6216u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 6216u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6208u));
    st32((c.r[16].w[0] + 6208u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6216u));
    st32((c.r[16].w[0] + 6216u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6216u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6208u)));
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_002A7EB0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_002A7EB0:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 2));
    set32(c.r[3], 0u - c.r[18].w[0]);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] >= 0; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_002A7ED4; } }
    set32(c.r[2], c.r[17].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_002A7ED4:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.r[17].d[0] = c.r[5].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F24u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002A7F24u) [[unlikely]] return; }
L_002A7F24:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F30u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002A7F30u) [[unlikely]] return; }
L_002A7F30:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F3Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002A7F3Cu) [[unlikely]] return; }
L_002A7F3C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 2560u);
    set32(c.r[6], 0u + 32u);
    c.r[2].d[0] = c.r[20].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F80u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7F80u) [[unlikely]] return; }
L_002A7F80:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 3584u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FC8u); set32(c.r[4], c.r[2].w[0] + 6912u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x002A7FC8u) [[unlikely]] return; }
L_002A7FC8:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FD4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002A7FD4u) [[unlikely]] return; }
L_002A7FD4:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FE0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002A7FE0u) [[unlikely]] return; }
L_002A7FE0:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 13952u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 512u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
    [[clang::musttail]] return unit_006A(c, 1u, depth);
}

}
