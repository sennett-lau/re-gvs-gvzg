#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0028[4096] = {
    1, 2, 3, 4, 5, 6, 7, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0,
};

void unit_0028(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A0000;
    case 2u: goto L_001A0004;
    case 3u: goto L_001A0008;
    case 4u: goto L_001A000C;
    case 5u: goto L_001A0010;
    case 6u: goto L_001A0014;
    case 7u: goto L_001A0018;
    case 8u: goto L_001A0020;
    case 9u: goto L_001A0030;
    case 10u: goto L_001A0038;
    case 11u: goto L_001A004C;
    case 12u: goto L_001A0088;
    case 13u: goto L_001A00C4;
    case 14u: goto L_001A00D8;
    case 15u: goto L_001A0100;
    case 16u: goto L_001A0130;
    case 17u: goto L_001A0140;
    case 18u: goto L_001A0150;
    case 19u: goto L_001A0198;
    case 20u: goto L_001A01F0;
    case 21u: goto L_001A0200;
    case 22u: goto L_001A0230;
    case 23u: goto L_001A0238;
    case 24u: goto L_001A02E8;
    case 25u: goto L_001A0308;
    case 26u: goto L_001A0334;
    case 27u: goto L_001A034C;
    case 28u: goto L_001A0398;
    case 29u: goto L_001A03B0;
    case 30u: goto L_001A03C0;
    case 31u: goto L_001A0400;
    case 32u: goto L_001A0438;
    case 33u: goto L_001A04D8;
    case 34u: goto L_001A057C;
    case 35u: goto L_001A0590;
    case 36u: goto L_001A05B0;
    case 37u: goto L_001A05F4;
    case 38u: goto L_001A0708;
    case 39u: goto L_001A0720;
    case 40u: goto L_001A0740;
    case 41u: goto L_001A07A8;
    case 42u: goto L_001A07AC;
    case 43u: goto L_001A089C;
    case 44u: goto L_001A08C0;
    case 45u: goto L_001A092C;
    case 46u: goto L_001A0940;
    case 47u: goto L_001A0950;
    case 48u: goto L_001A0960;
    case 49u: goto L_001A0994;
    case 50u: goto L_001A09D8;
    case 51u: goto L_001A0A04;
    case 52u: goto L_001A0A14;
    case 53u: goto L_001A0A88;
    case 54u: goto L_001A0ACC;
    case 55u: goto L_001A0B0C;
    case 56u: goto L_001A0B14;
    case 57u: goto L_001A0B34;
    case 58u: goto L_001A0B4C;
    case 59u: goto L_001A0B74;
    case 60u: goto L_001A0B78;
    case 61u: goto L_001A0B8C;
    case 62u: goto L_001A0BB4;
    case 63u: goto L_001A0BCC;
    case 64u: goto L_001A0BEC;
    case 65u: goto L_001A0BFC;
    case 66u: goto L_001A0C18;
    case 67u: goto L_001A0C38;
    case 68u: goto L_001A0C44;
    case 69u: goto L_001A0C58;
    case 70u: goto L_001A0C78;
    case 71u: goto L_001A0C98;
    case 72u: goto L_001A0CE0;
    case 73u: goto L_001A0D00;
    case 74u: goto L_001A0D08;
    case 75u: goto L_001A0D3C;
    case 76u: goto L_001A0D60;
    case 77u: goto L_001A0DDC;
    case 78u: goto L_001A0EE8;
    case 79u: goto L_001A10D8;
    case 80u: goto L_001A1138;
    case 81u: goto L_001A1208;
    case 82u: goto L_001A1230;
    case 83u: goto L_001A1250;
    case 84u: goto L_001A126C;
    case 85u: goto L_001A13C0;
    case 86u: goto L_001A13D0;
    case 87u: goto L_001A14A8;
    case 88u: goto L_001A14D8;
    case 89u: goto L_001A14EC;
    case 90u: goto L_001A15B8;
    case 91u: goto L_001A15EC;
    case 92u: goto L_001A15F4;
    case 93u: goto L_001A16BC;
    case 94u: goto L_001A16E0;
    case 95u: goto L_001A16F0;
    case 96u: goto L_001A1738;
    case 97u: goto L_001A1750;
    case 98u: goto L_001A1778;
    case 99u: goto L_001A1794;
    case 100u: goto L_001A1864;
    case 101u: goto L_001A18A0;
    case 102u: goto L_001A18B8;
    case 103u: goto L_001A18C0;
    case 104u: goto L_001A18D8;
    case 105u: goto L_001A18E0;
    case 106u: goto L_001A18F8;
    case 107u: goto L_001A1900;
    case 108u: goto L_001A1910;
    case 109u: goto L_001A1980;
    case 110u: goto L_001A19A4;
    case 111u: goto L_001A19D0;
    case 112u: goto L_001A1A00;
    case 113u: goto L_001A1A4C;
    case 114u: goto L_001A1ABC;
    case 115u: goto L_001A1AF8;
    case 116u: goto L_001A1B10;
    case 117u: goto L_001A1B50;
    case 118u: goto L_001A1B90;
    case 119u: goto L_001A1C18;
    case 120u: goto L_001A1C44;
    case 121u: goto L_001A1E18;
    case 122u: goto L_001A1E3C;
    case 123u: goto L_001A1E58;
    case 124u: goto L_001A1E98;
    case 125u: goto L_001A1EB0;
    case 126u: goto L_001A1EB8;
    case 127u: goto L_001A1ED0;
    case 128u: goto L_001A1ED8;
    case 129u: goto L_001A1EF0;
    case 130u: goto L_001A1EF8;
    case 131u: goto L_001A1F20;
    case 132u: goto L_001A1F30;
    case 133u: goto L_001A1F40;
    case 134u: goto L_001A1FC4;
    case 135u: goto L_001A1FE0;
    case 136u: goto L_001A2008;
    case 137u: goto L_001A202C;
    case 138u: goto L_001A2154;
    case 139u: goto L_001A2164;
    case 140u: goto L_001A2174;
    case 141u: goto L_001A21B0;
    case 142u: goto L_001A21F0;
    case 143u: goto L_001A21F8;
    case 144u: goto L_001A2208;
    case 145u: goto L_001A2238;
    case 146u: goto L_001A2240;
    case 147u: goto L_001A2250;
    case 148u: goto L_001A2294;
    case 149u: goto L_001A22A0;
    case 150u: goto L_001A2310;
    case 151u: goto L_001A233C;
    case 152u: goto L_001A2344;
    case 153u: goto L_001A236C;
    case 154u: goto L_001A2384;
    case 155u: goto L_001A23B0;
    case 156u: goto L_001A23C4;
    case 157u: goto L_001A23D0;
    case 158u: goto L_001A23E0;
    case 159u: goto L_001A23E8;
    case 160u: goto L_001A2430;
    case 161u: goto L_001A2448;
    case 162u: goto L_001A2488;
    case 163u: goto L_001A24E0;
    case 164u: goto L_001A257C;
    case 165u: goto L_001A2584;
    case 166u: goto L_001A25A8;
    case 167u: goto L_001A25B8;
    case 168u: goto L_001A25D4;
    case 169u: goto L_001A2620;
    case 170u: goto L_001A268C;
    case 171u: goto L_001A2694;
    case 172u: goto L_001A26BC;
    case 173u: goto L_001A26E0;
    case 174u: goto L_001A26F8;
    case 175u: goto L_001A2700;
    case 176u: goto L_001A2720;
    case 177u: goto L_001A274C;
    case 178u: goto L_001A2778;
    case 179u: goto L_001A2788;
    case 180u: goto L_001A27AC;
    case 181u: goto L_001A27C4;
    case 182u: goto L_001A2848;
    case 183u: goto L_001A2850;
    case 184u: goto L_001A2898;
    case 185u: goto L_001A28C8;
    case 186u: goto L_001A28D0;
    case 187u: goto L_001A28DC;
    case 188u: goto L_001A28F4;
    case 189u: goto L_001A2910;
    case 190u: goto L_001A296C;
    case 191u: goto L_001A297C;
    case 192u: goto L_001A2B48;
    case 193u: goto L_001A2B50;
    case 194u: goto L_001A2BB0;
    case 195u: goto L_001A2BF0;
    case 196u: goto L_001A2BF8;
    case 197u: goto L_001A2C1C;
    case 198u: goto L_001A2C28;
    case 199u: goto L_001A2C44;
    case 200u: goto L_001A2C90;
    case 201u: goto L_001A2CFC;
    case 202u: goto L_001A2D04;
    case 203u: goto L_001A2D2C;
    case 204u: goto L_001A2D50;
    case 205u: goto L_001A2D68;
    case 206u: goto L_001A2D70;
    case 207u: goto L_001A2D90;
    case 208u: goto L_001A2DBC;
    case 209u: goto L_001A2DE8;
    case 210u: goto L_001A2DF8;
    case 211u: goto L_001A2E1C;
    case 212u: goto L_001A2E34;
    case 213u: goto L_001A2EB8;
    case 214u: goto L_001A2EC0;
    case 215u: goto L_001A2F08;
    case 216u: goto L_001A2F38;
    case 217u: goto L_001A2F40;
    case 218u: goto L_001A2F4C;
    case 219u: goto L_001A2F64;
    case 220u: goto L_001A2F80;
    case 221u: goto L_001A30C0;
    case 222u: goto L_001A30C8;
    case 223u: goto L_001A3130;
    case 224u: goto L_001A315C;
    case 225u: goto L_001A3174;
    case 226u: goto L_001A319C;
    case 227u: goto L_001A31CC;
    case 228u: goto L_001A31E4;
    case 229u: goto L_001A3210;
    case 230u: goto L_001A323C;
    case 231u: goto L_001A3254;
    case 232u: goto L_001A327C;
    case 233u: goto L_001A3308;
    case 234u: goto L_001A3340;
    case 235u: goto L_001A3384;
    case 236u: goto L_001A3450;
    case 237u: goto L_001A3520;
    case 238u: goto L_001A3544;
    case 239u: goto L_001A35E0;
    case 240u: goto L_001A35FC;
    case 241u: goto L_001A36A8;
    case 242u: goto L_001A36DC;
    case 243u: goto L_001A36F8;
    case 244u: goto L_001A3718;
    case 245u: goto L_001A374C;
    case 246u: goto L_001A3758;
    case 247u: goto L_001A3784;
    case 248u: goto L_001A37B4;
    case 249u: goto L_001A37D8;
    case 250u: goto L_001A37F4;
    case 251u: goto L_001A3830;
    case 252u: goto L_001A384C;
    case 253u: goto L_001A3870;
    case 254u: goto L_001A3888;
    case 255u: goto L_001A38CC;
    case 256u: goto L_001A38EC;
    case 257u: goto L_001A3908;
    case 258u: goto L_001A3920;
    case 259u: goto L_001A3954;
    case 260u: goto L_001A3960;
    case 261u: goto L_001A3980;
    case 262u: goto L_001A399C;
    case 263u: goto L_001A39C0;
    case 264u: goto L_001A39F4;
    case 265u: goto L_001A3A00;
    case 266u: goto L_001A3A20;
    case 267u: goto L_001A3A3C;
    case 268u: goto L_001A3A60;
    case 269u: goto L_001A3A7C;
    case 270u: goto L_001A3AA0;
    case 271u: goto L_001A3AAC;
    case 272u: goto L_001A3ACC;
    case 273u: goto L_001A3AE8;
    case 274u: goto L_001A3B08;
    case 275u: goto L_001A3B20;
    case 276u: goto L_001A3B48;
    case 277u: goto L_001A3BF0;
    case 278u: goto L_001A3C24;
    case 279u: goto L_001A3C40;
    case 280u: goto L_001A3C78;
    case 281u: goto L_001A3CAC;
    case 282u: goto L_001A3CB8;
    case 283u: goto L_001A3CD8;
    case 284u: goto L_001A3CF4;
    case 285u: goto L_001A3D18;
    case 286u: goto L_001A3D34;
    case 287u: goto L_001A3D50;
    case 288u: goto L_001A3D88;
    case 289u: goto L_001A3DCC;
    case 290u: goto L_001A3DEC;
    case 291u: goto L_001A3E08;
    case 292u: goto L_001A3E60;
    case 293u: goto L_001A3EC8;
    case 294u: goto L_001A3ED8;
    case 295u: goto L_001A3F10;
    case 296u: goto L_001A3F18;
    case 297u: goto L_001A3F20;
    case 298u: goto L_001A3F30;
    case 299u: goto L_001A3F50;
    case 300u: goto L_001A3F58;
    case 301u: goto L_001A3F60;
    case 302u: goto L_001A3F78;
    case 303u: goto L_001A3FE0;
    case 304u: goto L_001A3FEC;
    default: bad_entry(c, 0x001A0000u); return;
    }
L_001A0000:
    c.r[3].d[0] = c.r[2].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A0004:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0018; } }
    goto L_001A000C;
L_001A0008:
    c.budget -= 1;
L_001A000C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.budget -= 1;
L_001A0010:
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 1;
L_001A0014:
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A0018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 2;
L_001A0020:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A0030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_001A0038:
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A0118; } }
L_001A004C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A00D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A0080; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A0070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0130; } }
L_001A0070:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 60u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A0080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A0088u) [[unlikely]] return; }
L_001A0088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A00B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001A0130; } }
    c.budget -= 1;
L_001A00B0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 45u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.budget -= 5;
L_001A00C4:
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0130; } }
L_001A00D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00D8u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A00D8u) [[unlikely]] return; }
L_001A00D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A00F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0108; } }
    c.budget -= 1;
L_001A00F8:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A0100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A0130; } }
L_001A0108:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A0130; } }
    c.budget -= 1;
L_001A0118:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0130u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A0130u) [[unlikely]] return; }
L_001A0130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0140:
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A0150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A0380; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A0260; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A01D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0398; } }
L_001A0190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0198u);  if (depth < kMaxDepth) unit_0026(c, 256u, depth + 1u); else { c.pc = 0x0019BD70u; return; } if (c.pc != 0x001A0198u) [[unlikely]] return; }
L_001A0198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A01B8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0398; } }
    c.budget -= 1;
L_001A01B8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0398; } }
L_001A01D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0258; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 37u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    c.budget -= 4;
L_001A01F0:
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001A0218; } }
L_001A0200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001A0218; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A0398; } }
L_001A0218:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A0230; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 2;
L_001A0230:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 5376u);
    c.budget -= 2;
L_001A0238:
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A0398; } }
L_001A0258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A0398; } }
L_001A0260:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A02F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A02B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A0288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0398; } }
    c.budget -= 1;
L_001A0288:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A02A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_001A0398; } }
    c.budget -= 1;
L_001A02A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0398; } }
L_001A02B8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001A02D0; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A02D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A0398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02E8u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A02E8u) [[unlikely]] return; }
L_001A02E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0398; } }
L_001A02F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0308u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A0308u) [[unlikely]] return; }
L_001A0308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0398; } }
L_001A0310:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A0398; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A0398; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0398; } }
    goto L_001A0338;
L_001A0334:
    c.budget -= 1;
L_001A0338:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A0398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A034Cu);  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x001A034Cu) [[unlikely]] return; }
L_001A034C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A0398; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0398; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0398; } }
L_001A0380:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0398u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A0398u) [[unlikely]] return; }
L_001A0398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A03B0:
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A03C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 17u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[8], 0u + 256u);  if (t) { goto L_001A03DC; } }
    set32(c.r[8], 0u + 768u);
    c.budget -= 1;
L_001A03DC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_001A04C0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A0488; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001A0428; } }
L_001A0400:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A0410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0580; } }
L_001A0410:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[5].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0580; } }
L_001A0428:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0480; } }
L_001A0438:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[6].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - 5136u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8660u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A0580; } }
    c.budget -= 1;
L_001A0480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A0580; } }
L_001A0488:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A04A0; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A0580; } }
L_001A04A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0580; } }
    c.budget -= 1;
L_001A04C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A04E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04D8u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A04D8u) [[unlikely]] return; }
L_001A04D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0580; } }
L_001A04E0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001A0580; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A0558; } }
    c.f[1] = ld32((c.r[4].w[0] + 8268u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001A0580; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A0580; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001A0580; } }
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0580; } }
L_001A0558:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A057Cu);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A057Cu) [[unlikely]] return; }
L_001A057C:
    c.budget -= 1;
L_001A0580:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A0590:
    set32(c.r[3], 0u + 7u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A05B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A06C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A0678; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A05E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0708; } }
L_001A05E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05F4u);  if (depth < kMaxDepth) unit_0027(c, 67u, depth + 1u); else { c.pc = 0x0019CDB0u; return; } if (c.pc != 0x001A05F4u) [[unlikely]] return; }
L_001A05F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0708; } }
    c.budget -= 1;
L_001A0600:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001A0658; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A0648; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0708; } }
    c.budget -= 1;
L_001A0628:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0708; } }
    c.budget -= 1;
L_001A0648:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A0708; } }
    c.budget -= 1;
L_001A0658:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A0708; } }
    c.budget -= 1;
L_001A0678:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A06B8; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 18u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 45u);  if (t) { goto L_001A06A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A0708; } }
    c.budget -= 1;
L_001A06A8:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A0708; } }
    c.budget -= 1;
L_001A06B8:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A0708; } }
    c.budget -= 1;
L_001A06C8:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0700; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0708; } }
L_001A0700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0708u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A0708u) [[unlikely]] return; }
L_001A0708:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A0720:
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A0740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A0F00; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001A0D78; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A0880; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A0830; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0798:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A07B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A07ACu);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A07ACu) [[unlikely]] return; }
    goto L_001A07AC;
L_001A07A8:
    c.budget -= 1;
L_001A07AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A07B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001A0810; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A0800; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A07E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A07E0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0800:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0810:
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0830:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0870; } }
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 18u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 45u);  if (t) { goto L_001A0860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0860:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0870:
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0880:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1808u));
    set32(c.r[3], 0u + 17u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A0978; } }
    goto L_001A08A0;
L_001A089C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A08A0:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A0978; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A08C0u);  if (depth < kMaxDepth) unit_0026(c, 195u, depth + 1u); else { c.pc = 0x0019B310u; return; } if (c.pc != 0x001A08C0u) [[unlikely]] return; }
L_001A08C0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[4].w[0] << 4);  if (t) { goto L_001A08F0; } }
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 112u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 88u);  if (t) { goto L_001A0908; } }
L_001A08F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 112u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 96u);
    c.budget -= 6;
L_001A0908:
    c.f[12] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 26624u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A092Cu); c.f[12] = fp::mul(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A092Cu) [[unlikely]] return; }
L_001A092C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A0968; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0940u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 150u, depth + 1u); else { c.pc = 0x001A2310u; return; } if (c.pc != 0x001A0940u) [[unlikely]] return; }
L_001A0940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A0978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0950u); st32((c.r[18].w[0] + 1920u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0028(c, 141u, depth + 1u); else { c.pc = 0x001A21B0u; return; } if (c.pc != 0x001A0950u) [[unlikely]] return; }
L_001A0950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A0978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0960u);  if (depth < kMaxDepth) unit_0028(c, 85u, depth + 1u); else { c.pc = 0x001A13C0u; return; } if (c.pc != 0x001A0960u) [[unlikely]] return; }
L_001A0960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001A0978; } }
L_001A0968:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1820u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A0978:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001A0D30; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1924u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A0D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0994u);  if (depth < kMaxDepth) unit_0026(c, 204u, depth + 1u); else { c.pc = 0x0019B410u; return; } if (c.pc != 0x001A0994u) [[unlikely]] return; }
L_001A0994:
    set32(c.r[16], ld32((c.r[18].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A0D30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001A09BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (t) { goto L_001A09C4; } }
L_001A09BC:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 2;
L_001A09C4:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A09E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x001A09D8u) [[unlikely]] return; }
L_001A09D8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A09F8; } }
    c.budget -= 1;
L_001A09E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A0D30; } }
L_001A09F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A04u); st32((c.r[18].w[0] + 1920u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0028(c, 141u, depth + 1u); else { c.pc = 0x001A21B0u; return; } if (c.pc != 0x001A0A04u) [[unlikely]] return; }
L_001A0A04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A0D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 150u, depth + 1u); else { c.pc = 0x001A2310u; return; } if (c.pc != 0x001A0A14u) [[unlikely]] return; }
L_001A0A14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0D30; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], 0u + 37u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 23u);  if (t) { goto L_001A0C80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A0BC0; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_001A0B80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A0B40; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001A0B00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A0AC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A0A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0CD0; } }
    c.budget -= 1;
L_001A0A70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8659u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A0CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x001A0A88u) [[unlikely]] return; }
L_001A0A88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 3u);  if (t) { goto L_001A0AB8; } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], 0u + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A0CD0; } }
L_001A0AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 1u);  if (t) { goto L_001A0CD0; } }
L_001A0AC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0ACCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x001A0ACCu) [[unlikely]] return; }
L_001A0ACC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 4u);  if (t) { goto L_001A0CD0; } }
    set32(c.r[3], 0u + 18u);
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], 0u + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A0CD0; } }
    c.budget -= 1;
L_001A0B00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A0B0Cu) [[unlikely]] return; }
L_001A0B0C:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_001A0B14:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A0CD0; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B34u); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x001A0B34u) [[unlikely]] return; }
L_001A0B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001A0CD0; } }
    c.budget -= 1;
L_001A0B40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A0B4Cu) [[unlikely]] return; }
L_001A0B4C:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A0CD0; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B74u); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x001A0B74u) [[unlikely]] return; }
L_001A0B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001A0CD0; } }
    goto L_001A0B7C;
L_001A0B78:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A0B7C:
    c.budget -= 1;
L_001A0B80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A0B8Cu) [[unlikely]] return; }
L_001A0B8C:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A0CD0; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BB4u); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x001A0BB4u) [[unlikely]] return; }
L_001A0BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001A0CD0; } }
    c.budget -= 1;
L_001A0BC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A0BCCu) [[unlikely]] return; }
L_001A0BCC:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_001A0CD0; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BECu); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A0BECu) [[unlikely]] return; }
L_001A0BEC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BFCu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A0BFCu) [[unlikely]] return; }
L_001A0BFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C18u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A0C18u) [[unlikely]] return; }
L_001A0C18:
    c.r[1].d[0] = c.r[2].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A0CD0; } }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C38u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A0C38u) [[unlikely]] return; }
L_001A0C38:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C44u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A0C44u) [[unlikely]] return; }
L_001A0C44:
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C58u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A0C58u) [[unlikely]] return; }
L_001A0C58:
    c.r[1].d[0] = c.r[2].sd[0] < 12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A0CD0; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C78u); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x001A0C78u) [[unlikely]] return; }
L_001A0C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001A0CD0; } }
L_001A0C80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8659u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A0CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x001A0C98u) [[unlikely]] return; }
L_001A0C98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 3u);  if (t) { goto L_001A0CC8; } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], 0u + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A0CD0; } }
L_001A0CC8:
    set32(c.r[17], 0u - 1u);
    c.budget -= 2;
L_001A0CD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A0D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A0CE0u) [[unlikely]] return; }
L_001A0CE0:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A0D10; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A0D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D08u); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x001A0D08u) [[unlikely]] return; }
L_001A0D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001A0D30; } }
L_001A0D10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001A0D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A0D30; } }
    c.budget -= 1;
L_001A0D28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A0D30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001A1218; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.budget -= 1;
L_001A0D3C:
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0D58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0D68; } }
    c.budget -= 1;
L_001A0D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A0D60u) [[unlikely]] return; }
L_001A0D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
L_001A0D68:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0D78:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1819u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0EF0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001A0EA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A0E50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A0E10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A0DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
L_001A0DC0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8659u)));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A0DE0; } }
L_001A0DDC:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001A0DE0:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 5376u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
L_001A0E10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0E30; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0E30:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0E50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0E70; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
L_001A0E70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0E90; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0E90:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0EA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0EB8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A0EB8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001A1218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0EE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0EE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A0EE8u) [[unlikely]] return; }
L_001A0EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
L_001A0EF0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0F00:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1808u));
    set32(c.r[3], 0u + 17u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1150; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1819u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1140; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_001A10E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001A1028; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_001A0FD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001A0F98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
L_001A0F60:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 5136u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8660u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001A1218; } }
L_001A0F98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0FB8; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0FB8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A0FD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0FF8; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
L_001A0FF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1018; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A1018:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A1028:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - 1u);  if (t) { goto L_001A10A8; } }
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 6u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A10A8; } }
    c.f[1] = ld32((c.r[18].w[0] + 8268u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001A10A8; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A10A8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A10A8; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001A10A8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001A1218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A10D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A10D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A10D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A10D8u) [[unlikely]] return; }
L_001A10D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
L_001A10E0:
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1108; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A1108:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001A1218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1130; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A1130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1138u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A1138u) [[unlikely]] return; }
L_001A1138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
L_001A1140:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A1150:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1819u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1210; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A11D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A11A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A1198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A1198:
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
L_001A11A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A11D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A11D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A1218; } }
L_001A11D8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001A1218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1218; } }
    c.budget -= 1;
L_001A1200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1208u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A1208u) [[unlikely]] return; }
L_001A1208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1218; } }
L_001A1210:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A1218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A1230:
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A1250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A126Cu);  if (depth < kMaxDepth) unit_0027(c, 67u, depth + 1u); else { c.pc = 0x0019CDB0u; return; } if (c.pc != 0x001A126Cu) [[unlikely]] return; }
L_001A126C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A13A8; } }
    c.budget -= 1;
L_001A1278:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A1368; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A1320; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A12B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A13A8; } }
    c.budget -= 1;
L_001A12B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001A1308; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A12F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A12D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A13A8; } }
    c.budget -= 1;
L_001A12D8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A13A8; } }
    c.budget -= 1;
L_001A12F8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A13A8; } }
    c.budget -= 1;
L_001A1308:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A13A8; } }
L_001A1320:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1340; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001A1358; } }
L_001A1340:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A13A8; } }
    c.budget -= 1;
L_001A1358:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A13A8; } }
    c.budget -= 1;
L_001A1368:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1813u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A13A0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A13A8; } }
L_001A13A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A13A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A13C0:
    set32(c.r[3], 0u + 10u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A13D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A1610; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A15C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A1420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A16C0; } }
    c.budget -= 1;
L_001A1420:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[17].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A1468; } }
    c.f[1] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A15A0; } }
L_001A1468:
    set32(c.r[16], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A16C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (t) { goto L_001A1490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_001A1498; } }
L_001A1490:
    set32(c.r[3], 0u + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001A1498:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A14B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A14A8u);  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x001A14A8u) [[unlikely]] return; }
L_001A14A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A14C8; } }
    c.budget -= 1;
L_001A14B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A16C0; } }
L_001A14C8:
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A14D8u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A14D8u) [[unlikely]] return; }
L_001A14D8:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A14ECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A14ECu) [[unlikely]] return; }
L_001A14EC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] << 4);  if (t) { goto L_001A151C; } }
    set32(c.r[4], c.r[5].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 112u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 88u);  if (t) { goto L_001A1534; } }
L_001A151C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 112u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 96u);
    c.budget -= 6;
L_001A1534:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_001A16C0; } }
    set32(c.r[3], 0u + 11u);
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1580; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1590; } }
    c.budget -= 1;
L_001A1580:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A1590:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A16C0; } }
    c.budget -= 1;
L_001A15A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A16C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A15B8u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A15B8u) [[unlikely]] return; }
L_001A15B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A16C0; } }
L_001A15C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A15E0; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A16C0; } }
    c.budget -= 1;
L_001A15E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1600; } }
L_001A15EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A15F4u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A15F4u) [[unlikely]] return; }
L_001A15F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A16C0; } }
    c.budget -= 1;
L_001A1600:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A16C0; } }
    c.budget -= 1;
L_001A1610:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1698; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 558u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1812u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1698; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001A1644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 580u)));  if (t) { goto L_001A164C; } }
L_001A1644:
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 2;
L_001A164C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A1698; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1698; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A1698; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1698; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 558u));
    st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A1698:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A16C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A16C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A16BCu);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A16BCu) [[unlikely]] return; }
L_001A16BC:
    c.budget -= 1;
L_001A16C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A16E0:
    set32(c.r[3], 0u + 11u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A16F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A17B8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A1770; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A1748; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A1730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1900; } }
L_001A1730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1738u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A1738u) [[unlikely]] return; }
L_001A1738:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1900; } }
    c.budget -= 1;
L_001A1748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1750u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A1750u) [[unlikely]] return; }
L_001A1750:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 45u);
    c.r[5].d[0] = c.r[5].d[0] | 384ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1900; } }
L_001A1770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1778u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x001A1778u) [[unlikely]] return; }
L_001A1778:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1798; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A17A8; } }
L_001A1794:
    c.budget -= 1;
L_001A1798:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A1900; } }
L_001A17A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1900; } }
    c.budget -= 1;
L_001A17B8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1840; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 558u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1840; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001A17F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 580u)));  if (t) { goto L_001A17F8; } }
L_001A17F0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 2;
L_001A17F8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A1840; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1840; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A1840; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1840; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 558u));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001A1840:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1900; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1864u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A1864u) [[unlikely]] return; }
L_001A1864:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A18E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A18C8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A18A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A1898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1900; } }
L_001A1898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A18A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A18A0u) [[unlikely]] return; }
L_001A18A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1900; } }
L_001A18A8:
    set32(c.r[2], 0u + 4096u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A18B8u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x001A18B8u) [[unlikely]] return; }
L_001A18B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A18C0u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A18C0u) [[unlikely]] return; }
L_001A18C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1900; } }
L_001A18C8:
    set32(c.r[2], 0u + 2048u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A18D8u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x001A18D8u) [[unlikely]] return; }
L_001A18D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A18E0u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A18E0u) [[unlikely]] return; }
L_001A18E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1900; } }
L_001A18E8:
    set32(c.r[2], 0u + 1024u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A18F8u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x001A18F8u) [[unlikely]] return; }
L_001A18F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1900u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A1900u) [[unlikely]] return; }
L_001A1900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A1910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A1AE0; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001A1AB8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A1980; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1AF8; } }
    c.budget -= 1;
L_001A1958:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001A1AF8; } }
    c.budget -= 1;
L_001A1980:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1A08; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A19A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A19A4u) [[unlikely]] return; }
L_001A19A4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001A19C8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1AF8; } }
L_001A19C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A19D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001A19D0u) [[unlikely]] return; }
L_001A19D0:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A19F8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1AF8; } }
    c.budget -= 1;
L_001A19F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1AF8; } }
    goto L_001A1A04;
L_001A1A00:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A1A04:
    c.budget -= 1;
L_001A1A08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1932u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1A20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001A1AF8; } }
    c.budget -= 1;
L_001A1A20:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1932u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1AF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A4Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002E(c, 141u, depth + 1u); else { c.pc = 0x001B9D00u; return; } if (c.pc != 0x001A1A4Cu) [[unlikely]] return; }
L_001A1A4C:
    c.f[1] = ld32((c.r[16].w[0] + 976u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A1A70; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1A80; } }
L_001A1A70:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A1A80:
    c.f[1] = ld32((c.r[16].w[0] + 980u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A1AA8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1AF8; } }
    c.budget -= 1;
L_001A1AA8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1AF8; } }
L_001A1AB8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.budget -= 1;
L_001A1ABC:
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001A1AF8; } }
    c.budget -= 1;
L_001A1AE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1AF8u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A1AF8u) [[unlikely]] return; }
L_001A1AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A1B10:
    set32(c.r[3], 0u + 13u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 3120u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[4].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1818u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A1B50:
    set32(c.r[3], 0u + 13u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 3120u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[4].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1818u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A1B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A1E40; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001A1D98; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_001A1C60; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_001A1BF8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A1BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1F18; } }
L_001A1BD8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1F18; } }
L_001A1BF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1C28; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C18u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A1C18u) [[unlikely]] return; }
L_001A1C18:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1F18; } }
L_001A1C28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A1F18; } }
    c.budget -= 1;
L_001A1C40:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001A1C44:
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1F18; } }
    c.budget -= 1;
L_001A1C60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001A1F18; } }
L_001A1C78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1D00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1CE0; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1CB0; } }
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A1CB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1CD0; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A1F18; } }
    c.budget -= 1;
L_001A1CD0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1F18; } }
    c.budget -= 1;
L_001A1CE0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1F18; } }
    c.budget -= 1;
L_001A1D00:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 564u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_001A1D58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1D58; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 28u);  if (t) { goto L_001A1D30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A1D48; } }
L_001A1D30:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A1F18; } }
    c.budget -= 1;
L_001A1D48:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A1F18; } }
L_001A1D58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1D78; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A1F18; } }
    c.budget -= 1;
L_001A1D78:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A1F18; } }
    c.budget -= 1;
L_001A1D98:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1E20; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 558u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1E20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001A1DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 580u)));  if (t) { goto L_001A1DD8; } }
L_001A1DD0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 2;
L_001A1DD8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A1E20; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1E20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A1E20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1E20; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A1E18:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 558u));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A1E20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1F18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1F18; } }
L_001A1E3C:
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A1E40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E58u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A1E58u) [[unlikely]] return; }
L_001A1E58:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A1EE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1EC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A1EA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A1E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1EF8; } }
    c.budget -= 1;
L_001A1E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x001A1E98u) [[unlikely]] return; }
L_001A1E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1EF8; } }
L_001A1EA0:
    set32(c.r[2], 0u + 4096u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1EB0u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x001A1EB0u) [[unlikely]] return; }
L_001A1EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1EB8u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A1EB8u) [[unlikely]] return; }
L_001A1EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1EF8; } }
L_001A1EC0:
    set32(c.r[2], 0u + 2048u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1ED0u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x001A1ED0u) [[unlikely]] return; }
L_001A1ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1ED8u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A1ED8u) [[unlikely]] return; }
L_001A1ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1EF8; } }
L_001A1EE0:
    set32(c.r[2], 0u + 1024u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1EF0u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x001A1EF0u) [[unlikely]] return; }
L_001A1EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1EF8u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A1EF8u) [[unlikely]] return; }
L_001A1EF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1F18; } }
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = 0ull << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001A1F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 2;
L_001A1F20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A1F30:
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A1F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A20F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A2090; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A1F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A1F80:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull << 48;  if (t) { goto L_001A1FB0; } }
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A1FB0:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1FC4u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A1FC4u) [[unlikely]] return; }
L_001A1FC4:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A2080; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1FE0u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A1FE0u) [[unlikely]] return; }
L_001A1FE0:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2008u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A2008u) [[unlikely]] return; }
L_001A2008:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A2070; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A2060; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A2050; } }
L_001A202C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A2040:
    set32(c.r[3], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A2050:
    set32(c.r[3], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A2060:
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A2070:
    set32(c.r[3], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A2080:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A2090:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1926u));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 12u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 568u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A20F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A20C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001A20F0; } }
    c.budget -= 1;
L_001A20C8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 860u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A20F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A20F0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A20F0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_001A2190; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull << 48;  if (t) { goto L_001A2190; } }
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_001A2180; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A2180; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1941u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2154u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A2154u) [[unlikely]] return; }
L_001A2154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A2180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2164u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 238u, depth + 1u); else { c.pc = 0x0019BA20u; return; } if (c.pc != 0x001A2164u) [[unlikely]] return; }
L_001A2164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A2180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2174u); st32((c.r[16].w[0] + 1920u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0028(c, 132u, depth + 1u); else { c.pc = 0x001A1F30u; return; } if (c.pc != 0x001A2174u) [[unlikely]] return; }
L_001A2174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2190; } }
    c.budget -= 1;
L_001A2180:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_001A2190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A21B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1920u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A21E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A22F0; } }
L_001A21E0:
    set32(c.r[5], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A21F0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A21F0u) [[unlikely]] return; }
L_001A21F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A21F8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x001A21F8u) [[unlikely]] return; }
L_001A21F8:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[21] = c.f[0];
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 4;
L_001A2208:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A22D8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A22D8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[18].d[0]; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001A22D8; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2238u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A2238u) [[unlikely]] return; }
L_001A2238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2240u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x001A2240u) [[unlikely]] return; }
L_001A2240:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2250u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001A2250u) [[unlikely]] return; }
L_001A2250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001A2270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001A228C; } }
L_001A2270:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A228C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001A228C; } }
L_001A228C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2294u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001A2294u) [[unlikely]] return; }
L_001A2294:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A22A0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A22A0u) [[unlikely]] return; }
L_001A22A0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A22C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A22F0; } }
    c.budget -= 1;
L_001A22C0:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A22D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A22F0; } }
    c.budget -= 1;
L_001A22D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2208u | kUnwind; return; } goto L_001A2208; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001A22F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A2310:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A233Cu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A233Cu) [[unlikely]] return; }
L_001A233C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2344u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001A2344u) [[unlikely]] return; }
L_001A2344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], c.r[29].w[0] + 128u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A236Cu); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A236Cu) [[unlikely]] return; }
L_001A236C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A23A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2384u);  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001A2384u) [[unlikely]] return; }
L_001A2384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 7;
L_001A23A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23B0u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A23B0u) [[unlikely]] return; }
L_001A23B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23C4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001A23C4u) [[unlikely]] return; }
L_001A23C4:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 132u);
    c.budget -= 3;
L_001A23D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23E0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001A23E0u) [[unlikely]] return; }
L_001A23E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001A23E8u) [[unlikely]] return; }
L_001A23E8:
    c.f[1] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A23FC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A23FC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A24C0; } }
L_001A2410:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A2440; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 515u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2430u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 297u, depth + 1u); else { c.pc = 0x001EF230u; return; } if (c.pc != 0x001A2430u) [[unlikely]] return; }
L_001A2430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A24C0; } }
L_001A2440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001A2448u) [[unlikely]] return; }
L_001A2448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A24C0; } }
L_001A2458:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A23D0u | kUnwind; return; } goto L_001A23D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 26u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A24A0; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2488u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 179u, depth + 1u); else { c.pc = 0x001460C0u; return; } if (c.pc != 0x001A2488u) [[unlikely]] return; }
L_001A2488:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A24A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001A24C0; } }
    c.budget -= 1;
L_001A24A0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A24B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A24C0; } }
L_001A24B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001A24C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001A24E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A2560; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001A2534; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001A254C; } }
L_001A2534:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001A254C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A2568; } }
L_001A2560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A2B80; } }
L_001A2568:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1928u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A2B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A257Cu);  if (depth < kMaxDepth) unit_0026(c, 230u, depth + 1u); else { c.pc = 0x0019B870u; return; } if (c.pc != 0x001A257Cu) [[unlikely]] return; }
L_001A257C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2584u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 225u, depth + 1u); else { c.pc = 0x0019B790u; return; } if (c.pc != 0x001A2584u) [[unlikely]] return; }
L_001A2584:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001A2594; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A2594:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 860u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001A2880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A25A8u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A25A8u) [[unlikely]] return; }
L_001A25A8:
    set32(c.r[4], ld32((c.r[20].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 130u);  if (t) { goto L_001A25F0; } }
    c.budget -= 1;
L_001A25B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 64u);  if (t) { goto L_001A25E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A25D4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A25D4u) [[unlikely]] return; }
L_001A25D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A25F0; } }
    c.budget -= 1;
L_001A25E0:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A25B8u | kUnwind; return; } goto L_001A25B8; } }
    c.budget -= 1;
L_001A25F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A2880; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[29].w[0] + 184u);
    c.budget -= 3;
L_001A2620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A2858; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2858; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2858; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001A2858; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2858; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001A2858; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_001A2858; } }
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A268Cu); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A268Cu) [[unlikely]] return; }
L_001A268C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2694u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001A2694u) [[unlikely]] return; }
L_001A2694:
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A2858; } }
    c.f[13] = ld32((c.r[21].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26BCu); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A26BCu) [[unlikely]] return; }
L_001A26BC:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 84u));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26E0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A26E0u) [[unlikely]] return; }
L_001A26E0:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001A2858; } }
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26F8u); set32(c.r[6], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A26F8u) [[unlikely]] return; }
L_001A26F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2700u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001A2700u) [[unlikely]] return; }
L_001A2700:
    c.f[20] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001A2858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2720u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001A2720u) [[unlikely]] return; }
L_001A2720:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A2858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A274Cu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001A274Cu) [[unlikely]] return; }
L_001A274C:
    c.r[1].d[0] = c.r[2].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A2790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2778u);  if (depth < kMaxDepth) unit_0026(c, 242u, depth + 1u); else { c.pc = 0x0019BAB0u; return; } if (c.pc != 0x001A2778u) [[unlikely]] return; }
L_001A2778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A2790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2788u);  if (depth < kMaxDepth) unit_0028(c, 117u, depth + 1u); else { c.pc = 0x001A1B50u; return; } if (c.pc != 0x001A2788u) [[unlikely]] return; }
L_001A2788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A2B80; } }
L_001A2790:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 1252u));
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.f[13] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27ACu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A27ACu) [[unlikely]] return; }
L_001A27AC:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[16].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27C4u); c.r[16].d[0] = c.r[16].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A27C4u) [[unlikely]] return; }
L_001A27C4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A27F8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001A27E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2840; } }
L_001A27E8:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2840; } }
    c.budget -= 1;
L_001A27F8:
    c.r[1].d[0] = c.r[2].sd[0] < 24577ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2828; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_001A2818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2840; } }
    c.budget -= 1;
L_001A2818:
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2840; } }
    c.budget -= 1;
L_001A2828:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_001A2838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2840; } }
L_001A2838:
    set32(c.r[2], 0u + 2048u);
    st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001A2840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2848u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x001A2848u) [[unlikely]] return; }
L_001A2848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2850u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A2850u) [[unlikely]] return; }
L_001A2850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A2B80; } }
L_001A2858:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2620u | kUnwind; return; } goto L_001A2620; } }
L_001A2880:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 860u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001A2B78; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 27856u);
    set32(c.r[21], c.r[29].w[0] + 184u);
    c.budget -= 3;
L_001A2898:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 860u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8657u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2B58; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_001A2B58; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28C8u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A28C8u) [[unlikely]] return; }
L_001A28C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28D0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001A28D0u) [[unlikely]] return; }
L_001A28D0:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 129u, depth + 1u); else { c.pc = 0x00196800u; return; } if (c.pc != 0x001A28DCu) [[unlikely]] return; }
L_001A28DC:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A2B58; } }
    c.f[13] = ld32((c.r[21].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28F4u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A28F4u) [[unlikely]] return; }
L_001A28F4:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 84u));
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2910u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A2910u) [[unlikely]] return; }
L_001A2910:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A2B58; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1252u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    set32(c.r[3], c.r[18].w[0] - c.r[3].w[0]);
    st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001A2AA0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A2988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A296Cu);  if (depth < kMaxDepth) unit_0026(c, 242u, depth + 1u); else { c.pc = 0x0019BAB0u; return; } if (c.pc != 0x001A296Cu) [[unlikely]] return; }
L_001A296C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A2988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A297Cu);  if (depth < kMaxDepth) unit_0028(c, 116u, depth + 1u); else { c.pc = 0x001A1B10u; return; } if (c.pc != 0x001A297Cu) [[unlikely]] return; }
L_001A297C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A2B80; } }
    c.budget -= 1;
L_001A2988:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[2].d[0] = c.r[17].sd[0] < 12288ll ? 1ull : 0ull;  if (t) { goto L_001A2998; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A29B0; } }
L_001A2998:
    c.r[2].d[0] = c.r[17].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_001A29C0; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A29C0; } }
L_001A29B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2A10; } }
L_001A29C0:
    c.r[2].d[0] = 0ull | 53248ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001A29E0; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A2A00; } }
    c.budget -= 1;
L_001A29E0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 45056ull;  if (t) { goto L_001A2A10; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2A10; } }
    c.budget -= 1;
L_001A2A00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A2A10:
    c.r[2].d[0] = c.r[17].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_001A2A28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2A48; } }
    c.budget -= 1;
L_001A2A28:
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 61440ull;  if (t) { goto L_001A2A58; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2A58; } }
    c.budget -= 1;
L_001A2A48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2B40; } }
L_001A2A58:
    c.r[2].d[0] = c.r[17].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < 28672ll ? 1ull : 0ull;  if (t) { goto L_001A2A70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2A90; } }
    c.budget -= 1;
L_001A2A70:
    c.r[2].d[0] = 0ull | 36864ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49152ull;  if (t) { goto L_001A2B40; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2B40; } }
    c.budget -= 1;
L_001A2A90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2B40; } }
L_001A2AA0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[1].d[0] = c.r[17].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_001A2AB0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A2AD0; } }
L_001A2AB0:
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001A2AE0; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2AE0; } }
    c.budget -= 1;
L_001A2AD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2B40; } }
L_001A2AE0:
    c.r[2].d[0] = c.r[17].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 40961ull;  if (t) { goto L_001A2B08; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2B08; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2B40; } }
L_001A2B08:
    c.r[1].d[0] = c.r[17].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_001A2B30; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2B30; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2B40; } }
    c.budget -= 1;
L_001A2B30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A2B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B48u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x001A2B48u) [[unlikely]] return; }
L_001A2B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B50u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A2B50u) [[unlikely]] return; }
L_001A2B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A2B80; } }
L_001A2B58:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2898u | kUnwind; return; } goto L_001A2898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2B78; } }
L_001A2B70:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 1928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001A2B78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001A2B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001A2BB0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1928u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A30E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2BF0u);  if (depth < kMaxDepth) unit_0026(c, 230u, depth + 1u); else { c.pc = 0x0019B870u; return; } if (c.pc != 0x001A2BF0u) [[unlikely]] return; }
L_001A2BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2BF8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 225u, depth + 1u); else { c.pc = 0x0019B790u; return; } if (c.pc != 0x001A2BF8u) [[unlikely]] return; }
L_001A2BF8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001A2C08; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A2C08:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 860u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001A2EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C1Cu); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A2C1Cu) [[unlikely]] return; }
L_001A2C1C:
    set32(c.r[4], ld32((c.r[20].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 130u);  if (t) { goto L_001A2C60; } }
L_001A2C28:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 64u);  if (t) { goto L_001A2C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C44u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001A2C44u) [[unlikely]] return; }
L_001A2C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2C60; } }
    c.budget -= 1;
L_001A2C50:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2C28u | kUnwind; return; } goto L_001A2C28; } }
    c.budget -= 1;
L_001A2C60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A2EF0; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[29].w[0] + 184u);
    c.budget -= 3;
L_001A2C90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A2EC8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2EC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2EC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001A2EC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2EC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001A2EC8; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_001A2EC8; } }
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CFCu); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A2CFCu) [[unlikely]] return; }
L_001A2CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D04u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001A2D04u) [[unlikely]] return; }
L_001A2D04:
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A2EC8; } }
    c.f[13] = ld32((c.r[21].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D2Cu); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A2D2Cu) [[unlikely]] return; }
L_001A2D2C:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 84u));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D50u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A2D50u) [[unlikely]] return; }
L_001A2D50:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001A2EC8; } }
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D68u); set32(c.r[6], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A2D68u) [[unlikely]] return; }
L_001A2D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D70u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001A2D70u) [[unlikely]] return; }
L_001A2D70:
    c.f[20] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001A2EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D90u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001A2D90u) [[unlikely]] return; }
L_001A2D90:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A2EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2DBCu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001A2DBCu) [[unlikely]] return; }
L_001A2DBC:
    c.r[1].d[0] = c.r[2].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2EC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A2E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2DE8u);  if (depth < kMaxDepth) unit_0026(c, 242u, depth + 1u); else { c.pc = 0x0019BAB0u; return; } if (c.pc != 0x001A2DE8u) [[unlikely]] return; }
L_001A2DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A2E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2DF8u);  if (depth < kMaxDepth) unit_0028(c, 117u, depth + 1u); else { c.pc = 0x001A1B50u; return; } if (c.pc != 0x001A2DF8u) [[unlikely]] return; }
L_001A2DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A30F8; } }
L_001A2E00:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 1252u));
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.f[13] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E1Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A2E1Cu) [[unlikely]] return; }
L_001A2E1C:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[16].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E34u); c.r[16].d[0] = c.r[16].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A2E34u) [[unlikely]] return; }
L_001A2E34:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A2E68; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001A2E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2EB0; } }
L_001A2E58:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2EB0; } }
    c.budget -= 1;
L_001A2E68:
    c.r[1].d[0] = c.r[2].sd[0] < 24577ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2E98; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_001A2E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2EB0; } }
    c.budget -= 1;
L_001A2E88:
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2EB0; } }
    c.budget -= 1;
L_001A2E98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_001A2EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A2EB0; } }
L_001A2EA8:
    set32(c.r[2], 0u + 2048u);
    st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001A2EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2EB8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 82u, depth + 1u); else { c.pc = 0x001A1230u; return; } if (c.pc != 0x001A2EB8u) [[unlikely]] return; }
L_001A2EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2EC0u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A2EC0u) [[unlikely]] return; }
L_001A2EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A30F8; } }
L_001A2EC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2C90u | kUnwind; return; } goto L_001A2C90; } }
L_001A2EF0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 860u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001A30F0; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[21].w[0] - 27856u);
    set32(c.r[18], c.r[29].w[0] + 184u);
    c.budget -= 3;
L_001A2F08:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 860u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8657u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A30D0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_001A30D0; } }
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F38u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001A2F38u) [[unlikely]] return; }
L_001A2F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F40u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001A2F40u) [[unlikely]] return; }
L_001A2F40:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F4Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 129u, depth + 1u); else { c.pc = 0x00196800u; return; } if (c.pc != 0x001A2F4Cu) [[unlikely]] return; }
L_001A2F4C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A30D0; } }
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F64u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A2F64u) [[unlikely]] return; }
L_001A2F64:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 84u));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F80u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A2F80u) [[unlikely]] return; }
L_001A2F80:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A30D0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1252u)));
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A2FB0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2FC8; } }
    c.budget -= 1;
L_001A2FB0:
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_001A2FD8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2FD8; } }
L_001A2FC8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A3028; } }
L_001A2FD8:
    c.r[2].d[0] = 0ull | 53248ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001A2FF8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A3018; } }
    c.budget -= 1;
L_001A2FF8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 45056ull;  if (t) { goto L_001A3028; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A3028; } }
    c.budget -= 1;
L_001A3018:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A3028:
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_001A3040; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3060; } }
    c.budget -= 1;
L_001A3040:
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 61440ull;  if (t) { goto L_001A3070; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A3070; } }
    c.budget -= 1;
L_001A3060:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A30B8; } }
L_001A3070:
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 28672ll ? 1ull : 0ull;  if (t) { goto L_001A3088; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A30A8; } }
    c.budget -= 1;
L_001A3088:
    c.r[2].d[0] = 0ull | 36864ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49152ull;  if (t) { goto L_001A30B8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A30B8; } }
    c.budget -= 1;
L_001A30A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[20].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A30C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 82u, depth + 1u); else { c.pc = 0x001A1230u; return; } if (c.pc != 0x001A30C0u) [[unlikely]] return; }
L_001A30C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A30C8u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x001A30C8u) [[unlikely]] return; }
L_001A30C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A30F8; } }
L_001A30D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2F08u | kUnwind; return; } goto L_001A2F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A30F0; } }
L_001A30E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 1928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001A30F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001A30F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001A3130:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A315Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A315Cu) [[unlikely]] return; }
L_001A315C:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3174u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3174u) [[unlikely]] return; }
L_001A3174:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A319Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001A319Cu) [[unlikely]] return; }
L_001A319C:
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x409C0000u);  if (t) { goto L_001A31D8; } }
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31CCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0039(c, 231u, depth + 1u); else { c.pc = 0x001E7860u; return; } if (c.pc != 0x001A31CCu) [[unlikely]] return; }
L_001A31CC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001A31E8; } }
L_001A31D8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31E4u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001A31E4u) [[unlikely]] return; }
L_001A31E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001A31E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A3210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A323Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A323Cu) [[unlikely]] return; }
L_001A323C:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3254u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3254u) [[unlikely]] return; }
L_001A3254:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A327Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001A327Cu) [[unlikely]] return; }
L_001A327C:
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A32E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 13u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43250000u);  if (t) { goto L_001A32C8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A32C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A3320; } }
L_001A32C8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A3318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3320; } }
    c.budget -= 1;
L_001A32E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0]), c.f[1]);  if (t) { goto L_001A3318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3308u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001A3308u) [[unlikely]] return; }
L_001A3308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A3320; } }
L_001A3318:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001A3320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A3340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1935u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A3368; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A3438; } }
    c.budget -= 1;
L_001A3368:
    c.f[3] = ld32((c.r[16].w[0] + 1856u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3384u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A3384u) [[unlikely]] return; }
L_001A3384:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 53248ull;  if (t) { goto L_001A33B0; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A33C0; } }
    c.budget -= 1;
L_001A33B0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A33E8; } }
L_001A33C0:
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 45057ull;  if (t) { goto L_001A33E8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A33E8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A33E8:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;  if (t) { goto L_001A3410; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A3410; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A3438; } }
    c.budget -= 1;
L_001A3410:
    c.r[3].d[0] = 0ull | 36864ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_001A3438; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A3438; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A3438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A3450:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1940u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A35B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 13u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A35A0; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x448C0000u);  if (t) { goto L_001A35A0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A35A0; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44770000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44890000u);  if (t) { goto L_001A35A0; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A35A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[18], 0u - 1u);
    c.f[20] = c.r[2].w[0];
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 12736u);
    c.budget -= 8;
L_001A3520:
    c.f[3] = ld32((c.r[16].w[0] + 1888u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 1896u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3544u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A3544u) [[unlikely]] return; }
L_001A3544:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A3558; } }
    c.f[20] = c.f[0];
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001A3558:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3520u | kUnwind; return; } goto L_001A3520; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001A35A0; } }
    set32(c.r[5], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 12736u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 12732u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3E30; } }
L_001A35A0:
    c.f[0] = ld32((c.r[16].w[0] + 1888u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1896u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3E30; } }
    c.budget -= 1;
L_001A35B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001A3D68; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 15408u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A0000u < 16384u) { entry = entries_0028[(t - 0x001A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A35E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A3710; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A3710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A35FCu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A35FCu) [[unlikely]] return; }
L_001A35FC:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[6], c.r[6].w[0] - 7760u);
    set32(c.r[3], c.r[3].w[0] - 7776u);
    set32(c.r[2], 0u + 17u);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1824u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A3678; } }
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1824u), c.f[0]);  if (t) { goto L_001A36A0; } }
    c.budget -= 1;
L_001A3678:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A36A0; } }
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1824u), c.f[0]);
    c.budget -= 7;
L_001A36A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A36A8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A36A8u) [[unlikely]] return; }
L_001A36A8:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1832u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A36DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A36DCu) [[unlikely]] return; }
L_001A36DC:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A36F8u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A36F8u) [[unlikely]] return; }
L_001A36F8:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
L_001A3710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001A3D68; } }
L_001A3718:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A37D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A37D0; } }
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A374Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A374Cu) [[unlikely]] return; }
L_001A374C:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3758u); set32(c.r[17], c.r[17].w[0] - 8192u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3758u) [[unlikely]] return; }
L_001A3758:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[2].w[0] << 10);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 3744u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3784u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3784u) [[unlikely]] return; }
L_001A3784:
    c.f[2] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3744u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A37B4u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A37B4u) [[unlikely]] return; }
L_001A37B4:
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
    c.budget -= 1;
L_001A37D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001A3D68; } }
L_001A37D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A3868; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A3868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A37F4u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A37F4u) [[unlikely]] return; }
L_001A37F4:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 7360u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 1832u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1832u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3830u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3830u) [[unlikely]] return; }
L_001A3830:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A384Cu); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A384Cu) [[unlikely]] return; }
L_001A384C:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
    c.budget -= 1;
L_001A3868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001A3D68; } }
L_001A3870:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.budget -= 6;
L_001A3888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A38A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A38A8; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_001A38A8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3888u | kUnwind; return; } goto L_001A3888; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A3D68; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A38CCu); set32(c.r[19], c.r[19].w[0] - 8192u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A38CCu) [[unlikely]] return; }
L_001A38CC:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 10);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A38ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A38ECu) [[unlikely]] return; }
L_001A38EC:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3908u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3908u) [[unlikely]] return; }
L_001A3908:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
L_001A3920:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A39B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A39B8; } }
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3954u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A3954u) [[unlikely]] return; }
L_001A3954:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3960u); set32(c.r[17], c.r[17].w[0] - 8192u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3960u) [[unlikely]] return; }
L_001A3960:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 10);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3980u) [[unlikely]] return; }
L_001A3980:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A399Cu); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A399Cu) [[unlikely]] return; }
L_001A399C:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
    c.budget -= 1;
L_001A39B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001A3D68; } }
L_001A39C0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A3A58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3A58; } }
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39F4u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A39F4u) [[unlikely]] return; }
L_001A39F4:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A00u); set32(c.r[17], c.r[17].w[0] - 8192u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3A00u) [[unlikely]] return; }
L_001A3A00:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 10);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3A20u) [[unlikely]] return; }
L_001A3A20:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A3Cu); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3A3Cu) [[unlikely]] return; }
L_001A3A3C:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
    c.budget -= 1;
L_001A3A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001A3D68; } }
L_001A3A60:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A3B00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A3B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A7Cu);  if (depth < kMaxDepth) unit_0025(c, 42u, depth + 1u); else { c.pc = 0x00194EC0u; return; } if (c.pc != 0x001A3A7Cu) [[unlikely]] return; }
L_001A3A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A3D68; } }
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3AA0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A3AA0u) [[unlikely]] return; }
L_001A3AA0:
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3AACu); set32(c.r[19], c.r[19].w[0] - 8192u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3AACu) [[unlikely]] return; }
L_001A3AAC:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 10);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3ACCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3ACCu) [[unlikely]] return; }
L_001A3ACC:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3AE8u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3AE8u) [[unlikely]] return; }
L_001A3AE8:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
L_001A3B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001A3D68; } }
L_001A3B08:
    c.r[18].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 1872u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1880u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
L_001A3B20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1939u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3C60; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A3C58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A3C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B48u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3B48u) [[unlikely]] return; }
L_001A3B48:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[6], c.r[6].w[0] - 7760u);
    set32(c.r[3], c.r[3].w[0] - 7776u);
    set32(c.r[2], 0u + 17u);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1824u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A3BC0; } }
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1824u), c.f[0]);  if (t) { goto L_001A3BE8; } }
L_001A3BC0:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A3BE8; } }
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1824u), c.f[0]);
    c.budget -= 7;
L_001A3BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BF0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3BF0u) [[unlikely]] return; }
L_001A3BF0:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1832u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3C24u) [[unlikely]] return; }
L_001A3C24:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C40u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3C40u) [[unlikely]] return; }
L_001A3C40:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
L_001A3C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001A3D68; } }
L_001A3C60:
    c.r[18].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 1872u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1880u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
L_001A3C78:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A3D10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3D10; } }
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 1872u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 1880u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CACu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001A3CACu) [[unlikely]] return; }
L_001A3CAC:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CB8u); set32(c.r[17], c.r[17].w[0] - 8192u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3CB8u) [[unlikely]] return; }
L_001A3CB8:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 10);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3CD8u) [[unlikely]] return; }
L_001A3CD8:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 1872u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CF4u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3CF4u) [[unlikely]] return; }
L_001A3CF4:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[16].w[0] + 1880u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3D68; } }
    c.budget -= 1;
L_001A3D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D18u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3D18u) [[unlikely]] return; }
L_001A3D18:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 12);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3D34u) [[unlikely]] return; }
L_001A3D34:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 1872u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D50u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3D50u) [[unlikely]] return; }
L_001A3D50:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[16].w[0] + 1880u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1864u), c.f[0]);
    c.budget -= 6;
L_001A3D68:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], 0u + 60u);  if (t) { goto L_001A3E30; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[17].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.budget -= 6;
L_001A3D88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3DA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A3DA8; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_001A3DA8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3D88u | kUnwind; return; } goto L_001A3D88; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A3E20; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3DCCu); set32(c.r[18], c.r[18].w[0] - 8192u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A3DCCu) [[unlikely]] return; }
L_001A3DCC:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 10);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3DECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A3DECu) [[unlikely]] return; }
L_001A3DEC:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3E08u); st32((c.r[16].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A3E08u) [[unlikely]] return; }
L_001A3E08:
    c.f[2] = ld32((c.r[16].w[0] + 1824u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_001A3E30; } }
L_001A3E20:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[16].w[0] + 1864u), c.f[0]);
    c.budget -= 4;
L_001A3E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A3E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1940u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1946u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 24u, depth); } }
    set32(c.r[3], 0u + 120u);
    st16((c.r[17].w[0] + 1946u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1938u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 1920u)));  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 15472u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A0000u < 16384u) { entry = entries_0028[(t - 0x001A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A3EC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3ED8u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x001A3ED8u) [[unlikely]] return; }
L_001A3ED8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A3F10u) [[unlikely]] return; }
L_001A3F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A3F18u) [[unlikely]] return; }
L_001A3F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
L_001A3F20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F30u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x001A3F30u) [[unlikely]] return; }
L_001A3F30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x001A3F50u) [[unlikely]] return; }
L_001A3F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001A3F58u) [[unlikely]] return; }
L_001A3F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
L_001A3F60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.budget -= 4;
L_001A3F78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3F98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A3F98; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_001A3F98:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3F78u | kUnwind; return; } goto L_001A3F78; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    c.f[5] = ld32((c.r[6].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[6].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3FE0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A3FE0u) [[unlikely]] return; }
L_001A3FE0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3FECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A3FECu) [[unlikely]] return; }
L_001A3FEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 25u, depth); } }
    [[clang::musttail]] return unit_0029(c, 2u, depth);
}

}
