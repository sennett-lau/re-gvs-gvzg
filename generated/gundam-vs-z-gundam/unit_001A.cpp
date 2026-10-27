#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0,
    13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0,
    22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0,
    0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0,
    214, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 224,
    0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0,
    247, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00168000;
    case 2u: goto L_00168060;
    case 3u: goto L_00168100;
    case 4u: goto L_00168190;
    case 5u: goto L_001681A4;
    case 6u: goto L_001681EC;
    case 7u: goto L_00168204;
    case 8u: goto L_00168238;
    case 9u: goto L_001682E0;
    case 10u: goto L_001682E8;
    case 11u: goto L_001682F0;
    case 12u: goto L_001682F8;
    case 13u: goto L_00168300;
    case 14u: goto L_00168308;
    case 15u: goto L_00168318;
    case 16u: goto L_00168328;
    case 17u: goto L_00168338;
    case 18u: goto L_00168348;
    case 19u: goto L_00168358;
    case 20u: goto L_00168368;
    case 21u: goto L_00168378;
    case 22u: goto L_00168380;
    case 23u: goto L_00168388;
    case 24u: goto L_00168390;
    case 25u: goto L_00168398;
    case 26u: goto L_001683A8;
    case 27u: goto L_001683B0;
    case 28u: goto L_001683C0;
    case 29u: goto L_001683C8;
    case 30u: goto L_001683D4;
    case 31u: goto L_001683DC;
    case 32u: goto L_001683EC;
    case 33u: goto L_001683F4;
    case 34u: goto L_00168460;
    case 35u: goto L_00168468;
    case 36u: goto L_00168488;
    case 37u: goto L_00168490;
    case 38u: goto L_001684E0;
    case 39u: goto L_00168568;
    case 40u: goto L_00168580;
    case 41u: goto L_001685A0;
    case 42u: goto L_00168610;
    case 43u: goto L_00168620;
    case 44u: goto L_00168640;
    case 45u: goto L_00168670;
    case 46u: goto L_001686F0;
    case 47u: goto L_00168748;
    case 48u: goto L_00168750;
    case 49u: goto L_00168758;
    case 50u: goto L_00168760;
    case 51u: goto L_00168768;
    case 52u: goto L_00168780;
    case 53u: goto L_001687F0;
    case 54u: goto L_00168840;
    case 55u: goto L_00168850;
    case 56u: goto L_00168860;
    case 57u: goto L_001688D0;
    case 58u: goto L_00168900;
    case 59u: goto L_00168908;
    case 60u: goto L_001689DC;
    case 61u: goto L_00168A20;
    case 62u: goto L_00168A40;
    case 63u: goto L_00168AD0;
    case 64u: goto L_00168AF0;
    case 65u: goto L_00168B20;
    case 66u: goto L_00168BB0;
    case 67u: goto L_00168BD4;
    case 68u: goto L_00168BE4;
    case 69u: goto L_00168BF4;
    case 70u: goto L_00168C04;
    case 71u: goto L_00168C3C;
    case 72u: goto L_00168C58;
    case 73u: goto L_00168C60;
    case 74u: goto L_00168C68;
    case 75u: goto L_00168C90;
    case 76u: goto L_00168DE0;
    case 77u: goto L_00168E3C;
    case 78u: goto L_00168EF0;
    case 79u: goto L_00169050;
    case 80u: goto L_001691B0;
    case 81u: goto L_001691C0;
    case 82u: goto L_001691D0;
    case 83u: goto L_001691F4;
    case 84u: goto L_00169230;
    case 85u: goto L_0016936C;
    case 86u: goto L_001693A8;
    case 87u: goto L_001693C0;
    case 88u: goto L_001693E0;
    case 89u: goto L_001693E8;
    case 90u: goto L_0016943C;
    case 91u: goto L_00169480;
    case 92u: goto L_001694BC;
    case 93u: goto L_00169560;
    case 94u: goto L_00169608;
    case 95u: goto L_001696C0;
    case 96u: goto L_001696FC;
    case 97u: goto L_001697A8;
    case 98u: goto L_00169858;
    case 99u: goto L_00169910;
    case 100u: goto L_00169930;
    case 101u: goto L_001699A0;
    case 102u: goto L_00169A04;
    case 103u: goto L_00169A20;
    case 104u: goto L_00169A30;
    case 105u: goto L_00169A68;
    case 106u: goto L_00169AD0;
    case 107u: goto L_00169B18;
    case 108u: goto L_00169B20;
    case 109u: goto L_00169B28;
    case 110u: goto L_00169B60;
    case 111u: goto L_00169C20;
    case 112u: goto L_00169CF0;
    case 113u: goto L_00169DD0;
    case 114u: goto L_00169EA0;
    case 115u: goto L_00169EB0;
    case 116u: goto L_00169EC0;
    case 117u: goto L_00169F10;
    case 118u: goto L_00169F50;
    case 119u: goto L_00169FE8;
    case 120u: goto L_0016A010;
    case 121u: goto L_0016A030;
    case 122u: goto L_0016A038;
    case 123u: goto L_0016A060;
    case 124u: goto L_0016A080;
    case 125u: goto L_0016A088;
    case 126u: goto L_0016A108;
    case 127u: goto L_0016A150;
    case 128u: goto L_0016A178;
    case 129u: goto L_0016A210;
    case 130u: goto L_0016A230;
    case 131u: goto L_0016A278;
    case 132u: goto L_0016A304;
    case 133u: goto L_0016A310;
    case 134u: goto L_0016A320;
    case 135u: goto L_0016A32C;
    case 136u: goto L_0016A334;
    case 137u: goto L_0016A36C;
    case 138u: goto L_0016A390;
    case 139u: goto L_0016A3B0;
    case 140u: goto L_0016A3BC;
    case 141u: goto L_0016A3C8;
    case 142u: goto L_0016A400;
    case 143u: goto L_0016A408;
    case 144u: goto L_0016A410;
    case 145u: goto L_0016A430;
    case 146u: goto L_0016A480;
    case 147u: goto L_0016A510;
    case 148u: goto L_0016A580;
    case 149u: goto L_0016A590;
    case 150u: goto L_0016A5A0;
    case 151u: goto L_0016A5DC;
    case 152u: goto L_0016A5EC;
    case 153u: goto L_0016A628;
    case 154u: goto L_0016A760;
    case 155u: goto L_0016A774;
    case 156u: goto L_0016A7C0;
    case 157u: goto L_0016A838;
    case 158u: goto L_0016A848;
    case 159u: goto L_0016A8B8;
    case 160u: goto L_0016A8C8;
    case 161u: goto L_0016A900;
    case 162u: goto L_0016A938;
    case 163u: goto L_0016A948;
    case 164u: goto L_0016A9B8;
    case 165u: goto L_0016A9C8;
    case 166u: goto L_0016AA50;
    case 167u: goto L_0016AAC8;
    case 168u: goto L_0016AAD8;
    case 169u: goto L_0016AB48;
    case 170u: goto L_0016AB58;
    case 171u: goto L_0016ABC8;
    case 172u: goto L_0016ABD8;
    case 173u: goto L_0016AC48;
    case 174u: goto L_0016AC58;
    case 175u: goto L_0016ACE0;
    case 176u: goto L_0016AD00;
    case 177u: goto L_0016AD60;
    case 178u: goto L_0016AEE0;
    case 179u: goto L_0016AEF0;
    case 180u: goto L_0016B0C0;
    case 181u: goto L_0016B1D8;
    case 182u: goto L_0016B4C0;
    case 183u: goto L_0016B630;
    case 184u: goto L_0016B8B8;
    case 185u: goto L_0016B8DC;
    case 186u: goto L_0016B8E8;
    case 187u: goto L_0016B8F0;
    case 188u: goto L_0016B904;
    case 189u: goto L_0016B90C;
    case 190u: goto L_0016B914;
    case 191u: goto L_0016B924;
    case 192u: goto L_0016B92C;
    case 193u: goto L_0016B934;
    case 194u: goto L_0016B954;
    case 195u: goto L_0016B960;
    case 196u: goto L_0016B968;
    case 197u: goto L_0016B994;
    case 198u: goto L_0016B9A0;
    case 199u: goto L_0016B9A8;
    case 200u: goto L_0016B9BC;
    case 201u: goto L_0016B9C4;
    case 202u: goto L_0016B9CC;
    case 203u: goto L_0016B9DC;
    case 204u: goto L_0016B9E4;
    case 205u: goto L_0016B9EC;
    case 206u: goto L_0016BA18;
    case 207u: goto L_0016BA24;
    case 208u: goto L_0016BA2C;
    case 209u: goto L_0016BA38;
    case 210u: goto L_0016BA4C;
    case 211u: goto L_0016BA58;
    case 212u: goto L_0016BA60;
    case 213u: goto L_0016BA74;
    case 214u: goto L_0016BA80;
    case 215u: goto L_0016BA88;
    case 216u: goto L_0016BA9C;
    case 217u: goto L_0016BAA4;
    case 218u: goto L_0016BAAC;
    case 219u: goto L_0016BABC;
    case 220u: goto L_0016BAC4;
    case 221u: goto L_0016BACC;
    case 222u: goto L_0016BAD8;
    case 223u: goto L_0016BAF0;
    case 224u: goto L_0016BAFC;
    case 225u: goto L_0016BB04;
    case 226u: goto L_0016BB0C;
    case 227u: goto L_0016BB14;
    case 228u: goto L_0016BB1C;
    case 229u: goto L_0016BB2C;
    case 230u: goto L_0016BB34;
    case 231u: goto L_0016BB3C;
    case 232u: goto L_0016BB50;
    case 233u: goto L_0016BB5C;
    case 234u: goto L_0016BB68;
    case 235u: goto L_0016BB88;
    case 236u: goto L_0016BB94;
    case 237u: goto L_0016BB9C;
    case 238u: goto L_0016BBA4;
    case 239u: goto L_0016BBAC;
    case 240u: goto L_0016BBB4;
    case 241u: goto L_0016BBC4;
    case 242u: goto L_0016BBCC;
    case 243u: goto L_0016BBD4;
    case 244u: goto L_0016BBE0;
    case 245u: goto L_0016BBE8;
    case 246u: goto L_0016BBF4;
    case 247u: goto L_0016BC00;
    case 248u: goto L_0016BC08;
    case 249u: goto L_0016BC14;
    case 250u: goto L_0016BC1C;
    case 251u: goto L_0016BC24;
    case 252u: goto L_0016BC2C;
    case 253u: goto L_0016BC34;
    case 254u: goto L_0016BC3C;
    case 255u: goto L_0016BC44;
    case 256u: goto L_0016BC4C;
    case 257u: goto L_0016BC54;
    case 258u: goto L_0016BC80;
    case 259u: goto L_0016BCB8;
    case 260u: goto L_0016BD00;
    case 261u: goto L_0016BD84;
    case 262u: goto L_0016BD8C;
    case 263u: goto L_0016BDA0;
    case 264u: goto L_0016BDA8;
    case 265u: goto L_0016BDC0;
    case 266u: goto L_0016BE10;
    case 267u: goto L_0016BE18;
    case 268u: goto L_0016BE28;
    case 269u: goto L_0016BE30;
    case 270u: goto L_0016BE40;
    case 271u: goto L_0016BEF0;
    case 272u: goto L_0016BF38;
    case 273u: goto L_0016BF48;
    case 274u: goto L_0016BF50;
    case 275u: goto L_0016BF60;
    case 276u: goto L_0016BFB0;
    case 277u: goto L_0016BFC0;
    case 278u: goto L_0016BFC8;
    case 279u: goto L_0016BFE0;
    default: bad_entry(c, 0x00168000u); return;
    }
L_00168000:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[2].d[0] | 59760ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[18].w[0] + 32u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 2036u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), c.f[0]);  if (t) { goto L_00168180; } }
    c.budget -= 1;
L_00168060:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41160000u);  if (t) { goto L_001680C8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[2].d[0] | 57672ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[18].w[0] + 32u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 2036u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), c.f[0]);  if (t) { goto L_00168180; } }
L_001680C8:
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00168128; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[18].w[0] + 32u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
L_00168100:
    c.f[1] = ld32((c.r[2].w[0] + 2036u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), c.f[0]);  if (t) { goto L_00168180; } }
    c.budget -= 1;
L_00168128:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[18].w[0] + 32u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 2036u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 22;
L_00168180:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168190u); set32(c.r[5], c.r[5].w[0] + 19712u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00168190u) [[unlikely]] return; }
L_00168190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001681A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001681A4u) [[unlikely]] return; }
L_001681A4:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    set32(c.r[7], c.r[29].w[0] + 208u);
    set32(c.r[8], c.r[29].w[0] + 240u);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 224u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001681ECu); st32((c.r[29].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_0012(c, 178u, depth + 1u); else { c.pc = 0x0014A080u; return; } if (c.pc != 0x001681ECu) [[unlikely]] return; }
L_001681EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_001682D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168204u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00168204u) [[unlikely]] return; }
L_00168204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C310000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[2].d[0] | 34121ull;
    c.f[2] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168238u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00168238u) [[unlikely]] return; }
L_00168238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 28u), c.f[0]);  if (t) { goto L_00168258; } }
    st32((c.r[17].w[0] + 28u), c.f[1]);
    c.budget -= 2;
L_00168258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[29].w[0] + 208u);  if (t) { goto L_001682C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.f[4] = ld32((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 32u), c.f[4]);
    st32((c.r[18].w[0] + 36u), c.f[3]);
    st32((c.r[18].w[0] + 40u), c.f[2]);
    st32((c.r[18].w[0] + 44u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.f[0]);  if (t) { goto L_001682D8; } }
    c.budget -= 1;
L_001682C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001682D8; } }
L_001682D0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001682D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682E0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001682E0u) [[unlikely]] return; }
L_001682E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682E8u); c.r[4].d[0] = ld16((c.r[17].w[0] + 20u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001682E8u) [[unlikely]] return; }
L_001682E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682F0u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001682F0u) [[unlikely]] return; }
L_001682F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682F8u); c.r[4].d[0] = ld16((c.r[17].w[0] + 24u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001682F8u) [[unlikely]] return; }
L_001682F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168300u); c.r[4].d[0] = ld16((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00168300u) [[unlikely]] return; }
L_00168300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168308u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00168308u) [[unlikely]] return; }
L_00168308:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 288u);  if (t) { goto L_00168568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168318u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00168318u) [[unlikely]] return; }
L_00168318:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168328u); set32(c.r[4], c.r[4].w[0] + 17376u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00168328u) [[unlikely]] return; }
L_00168328:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168338u); set32(c.r[4], c.r[4].w[0] + 17392u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00168338u) [[unlikely]] return; }
L_00168338:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168348u); set32(c.r[4], c.r[4].w[0] + 17408u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00168348u) [[unlikely]] return; }
L_00168348:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168358u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00168358u) [[unlikely]] return; }
L_00168358:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168368u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00168368u) [[unlikely]] return; }
L_00168368:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168378u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00168378u) [[unlikely]] return; }
L_00168378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168380u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00168380u) [[unlikely]] return; }
L_00168380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168388u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00168388u) [[unlikely]] return; }
L_00168388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168390u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00168390u) [[unlikely]] return; }
L_00168390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168398u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00168398u) [[unlikely]] return; }
L_00168398:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683A8u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001683A8u) [[unlikely]] return; }
L_001683A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683B0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001683B0u) [[unlikely]] return; }
L_001683B0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683C0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001683C0u) [[unlikely]] return; }
L_001683C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683C8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001683C8u) [[unlikely]] return; }
L_001683C8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683D4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001683D4u) [[unlikely]] return; }
L_001683D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683DCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001683DCu) [[unlikely]] return; }
L_001683DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683ECu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001683ECu) [[unlikely]] return; }
L_001683EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683F4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001683F4u) [[unlikely]] return; }
L_001683F4:
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_00168420; } }
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00168428; } }
    c.budget -= 1;
L_00168420:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_00168428:
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_00168448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00168458; } }
L_00168448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_00168458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168460u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00168460u) [[unlikely]] return; }
L_00168460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168468u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00168468u) [[unlikely]] return; }
L_00168468:
    c.f[2] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168488u); c.f[14] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00168488u) [[unlikely]] return; }
L_00168488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168490u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00168490u) [[unlikely]] return; }
L_00168490:
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[29].w[0] + 288u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[28].w[0] - 32732u);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 288u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001684E0u); st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001684E0u) [[unlikely]] return; }
L_001684E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 17360u);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32732u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 17344u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 17328u);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168568u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x00168568u) [[unlikely]] return; }
L_00168568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00168580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001685A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001685A0u) [[unlikely]] return; }
L_001685A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168600; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] - 31200u);
    set32(c.r[3], c.r[3].w[0] - 30624u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 22;
L_00168600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00168610:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0045(c, 208u, depth); }
L_00168620:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 17520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00168640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[13], c.r[4].w[0] + 304u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 17424u);
    c.r[10].d[0] = c.r[13].d[0] + 0ull;
    c.r[9].d[0] = c.r[13].d[0] + 0ull;
    c.r[8].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 12;
L_00168670:
    c.r[3].d[0] = c.r[12].d[0] << 56;
    c.f[0] = ld32((c.r[11].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[13].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[12].w[0] + 1u);
    c.r[12].d[0] = c.r[3].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.r[3].d[0] = c.r[12].sd[0] < 2ll ? 1ull : 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    st8((c.r[7].w[0] + 44u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    st32((c.r[10].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 16u));
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.r[11].w[0] + 24u);
    set32(c.r[6], c.f[0]);
    st8((c.r[7].w[0] + 46u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[9].w[0] + 40u), static_cast<std::uint16_t>(0u));
    st32((c.r[8].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168670u | kUnwind; return; } goto L_00168670; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_001686F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 350u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 304u);  if (t) { goto L_00168740; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 47u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168740; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168740; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 49u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168740; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00168740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168780u; return; } if (c.pc != 0x00168748u) [[unlikely]] return; }
L_00168748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 53u, depth + 1u); else { c.pc = 0x001687F0u; return; } if (c.pc != 0x00168750u) [[unlikely]] return; }
L_00168750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168758u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00168758u) [[unlikely]] return; }
L_00168758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168760u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00168760u) [[unlikely]] return; }
L_00168760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168768u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00168768u) [[unlikely]] return; }
L_00168768:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00168780:
    c.f[1] = ld32((c.r[4].w[0] + 304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[5].d[0] = c.r[3].d[0] | 57672ull;
    set32(c.r[6], c.r[4].w[0] + 304u);
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 304u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 308u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 308u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 336u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 336u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 344u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 344u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001687E8; } }
    st8((c.r[6].w[0] + 46u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001687E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001687F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 351u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_00168830; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 42u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0; st16((c.r[6].w[0] + 42u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00168814; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 1;
L_00168814:
    set32(c.r[4], c.r[3].w[0] + 7u);
    st8((c.r[6].w[0] + 45u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 23u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 45u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00168830; } }
    st8((c.r[6].w[0] + 47u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00168830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168840:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00168850:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00168860:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 17680u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[17], c.r[18].w[0] + 304u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[28].w[0] - 32728u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17664u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 88u);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001688D0u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001688D0u) [[unlikely]] return; }
L_001688D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001689F0; } }
    goto L_00168904;
L_00168900:
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00168904:
    c.budget -= 1;
L_00168908:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 64u);  if (t) { goto L_001689E0; } }
    set32(c.r[2], c.r[18].w[0] + 32u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[28].w[0] - 32728u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 17536u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[29].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[0] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    st32((c.r[1].w[0] + 20228u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689DCu); st32((c.r[1].w[0] + 20224u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x001689DCu) [[unlikely]] return; }
L_001689DC:
    c.budget -= 1;
L_001689E0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_001689F0:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168908u | kUnwind; return; } goto L_00168908; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00168A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00168A40u) [[unlikely]] return; }
L_00168A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168AB8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[3], c.r[3].w[0] - 28208u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[4]);
    st32((c.r[2].w[0] + 36u), c.f[3]);
    st32((c.r[2].w[0] + 40u), c.f[2]);
    st32((c.r[2].w[0] + 44u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 28;
L_00168AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00168AD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 17984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00168AF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[13], c.r[4].w[0] + 304u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 17856u);
    c.r[10].d[0] = c.r[13].d[0] + 0ull;
    c.r[9].d[0] = c.r[13].d[0] + 0ull;
    c.r[8].d[0] = c.r[13].d[0] + 0ull;
    c.r[7].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 12;
L_00168B20:
    c.r[5].d[0] = ld8((c.r[11].w[0]));
    c.r[3].d[0] = c.r[12].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[13].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[12].w[0] + 1u);
    c.r[12].d[0] = c.r[3].d[0] << 56;
    st8((c.r[6].w[0] + 136u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.r[3].d[0] = c.r[12].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    st32((c.r[10].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 16u));
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[9].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 20u));
    st32((c.r[9].w[0] + 68u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 24u)));
    set32(c.r[9], c.r[9].w[0] + 8u);
    st16((c.r[8].w[0] + 128u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 28u)));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[6].w[0] + 140u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] + 32u);
    st32((c.r[7].w[0] + 112u), 0u);
    st32((c.r[7].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168B20u | kUnwind; return; } goto L_00168B20; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 304u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168BD4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 75u, depth + 1u); else { c.pc = 0x00168C90u; return; } if (c.pc != 0x00168BD4u) [[unlikely]] return; }
L_00168BD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168BE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 76u, depth + 1u); else { c.pc = 0x00168DE0u; return; } if (c.pc != 0x00168BE4u) [[unlikely]] return; }
L_00168BE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168BF4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_001A(c, 78u, depth + 1u); else { c.pc = 0x00168EF0u; return; } if (c.pc != 0x00168BF4u) [[unlikely]] return; }
L_00168BF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C04u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001A(c, 79u, depth + 1u); else { c.pc = 0x00169050u; return; } if (c.pc != 0x00168C04u) [[unlikely]] return; }
L_00168C04:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168C50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 141u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168C50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168C50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 143u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168C50; } }
    goto L_00168C40;
L_00168C3C:
    c.budget -= 1;
L_00168C40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00168C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C58u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00168C58u) [[unlikely]] return; }
L_00168C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C60u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00168C60u) [[unlikely]] return; }
L_00168C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C68u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00168C68u) [[unlikely]] return; }
L_00168C68:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00168C90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_00168DD8; } }
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168CD8; } }
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), 0u);  if (t) { goto L_00168DD8; } }
L_00168CD8:
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168D30; } }
    set32(c.r[4], c.r[7].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E080000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_00168DD8; } }
L_00168D30:
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168D88; } }
    set32(c.r[4], c.r[7].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E080000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 2997ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE2F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 35577ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_00168DD8; } }
L_00168D88:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E090000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 14155ull;
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.budget -= 20;
L_00168DD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168DE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_00168EE0; } }
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[7].w[0] << 1);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168E28; } }
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), 0u);  if (t) { goto L_00168EE0; } }
L_00168E28:
    c.r[1].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168E68; } }
    set32(c.r[6], c.r[7].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E0F0000u);
    c.budget -= 2;
L_00168E3C:
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 23593ull;
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_00168EA8; } }
L_00168E68:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B6E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 20494ull;
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C860000u);
    c.r[3].d[0] = c.r[3].d[0] | 3337ull;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 16;
L_00168EA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00168EE0; } }
    set32(c.r[4], c.r[7].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.budget -= 10;
L_00168EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168EF0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00169048; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00168F20; } }
    c.r[3].d[0] = c.r[6].d[0] << 56;
    set32(c.r[7], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 6;
L_00168F20:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168F60; } }
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), 0u);  if (t) { goto L_00169048; } }
    c.budget -= 1;
L_00168F60:
    c.r[1].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168FA0; } }
    set32(c.r[6], c.r[7].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_00168FD0; } }
L_00168FA0:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BEA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3746ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 12;
L_00168FD0:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[7], ld32((c.r[8].w[0] + 112u)));
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DD50000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3C6E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 21845ull;
    c.r[5].d[0] = c.r[5].d[0] | 61167ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    set32(c.r[3], c.r[7].w[0] + 227u);
    st32((c.r[8].w[0] + 112u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 64u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[6].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00169048; } }
    c.f[1] = ld32((c.r[8].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 96u), c.f[0]);
    c.budget -= 7;
L_00169048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169050:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_001691A8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00169080; } }
    c.r[3].d[0] = c.r[6].d[0] << 56;
    set32(c.r[7], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 6;
L_00169080:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001690C0; } }
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), 0u);  if (t) { goto L_001691A8; } }
    c.budget -= 1;
L_001690C0:
    c.r[1].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00169100; } }
    set32(c.r[6], c.r[7].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_00169130; } }
L_00169100:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BBD0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3025ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 12;
L_00169130:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[7], ld32((c.r[8].w[0] + 112u)));
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DA70000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBC6A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 12037ull;
    c.r[5].d[0] = c.r[5].d[0] | 3745ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    set32(c.r[3], c.r[7].w[0] + 222u);
    st32((c.r[8].w[0] + 112u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 64u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[6].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 29ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001691A8; } }
    c.f[1] = ld32((c.r[8].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 96u), c.f[0]);
    c.budget -= 7;
L_001691A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001691B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001691C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001691D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001691F4u); set32(c.r[17], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001691F4u) [[unlikely]] return; }
L_001691F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20288u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[1].w[0] + 20280u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00169450; } }
L_00169230:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_00169440; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.f[1] = ld32((c.r[6].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17696u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 18000u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 18128u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 18048u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 17696u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.budget -= 73;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016936Cu); set32(c.r[4], ld32((c.r[2].w[0] + 112u)));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x0016936Cu) [[unlikely]] return; }
L_0016936C:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693A8u); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x001693A8u) [[unlikely]] return; }
L_001693A8:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 192u);  if (t) { goto L_00169440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693C0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001693C0u) [[unlikely]] return; }
L_001693C0:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693E0u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001693E0u) [[unlikely]] return; }
L_001693E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693E8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001693E8u) [[unlikely]] return; }
L_001693E8:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 18032u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 18192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016943Cu); st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 103u, depth + 1u); else { c.pc = 0x0029DBC0u; return; } if (c.pc != 0x0016943Cu) [[unlikely]] return; }
L_0016943C:
    c.budget -= 1;
L_00169440:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_00169450:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169230u | kUnwind; return; } goto L_00169230; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00169480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23824u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001696A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001694BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001694BCu) [[unlikely]] return; }
L_001694BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169550; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[7], 0u + 19u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] - 26352u);
    set32(c.r[4], c.r[4].w[0] - 24896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[3]);
    st32((c.r[2].w[0] + 308u), c.f[2]);
    st32((c.r[2].w[0] + 312u), c.f[1]);
    st32((c.r[2].w[0] + 316u), c.f[0]);
    st8((c.r[2].w[0] + 455u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 35;
L_00169550:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169560u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00169560u) [[unlikely]] return; }
L_00169560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001695F8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 26352u);
    set32(c.r[4], c.r[4].w[0] - 24896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[3]);
    st32((c.r[2].w[0] + 308u), c.f[2]);
    st32((c.r[2].w[0] + 312u), c.f[1]);
    st32((c.r[2].w[0] + 316u), c.f[0]);
    st8((c.r[2].w[0] + 455u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 36;
L_001695F8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169608u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00169608u) [[unlikely]] return; }
L_00169608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001696A0; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 7u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 26352u);
    set32(c.r[4], c.r[4].w[0] - 24896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[3]);
    st32((c.r[2].w[0] + 308u), c.f[2]);
    st32((c.r[2].w[0] + 312u), c.f[1]);
    st32((c.r[2].w[0] + 316u), c.f[0]);
    st8((c.r[2].w[0] + 455u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 36;
L_001696A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001696C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23824u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001698F8; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001696FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001696FCu) [[unlikely]] return; }
L_001696FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169798; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[7], 0u + 19u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] - 26352u);
    set32(c.r[4], c.r[4].w[0] - 24896u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[3]);
    st32((c.r[2].w[0] + 308u), c.f[2]);
    st32((c.r[2].w[0] + 312u), c.f[1]);
    st32((c.r[2].w[0] + 316u), c.f[0]);
    st8((c.r[2].w[0] + 455u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 37;
L_00169798:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001697A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001697A8u) [[unlikely]] return; }
L_001697A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169848; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 26352u);
    set32(c.r[4], c.r[4].w[0] - 24896u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[3]);
    st32((c.r[2].w[0] + 308u), c.f[2]);
    st32((c.r[2].w[0] + 312u), c.f[1]);
    st32((c.r[2].w[0] + 316u), c.f[0]);
    st8((c.r[2].w[0] + 455u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 38;
L_00169848:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169858u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00169858u) [[unlikely]] return; }
L_00169858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001698F8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 7u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 26352u);
    set32(c.r[4], c.r[4].w[0] - 24896u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[3]);
    st32((c.r[2].w[0] + 308u), c.f[2]);
    st32((c.r[2].w[0] + 312u), c.f[1]);
    st32((c.r[2].w[0] + 316u), c.f[0]);
    st8((c.r[2].w[0] + 455u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 38;
L_001698F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00169910:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 18912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00169930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 455u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 304u);  if (t) { goto L_00169974; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 18880u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[3].w[0])));  if (t) { goto L_0016998C; } }
L_00169974:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 18892u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_0016998C:
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
L_001699A0:
    st32((c.r[9].w[0] + 96u), c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[3].d[0] = c.r[11].sd[0] < 5ll ? 1ull : 0ull;
    st8((c.r[6].w[0] + 136u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[6].w[0] + 141u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[8].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[8].w[0] + 20u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + 16u);
    st16((c.r[7].w[0] + 116u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 14u)));
    st16((c.r[7].w[0] + 126u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 146u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001699A0u | kUnwind; return; } goto L_001699A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A04u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00169A04u) [[unlikely]] return; }
L_00169A04:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A20u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 104u, depth + 1u); else { c.pc = 0x00169A30u; return; } if (c.pc != 0x00169A20u) [[unlikely]] return; }
L_00169A20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00169A30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[21].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 14;
L_00169A68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[20].w[0] + c.r[18].w[0]);  if (t) { goto L_00169AE0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[5].w[0] + 146u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[5].w[0] + 146u);  if (t) { goto L_00169AA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00169AD0; } }
L_00169AA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 141u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18928u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169AD0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169AD0u) [[unlikely]] return; }
L_00169AD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169AE0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00169AE0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169A68u | kUnwind; return; } goto L_00169A68; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st16((c.r[21].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00169B10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00169B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B18u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00169B18u) [[unlikely]] return; }
L_00169B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B20u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00169B20u) [[unlikely]] return; }
L_00169B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B28u); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00169B28u) [[unlikely]] return; }
L_00169B28:
    set32(c.r[3], 0u + 1u);
    st8((c.r[21].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00169B60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00169C18; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] << 4);  if (t) { goto L_00169BB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 20u), c.f[0]);  if (t) { goto L_00169BE0; } }
    c.budget -= 1;
L_00169BB0:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.budget -= 12;
L_00169BE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00169C18; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.budget -= 10;
L_00169C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169C20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00169CE0; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] << 4);  if (t) { goto L_00169C70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_00169CE0; } }
    c.budget -= 1;
L_00169C70:
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] << 4);  if (t) { goto L_00169CB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C940000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 61964ull;
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_00169CE0; } }
    c.budget -= 1;
L_00169CB0:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55051ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 12;
L_00169CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169CF0:
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 126u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[7].w[0] + 2u);  if (t) { goto L_00169DC8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00169D50; } }
    set32(c.r[4], c.r[6].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52432ull;
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_00169DC8; } }
L_00169D50:
    set32(c.r[3], c.r[7].w[0] + 5u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00169D88; } }
    set32(c.r[4], c.r[6].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_00169DC8; } }
L_00169D88:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF550000u);
    c.r[3].d[0] = c.r[3].d[0] | 21845ull;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 16;
L_00169DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169DD0:
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 126u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00169E90; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00169E38; } }
    set32(c.r[4], c.r[6].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_00169E90; } }
L_00169E38:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DAA0000u);
    c.r[6].d[0] = c.r[5].d[0] | 43691ull;
    c.f[3] = ld32((c.r[7].w[0] + 16u));
    c.r[5].d[0] = c.r[3].d[0] | 43691ull;
    c.f[2] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE2A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[7].w[0] + 16u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 20u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.budget -= 22;
L_00169E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169EA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00169EB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00169EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    set32(c.r[2], c.r[18].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[28].w[0] - 32724u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169F10u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x00169F10u) [[unlikely]] return; }
L_00169F10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20288u), 0u);  if (t) { goto L_0016A118; } }
    c.budget -= 1;
L_00169F50:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 146u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A108; } }
    c.r[2].d[0] = c.r[16].d[0] << 56;
    set32(c.r[3], c.r[28].w[0] - 32724u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 18944u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169FE8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x00169FE8u) [[unlikely]] return; }
L_00169FE8:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A010u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x0016A010u) [[unlikely]] return; }
L_0016A010:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FF30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x33330000u);
    c.r[4].d[0] = c.r[4].d[0] | 13107ull;
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A030u); c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0016A030u) [[unlikely]] return; }
L_0016A030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A038u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x0016A038u) [[unlikely]] return; }
L_0016A038:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A060u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x0016A060u) [[unlikely]] return; }
L_0016A060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FF30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x33330000u);
    c.r[4].d[0] = c.r[4].d[0] | 13107ull;
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A080u); c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x0016A080u) [[unlikely]] return; }
L_0016A080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A088u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x0016A088u) [[unlikely]] return; }
L_0016A088:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[1].w[0] + 20228u), c.f[0]);
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] + 19008u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 19120u);
    set32(c.r[2], c.r[2].w[0] + 19232u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[6], c.r[6].w[0] - 11u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[7].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 11u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 11u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A108u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0016A108u) [[unlikely]] return; }
L_0016A108:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_0016A118:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169F50u | kUnwind; return; } goto L_00169F50; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016A150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A178u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016A178u) [[unlikely]] return; }
L_0016A178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016A1F8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 24048u);
    set32(c.r[3], c.r[3].w[0] - 23136u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[3]);
    st32((c.r[2].w[0] + 308u), c.f[2]);
    st32((c.r[2].w[0] + 312u), c.f[1]);
    st32((c.r[2].w[0] + 316u), c.f[0]);
    c.budget -= 30;
L_0016A1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016A210:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 19408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016A230:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[9], c.r[9].w[0] + 19296u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 18;
L_0016A278:
    c.r[5].d[0] = ld8((c.r[9].w[0]));
    c.r[4].d[0] = c.r[10].d[0] << 56;
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[10].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[2].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 82u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[8].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[8].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[9].w[0] + 12u));
    st32((c.r[8].w[0] + 24u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] + 16u);
    st16((c.r[7].w[0] + 76u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[9], c.r[9].w[0] + 20u);
    st32((c.r[6].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A278u | kUnwind; return; } goto L_0016A278; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 86u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A304u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0016A304u) [[unlikely]] return; }
L_0016A304:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A310u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0016A310u) [[unlikely]] return; }
L_0016A310:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A320u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0016A320u) [[unlikely]] return; }
L_0016A320:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A32Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0016A32Cu) [[unlikely]] return; }
L_0016A32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A334u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016A334u) [[unlikely]] return; }
L_0016A334:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[2], c.r[2].w[0] << 12);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A36Cu); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 97u, depth + 1u); else { c.pc = 0x0016CD60u; return; } if (c.pc != 0x0016A36Cu) [[unlikely]] return; }
L_0016A36C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016A390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 304u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A3B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 145u, depth + 1u); else { c.pc = 0x0016A430u; return; } if (c.pc != 0x0016A3B0u) [[unlikely]] return; }
L_0016A3B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A3BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 146u, depth + 1u); else { c.pc = 0x0016A480u; return; } if (c.pc != 0x0016A3BCu) [[unlikely]] return; }
L_0016A3BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A3C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 147u, depth + 1u); else { c.pc = 0x0016A510u; return; } if (c.pc != 0x0016A3C8u) [[unlikely]] return; }
L_0016A3C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016A3F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016A3F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 87u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016A3F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0016A3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A400u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016A400u) [[unlikely]] return; }
L_0016A400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A408u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0016A408u) [[unlikely]] return; }
L_0016A408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A410u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016A410u) [[unlikely]] return; }
L_0016A410:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016A430:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[5].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016A448; } }
    st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016A448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 52428ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 20u), c.f[0]);  c.pc = t; return; }
L_0016A480:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[5].w[0] + 78u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016A498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 86u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016A4B0; } }
L_0016A498:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 78u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0016A4B0; } }
    st8((c.r[5].w[0] + 86u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0016A4B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 78u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016A500; } }
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[4].d[0] = c.r[3].d[0] | 43691ull;
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBEAA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 68u), c.f[0]);
    c.budget -= 16;
L_0016A500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A510:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 80u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[5].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016A528; } }
    st8((c.r[5].w[0] + 87u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016A528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016A578; } }
    c.f[1] = ld32((c.r[5].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0016A578:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016A590:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0016A5A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A5DCu); set32(c.r[17], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x0016A5DCu) [[unlikely]] return; }
L_0016A5DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A5ECu); st32((c.r[1].w[0] + 20268u), c.f[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0016A5ECu) [[unlikely]] return; }
L_0016A5EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20288u), 0u);  if (t) { goto L_0016A788; } }
L_0016A628:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 85u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 19360u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::move(c.vu0, 1u, 6u, 0u);
    vu::add(c.vu0, 14u, 6u, 5u, 4u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[10], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    set32(c.r[8], c.r[8].w[0] + 19424u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[6].w[0] + 19472u);
    set32(c.r[9], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19520u);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.f[0] = ld32((c.r[10].w[0] + 20u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    st32((c.r[1].w[0] + 20228u), c.f[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[9].d[0] = ld8((c.r[9].w[0] + 82u));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 100u);
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[9], c.r[9].w[0] - 98u);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 82u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[7], c.r[7].w[0] - 98u);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 82u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] - 98u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 82u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 69;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016A768; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A760u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 15u, depth + 1u); else { c.pc = 0x0029C3B0u; return; } if (c.pc != 0x0016A760u) [[unlikely]] return; }
L_0016A760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016A778; } }
L_0016A768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A774u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0016A774u) [[unlikely]] return; }
L_0016A774:
    c.budget -= 1;
L_0016A778:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_0016A788:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A628u | kUnwind; return; } goto L_0016A628; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016A7C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 20210u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0016A9B0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0016A930; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0016A8B0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0016A830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AA28; } }
    c.budget -= 1;
L_0016A830:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016A838:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A848u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016A848u) [[unlikely]] return; }
L_0016A848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016A898; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 21280u);
    set32(c.r[3], c.r[3].w[0] - 14976u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 376u), c.r[18].w[0]);
    st16((c.r[2].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 18;
L_0016A898:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A838u | kUnwind; return; } goto L_0016A838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AA28; } }
L_0016A8B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016A8B8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A8C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016A8C8u) [[unlikely]] return; }
L_0016A8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016A918; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 21280u);
    set32(c.r[3], c.r[3].w[0] - 14976u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[19].w[0]);
    c.budget -= 12;
L_0016A900:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 376u), c.r[18].w[0]);
    st16((c.r[2].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 6;
L_0016A918:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A8B8u | kUnwind; return; } goto L_0016A8B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AA28; } }
L_0016A930:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016A938:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A948u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016A948u) [[unlikely]] return; }
L_0016A948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016A998; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 21280u);
    set32(c.r[3], c.r[3].w[0] - 14976u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 376u), c.r[18].w[0]);
    st16((c.r[2].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 18;
L_0016A998:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A938u | kUnwind; return; } goto L_0016A938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AA28; } }
L_0016A9B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016A9B8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A9C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016A9C8u) [[unlikely]] return; }
L_0016A9C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AA18; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 21280u);
    set32(c.r[3], c.r[3].w[0] - 14976u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 376u), c.r[18].w[0]);
    st16((c.r[2].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 18;
L_0016AA18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A9B8u | kUnwind; return; } goto L_0016A9B8; } }
L_0016AA28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016AA50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 20210u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 7u);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_0016AC40; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0016ABC0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0016AB40; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0016AAC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ACB8; } }
    c.budget -= 1;
L_0016AAC0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016AAC8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AAD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016AAD8u) [[unlikely]] return; }
L_0016AAD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AB28; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 21280u);
    set32(c.r[3], c.r[3].w[0] - 14976u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 376u), c.r[18].w[0]);
    st16((c.r[2].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 18;
L_0016AB28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AAC8u | kUnwind; return; } goto L_0016AAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ACB8; } }
L_0016AB40:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016AB48:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016AB58u) [[unlikely]] return; }
L_0016AB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ABA8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 21280u);
    set32(c.r[3], c.r[3].w[0] - 14976u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 376u), c.r[18].w[0]);
    st16((c.r[2].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 18;
L_0016ABA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AB48u | kUnwind; return; } goto L_0016AB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ACB8; } }
L_0016ABC0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016ABC8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ABD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016ABD8u) [[unlikely]] return; }
L_0016ABD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AC28; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 21280u);
    set32(c.r[3], c.r[3].w[0] - 14976u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 376u), c.r[18].w[0]);
    st16((c.r[2].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 18;
L_0016AC28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016ABC8u | kUnwind; return; } goto L_0016ABC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ACB8; } }
L_0016AC40:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016AC48:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AC58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016AC58u) [[unlikely]] return; }
L_0016AC58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ACA8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 21280u);
    set32(c.r[3], c.r[3].w[0] - 14976u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 376u), c.r[18].w[0]);
    st16((c.r[2].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 18;
L_0016ACA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AC48u | kUnwind; return; } goto L_0016AC48; } }
L_0016ACB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016ACE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 25920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016AD00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 372u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 380u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_0016B798; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016AD60:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[14], c.r[15].w[0] << 3);
    set32(c.r[13], c.r[13].w[0] + 19552u);
    set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);
    set32(c.r[12], c.r[12].w[0] + 19554u);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + 19556u);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[10], c.r[10].w[0] + 19560u);
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    set32(c.r[9], c.r[9].w[0] + 19564u);
    set32(c.r[8], c.r[8].w[0] + 19568u);
    set32(c.r[7], c.r[7].w[0] + 19574u);
    set32(c.r[6], c.r[6].w[0] + 19572u);
    set32(c.r[5], c.r[5].w[0] + 19576u);
    set32(c.r[4], c.r[4].w[0] + 19577u);
    set32(c.r[3], 0u + 1u);
    st16((c.r[18].w[0] + 80u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[13], c.r[14].w[0] << 3);
    set32(c.r[13], c.r[13].w[0] - c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    st16((c.r[18].w[0] + 78u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 94;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016B798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AEE0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016AEE0u) [[unlikely]] return; }
L_0016AEE0:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0016B798; } }
L_0016AEF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016B068; } }
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[12], c.r[12].w[0] + 19648u);
    set32(c.r[13], c.r[14].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + 19650u);
    set32(c.r[13], c.r[13].w[0] - c.r[14].w[0]);
    set32(c.r[10], c.r[10].w[0] + 19652u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 19656u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[8], c.r[8].w[0] + 19660u);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    set32(c.r[7], c.r[7].w[0] + 19664u);
    set32(c.r[6], c.r[6].w[0] + 19670u);
    set32(c.r[5], c.r[5].w[0] + 19668u);
    set32(c.r[4], c.r[4].w[0] + 19672u);
    set32(c.r[3], c.r[3].w[0] + 19673u);
    st16((c.r[18].w[0] + 80u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    st16((c.r[18].w[0] + 78u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 91;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016B798; } }
L_0016B068:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[13], c.r[14].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] + 19792u);
    set32(c.r[13], c.r[13].w[0] - c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] + 19794u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 19796u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[9], c.r[9].w[0] + 19800u);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    set32(c.r[8], c.r[8].w[0] + 19804u);
    set32(c.r[7], c.r[7].w[0] + 19808u);
    c.budget -= 22;
L_0016B0C0:
    set32(c.r[6], c.r[6].w[0] + 19814u);
    set32(c.r[5], c.r[5].w[0] + 19812u);
    set32(c.r[4], c.r[4].w[0] + 19816u);
    set32(c.r[3], c.r[3].w[0] + 19817u);
    st16((c.r[18].w[0] + 80u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    st16((c.r[18].w[0] + 78u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 69;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016B798; } }
    c.budget -= 1;
L_0016B1D8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016B350; } }
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[12], c.r[12].w[0] + 19648u);
    set32(c.r[13], c.r[14].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + 19650u);
    set32(c.r[13], c.r[13].w[0] - c.r[14].w[0]);
    set32(c.r[10], c.r[10].w[0] + 19652u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 19656u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[8], c.r[8].w[0] + 19660u);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    set32(c.r[7], c.r[7].w[0] + 19664u);
    set32(c.r[6], c.r[6].w[0] + 19670u);
    set32(c.r[5], c.r[5].w[0] + 19668u);
    set32(c.r[4], c.r[4].w[0] + 19672u);
    set32(c.r[3], c.r[3].w[0] + 19673u);
    st16((c.r[18].w[0] + 80u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    st16((c.r[18].w[0] + 78u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 91;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016B798; } }
L_0016B350:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[13], c.r[14].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] + 19792u);
    set32(c.r[13], c.r[13].w[0] - c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] + 19794u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 19796u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[9], c.r[9].w[0] + 19800u);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    set32(c.r[8], c.r[8].w[0] + 19804u);
    set32(c.r[7], c.r[7].w[0] + 19808u);
    set32(c.r[6], c.r[6].w[0] + 19814u);
    set32(c.r[5], c.r[5].w[0] + 19812u);
    set32(c.r[4], c.r[4].w[0] + 19816u);
    set32(c.r[3], c.r[3].w[0] + 19817u);
    st16((c.r[18].w[0] + 80u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    st16((c.r[18].w[0] + 78u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 91;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016B798; } }
    c.budget -= 1;
L_0016B4C0:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[13], c.r[14].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] + 19936u);
    set32(c.r[13], c.r[13].w[0] - c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] + 19938u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 19940u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[9], c.r[9].w[0] + 19944u);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    set32(c.r[8], c.r[8].w[0] + 19948u);
    set32(c.r[7], c.r[7].w[0] + 19952u);
    set32(c.r[6], c.r[6].w[0] + 19958u);
    set32(c.r[5], c.r[5].w[0] + 19956u);
    set32(c.r[4], c.r[4].w[0] + 19960u);
    set32(c.r[3], c.r[3].w[0] + 19961u);
    st16((c.r[18].w[0] + 80u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    st16((c.r[18].w[0] + 78u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 91;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016B798; } }
    c.budget -= 1;
L_0016B630:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[13], c.r[14].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] + 20000u);
    set32(c.r[13], c.r[13].w[0] - c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] + 20002u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 20004u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[9], c.r[9].w[0] + 20008u);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    set32(c.r[8], c.r[8].w[0] + 20012u);
    set32(c.r[7], c.r[7].w[0] + 20016u);
    set32(c.r[6], c.r[6].w[0] + 20022u);
    set32(c.r[5], c.r[5].w[0] + 20020u);
    set32(c.r[4], c.r[4].w[0] + 20024u);
    set32(c.r[3], c.r[3].w[0] + 20025u);
    st16((c.r[18].w[0] + 80u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    st16((c.r[18].w[0] + 78u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 90;
L_0016B798:
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 68u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[19].w[0] + 72u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[11], ld32((c.r[18].w[0] + 72u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[9], c.r[9].w[0] + 20208u);
    set32(c.r[8], c.r[8].w[0] + 20212u);
    set32(c.r[7], c.r[7].w[0] + 20216u);
    set32(c.r[6], c.r[6].w[0] + 20220u);
    set32(c.r[5], c.r[5].w[0] + 20224u);
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + 20228u);
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    set32(c.r[9], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[19].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 66;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0016BC58; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14096u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016B8B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016B940; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8DCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016B8DCu) [[unlikely]] return; }
L_0016B8DC:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8E8u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016B8E8u) [[unlikely]] return; }
L_0016B8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8F0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016B8F0u) [[unlikely]] return; }
L_0016B8F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B904u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016B904u) [[unlikely]] return; }
L_0016B904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B90Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016B90Cu) [[unlikely]] return; }
L_0016B90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B914u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016B914u) [[unlikely]] return; }
L_0016B914:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B924u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016B924u) [[unlikely]] return; }
L_0016B924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B92Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016B92Cu) [[unlikely]] return; }
L_0016B92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B934u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016B934u) [[unlikely]] return; }
L_0016B934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
    c.budget -= 1;
L_0016B940:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B954u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016B954u) [[unlikely]] return; }
L_0016B954:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B960u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016B960u) [[unlikely]] return; }
L_0016B960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
L_0016B968:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0016B980; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016B9F8; } }
    c.budget -= 1;
L_0016B980:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B994u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016B994u) [[unlikely]] return; }
L_0016B994:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9A0u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016B9A0u) [[unlikely]] return; }
L_0016B9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016B9A8u) [[unlikely]] return; }
L_0016B9A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9BCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016B9BCu) [[unlikely]] return; }
L_0016B9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016B9C4u) [[unlikely]] return; }
L_0016B9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9CCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016B9CCu) [[unlikely]] return; }
L_0016B9CC:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9DCu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016B9DCu) [[unlikely]] return; }
L_0016B9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016B9E4u) [[unlikely]] return; }
L_0016B9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9ECu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016B9ECu) [[unlikely]] return; }
L_0016B9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
    c.budget -= 1;
L_0016B9F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016BA38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA18u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BA18u) [[unlikely]] return; }
L_0016BA18:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA24u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016BA24u) [[unlikely]] return; }
L_0016BA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA2Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BA2Cu) [[unlikely]] return; }
L_0016BA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
    c.budget -= 1;
L_0016BA38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA4Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BA4Cu) [[unlikely]] return; }
L_0016BA4C:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA58u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016BA58u) [[unlikely]] return; }
L_0016BA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
L_0016BA60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA74u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BA74u) [[unlikely]] return; }
L_0016BA74:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA80u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016BA80u) [[unlikely]] return; }
L_0016BA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA88u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BA88u) [[unlikely]] return; }
L_0016BA88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA9Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016BA9Cu) [[unlikely]] return; }
L_0016BA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BAA4u) [[unlikely]] return; }
L_0016BAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAACu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BAACu) [[unlikely]] return; }
L_0016BAAC:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BABCu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016BABCu) [[unlikely]] return; }
L_0016BABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016BAC4u) [[unlikely]] return; }
L_0016BAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BACCu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BACCu) [[unlikely]] return; }
L_0016BACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
    c.budget -= 1;
L_0016BAD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_0016BB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAF0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BAF0u) [[unlikely]] return; }
L_0016BAF0:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAFCu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016BAFCu) [[unlikely]] return; }
L_0016BAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB04u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BB04u) [[unlikely]] return; }
L_0016BB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB0Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016BB0Cu) [[unlikely]] return; }
L_0016BB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BB14u) [[unlikely]] return; }
L_0016BB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB1Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BB1Cu) [[unlikely]] return; }
L_0016BB1C:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB2Cu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016BB2Cu) [[unlikely]] return; }
L_0016BB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016BB34u) [[unlikely]] return; }
L_0016BB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB3Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BB3Cu) [[unlikely]] return; }
L_0016BB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
    c.budget -= 1;
L_0016BB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB50u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BB50u) [[unlikely]] return; }
L_0016BB50:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB5Cu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016BB5Cu) [[unlikely]] return; }
L_0016BB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
    c.budget -= 1;
L_0016BB68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0016BB80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016BBE0; } }
    c.budget -= 1;
L_0016BB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB88u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BB88u) [[unlikely]] return; }
L_0016BB88:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB94u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016BB94u) [[unlikely]] return; }
L_0016BB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB9Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BB9Cu) [[unlikely]] return; }
L_0016BB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBA4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016BBA4u) [[unlikely]] return; }
L_0016BBA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BBACu) [[unlikely]] return; }
L_0016BBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBB4u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BBB4u) [[unlikely]] return; }
L_0016BBB4:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBC4u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016BBC4u) [[unlikely]] return; }
L_0016BBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016BBCCu) [[unlikely]] return; }
L_0016BBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBD4u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BBD4u) [[unlikely]] return; }
L_0016BBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
    c.budget -= 1;
L_0016BBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBE8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BBE8u) [[unlikely]] return; }
L_0016BBE8:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBF4u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016BBF4u) [[unlikely]] return; }
L_0016BBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC58; } }
    c.budget -= 1;
L_0016BC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC08u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BC08u) [[unlikely]] return; }
L_0016BC08:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC14u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016BC14u) [[unlikely]] return; }
L_0016BC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC1Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BC1Cu) [[unlikely]] return; }
L_0016BC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC24u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016BC24u) [[unlikely]] return; }
L_0016BC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BC2Cu) [[unlikely]] return; }
L_0016BC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC34u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BC34u) [[unlikely]] return; }
L_0016BC34:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 2;
L_0016BC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC44u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016BC44u) [[unlikely]] return; }
L_0016BC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016BC4Cu) [[unlikely]] return; }
L_0016BC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC54u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BC54u) [[unlikely]] return; }
L_0016BC54:
    c.budget -= 1;
L_0016BC58:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016BC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25936u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 382u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BCB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016BCB8u) [[unlikely]] return; }
L_0016BCB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016BCE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016BCE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016BCE0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016BD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0016BD30; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016BD30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 76u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016BD98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BD84u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BD84u) [[unlikely]] return; }
L_0016BD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BD8Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BD8Cu) [[unlikely]] return; }
L_0016BD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BDA8; } }
    c.budget -= 1;
L_0016BD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BDA0u); set32(c.r[4], c.r[6].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BDA0u) [[unlikely]] return; }
L_0016BDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BDA8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BDA8u) [[unlikely]] return; }
L_0016BDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016BDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0016BDF0; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016BDF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016BE20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE10u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BE10u) [[unlikely]] return; }
L_0016BE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE18u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BE18u) [[unlikely]] return; }
L_0016BE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BE30; } }
L_0016BE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE28u); set32(c.r[4], c.r[6].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016BE28u) [[unlikely]] return; }
L_0016BE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE30u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BE30u) [[unlikely]] return; }
L_0016BE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016BE40:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016BE58; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016BE58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[3].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016BEA8; } }
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 120u), c.f[0]);  if (t) { goto L_0016BEE8; } }
    c.budget -= 1;
L_0016BEA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBE1D0000u);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[5].d[0] = c.r[5].d[0] | 35289ull;
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D1D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 35289ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.budget -= 16;
L_0016BEE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016BEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0016BF18; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016BF18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF38u); st32((c.r[5].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BF38u) [[unlikely]] return; }
L_0016BF38:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF48u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016BF48u) [[unlikely]] return; }
L_0016BF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF50u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BF50u) [[unlikely]] return; }
L_0016BF50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016BF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0016BF88; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016BF88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFB0u); st32((c.r[16].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016BFB0u) [[unlikely]] return; }
L_0016BFB0:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFC0u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016BFC0u) [[unlikely]] return; }
L_0016BFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFC8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016BFC8u) [[unlikely]] return; }
L_0016BFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016BFE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    [[clang::musttail]] return unit_001B(c, 1u, depth);
}

}
