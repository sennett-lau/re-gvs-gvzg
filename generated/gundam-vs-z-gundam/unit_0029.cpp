#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0029[4096] = {
    1, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0,
    80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0,
    185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0,
    213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0,
    229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
};

void unit_0029(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A4000;
    case 2u: goto L_001A4004;
    case 3u: goto L_001A400C;
    case 4u: goto L_001A4014;
    case 5u: goto L_001A4020;
    case 6u: goto L_001A4030;
    case 7u: goto L_001A4050;
    case 8u: goto L_001A4058;
    case 9u: goto L_001A4060;
    case 10u: goto L_001A4070;
    case 11u: goto L_001A4090;
    case 12u: goto L_001A4098;
    case 13u: goto L_001A40A0;
    case 14u: goto L_001A40B0;
    case 15u: goto L_001A40E8;
    case 16u: goto L_001A40F4;
    case 17u: goto L_001A4114;
    case 18u: goto L_001A411C;
    case 19u: goto L_001A4128;
    case 20u: goto L_001A4160;
    case 21u: goto L_001A416C;
    case 22u: goto L_001A418C;
    case 23u: goto L_001A4194;
    case 24u: goto L_001A41A0;
    case 25u: goto L_001A41A8;
    case 26u: goto L_001A41C0;
    case 27u: goto L_001A4338;
    case 28u: goto L_001A4344;
    case 29u: goto L_001A4388;
    case 30u: goto L_001A43EC;
    case 31u: goto L_001A43F8;
    case 32u: goto L_001A4414;
    case 33u: goto L_001A4460;
    case 34u: goto L_001A4490;
    case 35u: goto L_001A44F8;
    case 36u: goto L_001A4504;
    case 37u: goto L_001A454C;
    case 38u: goto L_001A45B0;
    case 39u: goto L_001A45BC;
    case 40u: goto L_001A45F0;
    case 41u: goto L_001A4608;
    case 42u: goto L_001A4638;
    case 43u: goto L_001A466C;
    case 44u: goto L_001A4678;
    case 45u: goto L_001A46A8;
    case 46u: goto L_001A4828;
    case 47u: goto L_001A4858;
    case 48u: goto L_001A4884;
    case 49u: goto L_001A4890;
    case 50u: goto L_001A48BC;
    case 51u: goto L_001A4900;
    case 52u: goto L_001A490C;
    case 53u: goto L_001A4938;
    case 54u: goto L_001A4BD0;
    case 55u: goto L_001A4BF0;
    case 56u: goto L_001A4C64;
    case 57u: goto L_001A4C98;
    case 58u: goto L_001A4CA4;
    case 59u: goto L_001A4CB8;
    case 60u: goto L_001A4CCC;
    case 61u: goto L_001A4D10;
    case 62u: goto L_001A4D20;
    case 63u: goto L_001A4D6C;
    case 64u: goto L_001A4D74;
    case 65u: goto L_001A4D90;
    case 66u: goto L_001A4DBC;
    case 67u: goto L_001A4DF0;
    case 68u: goto L_001A4DF8;
    case 69u: goto L_001A4E38;
    case 70u: goto L_001A4ED4;
    case 71u: goto L_001A4EDC;
    case 72u: goto L_001A4EF0;
    case 73u: goto L_001A4F00;
    case 74u: goto L_001A4F20;
    case 75u: goto L_001A4F50;
    case 76u: goto L_001A4F74;
    case 77u: goto L_001A4F9C;
    case 78u: goto L_001A4FE0;
    case 79u: goto L_001A4FF8;
    case 80u: goto L_001A5000;
    case 81u: goto L_001A5018;
    case 82u: goto L_001A5024;
    case 83u: goto L_001A5038;
    case 84u: goto L_001A5040;
    case 85u: goto L_001A5064;
    case 86u: goto L_001A50A4;
    case 87u: goto L_001A50CC;
    case 88u: goto L_001A50DC;
    case 89u: goto L_001A50EC;
    case 90u: goto L_001A5108;
    case 91u: goto L_001A5150;
    case 92u: goto L_001A51C0;
    case 93u: goto L_001A51C8;
    case 94u: goto L_001A51D8;
    case 95u: goto L_001A51E0;
    case 96u: goto L_001A5208;
    case 97u: goto L_001A5210;
    case 98u: goto L_001A5220;
    case 99u: goto L_001A5228;
    case 100u: goto L_001A5260;
    case 101u: goto L_001A5298;
    case 102u: goto L_001A52A8;
    case 103u: goto L_001A52D4;
    case 104u: goto L_001A5318;
    case 105u: goto L_001A5350;
    case 106u: goto L_001A5428;
    case 107u: goto L_001A5458;
    case 108u: goto L_001A54F0;
    case 109u: goto L_001A5510;
    case 110u: goto L_001A5620;
    case 111u: goto L_001A5670;
    case 112u: goto L_001A56AC;
    case 113u: goto L_001A56E0;
    case 114u: goto L_001A5770;
    case 115u: goto L_001A57A0;
    case 116u: goto L_001A5820;
    case 117u: goto L_001A5870;
    case 118u: goto L_001A5940;
    case 119u: goto L_001A596C;
    case 120u: goto L_001A5990;
    case 121u: goto L_001A5AD4;
    case 122u: goto L_001A5B18;
    case 123u: goto L_001A5C30;
    case 124u: goto L_001A5C68;
    case 125u: goto L_001A5C7C;
    case 126u: goto L_001A5C84;
    case 127u: goto L_001A5CB4;
    case 128u: goto L_001A5CE0;
    case 129u: goto L_001A5DB0;
    case 130u: goto L_001A5DE0;
    case 131u: goto L_001A5E70;
    case 132u: goto L_001A5E90;
    case 133u: goto L_001A5EA0;
    case 134u: goto L_001A5EBC;
    case 135u: goto L_001A5ED0;
    case 136u: goto L_001A5ED8;
    case 137u: goto L_001A5F04;
    case 138u: goto L_001A5F30;
    case 139u: goto L_001A5F94;
    case 140u: goto L_001A5FC0;
    case 141u: goto L_001A6030;
    case 142u: goto L_001A6040;
    case 143u: goto L_001A6050;
    case 144u: goto L_001A6070;
    case 145u: goto L_001A60E8;
    case 146u: goto L_001A6140;
    case 147u: goto L_001A6170;
    case 148u: goto L_001A6240;
    case 149u: goto L_001A62A0;
    case 150u: goto L_001A62F8;
    case 151u: goto L_001A6330;
    case 152u: goto L_001A635C;
    case 153u: goto L_001A63C0;
    case 154u: goto L_001A6408;
    case 155u: goto L_001A6428;
    case 156u: goto L_001A6480;
    case 157u: goto L_001A6490;
    case 158u: goto L_001A6540;
    case 159u: goto L_001A6550;
    case 160u: goto L_001A6578;
    case 161u: goto L_001A6590;
    case 162u: goto L_001A65AC;
    case 163u: goto L_001A65D0;
    case 164u: goto L_001A6684;
    case 165u: goto L_001A6690;
    case 166u: goto L_001A66A0;
    case 167u: goto L_001A66BC;
    case 168u: goto L_001A6710;
    case 169u: goto L_001A67A8;
    case 170u: goto L_001A67B8;
    case 171u: goto L_001A6814;
    case 172u: goto L_001A6834;
    case 173u: goto L_001A68C0;
    case 174u: goto L_001A6910;
    case 175u: goto L_001A6924;
    case 176u: goto L_001A692C;
    case 177u: goto L_001A694C;
    case 178u: goto L_001A697C;
    case 179u: goto L_001A69E8;
    case 180u: goto L_001A6A10;
    case 181u: goto L_001A6A20;
    case 182u: goto L_001A6A28;
    case 183u: goto L_001A6A64;
    case 184u: goto L_001A6A78;
    case 185u: goto L_001A6A80;
    case 186u: goto L_001A6A88;
    case 187u: goto L_001A6A90;
    case 188u: goto L_001A6A98;
    case 189u: goto L_001A6AA0;
    case 190u: goto L_001A6AA8;
    case 191u: goto L_001A6AB0;
    case 192u: goto L_001A6AB8;
    case 193u: goto L_001A6AC8;
    case 194u: goto L_001A6AD0;
    case 195u: goto L_001A6B18;
    case 196u: goto L_001A6B30;
    case 197u: goto L_001A6B68;
    case 198u: goto L_001A6B70;
    case 199u: goto L_001A6BD0;
    case 200u: goto L_001A6BD8;
    case 201u: goto L_001A6C04;
    case 202u: goto L_001A6C14;
    case 203u: goto L_001A6C7C;
    case 204u: goto L_001A6CC4;
    case 205u: goto L_001A6CD0;
    case 206u: goto L_001A6CF0;
    case 207u: goto L_001A6D20;
    case 208u: goto L_001A6D30;
    case 209u: goto L_001A6DA8;
    case 210u: goto L_001A6DE8;
    case 211u: goto L_001A6DF0;
    case 212u: goto L_001A6DF8;
    case 213u: goto L_001A6E00;
    case 214u: goto L_001A6E08;
    case 215u: goto L_001A6E10;
    case 216u: goto L_001A6E18;
    case 217u: goto L_001A6E20;
    case 218u: goto L_001A6E28;
    case 219u: goto L_001A6E30;
    case 220u: goto L_001A6E38;
    case 221u: goto L_001A6E40;
    case 222u: goto L_001A6E48;
    case 223u: goto L_001A6E50;
    case 224u: goto L_001A6E58;
    case 225u: goto L_001A6E60;
    case 226u: goto L_001A6E68;
    case 227u: goto L_001A6E70;
    case 228u: goto L_001A6E78;
    case 229u: goto L_001A6E80;
    case 230u: goto L_001A6E88;
    case 231u: goto L_001A6E90;
    case 232u: goto L_001A6E98;
    case 233u: goto L_001A6EA0;
    case 234u: goto L_001A6EA8;
    case 235u: goto L_001A6EB0;
    case 236u: goto L_001A6EB8;
    case 237u: goto L_001A6EC0;
    case 238u: goto L_001A6EC8;
    case 239u: goto L_001A6ED0;
    case 240u: goto L_001A6ED8;
    case 241u: goto L_001A6EE0;
    case 242u: goto L_001A6EE8;
    case 243u: goto L_001A6F00;
    case 244u: goto L_001A6FB8;
    case 245u: goto L_001A6FDC;
    case 246u: goto L_001A70E0;
    case 247u: goto L_001A7118;
    case 248u: goto L_001A7124;
    case 249u: goto L_001A713C;
    case 250u: goto L_001A7148;
    case 251u: goto L_001A7198;
    case 252u: goto L_001A71CC;
    case 253u: goto L_001A71E8;
    case 254u: goto L_001A7210;
    case 255u: goto L_001A7260;
    case 256u: goto L_001A7298;
    case 257u: goto L_001A72B0;
    case 258u: goto L_001A72C4;
    case 259u: goto L_001A7338;
    case 260u: goto L_001A7380;
    case 261u: goto L_001A7398;
    case 262u: goto L_001A73B0;
    case 263u: goto L_001A73C8;
    case 264u: goto L_001A73E0;
    case 265u: goto L_001A73F8;
    case 266u: goto L_001A7458;
    case 267u: goto L_001A7560;
    case 268u: goto L_001A760C;
    case 269u: goto L_001A7650;
    case 270u: goto L_001A7660;
    case 271u: goto L_001A76C8;
    case 272u: goto L_001A7700;
    case 273u: goto L_001A7714;
    case 274u: goto L_001A772C;
    case 275u: goto L_001A775C;
    case 276u: goto L_001A7858;
    case 277u: goto L_001A78C0;
    case 278u: goto L_001A795C;
    case 279u: goto L_001A7A70;
    case 280u: goto L_001A7BA0;
    case 281u: goto L_001A7C00;
    case 282u: goto L_001A7C40;
    case 283u: goto L_001A7C90;
    case 284u: goto L_001A7D70;
    case 285u: goto L_001A7E10;
    case 286u: goto L_001A7E28;
    case 287u: goto L_001A7EAC;
    case 288u: goto L_001A7ECC;
    case 289u: goto L_001A7ED8;
    case 290u: goto L_001A7F04;
    case 291u: goto L_001A7F3C;
    case 292u: goto L_001A7F90;
    case 293u: goto L_001A7FE8;
    default: bad_entry(c, 0x001A4000u); return;
    }
L_001A4000:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A4004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A400Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A400Cu) [[unlikely]] return; }
L_001A400C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4014u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A4014u) [[unlikely]] return; }
L_001A4014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 1;
L_001A4020:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4030u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x001A4030u) [[unlikely]] return; }
L_001A4030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4050u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A4050u) [[unlikely]] return; }
L_001A4050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A4058u) [[unlikely]] return; }
L_001A4058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A41A8; } }
L_001A4060:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4070u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x001A4070u) [[unlikely]] return; }
L_001A4070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4090u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A4090u) [[unlikely]] return; }
L_001A4090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4098u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A4098u) [[unlikely]] return; }
L_001A4098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A41A8; } }
L_001A40A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A40B0u);  if (depth < kMaxDepth) unit_0025(c, 42u, depth + 1u); else { c.pc = 0x00194EC0u; return; } if (c.pc != 0x001A40B0u) [[unlikely]] return; }
L_001A40B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A41A8; } }
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A40E8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A40E8u) [[unlikely]] return; }
L_001A40E8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A40F4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A40F4u) [[unlikely]] return; }
L_001A40F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4114u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A4114u) [[unlikely]] return; }
L_001A4114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A411Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A411Cu) [[unlikely]] return; }
L_001A411C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 1;
L_001A4128:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A41A8; } }
    c.f[5] = ld32((c.r[17].w[0] + 1872u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1880u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 1876u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4160u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A4160u) [[unlikely]] return; }
L_001A4160:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A416Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A416Cu) [[unlikely]] return; }
L_001A416C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A418Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A418Cu) [[unlikely]] return; }
L_001A418C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4194u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A4194u) [[unlikely]] return; }
L_001A4194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A41A8; } }
    c.budget -= 1;
L_001A41A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1946u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A41A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A41C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1940u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A4BB0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1856u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4218; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1856u), c.f[0]);  if (t) { goto L_001A4240; } }
L_001A4218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A4240; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.budget -= 4;
L_001A4240:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4270; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A4298; } }
    c.budget -= 1;
L_001A4270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A4298; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1864u), c.f[0]);
    c.budget -= 4;
L_001A4298:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 34u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 33u);  if (t) { goto L_001A4960; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A4830; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A4818; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A4818; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 26u);  if (t) { goto L_001A46D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A42E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A42E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4BB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[4] = c.r[2].w[0];
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42830000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4338u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A4338u) [[unlikely]] return; }
L_001A4338:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4344u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A4344u) [[unlikely]] return; }
L_001A4344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);  if (t) { goto L_001A44B8; } }
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 1856u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4388u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A4388u) [[unlikely]] return; }
L_001A4388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4BB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4400; } }
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A43ECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A43ECu) [[unlikely]] return; }
L_001A43EC:
    c.facc = fp::mul(c.f[22], c.f[22]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A43F8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A43F8u) [[unlikely]] return; }
L_001A43F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0];  if (t) { goto L_001A4408; } }
L_001A4400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[22] = c.r[2].w[0];
    c.budget -= 2;
L_001A4408:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4414u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A4414u) [[unlikely]] return; }
L_001A4414:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4458; } }
    c.r[2].d[0] = 0ull | 40960ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A4448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 8192u);  if (t) { goto L_001A4450; } }
L_001A4448:
    set32(c.r[17], c.r[17].w[0] - 8192u);
    c.budget -= 2;
L_001A4450:
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 2;
L_001A4458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4460u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A4460u) [[unlikely]] return; }
L_001A4460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4490u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A4490u) [[unlikely]] return; }
L_001A4490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A44B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[3].d[0] = c.r[2].d[0] | 49152ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A44F8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A44F8u) [[unlikely]] return; }
L_001A44F8:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4504u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A4504u) [[unlikely]] return; }
L_001A4504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4BB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 1856u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A454Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A454Cu) [[unlikely]] return; }
L_001A454C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A4BB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A45C8; } }
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42830000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A45B0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A45B0u) [[unlikely]] return; }
L_001A45B0:
    c.facc = fp::mul(c.f[22], c.f[22]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A45BCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A45BCu) [[unlikely]] return; }
L_001A45BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A45D0; } }
    c.budget -= 1;
L_001A45C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_001A45D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A4660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A45F0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A45F0u) [[unlikely]] return; }
L_001A45F0:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] + 6144u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4608u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A4608u) [[unlikely]] return; }
L_001A4608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4638u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A4638u) [[unlikely]] return; }
L_001A4638:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4660:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A466Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A466Cu) [[unlikely]] return; }
L_001A466C:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A4678u) [[unlikely]] return; }
L_001A4678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A46A8u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A46A8u) [[unlikely]] return; }
L_001A46A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A46D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44970000u);  if (t) { goto L_001A4BB0; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4BB0; } }
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44840000u);  if (t) { goto L_001A4BB0; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4BB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A47B0; } }
    c.f[0] = ld32((c.r[16].w[0] + 1864u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A4BB0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1856u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x44430000u);  if (t) { goto L_001A4790; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x444A0000u);
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44990000u);
    c.r[4].d[0] = c.r[3].d[0] | 49152ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x444A0000u);
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A47B0:
    c.f[0] = ld32((c.r[16].w[0] + 1864u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4BB0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1856u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x44430000u);  if (t) { goto L_001A47F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44830000u);
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A47F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44990000u);
    c.r[4].d[0] = c.r[3].d[0] | 49152ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44830000u);
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4818:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4828u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 122u, depth + 1u); else { c.pc = 0x001AAB60u; return; } if (c.pc != 0x001A4828u) [[unlikely]] return; }
L_001A4828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4BB0; } }
L_001A4830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = ld32((c.r[16].w[0] + 1856u));
    c.f[0] = ld32((c.r[16].w[0] + 1864u));
    c.f[1] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[2], c.f[1]);
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4858u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A4858u) [[unlikely]] return; }
L_001A4858:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);  if (t) { goto L_001A48E0; } }
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[21];  if (t) { goto L_001A4BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4884u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A4884u) [[unlikely]] return; }
L_001A4884:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4890u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A4890u) [[unlikely]] return; }
L_001A4890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A48BCu); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A48BCu) [[unlikely]] return; }
L_001A48BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A4BB0; } }
L_001A48E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[21];  if (t) { goto L_001A4BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4900u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A4900u) [[unlikely]] return; }
L_001A4900:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A490Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A490Cu) [[unlikely]] return; }
L_001A490C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4938u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A4938u) [[unlikely]] return; }
L_001A4938:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4960:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44340000u);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A49E0; } }
    c.f[0] = ld32((c.r[16].w[0] + 1856u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A4BB0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x443F0000u);  if (t) { goto L_001A49C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44300000u);
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
L_001A49C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443F0000u);
    c.r[4].d[0] = c.r[3].d[0] | 16384ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44960000u);
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
L_001A49E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44970000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A4A68; } }
    c.f[0] = ld32((c.r[16].w[0] + 1856u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4BB0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x44920000u);  if (t) { goto L_001A4A48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44390000u);
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4A48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44920000u);
    c.r[4].d[0] = c.r[3].d[0] | 16384ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44910000u);
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4A68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x444A0000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x448D0000u);  if (t) { goto L_001A4BB0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4BB0; } }
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445E0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A4B28; } }
    c.f[3] = ld32((c.r[16].w[0] + 1856u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x443F0000u);  if (t) { goto L_001A4AD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44300000u);
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
L_001A4AD8:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x44920000u);  if (t) { goto L_001A4B00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44390000u);
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4B00:
    c.f[0] = ld32((c.r[16].w[0] + 1864u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x44720000u);  if (t) { goto L_001A4BB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44730000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A4BB0; } }
    c.f[3] = ld32((c.r[16].w[0] + 1856u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x443F0000u);  if (t) { goto L_001A4B68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
L_001A4B68:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x44920000u);  if (t) { goto L_001A4B90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44910000u);
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);  if (t) { goto L_001A4BB0; } }
    c.budget -= 1;
L_001A4B90:
    c.f[0] = ld32((c.r[16].w[0] + 1864u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x44720000u);  if (t) { goto L_001A4BB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    st32((c.r[16].w[0] + 1856u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 1864u), c.r[3].w[0]);
    c.budget -= 4;
L_001A4BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A4BD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 12704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A4BF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A4C80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A4C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4D10; } }
L_001A4C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4C40; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4D10; } }
    c.budget -= 1;
L_001A4C40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1816u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A4C70; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4C64u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 144u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001A4C64u) [[unlikely]] return; }
L_001A4C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4D10; } }
    c.budget -= 1;
L_001A4C70:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A4D10; } }
    c.budget -= 1;
L_001A4C80:
    set32(c.r[3], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_001A4CD8; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4C98u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A4C98u) [[unlikely]] return; }
L_001A4C98:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4CA4u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A4CA4u) [[unlikely]] return; }
L_001A4CA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4CB8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A4CB8u) [[unlikely]] return; }
L_001A4CB8:
    c.r[1].d[0] = c.r[2].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A4CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4CCCu);  if (depth < kMaxDepth) unit_0029(c, 62u, depth + 1u); else { c.pc = 0x001A4D20u; return; } if (c.pc != 0x001A4CCCu) [[unlikely]] return; }
L_001A4CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4D10; } }
    c.budget -= 1;
L_001A4CD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4D08; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A4D10; } }
    c.budget -= 1;
L_001A4D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4D10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 62u, depth + 1u); else { c.pc = 0x001A4D20u; return; } if (c.pc != 0x001A4D10u) [[unlikely]] return; }
L_001A4D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A4D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A4D58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A4D58:
    set32(c.r[2], 0u + 300u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4D6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A4D6Cu) [[unlikely]] return; }
L_001A4D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4D74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A4D74u) [[unlikely]] return; }
L_001A4D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A4D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12640u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4DBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A4DBCu) [[unlikely]] return; }
L_001A4DBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A4DD0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A4DD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A4DF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A4DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4DF0u);  if (depth < kMaxDepth) unit_0029(c, 73u, depth + 1u); else { c.pc = 0x001A4F00u; return; } if (c.pc != 0x001A4DF0u) [[unlikely]] return; }
L_001A4DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 292u, depth + 1u); else { c.pc = 0x001A3E60u; return; } if (c.pc != 0x001A4DF8u) [[unlikely]] return; }
L_001A4DF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4E10; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A4E10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001A4E30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A4E38; } }
    c.budget -= 1;
L_001A4E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4E38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A4E38u) [[unlikely]] return; }
L_001A4E38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A4EA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001A4E60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A4EA8; } }
    c.budget -= 1;
L_001A4E60:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001A4E88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A4E88; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4EA0; } }
    c.budget -= 1;
L_001A4E88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4EA8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A4EA8; } }
L_001A4EA0:
    set32(c.r[3], 0u + 20u);
    st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A4EA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A4EF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 300u);  if (t) { goto L_001A4EE8; } }
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4ED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A4ED4u) [[unlikely]] return; }
L_001A4ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4EDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A4EDCu) [[unlikely]] return; }
L_001A4EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4EF0; } }
    c.budget -= 1;
L_001A4EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4EF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x001A4EF0u) [[unlikely]] return; }
L_001A4EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A4F00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4F20u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0029(c, 163u, depth + 1u); else { c.pc = 0x001A65D0u; return; } if (c.pc != 0x001A4F20u) [[unlikely]] return; }
L_001A4F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A4F88; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A4F60; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A4F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4F50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 143u, depth + 1u); else { c.pc = 0x001A6050u; return; } if (c.pc != 0x001A4F50u) [[unlikely]] return; }
L_001A4F50:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1819u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5238; } }
L_001A4F60:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A4F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4F74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 206u, depth + 1u); else { c.pc = 0x0019E6E0u; return; } if (c.pc != 0x001A4F74u) [[unlikely]] return; }
L_001A4F74:
    set32(c.r[3], 0u + 10u);
    st8((c.r[17].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1819u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5238; } }
    c.budget -= 1;
L_001A4F88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A5048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4F9Cu);  if (depth < kMaxDepth) unit_0026(c, 195u, depth + 1u); else { c.pc = 0x0019B310u; return; } if (c.pc != 0x001A4F9Cu) [[unlikely]] return; }
L_001A4F9C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A5050; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_001A4FC8; } }
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 24576u);  if (t) { goto L_001A4FD8; } }
L_001A4FC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[16], 0u + 24576u);
    c.budget -= 4;
L_001A4FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4FE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194800u; return; } if (c.pc != 0x001A4FE0u) [[unlikely]] return; }
L_001A4FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A5050; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4FF8u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A4FF8u) [[unlikely]] return; }
L_001A4FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5000u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001A5000u) [[unlikely]] return; }
L_001A5000:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A5050; } }
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5018u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A5018u) [[unlikely]] return; }
L_001A5018:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5024u); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A5024u) [[unlikely]] return; }
L_001A5024:
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A5050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5038u); st32((c.r[17].w[0] + 1920u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0029(c, 143u, depth + 1u); else { c.pc = 0x001A6050u; return; } if (c.pc != 0x001A5038u) [[unlikely]] return; }
L_001A5038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x001A5040u) [[unlikely]] return; }
L_001A5040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5238; } }
L_001A5048:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A5050:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1924u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A5230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5064u);  if (depth < kMaxDepth) unit_0026(c, 204u, depth + 1u); else { c.pc = 0x0019B410u; return; } if (c.pc != 0x001A5064u) [[unlikely]] return; }
L_001A5064:
    set32(c.r[16], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A5238; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (t) { goto L_001A508C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_001A5094; } }
L_001A508C:
    set32(c.r[3], 0u + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001A5094:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A5238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A50A4u);  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x001A50A4u) [[unlikely]] return; }
L_001A50A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A50C0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A5238; } }
L_001A50C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A50CCu); st32((c.r[17].w[0] + 1920u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0028(c, 141u, depth + 1u); else { c.pc = 0x001A21B0u; return; } if (c.pc != 0x001A50CCu) [[unlikely]] return; }
L_001A50CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A5238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A50DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 150u, depth + 1u); else { c.pc = 0x001A2310u; return; } if (c.pc != 0x001A50DCu) [[unlikely]] return; }
L_001A50DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A5238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A50ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A50ECu) [[unlikely]] return; }
L_001A50EC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5108u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A5108u) [[unlikely]] return; }
L_001A5108:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A5180; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_001A5158; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A5148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5188; } }
    c.budget -= 1;
L_001A5148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5150u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 220u, depth + 1u); else { c.pc = 0x0019B610u; return; } if (c.pc != 0x001A5150u) [[unlikely]] return; }
L_001A5150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A5190; } }
L_001A5158:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A5190; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A5190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_001A5190; } }
L_001A5180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001A5190; } }
L_001A5188:
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_001A5190:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A51E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A51D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A51B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5238; } }
L_001A51B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A51C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 206u, depth + 1u); else { c.pc = 0x0019E6E0u; return; } if (c.pc != 0x001A51C0u) [[unlikely]] return; }
L_001A51C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A51C8u);  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x001A51C8u) [[unlikely]] return; }
L_001A51C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5238; } }
L_001A51D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A51D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 207u, depth + 1u); else { c.pc = 0x0019E6F0u; return; } if (c.pc != 0x001A51D8u) [[unlikely]] return; }
L_001A51D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A51E0u);  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x001A51E0u) [[unlikely]] return; }
L_001A51E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5238; } }
L_001A51E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A5218; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A5200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5238; } }
L_001A5200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5208u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 17u, depth + 1u); else { c.pc = 0x001A0140u; return; } if (c.pc != 0x001A5208u) [[unlikely]] return; }
L_001A5208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5210u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A5210u) [[unlikely]] return; }
L_001A5210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5238; } }
L_001A5218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5220u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 29u, depth + 1u); else { c.pc = 0x001A03B0u; return; } if (c.pc != 0x001A5220u) [[unlikely]] return; }
L_001A5220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5228u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A5228u) [[unlikely]] return; }
L_001A5228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5238; } }
L_001A5230:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A5238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A5260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A5288; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A5330; } }
L_001A5288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5298u);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A5298u) [[unlikely]] return; }
L_001A5298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A52B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A52A8u);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x001A52A8u) [[unlikely]] return; }
L_001A52A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5330; } }
L_001A52B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A5330; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A52D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x001A52D4u) [[unlikely]] return; }
L_001A52D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A52F0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5330; } }
    c.budget -= 1;
L_001A52F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A5330; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);  if (t) { goto L_001A5330; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5318u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A5318u) [[unlikely]] return; }
L_001A5318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A5330; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001A5330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A5350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A5418; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001A53E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A5390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A54D0; } }
    c.budget -= 1;
L_001A5390:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_001A53B8; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A53D8; } }
    c.budget -= 1;
L_001A53B8:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A53D8; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001A53D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A54D8; } }
L_001A53E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_001A5408; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A5410; } }
    c.budget -= 1;
L_001A5408:
    set32(c.r[2], c.r[6].w[0] - 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001A5410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A54D8; } }
L_001A5418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5428u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0029(c, 159u, depth + 1u); else { c.pc = 0x001A6550u; return; } if (c.pc != 0x001A5428u) [[unlikely]] return; }
L_001A5428:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A5450; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001A5450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5458u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001A5458u) [[unlikely]] return; }
L_001A5458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A5468; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001A5468:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5478; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A5478:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001A5490; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A54D0; } }
L_001A5490:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A54B0; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A54D0; } }
    c.budget -= 1;
L_001A54B0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_001A54D0; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A54D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001A54D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A54F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5508; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A5508:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001A5510:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A55F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001A5598; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A5538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5610; } }
L_001A5538:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A5558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5568; } }
    c.budget -= 1;
L_001A5558:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A5618; } }
L_001A5568:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001A5610; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A5610; } }
    c.budget -= 1;
L_001A5598:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A55C0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_001A55C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A5610; } }
L_001A55C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001A55E8; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A5610; } }
    c.budget -= 1;
L_001A55E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A5610; } }
    c.budget -= 1;
L_001A55F8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001A5610; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A5610:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001A5618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A5620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A5650; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A5660; } }
    c.budget -= 1;
L_001A5650:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A56C8; } }
L_001A5660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5670u);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A5670u) [[unlikely]] return; }
L_001A5670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_001A5688; } }
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A56C8; } }
L_001A5688:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A56C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A56ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x001A56ACu) [[unlikely]] return; }
L_001A56AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A56C0; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001A56C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001A56C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A56E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A5710; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A5720; } }
L_001A5710:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A5800; } }
L_001A5720:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A5760; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A5740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A57F8; } }
L_001A5740:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5800; } }
    c.budget -= 1;
L_001A5760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5770u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0029(c, 159u, depth + 1u); else { c.pc = 0x001A6550u; return; } if (c.pc != 0x001A5770u) [[unlikely]] return; }
L_001A5770:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A5798; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001A5798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A57A0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001A57A0u) [[unlikely]] return; }
L_001A57A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A57B0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001A57B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A57C0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A57C0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_001A57D8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A57F8; } }
L_001A57D8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 4u);  if (t) { goto L_001A57F8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A57F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001A5800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A5820:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5840; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A5850; } }
L_001A5840:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5860; } }
    c.budget -= 1;
L_001A5850:
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001A5860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001A5870:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A5918; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001A58C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A5898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5930; } }
L_001A5898:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001A5930; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A5930; } }
    c.budget -= 1;
L_001A58C8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_001A58E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A5930; } }
L_001A58E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001A5908; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A5930; } }
    c.budget -= 1;
L_001A5908:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A5930; } }
    c.budget -= 1;
L_001A5918:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A5930; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A5930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001A5940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12608u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A596Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A596Cu) [[unlikely]] return; }
L_001A596C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001A5988; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A5C18; } }
    c.budget -= 1;
L_001A5988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A5990u) [[unlikely]] return; }
L_001A5990:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A5A00; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001A59B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A5A00; } }
    c.budget -= 1;
L_001A59B8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001A59E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A59E0; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A59F8; } }
    c.budget -= 1;
L_001A59E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A5A00; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5A00; } }
L_001A59F8:
    set32(c.r[3], 0u + 20u);
    st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A5A00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1819u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A5C10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001A5B88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_001A5B68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A5AF0; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A5AC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A5AA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A5A78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A5A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5C18; } }
L_001A5A60:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
L_001A5A78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001A5A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
L_001A5A90:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
    c.budget -= 1;
L_001A5AA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A5C18; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5C18; } }
    c.budget -= 1;
L_001A5AC0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5AD4u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A5AD4u) [[unlikely]] return; }
L_001A5AD4:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + 3u);
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
L_001A5AF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A5B50; } }
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5B18u); st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0029(c, 163u, depth + 1u); else { c.pc = 0x001A65D0u; return; } if (c.pc != 0x001A5B18u) [[unlikely]] return; }
L_001A5B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5B30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001A5B40; } }
    c.budget -= 1;
L_001A5B30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
L_001A5B40:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
L_001A5B50:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
L_001A5B68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A5C18; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5C18; } }
    c.budget -= 1;
L_001A5B88:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A5BF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A5BC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A5BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5C18; } }
    c.budget -= 1;
L_001A5BB0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
L_001A5BC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001A5BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
L_001A5BE0:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A5C18; } }
    c.budget -= 1;
L_001A5BF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A5C18; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5C18; } }
    c.budget -= 1;
L_001A5C10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A5C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A5C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A5C58; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A5CC8; } }
L_001A5C58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C68u);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A5C68u) [[unlikely]] return; }
L_001A5C68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5C90; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A5C7Cu) [[unlikely]] return; }
L_001A5C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A5C84u) [[unlikely]] return; }
L_001A5C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5CC8; } }
    c.budget -= 1;
L_001A5C90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A5CC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x001A5CB4u) [[unlikely]] return; }
L_001A5CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A5CC8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001A5CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A5CE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A5DA0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001A5D68; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A5D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5E58; } }
    c.budget -= 1;
L_001A5D20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_001A5D48; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5E58; } }
    c.budget -= 1;
L_001A5D48:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A5E58; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5E58; } }
L_001A5D68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_001A5D90; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A5E58; } }
    c.budget -= 1;
L_001A5D90:
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A5E58; } }
    c.budget -= 1;
L_001A5DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5DB0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0029(c, 159u, depth + 1u); else { c.pc = 0x001A6550u; return; } if (c.pc != 0x001A5DB0u) [[unlikely]] return; }
L_001A5DB0:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A5DD8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001A5DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5DE0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001A5DE0u) [[unlikely]] return; }
L_001A5DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A5DF0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001A5DF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A5E00; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A5E00:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A5E18; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5E58; } }
L_001A5E18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A5E38; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5E58; } }
    c.budget -= 1;
L_001A5E38:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A5E58; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A5E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A5E70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A5E88; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A5E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A5E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A5EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5EBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A5EBCu) [[unlikely]] return; }
L_001A5EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5EE0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5ED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A5ED0u) [[unlikely]] return; }
L_001A5ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5ED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A5ED8u) [[unlikely]] return; }
L_001A5ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A5F18; } }
L_001A5EE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A5F18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5F04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x001A5F04u) [[unlikely]] return; }
L_001A5F04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001A5F18; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001A5F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A5F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A5F80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A5F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6018; } }
    c.budget -= 1;
L_001A5F68:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001A5F80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5F94u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0029(c, 159u, depth + 1u); else { c.pc = 0x001A6550u; return; } if (c.pc != 0x001A5F94u) [[unlikely]] return; }
L_001A5F94:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A5FB8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A5FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5FC0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001A5FC0u) [[unlikely]] return; }
L_001A5FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A5FD0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001A5FD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A5FE0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A5FE0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001A5FF8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A6018; } }
L_001A5FF8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 4u);  if (t) { goto L_001A6018; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A6018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A6030:
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A6040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A6050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1920u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A6078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6070u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x001A6070u) [[unlikely]] return; }
L_001A6070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));  if (t) { goto L_001A6084; } }
L_001A6078:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 3;
L_001A6084:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 35u);  if (t) { goto L_001A60F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A60A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6148; } }
L_001A60A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_001A60C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A6148; } }
L_001A60C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A60E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A6148; } }
L_001A60E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A60E8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A60E8u) [[unlikely]] return; }
L_001A60E8:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A6148; } }
    c.budget -= 1;
L_001A60F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A6118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A6148; } }
L_001A6118:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_001A6138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A6148; } }
L_001A6138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6140u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A6140u) [[unlikely]] return; }
L_001A6140:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A6148:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A6170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A6338; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_001A6318; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A6260; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A61C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A61B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A63A8; } }
L_001A61B8:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A61C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A61F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001A63A8; } }
    c.budget -= 1;
L_001A61F0:
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 20u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A6250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A6238; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A6228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A63A8; } }
    c.budget -= 1;
L_001A6228:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A63A8; } }
L_001A6238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6240u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A6240u) [[unlikely]] return; }
L_001A6240:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A63A8; } }
L_001A6250:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A63A8; } }
L_001A6260:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A6280; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A62D8; } }
    c.budget -= 1;
L_001A6280:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001A62C0; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A62A0u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A62A0u) [[unlikely]] return; }
L_001A62A0:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + 3u);
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A63A8; } }
    c.budget -= 1;
L_001A62C0:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A63A8; } }
    c.budget -= 1;
L_001A62D8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001A6300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A62F8u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A62F8u) [[unlikely]] return; }
L_001A62F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A63A8; } }
L_001A6300:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_001A63A8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A63A8; } }
L_001A6318:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A63A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6330u);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x001A6330u) [[unlikely]] return; }
L_001A6330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A63A8; } }
L_001A6338:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A6390; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A635Cu); st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0029(c, 163u, depth + 1u); else { c.pc = 0x001A65D0u; return; } if (c.pc != 0x001A635Cu) [[unlikely]] return; }
L_001A635C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6370; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001A6380; } }
L_001A6370:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A63A8; } }
    c.budget -= 1;
L_001A6380:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A63A8; } }
L_001A6390:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A63A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A63C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A6450; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A6448; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001A6420; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A6400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6480; } }
L_001A6400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6408u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A6408u) [[unlikely]] return; }
L_001A6408:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A6480; } }
L_001A6420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6428u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A6428u) [[unlikely]] return; }
L_001A6428:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A6440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A6480; } }
L_001A6440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A6480; } }
L_001A6448:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001A6450:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 4096ull;  if (t) { goto L_001A6480; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6478; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A6480; } }
L_001A6478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A6480u) [[unlikely]] return; }
L_001A6480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A6490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_001A6510; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A6508; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001A64E8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A64D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6540; } }
    c.budget -= 1;
L_001A64D0:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A6540; } }
    c.budget -= 1;
L_001A64E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001A6540; } }
L_001A6500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A6540; } }
L_001A6508:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A6510:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 4096ull;  if (t) { goto L_001A6540; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6538; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A6540; } }
L_001A6538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6540u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A6540u) [[unlikely]] return; }
L_001A6540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A6550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6578u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A6578u) [[unlikely]] return; }
L_001A6578:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6590u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A6590u) [[unlikely]] return; }
L_001A6590:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A65ACu); st32((c.r[16].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001A65ACu) [[unlikely]] return; }
L_001A65AC:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A65D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A6650; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001A6620; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001A6638; } }
L_001A6620:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001A6638:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A6658; } }
    c.budget -= 1;
L_001A6650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A6890; } }
L_001A6658:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A6670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6890; } }
    c.budget -= 1;
L_001A6670:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1928u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A6880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6684u);  if (depth < kMaxDepth) unit_0026(c, 230u, depth + 1u); else { c.pc = 0x0019B870u; return; } if (c.pc != 0x001A6684u) [[unlikely]] return; }
L_001A6684:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6690u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A6690u) [[unlikely]] return; }
L_001A6690:
    set32(c.r[4], ld32((c.r[20].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 130u);  if (t) { goto L_001A66D8; } }
    c.budget -= 1;
L_001A66A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 64u);  if (t) { goto L_001A66C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A66BCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A66BCu) [[unlikely]] return; }
L_001A66BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A66D8; } }
    c.budget -= 1;
L_001A66C8:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A66A0u | kUnwind; return; } goto L_001A66A0; } }
    c.budget -= 1;
L_001A66D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001A6888; } }
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    set32(c.r[21], c.r[29].w[0] + 148u);
    set32(c.r[22], c.r[29].w[0] + 152u);
    c.budget -= 5;
L_001A6710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A6850; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6850; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6850; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001A6850; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6850; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_001A6850; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6850; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A6850; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A6850; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001A6850; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A67A8u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A67A8u) [[unlikely]] return; }
L_001A67A8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A67B8u); set32(c.r[6], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A67B8u) [[unlikely]] return; }
L_001A67B8:
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A6850; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[22].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001A6850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6814u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001A6814u) [[unlikely]] return; }
L_001A6814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001A6850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6834u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001A6834u) [[unlikely]] return; }
L_001A6834:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A6850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6890; } }
L_001A6850:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6710u | kUnwind; return; } goto L_001A6710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6888; } }
L_001A6880:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 1928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001A6888:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001A6890:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001A68C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A68E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A6CE0; } }
L_001A68E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001A6CD0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A6910:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1948u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 1888u);  if (t) { goto L_001A6998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6924u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A6924u) [[unlikely]] return; }
L_001A6924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A692Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A692Cu) [[unlikely]] return; }
L_001A692C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 1888u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1888u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A694Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A694Cu) [[unlikely]] return; }
L_001A694C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    set32(c.r[4], c.r[16].w[0] + 1904u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1888u);
    c.f[1] = ld32((c.r[16].w[0] + 1896u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1896u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1892u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A697Cu); st32((c.r[16].w[0] + 1892u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A697Cu) [[unlikely]] return; }
L_001A697C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1941u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1942u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A6CD0; } }
    c.budget -= 1;
L_001A6998:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1956u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A69B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_001A69B8; } }
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001A69B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1956u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6CD0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1958u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A6CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A6CD0; } }
    c.budget -= 1;
L_001A69E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001A6AC0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15536u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A6A10:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6A20u); set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A6A20u) [[unlikely]] return; }
L_001A6A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6CD0; } }
L_001A6A28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6A50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001A6A50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A6A50; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A6A70; } }
L_001A6A50:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6A64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A6A64u) [[unlikely]] return; }
L_001A6A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6CD0; } }
    c.budget -= 1;
L_001A6A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6A78u);  if (depth < kMaxDepth) unit_0029(c, 65u, depth + 1u); else { c.pc = 0x001A4D90u; return; } if (c.pc != 0x001A6A78u) [[unlikely]] return; }
L_001A6A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6CD0; } }
L_001A6A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6A88u);  if (depth < kMaxDepth) unit_0029(c, 118u, depth + 1u); else { c.pc = 0x001A5940u; return; } if (c.pc != 0x001A6A88u) [[unlikely]] return; }
L_001A6A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6CD0; } }
L_001A6A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6A98u);  if (depth < kMaxDepth) unit_0029(c, 147u, depth + 1u); else { c.pc = 0x001A6170u; return; } if (c.pc != 0x001A6A98u) [[unlikely]] return; }
L_001A6A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6CD0; } }
L_001A6AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6AA8u);  if (depth < kMaxDepth) unit_0029(c, 153u, depth + 1u); else { c.pc = 0x001A63C0u; return; } if (c.pc != 0x001A6AA8u) [[unlikely]] return; }
L_001A6AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6CD0; } }
L_001A6AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6AB8u);  if (depth < kMaxDepth) unit_0029(c, 157u, depth + 1u); else { c.pc = 0x001A6490u; return; } if (c.pc != 0x001A6AB8u) [[unlikely]] return; }
L_001A6AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6CD0; } }
L_001A6AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6AC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x001A6AC8u) [[unlikely]] return; }
L_001A6AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6CD0; } }
L_001A6AD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6B00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 749u));
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A6CD0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A6CD0; } }
L_001A6B00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001A6CD0; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A6B18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A6CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6B30u);  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A6B30u) [[unlikely]] return; }
L_001A6B30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1948u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001A6CD0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A6CD0; } }
L_001A6B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6B70u);  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A6B70u) [[unlikely]] return; }
L_001A6B70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1948u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A6BC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_001A6BA8; } }
    set32(c.r[2], 0u + 4000u);
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A6CD0; } }
L_001A6BA8:
    set32(c.r[2], 0u + 4u);
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A6CD0; } }
L_001A6BC0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A6CD0; } }
    c.budget -= 1;
L_001A6BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6BD8u);  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A6BD8u) [[unlikely]] return; }
L_001A6BD8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[2], 0u + 4000u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001A6C70; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x001A6C04u) [[unlikely]] return; }
L_001A6C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001A6C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6C14u); set32(c.r[5], c.r[16].w[0] + 1888u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001A6C14u) [[unlikely]] return; }
L_001A6C14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A6C40; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 1892u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A6C70; } }
L_001A6C40:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 6796u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_001A6C70:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6C7Cu); set32(c.r[5], c.r[16].w[0] + 1888u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001A6C7Cu) [[unlikely]] return; }
L_001A6C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A6CA8; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 1892u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A6CD0; } }
L_001A6CA8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 12u);
    set32(c.r[5], 0u + 49u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6CC4u); st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001A6CC4u) [[unlikely]] return; }
L_001A6CC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6CD0u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001A6CD0u) [[unlikely]] return; }
L_001A6CD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_001A6CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A6CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 65u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A6D18; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A6D28; } }
L_001A6D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6D20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 9u, depth + 1u); else { c.pc = 0x0019C050u; return; } if (c.pc != 0x001A6D20u) [[unlikely]] return; }
L_001A6D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6D30u); st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00AC(c, 38u, depth + 1u); else { c.pc = 0x003B0360u; return; } if (c.pc != 0x001A6D30u) [[unlikely]] return; }
L_001A6D30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6D68; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 120u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1930u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1946u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A6EE8; } }
L_001A6D68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A6EE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6DA0; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A6EE8; } }
    c.budget -= 1;
L_001A6DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6DA8u);  if (depth < kMaxDepth) unit_00AC(c, 37u, depth + 1u); else { c.pc = 0x003B0350u; return; } if (c.pc != 0x001A6DA8u) [[unlikely]] return; }
L_001A6DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_001A6DB8; } }
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A6DB8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] - 64u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001A6EE8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15600u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A6DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6DF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 254u, depth + 1u); else { c.pc = 0x001A7210u; return; } if (c.pc != 0x001A6DF0u) [[unlikely]] return; }
L_001A6DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 243u, depth + 1u); else { c.pc = 0x001A6F00u; return; } if (c.pc != 0x001A6DF8u) [[unlikely]] return; }
L_001A6DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 269u, depth + 1u); else { c.pc = 0x001A7650u; return; } if (c.pc != 0x001A6E08u) [[unlikely]] return; }
L_001A6E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 270u, depth + 1u); else { c.pc = 0x001A7660u; return; } if (c.pc != 0x001A6E18u) [[unlikely]] return; }
L_001A6E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 243u, depth + 1u); else { c.pc = 0x001A6F00u; return; } if (c.pc != 0x001A6E20u) [[unlikely]] return; }
L_001A6E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 292u, depth + 1u); else { c.pc = 0x001A7F90u; return; } if (c.pc != 0x001A6E30u) [[unlikely]] return; }
L_001A6E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 16u, depth + 1u); else { c.pc = 0x001A85C0u; return; } if (c.pc != 0x001A6E40u) [[unlikely]] return; }
L_001A6E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 243u, depth + 1u); else { c.pc = 0x001A6F00u; return; } if (c.pc != 0x001A6E48u) [[unlikely]] return; }
L_001A6E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 26u, depth + 1u); else { c.pc = 0x001A8AD0u; return; } if (c.pc != 0x001A6E58u) [[unlikely]] return; }
L_001A6E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 243u, depth + 1u); else { c.pc = 0x001A6F00u; return; } if (c.pc != 0x001A6E60u) [[unlikely]] return; }
L_001A6E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 37u, depth + 1u); else { c.pc = 0x001A8F50u; return; } if (c.pc != 0x001A6E70u) [[unlikely]] return; }
L_001A6E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 56u, depth + 1u); else { c.pc = 0x001A9540u; return; } if (c.pc != 0x001A6E80u) [[unlikely]] return; }
L_001A6E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 69u, depth + 1u); else { c.pc = 0x001A99B0u; return; } if (c.pc != 0x001A6E90u) [[unlikely]] return; }
L_001A6E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 243u, depth + 1u); else { c.pc = 0x001A6F00u; return; } if (c.pc != 0x001A6E98u) [[unlikely]] return; }
L_001A6E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6EA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 79u, depth + 1u); else { c.pc = 0x001A9DB0u; return; } if (c.pc != 0x001A6EA8u) [[unlikely]] return; }
L_001A6EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6EB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 80u, depth + 1u); else { c.pc = 0x001A9DC0u; return; } if (c.pc != 0x001A6EB8u) [[unlikely]] return; }
L_001A6EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6EC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 243u, depth + 1u); else { c.pc = 0x001A6F00u; return; } if (c.pc != 0x001A6EC0u) [[unlikely]] return; }
L_001A6EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6ED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 69u, depth + 1u); else { c.pc = 0x001A99B0u; return; } if (c.pc != 0x001A6ED0u) [[unlikely]] return; }
L_001A6ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6ED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 243u, depth + 1u); else { c.pc = 0x001A6F00u; return; } if (c.pc != 0x001A6ED8u) [[unlikely]] return; }
L_001A6ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A6EE8; } }
L_001A6EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6EE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 90u, depth + 1u); else { c.pc = 0x001AA1E0u; return; } if (c.pc != 0x001A6EE8u) [[unlikely]] return; }
L_001A6EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A6F00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A71E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1940u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001A70B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A70B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001A70A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A6F70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A71E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A71E8; } }
    c.budget -= 1;
L_001A6F70:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1948u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001A7058; } }
    st8((c.r[19].w[0] + 1940u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[19].w[0] + 1941u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    set32(c.r[18], c.r[18].w[0] - 12576u);
    st8((c.r[19].w[0] + 1942u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[17].d[0] = 0ull + 0ull;
    c.f[20] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 120u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 15;
L_001A6FB8:
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6FDCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A6FDCu) [[unlikely]] return; }
L_001A6FDC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 112u);  if (t) { goto L_001A6FF8; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.f[20] = c.f[0];
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 4;
L_001A6FF8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[3] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6FB8u | kUnwind; return; } goto L_001A6FB8; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 1888u), c.f[3]);
    st32((c.r[19].w[0] + 1892u), c.f[2]);
    st32((c.r[19].w[0] + 1896u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1900u), c.f[0]);  if (t) { goto L_001A71E8; } }
    c.budget -= 1;
L_001A7058:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1956u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7078; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_001A7078; } }
    st16((c.r[19].w[0] + 1948u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A7078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1956u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A71E8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 498u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1958u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A71E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1948u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A71E8; } }
    c.budget -= 1;
L_001A70A8:
    st8((c.r[19].w[0] + 1940u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A70B0:
    set32(c.r[2], 0u + 1000u);
    st16((c.r[19].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 1924u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 1888u));
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 1896u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A70E0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A70E0u) [[unlikely]] return; }
L_001A70E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 2u);  if (t) { goto L_001A71A0; } }
    set32(c.r[2], 0u + 12u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 571u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A7130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7118u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001A7118u) [[unlikely]] return; }
L_001A7118:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7124u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001A7124u) [[unlikely]] return; }
L_001A7124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7148; } }
    c.budget -= 1;
L_001A7130:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A713Cu); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001A713Cu) [[unlikely]] return; }
L_001A713C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7148u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001A7148u) [[unlikely]] return; }
L_001A7148:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    set32(c.r[4], 0u - 24576u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 3584ull;
    st16((c.r[19].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st16((c.r[19].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 513u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A71E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1940u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A71E8; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7198u); st8((c.r[19].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x001A7198u) [[unlikely]] return; }
L_001A7198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A71E8; } }
L_001A71A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A71E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1940u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A71E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A71CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x001A71CCu) [[unlikely]] return; }
L_001A71CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A71E8; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A71E8u); st8((c.r[19].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x001A71E8u) [[unlikely]] return; }
L_001A71E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001A7210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A7568; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A7268; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A7250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A75F8; } }
    c.budget -= 1;
L_001A7250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7260u);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001A7260u) [[unlikely]] return; }
L_001A7260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A75F8; } }
L_001A7268:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A7280; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A7280:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A72A0; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A7298u) [[unlikely]] return; }
L_001A7298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A72B0; } }
L_001A72A0:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A72B0u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A72B0u) [[unlikely]] return; }
L_001A72B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A7420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A72C4u);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A72C4u) [[unlikely]] return; }
L_001A72C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A75F8; } }
    c.f[1] = ld32((c.r[4].w[0] + 1088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A75F8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A75F8; } }
    st32((c.r[16].w[0] + 1920u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001A7314; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001A7314:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7338u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A7338u) [[unlikely]] return; }
L_001A7338:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 512u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001A7408; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15664u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A7380:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A7408; } }
    c.budget -= 1;
L_001A7398:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 8192u);
    c.r[4].d[0] = c.r[4].d[0] | 8448ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7408; } }
L_001A73B0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 1024u);
    c.r[4].d[0] = c.r[4].d[0] | 1280ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7408; } }
L_001A73C8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 2048u);
    c.r[4].d[0] = c.r[4].d[0] | 2304ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7408; } }
L_001A73E0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A7408; } }
    c.budget -= 1;
L_001A73F8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_001A7408:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 45u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A75F8; } }
L_001A7420:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A7440; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A7558; } }
L_001A7440:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001A7458u) [[unlikely]] return; }
L_001A7458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44AF0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A7478; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_001A7478:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A7528; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A74F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A74A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7558; } }
L_001A74A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A74C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7558; } }
    c.budget -= 1;
L_001A74C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A7558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A7558; } }
    c.budget -= 1;
L_001A74F0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A7558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A7558; } }
    c.budget -= 1;
L_001A7528:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A7558; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A7558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7560u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 105u, depth + 1u); else { c.pc = 0x001AA620u; return; } if (c.pc != 0x001A7560u) [[unlikely]] return; }
L_001A7560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A75F8; } }
L_001A7568:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A75E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A75F8; } }
    c.budget -= 1;
L_001A7598:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A75C0; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A75F8; } }
L_001A75C0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A75F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001A75F8; } }
L_001A75E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A75F8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A75F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A7620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A760Cu);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x001A760Cu) [[unlikely]] return; }
L_001A760C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_001A7638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7638; } }
    c.budget -= 1;
L_001A7620:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A7638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A7650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A7660:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_001A7B78; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A7B00; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A76D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A76B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A76B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A76C8u);  if (depth < kMaxDepth) unit_002A(c, 114u, depth + 1u); else { c.pc = 0x001AA8D0u; return; } if (c.pc != 0x001A76C8u) [[unlikely]] return; }
L_001A76C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7E70; } }
L_001A76D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A76E8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A76E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A7708; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7700u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A7700u) [[unlikely]] return; }
L_001A7700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A7718; } }
L_001A7708:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7714u); st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A7714u) [[unlikely]] return; }
L_001A7714:
    c.budget -= 1;
L_001A7718:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A7938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A772Cu);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A772Cu) [[unlikely]] return; }
L_001A772C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7810; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7770; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A775Cu); st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A775Cu) [[unlikely]] return; }
L_001A775C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7770:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A77D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A77C8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A77B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A77A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A77E8; } }
    c.budget -= 1;
L_001A77A8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A77E8; } }
L_001A77B8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A77E8; } }
L_001A77C8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4352ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A77E8; } }
L_001A77D8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8448ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A77E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1813u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7810:
    set32(c.r[4], ld32((c.r[18].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A7E70; } }
    c.f[1] = ld32((c.r[4].w[0] + 1088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A7E70; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7E70; } }
    st32((c.r[18].w[0] + 1920u), c.r[4].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001A7858:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_001A7870; } }
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_001A7870:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7858u | kUnwind; return; } goto L_001A7858; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001A789C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001A789C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A78C0u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A78C0u) [[unlikely]] return; }
L_001A78C0:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 384u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_001A78F8; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7920; } }
    c.budget -= 1;
L_001A78F8:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1808u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 45u);
    c.r[5].d[0] = c.r[5].d[0] | 512ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7920:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7938:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7A78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A795Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001A795Cu) [[unlikely]] return; }
L_001A795C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 33u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);  if (t) { goto L_001A7988; } }
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A7988; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_001A7988:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A7A38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A7A00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A79B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7A68; } }
L_001A79B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A79D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7A68; } }
    c.budget -= 1;
L_001A79D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A7A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A7A68; } }
    c.budget -= 1;
L_001A7A00:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A7A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A7A68; } }
    c.budget -= 1;
L_001A7A38:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A7A68; } }
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A7A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7A70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 105u, depth + 1u); else { c.pc = 0x001AA620u; return; } if (c.pc != 0x001A7A70u) [[unlikely]] return; }
L_001A7A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7E70; } }
L_001A7A78:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1808u));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001A7AF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7AE0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A7AD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7AC0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7AD0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7AE0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4352ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7AF0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8448ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A7B58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7E70; } }
L_001A7B20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7B38; } }
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A7E70; } }
L_001A7B38:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7B58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7E70; } }
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7B78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001A7E70; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15696u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A7BA0:
    set32(c.r[3], ld32((c.r[18].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7BE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7BD0; } }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7BD0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7BE0:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 60u);
    c.r[5].d[0] = c.r[5].d[0] | 768ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7C00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7C18; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7C18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7E70; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7C40:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7E70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7C80:
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7C90:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_001A7CD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7CD0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7CD0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_001A7D00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7D00; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7D00:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_001A7D30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7D30; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7D30:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_001A7D60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7D60; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7D60:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
    c.budget -= 1;
L_001A7D70:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_001A7DA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7DA0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7E00; } }
L_001A7DA0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_001A7DC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7DC8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7E00; } }
    c.budget -= 1;
L_001A7DC8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_001A7DF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A7DF0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7E00; } }
    c.budget -= 1;
L_001A7DF0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A7E00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7E70; } }
L_001A7E10:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A7E28:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001A7E40; } }
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_001A7E40:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7E28u | kUnwind; return; } goto L_001A7E28; } }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A7E70; } }
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A7E70:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 33u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A7F28; } }
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[2], c.f[1]);
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7EACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A7EACu) [[unlikely]] return; }
L_001A7EAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[21];  if (t) { goto L_001A7F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7ECCu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A7ECCu) [[unlikely]] return; }
L_001A7ECC:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7ED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A7ED8u) [[unlikely]] return; }
L_001A7ED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7F04u); st32((c.r[18].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A7F04u) [[unlikely]] return; }
L_001A7F04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 9;
L_001A7F28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A7F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7F3Cu);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x001A7F3Cu) [[unlikely]] return; }
L_001A7F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 25u);  if (t) { goto L_001A7F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7F68; } }
    c.budget -= 1;
L_001A7F50:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A7F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A7F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_002A(c, 13u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { [[clang::musttail]] return unit_002A(c, 12u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_002A(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A7FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002A(c, 14u, depth); } }
    c.budget -= 1;
L_001A7FD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7FE8u);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001A7FE8u) [[unlikely]] return; }
L_001A7FE8:
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    [[clang::musttail]] return unit_002A(c, 1u, depth);
}

}
