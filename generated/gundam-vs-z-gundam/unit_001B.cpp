#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0,
    4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    36, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51,
    0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79,
    0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0,
    89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220,
    0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 236,
    0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0,
    0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257,
    0, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0,
    0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0016C000;
    case 2u: goto L_0016C064;
    case 3u: goto L_0016C078;
    case 4u: goto L_0016C080;
    case 5u: goto L_0016C088;
    case 6u: goto L_0016C098;
    case 7u: goto L_0016C0A0;
    case 8u: goto L_0016C0A8;
    case 9u: goto L_0016C0B0;
    case 10u: goto L_0016C0D0;
    case 11u: goto L_0016C180;
    case 12u: goto L_0016C240;
    case 13u: goto L_0016C378;
    case 14u: goto L_0016C388;
    case 15u: goto L_0016C390;
    case 16u: goto L_0016C3A0;
    case 17u: goto L_0016C4C8;
    case 18u: goto L_0016C4D8;
    case 19u: goto L_0016C4E0;
    case 20u: goto L_0016C4F0;
    case 21u: goto L_0016C560;
    case 22u: goto L_0016C570;
    case 23u: goto L_0016C580;
    case 24u: goto L_0016C5B4;
    case 25u: goto L_0016C728;
    case 26u: goto L_0016C7A0;
    case 27u: goto L_0016C7D4;
    case 28u: goto L_0016C7E4;
    case 29u: goto L_0016C7EC;
    case 30u: goto L_0016C7F4;
    case 31u: goto L_0016C7FC;
    case 32u: goto L_0016C814;
    case 33u: goto L_0016C828;
    case 34u: goto L_0016C830;
    case 35u: goto L_0016C878;
    case 36u: goto L_0016C880;
    case 37u: goto L_0016C888;
    case 38u: goto L_0016C890;
    case 39u: goto L_0016C89C;
    case 40u: goto L_0016C8AC;
    case 41u: goto L_0016C8B4;
    case 42u: goto L_0016C8BC;
    case 43u: goto L_0016C8CC;
    case 44u: goto L_0016C8D4;
    case 45u: goto L_0016C8E4;
    case 46u: goto L_0016C8EC;
    case 47u: goto L_0016C918;
    case 48u: goto L_0016C920;
    case 49u: goto L_0016C958;
    case 50u: goto L_0016C968;
    case 51u: goto L_0016C97C;
    case 52u: goto L_0016C988;
    case 53u: goto L_0016C994;
    case 54u: goto L_0016C9A4;
    case 55u: goto L_0016C9AC;
    case 56u: goto L_0016C9B4;
    case 57u: goto L_0016C9BC;
    case 58u: goto L_0016C9C4;
    case 59u: goto L_0016CA18;
    case 60u: goto L_0016CA20;
    case 61u: goto L_0016CA44;
    case 62u: goto L_0016CA50;
    case 63u: goto L_0016CA80;
    case 64u: goto L_0016CA88;
    case 65u: goto L_0016CA94;
    case 66u: goto L_0016CAA4;
    case 67u: goto L_0016CAAC;
    case 68u: goto L_0016CAB4;
    case 69u: goto L_0016CAC4;
    case 70u: goto L_0016CACC;
    case 71u: goto L_0016CADC;
    case 72u: goto L_0016CAE4;
    case 73u: goto L_0016CB30;
    case 74u: goto L_0016CB38;
    case 75u: goto L_0016CB40;
    case 76u: goto L_0016CB50;
    case 77u: goto L_0016CB64;
    case 78u: goto L_0016CB70;
    case 79u: goto L_0016CB7C;
    case 80u: goto L_0016CB8C;
    case 81u: goto L_0016CB94;
    case 82u: goto L_0016CB9C;
    case 83u: goto L_0016CBA4;
    case 84u: goto L_0016CBE8;
    case 85u: goto L_0016CBF0;
    case 86u: goto L_0016CC5C;
    case 87u: goto L_0016CC68;
    case 88u: goto L_0016CC70;
    case 89u: goto L_0016CC80;
    case 90u: goto L_0016CC88;
    case 91u: goto L_0016CC90;
    case 92u: goto L_0016CC98;
    case 93u: goto L_0016CCDC;
    case 94u: goto L_0016CCE4;
    case 95u: goto L_0016CD1C;
    case 96u: goto L_0016CD34;
    case 97u: goto L_0016CD60;
    case 98u: goto L_0016CDDC;
    case 99u: goto L_0016CE6C;
    case 100u: goto L_0016CF10;
    case 101u: goto L_0016CF30;
    case 102u: goto L_0016CFA0;
    case 103u: goto L_0016CFD8;
    case 104u: goto L_0016CFE0;
    case 105u: goto L_0016CFE8;
    case 106u: goto L_0016CFF0;
    case 107u: goto L_0016CFF8;
    case 108u: goto L_0016D000;
    case 109u: goto L_0016D020;
    case 110u: goto L_0016D080;
    case 111u: goto L_0016D094;
    case 112u: goto L_0016D320;
    case 113u: goto L_0016D3A0;
    case 114u: goto L_0016D3A8;
    case 115u: goto L_0016D530;
    case 116u: goto L_0016D590;
    case 117u: goto L_0016D5A4;
    case 118u: goto L_0016D840;
    case 119u: goto L_0016D8C0;
    case 120u: goto L_0016D8C8;
    case 121u: goto L_0016DA50;
    case 122u: goto L_0016DA60;
    case 123u: goto L_0016DA70;
    case 124u: goto L_0016DB34;
    case 125u: goto L_0016DB68;
    case 126u: goto L_0016DB70;
    case 127u: goto L_0016DB80;
    case 128u: goto L_0016DB94;
    case 129u: goto L_0016DBA0;
    case 130u: goto L_0016DBAC;
    case 131u: goto L_0016DBBC;
    case 132u: goto L_0016DBE0;
    case 133u: goto L_0016DC00;
    case 134u: goto L_0016DC20;
    case 135u: goto L_0016DC28;
    case 136u: goto L_0016DC5C;
    case 137u: goto L_0016DCA0;
    case 138u: goto L_0016DD04;
    case 139u: goto L_0016DD7C;
    case 140u: goto L_0016DDF0;
    case 141u: goto L_0016DE80;
    case 142u: goto L_0016DEA0;
    case 143u: goto L_0016DED8;
    case 144u: goto L_0016DEE4;
    case 145u: goto L_0016DF2C;
    case 146u: goto L_0016DF50;
    case 147u: goto L_0016DF80;
    case 148u: goto L_0016DF88;
    case 149u: goto L_0016DF90;
    case 150u: goto L_0016DF98;
    case 151u: goto L_0016DFB0;
    case 152u: goto L_0016E028;
    case 153u: goto L_0016E03C;
    case 154u: goto L_0016E050;
    case 155u: goto L_0016E080;
    case 156u: goto L_0016E088;
    case 157u: goto L_0016E098;
    case 158u: goto L_0016E0A8;
    case 159u: goto L_0016E0B8;
    case 160u: goto L_0016E0C0;
    case 161u: goto L_0016E0D0;
    case 162u: goto L_0016E0E0;
    case 163u: goto L_0016E0F0;
    case 164u: goto L_0016E1B8;
    case 165u: goto L_0016E2B0;
    case 166u: goto L_0016E4E0;
    case 167u: goto L_0016E550;
    case 168u: goto L_0016E564;
    case 169u: goto L_0016E7B0;
    case 170u: goto L_0016E9E0;
    case 171u: goto L_0016E9F0;
    case 172u: goto L_0016EA00;
    case 173u: goto L_0016EA30;
    case 174u: goto L_0016EA48;
    case 175u: goto L_0016EA50;
    case 176u: goto L_0016EA58;
    case 177u: goto L_0016EA68;
    case 178u: goto L_0016EA70;
    case 179u: goto L_0016EA94;
    case 180u: goto L_0016EAA8;
    case 181u: goto L_0016EAB0;
    case 182u: goto L_0016EAC0;
    case 183u: goto L_0016EAC8;
    case 184u: goto L_0016EAD0;
    case 185u: goto L_0016EAF4;
    case 186u: goto L_0016EB40;
    case 187u: goto L_0016EBB8;
    case 188u: goto L_0016EC00;
    case 189u: goto L_0016EC0C;
    case 190u: goto L_0016EC24;
    case 191u: goto L_0016EC48;
    case 192u: goto L_0016EC50;
    case 193u: goto L_0016EC64;
    case 194u: goto L_0016ECB0;
    case 195u: goto L_0016ECD8;
    case 196u: goto L_0016ED40;
    case 197u: goto L_0016ED68;
    case 198u: goto L_0016EDE0;
    case 199u: goto L_0016EE08;
    case 200u: goto L_0016EE70;
    case 201u: goto L_0016EE90;
    case 202u: goto L_0016EEC4;
    case 203u: goto L_0016EF60;
    case 204u: goto L_0016EF9C;
    case 205u: goto L_0016EFC0;
    case 206u: goto L_0016F06C;
    case 207u: goto L_0016F078;
    case 208u: goto L_0016F10C;
    case 209u: goto L_0016F124;
    case 210u: goto L_0016F190;
    case 211u: goto L_0016F308;
    case 212u: goto L_0016F4C8;
    case 213u: goto L_0016F530;
    case 214u: goto L_0016F630;
    case 215u: goto L_0016F690;
    case 216u: goto L_0016F6C4;
    case 217u: goto L_0016F6D0;
    case 218u: goto L_0016F6D8;
    case 219u: goto L_0016F6EC;
    case 220u: goto L_0016F6FC;
    case 221u: goto L_0016F70C;
    case 222u: goto L_0016F714;
    case 223u: goto L_0016F71C;
    case 224u: goto L_0016F72C;
    case 225u: goto L_0016F734;
    case 226u: goto L_0016F73C;
    case 227u: goto L_0016F760;
    case 228u: goto L_0016F794;
    case 229u: goto L_0016F7A0;
    case 230u: goto L_0016F7A8;
    case 231u: goto L_0016F7BC;
    case 232u: goto L_0016F7CC;
    case 233u: goto L_0016F7DC;
    case 234u: goto L_0016F7E4;
    case 235u: goto L_0016F7EC;
    case 236u: goto L_0016F7FC;
    case 237u: goto L_0016F804;
    case 238u: goto L_0016F80C;
    case 239u: goto L_0016F830;
    case 240u: goto L_0016F864;
    case 241u: goto L_0016F870;
    case 242u: goto L_0016F878;
    case 243u: goto L_0016F88C;
    case 244u: goto L_0016F89C;
    case 245u: goto L_0016F8AC;
    case 246u: goto L_0016F8B4;
    case 247u: goto L_0016F8BC;
    case 248u: goto L_0016F8CC;
    case 249u: goto L_0016F8D4;
    case 250u: goto L_0016F8DC;
    case 251u: goto L_0016F900;
    case 252u: goto L_0016F934;
    case 253u: goto L_0016F940;
    case 254u: goto L_0016F948;
    case 255u: goto L_0016F95C;
    case 256u: goto L_0016F96C;
    case 257u: goto L_0016F97C;
    case 258u: goto L_0016F984;
    case 259u: goto L_0016F98C;
    case 260u: goto L_0016F99C;
    case 261u: goto L_0016F9A4;
    case 262u: goto L_0016F9AC;
    case 263u: goto L_0016F9D0;
    case 264u: goto L_0016F9F8;
    case 265u: goto L_0016FA04;
    case 266u: goto L_0016FA0C;
    case 267u: goto L_0016FA14;
    case 268u: goto L_0016FA24;
    case 269u: goto L_0016FA34;
    case 270u: goto L_0016FA3C;
    case 271u: goto L_0016FA44;
    case 272u: goto L_0016FA54;
    case 273u: goto L_0016FA5C;
    case 274u: goto L_0016FA64;
    case 275u: goto L_0016FA80;
    case 276u: goto L_0016FA90;
    case 277u: goto L_0016FAA0;
    case 278u: goto L_0016FAE8;
    case 279u: goto L_0016FB20;
    case 280u: goto L_0016FB54;
    case 281u: goto L_0016FB64;
    case 282u: goto L_0016FB78;
    case 283u: goto L_0016FB84;
    case 284u: goto L_0016FB90;
    case 285u: goto L_0016FBA8;
    case 286u: goto L_0016FC4C;
    case 287u: goto L_0016FC54;
    case 288u: goto L_0016FC60;
    case 289u: goto L_0016FC70;
    case 290u: goto L_0016FC78;
    case 291u: goto L_0016FC80;
    case 292u: goto L_0016FCB8;
    case 293u: goto L_0016FCC0;
    case 294u: goto L_0016FCD4;
    case 295u: goto L_0016FCDC;
    case 296u: goto L_0016FCE8;
    case 297u: goto L_0016FD20;
    case 298u: goto L_0016FD28;
    case 299u: goto L_0016FD3C;
    case 300u: goto L_0016FD44;
    case 301u: goto L_0016FD50;
    case 302u: goto L_0016FD90;
    case 303u: goto L_0016FDE0;
    case 304u: goto L_0016FF10;
    case 305u: goto L_0016FF74;
    case 306u: goto L_0016FF84;
    case 307u: goto L_0016FF8C;
    case 308u: goto L_0016FF94;
    case 309u: goto L_0016FF9C;
    default: bad_entry(c, 0x0016C000u); return;
    }
L_0016C000:
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0016C018; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016C018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], 0u + 2u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 76u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016C090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C064u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016C064u) [[unlikely]] return; }
L_0016C064:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C078u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016C078u) [[unlikely]] return; }
L_0016C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C080u); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0016C080u) [[unlikely]] return; }
L_0016C080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C088u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016C088u) [[unlikely]] return; }
L_0016C088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C0B0; } }
L_0016C090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C098u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016C098u) [[unlikely]] return; }
L_0016C098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0A0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016C0A0u) [[unlikely]] return; }
L_0016C0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0A8u); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0016C0A8u) [[unlikely]] return; }
L_0016C0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0B0u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016C0B0u) [[unlikely]] return; }
L_0016C0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016C0D0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016C0E8; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016C0E8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016C138; } }
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52428ull;
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 120u), c.f[0]);  if (t) { goto L_0016C178; } }
L_0016C138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBEAA0000u);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[5].d[0] = c.r[5].d[0] | 43691ull;
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
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
L_0016C178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C180:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016C198; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016C198:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016C1E0; } }
    c.f[2] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[5].d[0] = c.r[3].d[0] | 55053ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_0016C230; } }
L_0016C1E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.f[3] = ld32((c.r[4].w[0] + 112u));
    c.r[7].d[0] = c.r[6].d[0] | 52429ull;
    c.f[2] = c.r[7].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.budget -= 20;
L_0016C230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016C288; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016C280; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0016C288; } }
    c.budget -= 1;
L_0016C280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016C390; } }
L_0016C288:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0016C2A0; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016C2A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C8F0000u);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] | 23594ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], 0u + 3u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016C308; } }
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_0016C340; } }
L_0016C308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C440000u);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] | 39846ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D940000u);
    c.r[2].d[0] = c.r[2].d[0] | 31458ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 14;
L_0016C340:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C370; } }
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.budget -= 8;
L_0016C370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C378u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016C378u) [[unlikely]] return; }
L_0016C378:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C388u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016C388u) [[unlikely]] return; }
L_0016C388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C390u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016C390u) [[unlikely]] return; }
L_0016C390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016C3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016C3E8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016C3E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0016C3E8; } }
    c.budget -= 1;
L_0016C3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016C4E0; } }
L_0016C3E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0016C400; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016C400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C8F0000u);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] | 23594ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], 0u + 4u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016C470; } }
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF50000u);
    c.r[3].d[0] = c.r[2].d[0] | 49808ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA80000u);
    c.r[2].d[0] = c.r[2].d[0] | 62914ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_0016C490; } }
    c.budget -= 1;
L_0016C470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D380000u);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] | 20971ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 8;
L_0016C490:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C4C0; } }
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.budget -= 8;
L_0016C4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4C8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016C4C8u) [[unlikely]] return; }
L_0016C4C8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4D8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016C4D8u) [[unlikely]] return; }
L_0016C4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4E0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016C4E0u) [[unlikely]] return; }
L_0016C4E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016C4F0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016C508; } }
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016C508:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C558; } }
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_0016C558:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C560:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016C570:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0016C580:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 386u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_0016CD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5B4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0016C5B4u) [[unlikely]] return; }
L_0016C5B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;  if (t) { goto L_0016C608; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C608; } }
    set32(c.r[4], c.r[4].w[0] - 18u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 25984u);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 26304u);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 26624u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0016C730; } }
L_0016C608:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 121ll ? 1ull : 0ull;  if (t) { goto L_0016C658; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C658; } }
    set32(c.r[4], c.r[4].w[0] - 118u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 26112u);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 26432u);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 26688u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0016C730; } }
    c.budget -= 1;
L_0016C658:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 167ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 169ll ? 1ull : 0ull;  if (t) { goto L_0016C6A8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C6A8; } }
    set32(c.r[4], c.r[4].w[0] - 167u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 26160u);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 26480u);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 26720u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0016C730; } }
    c.budget -= 1;
L_0016C6A8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    c.r[3].d[0] = c.r[6].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 113ll ? 1ull : 0ull;  if (t) { goto L_0016C730; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] - 106u);  if (t) { goto L_0016C730; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 26192u);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 26512u);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 26736u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 107u);
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 108u);  if (t) { goto L_0016C720; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0016C720; } }
    set32(c.r[3], 0u + 109u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 111u);  if (t) { goto L_0016C720; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0016C720; } }
    set32(c.r[3], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0016C730; } }
L_0016C720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C728u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0016C728u) [[unlikely]] return; }
L_0016C728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.budget -= 2;
L_0016C730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[28].w[0] - 32716u);
    st32((c.r[1].w[0] + 20252u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 83u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0016CD38; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14160u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016C7A0:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7D4u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016C7D4u) [[unlikely]] return; }
L_0016C7D4:
    c.f[13] = ld32((c.r[20].w[0] + 52u));
    c.f[14] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7E4u); c.f[12] = ld32((c.r[20].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016C7E4u) [[unlikely]] return; }
L_0016C7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7ECu); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016C7ECu) [[unlikely]] return; }
L_0016C7EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7F4u); set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016C7F4u) [[unlikely]] return; }
L_0016C7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7FCu); set32(c.r[4], ld32((c.r[19].w[0] + 68u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016C7FCu) [[unlikely]] return; }
L_0016C7FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    set32(c.r[2], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 16384u);  if (t) { goto L_0016C818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C814u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016C814u) [[unlikely]] return; }
L_0016C814:
    c.budget -= 1;
L_0016C818:
    c.f[13] = ld32((c.r[20].w[0] + 116u));
    c.f[14] = ld32((c.r[20].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C828u); c.f[12] = ld32((c.r[20].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016C828u) [[unlikely]] return; }
L_0016C828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C830u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016C830u) [[unlikely]] return; }
L_0016C830:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[2], 0u + 120u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0016C858; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0016C860; } }
L_0016C858:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016C860:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C878u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0016C878u) [[unlikely]] return; }
L_0016C878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CD38; } }
L_0016C880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C888u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016C888u) [[unlikely]] return; }
L_0016C888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C890u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016C890u) [[unlikely]] return; }
L_0016C890:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C89Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0016C89Cu) [[unlikely]] return; }
L_0016C89C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C8ACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x0016C8ACu) [[unlikely]] return; }
L_0016C8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C8B4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x0016C8B4u) [[unlikely]] return; }
L_0016C8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C8BCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0016C8BCu) [[unlikely]] return; }
L_0016C8BC:
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.f[14] = ld32((c.r[20].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C8CCu); c.f[12] = ld32((c.r[20].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016C8CCu) [[unlikely]] return; }
L_0016C8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C8D4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016C8D4u) [[unlikely]] return; }
L_0016C8D4:
    c.f[13] = ld32((c.r[20].w[0] + 116u));
    c.f[14] = ld32((c.r[20].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C8E4u); c.f[12] = ld32((c.r[20].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016C8E4u) [[unlikely]] return; }
L_0016C8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C8ECu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016C8ECu) [[unlikely]] return; }
L_0016C8EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C918u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0016C918u) [[unlikely]] return; }
L_0016C918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CD38; } }
L_0016C920:
    set32(c.r[2], c.r[28].w[0] - 32716u);
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C958u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016C958u) [[unlikely]] return; }
L_0016C958:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C968u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x0016C968u) [[unlikely]] return; }
L_0016C968:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[20].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C97Cu); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0016C97Cu) [[unlikely]] return; }
L_0016C97C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C988u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0016C988u) [[unlikely]] return; }
L_0016C988:
    c.f[13] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C994u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0016C994u) [[unlikely]] return; }
L_0016C994:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[20].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9A4u); st32((c.r[20].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016C9A4u) [[unlikely]] return; }
L_0016C9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9ACu); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016C9ACu) [[unlikely]] return; }
L_0016C9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9B4u); set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016C9B4u) [[unlikely]] return; }
L_0016C9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9BCu); set32(c.r[4], ld32((c.r[19].w[0] + 68u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016C9BCu) [[unlikely]] return; }
L_0016C9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9C4u); set32(c.r[4], ld32((c.r[20].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016C9C4u) [[unlikely]] return; }
L_0016C9C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25u);  if (t) { goto L_0016C9F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016C9F0; } }
    set32(c.r[2], 0u + 168u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 110u);  if (t) { goto L_0016C9F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016CA00; } }
L_0016C9F0:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0016CA08; } }
L_0016CA00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016CA08:
    c.f[13] = ld32((c.r[20].w[0] + 116u));
    c.f[14] = ld32((c.r[20].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA18u); c.f[12] = ld32((c.r[20].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016CA18u) [[unlikely]] return; }
L_0016CA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA20u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016CA20u) [[unlikely]] return; }
L_0016CA20:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA44u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0016CA44u) [[unlikely]] return; }
L_0016CA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CD38; } }
    c.budget -= 1;
L_0016CA50:
    set32(c.r[2], c.r[28].w[0] - 32716u);
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA80u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016CA80u) [[unlikely]] return; }
L_0016CA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA88u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016CA88u) [[unlikely]] return; }
L_0016CA88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA94u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0016CA94u) [[unlikely]] return; }
L_0016CA94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CAA4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x0016CAA4u) [[unlikely]] return; }
L_0016CAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CAACu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x0016CAACu) [[unlikely]] return; }
L_0016CAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CAB4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0016CAB4u) [[unlikely]] return; }
L_0016CAB4:
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.f[14] = ld32((c.r[20].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CAC4u); c.f[12] = ld32((c.r[20].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016CAC4u) [[unlikely]] return; }
L_0016CAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CACCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016CACCu) [[unlikely]] return; }
L_0016CACC:
    c.f[13] = ld32((c.r[20].w[0] + 116u));
    c.f[14] = ld32((c.r[20].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CADCu); c.f[12] = ld32((c.r[20].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016CADCu) [[unlikely]] return; }
L_0016CADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CAE4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016CAE4u) [[unlikely]] return; }
L_0016CAE4:
    set32(c.r[2], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    st32((c.r[1].w[0] + 20240u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB30u); st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0016CB30u) [[unlikely]] return; }
L_0016CB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CD38; } }
L_0016CB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB40u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016CB40u) [[unlikely]] return; }
L_0016CB40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB50u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x0016CB50u) [[unlikely]] return; }
L_0016CB50:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[20].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB64u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0016CB64u) [[unlikely]] return; }
L_0016CB64:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB70u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0016CB70u) [[unlikely]] return; }
L_0016CB70:
    c.f[13] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB7Cu); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0016CB7Cu) [[unlikely]] return; }
L_0016CB7C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[20].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB8Cu); st32((c.r[20].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016CB8Cu) [[unlikely]] return; }
L_0016CB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB94u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016CB94u) [[unlikely]] return; }
L_0016CB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB9Cu); set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016CB9Cu) [[unlikely]] return; }
L_0016CB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBA4u); set32(c.r[4], ld32((c.r[20].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016CBA4u) [[unlikely]] return; }
L_0016CBA4:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    set32(c.r[2], c.r[28].w[0] - 32716u);
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[20].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBE8u); c.f[12] = ld32((c.r[20].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016CBE8u) [[unlikely]] return; }
L_0016CBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBF0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016CBF0u) [[unlikely]] return; }
L_0016CBF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 112u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    set32(c.r[2], 0u + 107u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016CC40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[29].w[0] + 112u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20288u), c.r[2].w[0]);  if (t) { goto L_0016CC50; } }
L_0016CC40:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0016CC50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC5Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0016CC5Cu) [[unlikely]] return; }
L_0016CC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CD38; } }
    c.budget -= 1;
L_0016CC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC70u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016CC70u) [[unlikely]] return; }
L_0016CC70:
    c.f[13] = ld32((c.r[20].w[0] + 52u));
    c.f[14] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC80u); c.f[12] = ld32((c.r[20].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016CC80u) [[unlikely]] return; }
L_0016CC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC88u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016CC88u) [[unlikely]] return; }
L_0016CC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC90u); set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016CC90u) [[unlikely]] return; }
L_0016CC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC98u); set32(c.r[4], ld32((c.r[19].w[0] + 68u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016CC98u) [[unlikely]] return; }
L_0016CC98:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    set32(c.r[2], c.r[28].w[0] - 32716u);
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = ld32((c.r[20].w[0] + 120u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CCDCu); c.f[12] = ld32((c.r[20].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016CCDCu) [[unlikely]] return; }
L_0016CCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CCE4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016CCE4u) [[unlikely]] return; }
L_0016CCE4:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 80u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0016CD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD1Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 103u, depth + 1u); else { c.pc = 0x0029DBC0u; return; } if (c.pc != 0x0016CD1Cu) [[unlikely]] return; }
L_0016CD1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CD38; } }
    c.budget -= 1;
L_0016CD28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD34u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0016CD34u) [[unlikely]] return; }
L_0016CD34:
    c.budget -= 1;
L_0016CD38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0016CD60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[16].d[0] = c.r[6].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_0016CDA8; } }
    set32(c.r[3], c.r[16].w[0] + 2u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_0016CDA8:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0016CE60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016CDD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CEE8; } }
    c.budget -= 1;
L_0016CDD0:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CDDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016CDDCu) [[unlikely]] return; }
L_0016CDDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CEE8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[28].w[0] - 32712u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] - 12528u);
    set32(c.r[5], c.r[5].w[0] - 9616u);
    set32(c.r[4], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 132u), c.f[2]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 84u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 564u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016CEE8; } }
L_0016CE60:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016CE6Cu) [[unlikely]] return; }
L_0016CE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CEE8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[28].w[0] - 32712u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] - 12528u);
    set32(c.r[5], c.r[5].w[0] - 9616u);
    set32(c.r[4], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 132u), c.f[2]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 84u), 0u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[2].w[0] + 564u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 29;
L_0016CEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016CF10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 26800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016CF30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 560u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 528u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 532u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 536u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 540u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 544u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 548u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 552u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 556u), c.r[3].w[0]);  c.pc = t; return; }
L_0016CFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 26816u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016CFD8u) [[unlikely]] return; }
L_0016CFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFE0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016CFE0u) [[unlikely]] return; }
L_0016CFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFE8u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0016CFE8u) [[unlikely]] return; }
L_0016CFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFF0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016CFF0u) [[unlikely]] return; }
L_0016CFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFF8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016CFF8u) [[unlikely]] return; }
L_0016CFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016D000u) [[unlikely]] return; }
L_0016D000:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016D020:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016D150; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D300; } }
L_0016D060:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[17], 0u - 4096u);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
L_0016D080:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D094u); st32((c.r[16].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016D094u) [[unlikely]] return; }
L_0016D094:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0016D100; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016D0F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016D0E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D110; } }
    c.budget -= 1;
L_0016D0D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0016D110; } }
L_0016D0E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0016D110; } }
L_0016D0F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0016D110; } }
    c.budget -= 1;
L_0016D100:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E8C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 4;
L_0016D110:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 1024u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D080u | kUnwind; return; } goto L_0016D080; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    c.r[5].d[0] = c.r[4].d[0] | 55050ull;
    c.r[4].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[20].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[3], 0u + 30u);
    st32((c.r[20].w[0] + 68u), c.r[4].w[0]);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_0016D150:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016D170; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016D170:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 192u));
    c.f[0] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 192u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 84u));
    c.f[0] = ld32((c.r[19].w[0] + 196u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 196u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 196u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 96u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 100u));
    c.f[0] = ld32((c.r[19].w[0] + 200u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 200u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 200u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[0] = ld32((c.r[19].w[0] + 204u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 204u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 204u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 132u));
    c.f[0] = ld32((c.r[19].w[0] + 208u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 208u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 148u));
    c.f[0] = ld32((c.r[19].w[0] + 212u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 148u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 212u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 160u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 164u));
    c.f[0] = ld32((c.r[19].w[0] + 216u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 164u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 216u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 216u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 176u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 180u));
    c.f[0] = ld32((c.r[19].w[0] + 220u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 180u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 220u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 220u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.budget -= 100;
L_0016D300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016D320:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016D3D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D510; } }
    c.budget -= 1;
L_0016D360:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    st32((c.r[19].w[0] + 48u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 68u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st32((c.r[19].w[0] + 56u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[19].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 30u);
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_0016D3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D3A8u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016D3A8u) [[unlikely]] return; }
L_0016D3A8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[16].w[0] + 224u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D3A0u | kUnwind; return; } goto L_0016D3A0; } }
L_0016D3D0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016D3F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016D3F0:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 164u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 164u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 176u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 180u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 180u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.budget -= 72;
L_0016D510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016D530:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016D650; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D820; } }
L_0016D570:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], 0u - 4096u);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
L_0016D590:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5A4u); st32((c.r[16].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016D5A4u) [[unlikely]] return; }
L_0016D5A4:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0016D610; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016D600; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016D5F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D620; } }
    c.budget -= 1;
L_0016D5E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0016D620; } }
    c.budget -= 1;
L_0016D5F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F060000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0016D620; } }
L_0016D600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0016D620; } }
L_0016D610:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F130000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 4;
L_0016D620:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 1024u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D590u | kUnwind; return; } goto L_0016D590; } }
    st32((c.r[20].w[0] + 64u), 0u);
    set32(c.r[3], 0u + 120u);
    st32((c.r[20].w[0] + 68u), 0u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0016D650:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016D670; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016D670:
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 64u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 192u));
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 68u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 192u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 192u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 80u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 80u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 84u));
    c.f[1] = ld32((c.r[19].w[0] + 196u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 84u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 196u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 196u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 96u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 96u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 100u));
    c.f[1] = ld32((c.r[19].w[0] + 200u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 200u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 200u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 112u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 116u));
    c.f[1] = ld32((c.r[19].w[0] + 204u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 116u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 204u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 204u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 128u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 128u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = ld32((c.r[19].w[0] + 208u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 132u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 208u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 208u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 144u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 144u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 148u));
    c.f[1] = ld32((c.r[19].w[0] + 212u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 148u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 212u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 212u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 160u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 160u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 164u));
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 164u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 216u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 176u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 176u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 180u));
    c.f[1] = ld32((c.r[19].w[0] + 220u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 180u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 220u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 220u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 102;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016D818; } }
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0016D820; } }
L_0016D818:
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.budget -= 2;
L_0016D820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016D840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016D8F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DA30; } }
    c.budget -= 1;
L_0016D880:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    st32((c.r[19].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    st32((c.r[19].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 56u), 0u);
    set32(c.r[2], 0u + 30u);
    st32((c.r[19].w[0] + 72u), 0u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_0016D8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8C8u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016D8C8u) [[unlikely]] return; }
L_0016D8C8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[16].w[0] + 224u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D8C0u | kUnwind; return; } goto L_0016D8C0; } }
L_0016D8F0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016D910; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016D910:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 164u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 164u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 176u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 180u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 180u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.budget -= 72;
L_0016DA30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016DA50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016DA60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0016DA70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 564u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0016DAA0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0016DAA0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 260u));
    set32(c.r[2], 0u + 147u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016DAB8; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 2;
L_0016DAB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[2].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[28].w[0] - 32708u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 3);
    st32((c.r[1].w[0] + 20268u), 0u);
    set32(c.r[4], c.r[4].w[0] + 26832u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 26880u);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 26928u);
    st32((c.r[1].w[0] + 20252u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB34u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0016DB34u) [[unlikely]] return; }
L_0016DB34:
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
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016DC68; } }
L_0016DB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016DB70u) [[unlikely]] return; }
L_0016DB70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB80u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x0016DB80u) [[unlikely]] return; }
L_0016DB80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[18].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB94u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0016DB94u) [[unlikely]] return; }
L_0016DB94:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBA0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0016DBA0u) [[unlikely]] return; }
L_0016DBA0:
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBACu); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0016DBACu) [[unlikely]] return; }
L_0016DBAC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBBCu); st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016DBBCu) [[unlikely]] return; }
L_0016DBBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_0016DBE8; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBE0u); set32(c.r[4], ld32((c.r[2].w[0] + 224u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016DBE0u) [[unlikely]] return; }
L_0016DBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DC00; } }
L_0016DBE8:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC00u); set32(c.r[4], ld32((c.r[2].w[0] + 224u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016DC00u) [[unlikely]] return; }
L_0016DC00:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.f[14] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC20u); c.f[12] = ld32((c.r[2].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016DC20u) [[unlikely]] return; }
L_0016DC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC28u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016DC28u) [[unlikely]] return; }
L_0016DC28:
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC5Cu); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0016DC5Cu) [[unlikely]] return; }
L_0016DC5C:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_0016DC68:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DB68u | kUnwind; return; } goto L_0016DB68; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0016DCA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0016DE60; } }
    c.r[16].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_0016DD70; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016DCF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DE60; } }
    c.budget -= 1;
L_0016DCF8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016DD04u) [[unlikely]] return; }
L_0016DD04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DE60; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 8576u);
    set32(c.r[3], c.r[3].w[0] - 5632u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 132u), c.f[2]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0016DE60; } }
L_0016DD70:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016DD7Cu) [[unlikely]] return; }
L_0016DD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DDE0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 8576u);
    set32(c.r[3], c.r[3].w[0] - 5632u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 132u), c.f[2]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 84u), 0u);
    c.budget -= 23;
L_0016DDE0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016DDF0u) [[unlikely]] return; }
L_0016DDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DE60; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 11u);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - 8576u);
    set32(c.r[4], c.r[4].w[0] - 5632u);
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 132u), c.f[2]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 26;
L_0016DE60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016DE80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 26960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016DEA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0016DED8:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DEE4u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016DEE4u) [[unlikely]] return; }
L_0016DEE4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DED8u | kUnwind; return; } goto L_0016DED8; } }
    c.r[7].d[0] = ld8((c.r[18].w[0] + 144u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF2Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0016DF2Cu) [[unlikely]] return; }
L_0016DF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016DF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF80u); set32(c.r[5], c.r[16].w[0] + 304u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DF80u) [[unlikely]] return; }
L_0016DF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF88u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016DF88u) [[unlikely]] return; }
L_0016DF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF90u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0016DF90u) [[unlikely]] return; }
L_0016DF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF98u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016DF98u) [[unlikely]] return; }
L_0016DF98:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DFB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016E190; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016DFF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E288; } }
L_0016DFF0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], 0u - 4096u);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    st32((c.r[20].w[0] + 56u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 72u), 0u);
    c.budget -= 14;
L_0016E028:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E03Cu); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016E03Cu) [[unlikely]] return; }
L_0016E03C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E050u); st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016E050u) [[unlikely]] return; }
L_0016E050:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0016E0E8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016E080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), 0u);  if (t) { goto L_0016E0E8; } }
L_0016E088:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_0016E0E8; } }
    c.budget -= 1;
L_0016E098:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_0016E0E8; } }
    c.budget -= 1;
L_0016E0A8:
    set32(c.r[2], 0u + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_0016E0E8; } }
    c.budget -= 1;
L_0016E0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), 0u);  if (t) { goto L_0016E0E8; } }
L_0016E0C0:
    set32(c.r[2], 0u - 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_0016E0E8; } }
    c.budget -= 1;
L_0016E0D0:
    set32(c.r[2], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_0016E0E8; } }
    c.budget -= 1;
L_0016E0E0:
    set32(c.r[2], 0u - 96u);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 2;
L_0016E0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E0F0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016E0F0u) [[unlikely]] return; }
L_0016E0F0:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0016E158; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016E148; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016E138; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016E128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E168; } }
L_0016E128:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0016E168; } }
    c.budget -= 1;
L_0016E138:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F060000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0016E168; } }
L_0016E148:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0016E168; } }
L_0016E158:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F130000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 4;
L_0016E168:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 2048u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E028u | kUnwind; return; } goto L_0016E028; } }
    set32(c.r[3], 0u + 120u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0016E190:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016E1B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016E1B0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0016E1B8:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 64u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.f[0] = ld32((c.r[7].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 64u), c.f[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 128u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[7].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 112u)));
    set32(c.r[4], c.r[4].w[0] + 3072u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[7].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E1B8u | kUnwind; return; } goto L_0016E1B8; } }
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016E250; } }
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0016E258; } }
L_0016E250:
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.budget -= 2;
L_0016E258:
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);  if (t) { goto L_0016E288; } }
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_0016E288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016E2B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0016E348; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0016E2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E4D8; } }
L_0016E2D0:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCF50000u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[6].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    set32(c.r[3], 0u + 240u);
    st32((c.r[4].w[0] + 72u), 0u);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 96u));
    st32((c.r[5].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 100u)));
    set32(c.r[6], c.r[6].w[0] + 8192u);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[5].w[0] + 100u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[6], c.r[6].w[0] + 16384u);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[5].w[0] + 104u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 108u)));
    set32(c.r[6], c.r[6].w[0] + 24576u);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[5].w[0] + 108u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 30;
L_0016E348:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016E368; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016E368:
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 112u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 116u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 32u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 120u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0] + 48u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 48u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 52u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 124u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 70;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016E490; } }
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.f[0]);  if (t) { goto L_0016E498; } }
L_0016E490:
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 2;
L_0016E498:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);  if (t) { goto L_0016E4C8; } }
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_0016E4C8:
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_0016E4D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E4E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016E608; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016E520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E788; } }
L_0016E520:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], 0u - 4096u);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0] + 56u), 0u);
    st32((c.r[20].w[0] + 64u), 0u);
    st32((c.r[20].w[0] + 68u), 0u);
    st32((c.r[20].w[0] + 72u), 0u);
    c.budget -= 12;
L_0016E550:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E564u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0016E564u) [[unlikely]] return; }
L_0016E564:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0016E5D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016E5C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016E5B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016E5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E5D8; } }
    c.budget -= 1;
L_0016E5A0:
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0016E5D8; } }
    c.budget -= 1;
L_0016E5B0:
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0016E5D8; } }
    c.budget -= 1;
L_0016E5C0:
    set32(c.r[3], 0u - 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0016E5D8; } }
    c.budget -= 1;
L_0016E5D0:
    set32(c.r[3], 0u - 16384u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_0016E5D8:
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], c.r[17].w[0] + 2048u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E550u | kUnwind; return; } goto L_0016E550; } }
    set32(c.r[3], 0u + 120u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0016E608:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016E628; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016E628:
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 64u), c.f[1]);
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 3072u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[19].w[0] + 112u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 20u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 68u), c.f[1]);
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 3072u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[19].w[0] + 116u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 32u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 3072u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[19].w[0] + 120u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 48u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 76u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 76u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 76u), c.f[1]);
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + 3072u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[19].w[0] + 124u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 70;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016E750; } }
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0016E758; } }
L_0016E750:
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.budget -= 2;
L_0016E758:
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);  if (t) { goto L_0016E788; } }
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_0016E788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016E7B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0016E848; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0016E7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E9D8; } }
L_0016E7D0:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCF50000u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[6].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    set32(c.r[3], 0u + 240u);
    st32((c.r[4].w[0] + 72u), 0u);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 96u));
    st32((c.r[5].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 100u)));
    set32(c.r[6], c.r[6].w[0] + 8192u);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[5].w[0] + 100u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[6], c.r[6].w[0] + 16384u);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[5].w[0] + 104u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 108u)));
    set32(c.r[6], c.r[6].w[0] + 24576u);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[5].w[0] + 108u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 30;
L_0016E848:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016E868; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0016E868:
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 112u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 116u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 32u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 120u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0] + 48u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 48u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 52u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 124u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 70;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016E990; } }
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.f[0]);  if (t) { goto L_0016E998; } }
L_0016E990:
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 2;
L_0016E998:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);  if (t) { goto L_0016E9C8; } }
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_0016E9C8:
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_0016E9D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016E9F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0016EA00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 12;
L_0016EA30:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 192u);  if (t) { goto L_0016EAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA48u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016EA48u) [[unlikely]] return; }
L_0016EA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA50u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016EA50u) [[unlikely]] return; }
L_0016EA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA58u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016EA58u) [[unlikely]] return; }
L_0016EA58:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA68u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016EA68u) [[unlikely]] return; }
L_0016EA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA70u); set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016EA70u) [[unlikely]] return; }
L_0016EA70:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 144u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA94u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0016EA94u) [[unlikely]] return; }
L_0016EA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EAF8; } }
    c.budget -= 1;
L_0016EAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAA8u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016EAA8u) [[unlikely]] return; }
L_0016EAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAB0u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016EAB0u) [[unlikely]] return; }
L_0016EAB0:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAC0u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016EAC0u) [[unlikely]] return; }
L_0016EAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAC8u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016EAC8u) [[unlikely]] return; }
L_0016EAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAD0u); set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016EAD0u) [[unlikely]] return; }
L_0016EAD0:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 144u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAF4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0016EAF4u) [[unlikely]] return; }
L_0016EAF4:
    c.budget -= 1;
L_0016EAF8:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016EA30u | kUnwind; return; } goto L_0016EA30; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016EB40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 29u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 49u);  if (t) { goto L_0016EB78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016EB90; } }
    c.budget -= 1;
L_0016EB78:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8659u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[18], 0u + 389u);  if (t) { goto L_0016EB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 396u);  if (t) { goto L_0016EBA0; } }
L_0016EB90:
    set32(c.r[3], ld32((c.r[19].w[0] + 1608u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 98u)));
    c.budget -= 4;
L_0016EBA0:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016EC70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EC90; } }
    c.budget -= 1;
L_0016EBB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0016EC30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016EC18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016EC00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016EBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EC48; } }
L_0016EBE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0016EC00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC00u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 67u, depth + 1u); else { c.pc = 0x00170D20u; return; } if (c.pc != 0x0016EC00u) [[unlikely]] return; }
L_0016EC00:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC0Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 194u, depth + 1u); else { c.pc = 0x0016ECB0u; return; } if (c.pc != 0x0016EC0Cu) [[unlikely]] return; }
L_0016EC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EC48; } }
    c.budget -= 1;
L_0016EC18:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC24u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 7u, depth + 1u); else { c.pc = 0x002F8050u; return; } if (c.pc != 0x0016EC24u) [[unlikely]] return; }
L_0016EC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EC48; } }
    c.budget -= 1;
L_0016EC30:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0016EC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC48u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 67u, depth + 1u); else { c.pc = 0x00170D20u; return; } if (c.pc != 0x0016EC48u) [[unlikely]] return; }
L_0016EC48:
    set32(c.r[16], c.r[16].w[0] + 40u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0016EC50:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016EBB8u | kUnwind; return; } goto L_0016EBB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC64u);  if (depth < kMaxDepth) unit_004B(c, 81u, depth + 1u); else { c.pc = 0x0022D150u; return; } if (c.pc != 0x0016EC64u) [[unlikely]] return; }
L_0016EC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EC90; } }
    c.budget -= 1;
L_0016EC70:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 27008u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016EC50u | kUnwind; return; } goto L_0016EC50; } }
    c.budget -= 1;
L_0016EC90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016ECB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ECD8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016ECD8u) [[unlikely]] return; }
L_0016ECD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ED20; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] - 4496u);
    set32(c.r[3], c.r[3].w[0] - 1376u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_0016ED20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016ED40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED68u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016ED68u) [[unlikely]] return; }
L_0016ED68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EDB8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] - 4496u);
    set32(c.r[3], c.r[3].w[0] - 1376u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_0016EDC0; } }
    c.budget -= 1;
L_0016EDB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016EDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016EDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EE08u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0016EE08u) [[unlikely]] return; }
L_0016EE08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EE58; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[7], 0u + 19u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 4496u);
    set32(c.r[3], c.r[3].w[0] - 1376u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
L_0016EE58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016EE70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 17712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016EE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EEC4u); st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 302u, depth + 1u); else { c.pc = 0x0016FD90u; return; } if (c.pc != 0x0016EEC4u) [[unlikely]] return; }
L_0016EEC4:
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 27008u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 224u), 0u);
    set32(c.r[5], c.r[6].w[0] << 2);
    st32((c.r[17].w[0] + 228u), 0u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[17].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    st32((c.r[17].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[17].w[0] + 242u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 243u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[17].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 236u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    st8((c.r[17].w[0] + 246u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    st8((c.r[17].w[0] + 247u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    st8((c.r[17].w[0] + 248u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    st8((c.r[17].w[0] + 249u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    st8((c.r[17].w[0] + 250u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[17].w[0] + 241u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EF60u); st32((c.r[18].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0047(c, 46u, depth + 1u); else { c.pc = 0x0021C3F0u; return; } if (c.pc != 0x0016EF60u) [[unlikely]] return; }
L_0016EF60:
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EF9Cu); st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 205u, depth + 1u); else { c.pc = 0x0016EFC0u; return; } if (c.pc != 0x0016EF9Cu) [[unlikely]] return; }
L_0016EF9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016EFC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0016F030; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F020; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F020; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0016F020:
    set32(c.r[20], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));  if (t) { goto L_0016F060; } }
L_0016F030:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F050; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0016F050:
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 284u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 276u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 280u)));
    c.budget -= 4;
L_0016F060:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F06Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 49u, depth + 1u); else { c.pc = 0x001703A0u; return; } if (c.pc != 0x0016F06Cu) [[unlikely]] return; }
L_0016F06C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F078u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 59u, depth + 1u); else { c.pc = 0x00170860u; return; } if (c.pc != 0x0016F078u) [[unlikely]] return; }
L_0016F078:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F098; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 236u)));
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];  if (t) { goto L_0016F0A8; } }
L_0016F098:
    set32(c.r[3], ld32((c.r[17].w[0] + 232u)));
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.budget -= 4;
L_0016F0A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0016F130; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016F0D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F130; } }
L_0016F0D0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0016F130; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016F130; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 241u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016F0F8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0016F130; } }
L_0016F0F8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F10Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 302u, depth + 1u); else { c.pc = 0x0016FD90u; return; } if (c.pc != 0x0016F10Cu) [[unlikely]] return; }
L_0016F10C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016F130; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 241u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F124u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x001727A0u; return; } if (c.pc != 0x0016F124u) [[unlikely]] return; }
L_0016F124:
    set32(c.r[3], 0u + 5u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0016F130:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0016F148; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0016F148:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016F210; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_0016F1A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 252u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 256u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8694u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016F210; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 241u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F190u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x001727A0u; return; } if (c.pc != 0x0016F190u) [[unlikely]] return; }
L_0016F190:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016F210; } }
    c.budget -= 1;
L_0016F1A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.f[3] = ld32((c.r[17].w[0] + 252u));
    c.r[5].d[0] = c.r[4].d[0] | 34953ull;
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[4].d[0] = c.r[3].d[0] | 34953ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 252u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 256u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 252u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016F1F0; } }
    st32((c.r[17].w[0] + 252u), c.f[0]);
    c.budget -= 2;
L_0016F1F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 256u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016F210; } }
    st32((c.r[17].w[0] + 256u), c.f[0]);
    c.budget -= 1;
L_0016F210:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0016F4C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0016F238; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0016F540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F540; } }
L_0016F238:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0016F260; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016F260; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 241u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016F290; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0016F290; } }
    c.budget -= 1;
L_0016F260:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 157u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 173u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016F540; } }
L_0016F290:
    c.r[11].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3C7C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xBD9D0000u);
    c.r[12].d[0] = c.r[12].d[0] | 4037ull;
    c.r[9].d[0] = c.r[9].d[0] | 35289ull;
    c.f[2] = c.r[12].w[0];
    set32(c.r[5], 0u + 30u);
    c.f[1] = c.r[9].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3E120000u);
    set32(c.r[3], 0u + 20u);
    c.r[9].d[0] = c.r[12].d[0] | 18725ull;
    set32(c.r[8], 0u + 1u);
    c.f[4] = c.r[9].w[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3D920000u);
    set32(c.r[7], 0u + 169u);
    set32(c.r[6], 0u + 168u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[9].d[0] = c.r[9].d[0] | 35289ull;
    c.f[3] = c.r[9].w[0];
    c.r[9].d[0] = c.r[12].d[0] | 18725ull;
    c.f[5] = c.r[9].w[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3E230000u);
    c.r[9].d[0] = c.r[9].d[0] | 55050ull;
    c.f[6] = c.r[9].w[0];
    c.r[9].d[0] = c.r[12].d[0] | 52429ull;
    c.f[7] = c.r[9].w[0];
    c.budget -= 30;
L_0016F308:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 79u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[9], c.r[10].w[0] + 64u);  if (t) { goto L_0016F338; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_0016F328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 15u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_0016F338; } }
L_0016F328:
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 12u), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { goto L_0016F4A8; } }
    c.budget -= 1;
L_0016F338:
    c.r[12].d[0] = ld8((c.r[9].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[7].d[0];  if (t) { goto L_0016F3B8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[6].d[0];  if (t) { goto L_0016F358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F430; } }
    c.budget -= 1;
L_0016F358:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13u)));
    set32(c.r[12], c.r[13].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull; st8((c.r[9].w[0] + 13u), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { goto L_0016F378; } }
    st8((c.r[9].w[0] + 13u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[9].w[0]), 0u);
    st32((c.r[9].w[0] + 4u), 0u);
    c.budget -= 4;
L_0016F378:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13u)));
    c.r[12].d[0] = c.r[12].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_0016F3A8; } }
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[7]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 4u), c.f[0]);  if (t) { goto L_0016F4A8; } }
    c.budget -= 1;
L_0016F3A8:
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.f[0]);  if (t) { goto L_0016F4A8; } }
L_0016F3B8:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13u)));
    set32(c.r[12], c.r[13].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull; st8((c.r[9].w[0] + 13u), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { goto L_0016F3D8; } }
    st32((c.r[9].w[0] + 8u), c.r[4].w[0]);
    st8((c.r[9].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[9].w[0]), 0u);
    st32((c.r[9].w[0] + 4u), 0u);
    c.budget -= 4;
L_0016F3D8:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13u)));
    c.r[12].d[0] = c.r[12].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_0016F408; } }
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 4u), c.f[0]);  if (t) { goto L_0016F4A8; } }
    c.budget -= 1;
L_0016F408:
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { goto L_0016F4A8; } }
L_0016F430:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13u)));
    set32(c.r[12], c.r[13].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull; st8((c.r[9].w[0] + 13u), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { goto L_0016F450; } }
    st32((c.r[9].w[0] + 8u), c.r[4].w[0]);
    st8((c.r[9].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[9].w[0]), 0u);
    st32((c.r[9].w[0] + 4u), 0u);
    c.budget -= 4;
L_0016F450:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13u)));
    c.r[12].d[0] = c.r[12].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_0016F480; } }
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 4u), c.f[0]);  if (t) { goto L_0016F4A8; } }
    c.budget -= 1;
L_0016F480:
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[9].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_0016F4A8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F308u | kUnwind; return; } goto L_0016F308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F540; } }
L_0016F4C0:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0016F4C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 77u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 64u);  if (t) { goto L_0016F520; } }
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016F530; } }
L_0016F520:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F530u); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 302u, depth + 1u); else { c.pc = 0x0016FD90u; return; } if (c.pc != 0x0016F530u) [[unlikely]] return; }
L_0016F530:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F4C8u | kUnwind; return; } goto L_0016F4C8; } }
L_0016F540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016F660; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016F668; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 248u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F668; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 250u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0016F608; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016F5E8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016F5C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0016F5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F618; } }
L_0016F5A8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 850u));
    set32(c.r[3], 0u + 17u);
    c.r[4].d[0] = c.r[4].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016F618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F668; } }
    c.budget -= 1;
L_0016F5C8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 850u));
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = c.r[4].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016F618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F668; } }
    c.budget -= 1;
L_0016F5E8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 850u));
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = c.r[4].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016F618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F668; } }
    c.budget -= 1;
L_0016F608:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F668; } }
    c.budget -= 1;
L_0016F618:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 249u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0016F660; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016F630:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F640; } }
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    c.budget -= 1;
L_0016F640:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F630u | kUnwind; return; } goto L_0016F630; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);  if (t) { goto L_0016F660; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1628u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0016F660:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0016F668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016F690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 248u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6C4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016F6C4u) [[unlikely]] return; }
L_0016F6C4:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6D0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016F6D0u) [[unlikely]] return; }
L_0016F6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6D8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016F6D8u) [[unlikely]] return; }
L_0016F6D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 248u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6ECu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016F6ECu) [[unlikely]] return; }
L_0016F6EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6FCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016F6FCu) [[unlikely]] return; }
L_0016F6FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F70Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016F70Cu) [[unlikely]] return; }
L_0016F70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016F714u) [[unlikely]] return; }
L_0016F714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F71Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016F71Cu) [[unlikely]] return; }
L_0016F71C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F72Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016F72Cu) [[unlikely]] return; }
L_0016F72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F734u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016F734u) [[unlikely]] return; }
L_0016F734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F73Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016F73Cu) [[unlikely]] return; }
L_0016F73C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 248u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F794u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016F794u) [[unlikely]] return; }
L_0016F794:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7A0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016F7A0u) [[unlikely]] return; }
L_0016F7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016F7A8u) [[unlikely]] return; }
L_0016F7A8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 248u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7BCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016F7BCu) [[unlikely]] return; }
L_0016F7BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7CCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016F7CCu) [[unlikely]] return; }
L_0016F7CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7DCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016F7DCu) [[unlikely]] return; }
L_0016F7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016F7E4u) [[unlikely]] return; }
L_0016F7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7ECu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016F7ECu) [[unlikely]] return; }
L_0016F7EC:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7FCu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016F7FCu) [[unlikely]] return; }
L_0016F7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F804u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016F804u) [[unlikely]] return; }
L_0016F804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F80Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016F80Cu) [[unlikely]] return; }
L_0016F80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 248u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F864u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016F864u) [[unlikely]] return; }
L_0016F864:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F870u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016F870u) [[unlikely]] return; }
L_0016F870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F878u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016F878u) [[unlikely]] return; }
L_0016F878:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 248u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F88Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016F88Cu) [[unlikely]] return; }
L_0016F88C:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F89Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016F89Cu) [[unlikely]] return; }
L_0016F89C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8ACu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016F8ACu) [[unlikely]] return; }
L_0016F8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016F8B4u) [[unlikely]] return; }
L_0016F8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8BCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016F8BCu) [[unlikely]] return; }
L_0016F8BC:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8CCu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016F8CCu) [[unlikely]] return; }
L_0016F8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016F8D4u) [[unlikely]] return; }
L_0016F8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8DCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016F8DCu) [[unlikely]] return; }
L_0016F8DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F900:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 248u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F934u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016F934u) [[unlikely]] return; }
L_0016F934:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F940u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016F940u) [[unlikely]] return; }
L_0016F940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F948u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016F948u) [[unlikely]] return; }
L_0016F948:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 248u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F95Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016F95Cu) [[unlikely]] return; }
L_0016F95C:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F96Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016F96Cu) [[unlikely]] return; }
L_0016F96C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F97Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016F97Cu) [[unlikely]] return; }
L_0016F97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016F984u) [[unlikely]] return; }
L_0016F984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F98Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016F98Cu) [[unlikely]] return; }
L_0016F98C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F99Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016F99Cu) [[unlikely]] return; }
L_0016F99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016F9A4u) [[unlikely]] return; }
L_0016F9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9ACu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016F9ACu) [[unlikely]] return; }
L_0016F9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F9D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9F8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016F9F8u) [[unlikely]] return; }
L_0016F9F8:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA04u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0016FA04u) [[unlikely]] return; }
L_0016FA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA0Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016FA0Cu) [[unlikely]] return; }
L_0016FA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA14u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016FA14u) [[unlikely]] return; }
L_0016FA14:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA24u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016FA24u) [[unlikely]] return; }
L_0016FA24:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA34u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016FA34u) [[unlikely]] return; }
L_0016FA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016FA3Cu) [[unlikely]] return; }
L_0016FA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA44u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016FA44u) [[unlikely]] return; }
L_0016FA44:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA54u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016FA54u) [[unlikely]] return; }
L_0016FA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016FA5Cu) [[unlikely]] return; }
L_0016FA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA64u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016FA64u) [[unlikely]] return; }
L_0016FA64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016FA80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016FA90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0016FAA0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 17568u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 544u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FAE8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FAE8u) [[unlikely]] return; }
L_0016FAE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 112u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB20u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0016FB20u) [[unlikely]] return; }
L_0016FB20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB54u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016FB54u) [[unlikely]] return; }
L_0016FB54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB64u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x0016FB64u) [[unlikely]] return; }
L_0016FB64:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB78u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0016FB78u) [[unlikely]] return; }
L_0016FB78:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0016FB84u) [[unlikely]] return; }
L_0016FB84:
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB90u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0016FB90u) [[unlikely]] return; }
L_0016FB90:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[18].w[0] + 64u);
    st32((c.r[19].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016FD58; } }
    c.budget -= 1;
L_0016FBA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 15u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016FD50; } }
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[28].w[0] - 32704u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 14u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[6].w[0] - 17648u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 17696u);
    set32(c.r[3], c.r[3].w[0] - 17600u);
    set32(c.r[2], 0u + 170u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[8], c.r[5].w[0] - 168u);
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[5], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[6].w[0]);
    set32(c.r[4], c.r[8].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 14u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 36;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016FCF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC4Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016FC4Cu) [[unlikely]] return; }
L_0016FC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC54u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016FC54u) [[unlikely]] return; }
L_0016FC54:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC60u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0016FC60u) [[unlikely]] return; }
L_0016FC60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC70u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x0016FC70u) [[unlikely]] return; }
L_0016FC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC78u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x0016FC78u) [[unlikely]] return; }
L_0016FC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC80u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0016FC80u) [[unlikely]] return; }
L_0016FC80:
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[19].w[0] + 112u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[3] = ld32((c.r[18].w[0] + 252u));
    c.f[0] = ld32((c.r[18].w[0] + 256u));
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.f[21] = fp::mul(c.f[3], c.f[4]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCB8u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016FCB8u) [[unlikely]] return; }
L_0016FCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCC0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0016FCC0u) [[unlikely]] return; }
L_0016FCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCD4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016FCD4u) [[unlikely]] return; }
L_0016FCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCDCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016FCDCu) [[unlikely]] return; }
L_0016FCDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCE8u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0016FCE8u) [[unlikely]] return; }
L_0016FCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FD50; } }
L_0016FCF0:
    set32(c.r[4], c.r[19].w[0] + 192u);
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[19].w[0] + 112u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[3] = ld32((c.r[18].w[0] + 252u));
    c.f[0] = ld32((c.r[18].w[0] + 256u));
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[21] = fp::mul(c.f[3], c.f[4]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD20u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0016FD20u) [[unlikely]] return; }
L_0016FD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD28u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0016FD28u) [[unlikely]] return; }
L_0016FD28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD3Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016FD3Cu) [[unlikely]] return; }
L_0016FD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD44u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016FD44u) [[unlikely]] return; }
L_0016FD44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD50u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0016FD50u) [[unlikely]] return; }
L_0016FD50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 2;
L_0016FD58:
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FBA8u | kUnwind; return; } goto L_0016FBA8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0016FD90:
    st32((c.r[5].w[0] + 64u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0] + 68u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[5].w[0] + 72u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17807u));
    st8((c.r[5].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17806u));
    st8((c.r[5].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17808u));
    st8((c.r[5].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[5].w[0] + 79u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 80u), 0u);
    st32((c.r[5].w[0] + 84u), 0u);
    st32((c.r[5].w[0] + 88u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17804u));
    st8((c.r[5].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
L_0016FDE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17803u));
    st8((c.r[5].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17805u));
    st8((c.r[5].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[5].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 96u), 0u);
    st32((c.r[5].w[0] + 100u), 0u);
    st32((c.r[5].w[0] + 104u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17801u));
    st8((c.r[5].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17800u));
    st8((c.r[5].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17802u));
    st8((c.r[5].w[0] + 110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[5].w[0] + 111u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 112u), 0u);
    st32((c.r[5].w[0] + 116u), 0u);
    st32((c.r[5].w[0] + 120u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17798u));
    st8((c.r[5].w[0] + 124u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17797u));
    st8((c.r[5].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17799u));
    st8((c.r[5].w[0] + 126u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[5].w[0] + 127u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 128u), 0u);
    st32((c.r[5].w[0] + 132u), 0u);
    st32((c.r[5].w[0] + 136u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17795u));
    st8((c.r[5].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17794u));
    st8((c.r[5].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17796u));
    st8((c.r[5].w[0] + 142u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[5].w[0] + 143u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 148u), 0u);
    st32((c.r[5].w[0] + 152u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17792u));
    st8((c.r[5].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17791u));
    st8((c.r[5].w[0] + 157u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17793u));
    st8((c.r[5].w[0] + 158u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[5].w[0] + 159u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 160u), 0u);
    st32((c.r[5].w[0] + 164u), 0u);
    st32((c.r[5].w[0] + 168u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17789u));
    st8((c.r[5].w[0] + 172u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17788u));
    st8((c.r[5].w[0] + 173u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 17790u));
    st8((c.r[5].w[0] + 174u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 73;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 175u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0016FF10:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 312u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 308u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF74u); st32((c.r[22].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0016FF74u) [[unlikely]] return; }
L_0016FF74:
    set32(c.r[18], c.r[18].w[0] << 6);
    set32(c.r[2], c.r[20].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF84u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0016FF84u) [[unlikely]] return; }
L_0016FF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF8Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0016FF8Cu) [[unlikely]] return; }
L_0016FF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF94u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0016FF94u) [[unlikely]] return; }
L_0016FF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF9Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0016FF9Cu) [[unlikely]] return; }
L_0016FF9C:
    set32(c.r[30], c.r[29].w[0] + 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[17], c.r[29].w[0] + 292u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[23], c.r[29].w[0] + 296u);
    c.f[1] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 196u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170004u); st32((c.r[23].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00170004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_001C(c, 2u, depth);
}

}
