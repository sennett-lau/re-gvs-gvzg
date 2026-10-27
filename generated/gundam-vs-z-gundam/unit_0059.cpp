#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0059[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156,
    0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0059(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00264000;
    case 2u: goto L_00264018;
    case 3u: goto L_002640A0;
    case 4u: goto L_002640C0;
    case 5u: goto L_002640E0;
    case 6u: goto L_00264128;
    case 7u: goto L_00264138;
    case 8u: goto L_00264154;
    case 9u: goto L_00264160;
    case 10u: goto L_00264200;
    case 11u: goto L_00264220;
    case 12u: goto L_00264260;
    case 13u: goto L_00264280;
    case 14u: goto L_002642C8;
    case 15u: goto L_002642E4;
    case 16u: goto L_00264330;
    case 17u: goto L_00264350;
    case 18u: goto L_00264384;
    case 19u: goto L_002643A8;
    case 20u: goto L_002643E8;
    case 21u: goto L_00264408;
    case 22u: goto L_00264450;
    case 23u: goto L_00264470;
    case 24u: goto L_002644A4;
    case 25u: goto L_002644C8;
    case 26u: goto L_002644D0;
    case 27u: goto L_002644F0;
    case 28u: goto L_00264554;
    case 29u: goto L_00264588;
    case 30u: goto L_00264598;
    case 31u: goto L_002645B4;
    case 32u: goto L_002645C0;
    case 33u: goto L_00264660;
    case 34u: goto L_00264690;
    case 35u: goto L_002646E0;
    case 36u: goto L_00264710;
    case 37u: goto L_00264768;
    case 38u: goto L_00264794;
    case 39u: goto L_002647F0;
    case 40u: goto L_00264820;
    case 41u: goto L_00264864;
    case 42u: goto L_00264890;
    case 43u: goto L_002648E0;
    case 44u: goto L_00264910;
    case 45u: goto L_00264968;
    case 46u: goto L_00264998;
    case 47u: goto L_002649DC;
    case 48u: goto L_00264A08;
    case 49u: goto L_00264A20;
    case 50u: goto L_00264A40;
    case 51u: goto L_00264A54;
    case 52u: goto L_00264A94;
    case 53u: goto L_00264ABC;
    case 54u: goto L_00264ACC;
    case 55u: goto L_00264AEC;
    case 56u: goto L_00264B1C;
    case 57u: goto L_00264B70;
    case 58u: goto L_00264B7C;
    case 59u: goto L_00264BAC;
    case 60u: goto L_00264C40;
    case 61u: goto L_00264C88;
    case 62u: goto L_00264C98;
    case 63u: goto L_00264CB0;
    case 64u: goto L_00264D64;
    case 65u: goto L_00264D78;
    case 66u: goto L_00264DB0;
    case 67u: goto L_00264DBC;
    case 68u: goto L_00264DF0;
    case 69u: goto L_00264E40;
    case 70u: goto L_00264E74;
    case 71u: goto L_00264E80;
    case 72u: goto L_00264E8C;
    case 73u: goto L_00264E98;
    case 74u: goto L_00264EA4;
    case 75u: goto L_00264EB0;
    case 76u: goto L_00264ED0;
    case 77u: goto L_00264EF8;
    case 78u: goto L_00264F20;
    case 79u: goto L_00264F64;
    case 80u: goto L_00264FF4;
    case 81u: goto L_00265010;
    case 82u: goto L_00265018;
    case 83u: goto L_00265064;
    case 84u: goto L_00265078;
    case 85u: goto L_002650D4;
    case 86u: goto L_002650E4;
    case 87u: goto L_0026514C;
    case 88u: goto L_00265158;
    case 89u: goto L_00265170;
    case 90u: goto L_002651B8;
    case 91u: goto L_002651C8;
    case 92u: goto L_002651E0;
    case 93u: goto L_00265224;
    case 94u: goto L_002652BC;
    case 95u: goto L_002652C8;
    case 96u: goto L_002652D4;
    case 97u: goto L_002652E8;
    case 98u: goto L_00265308;
    case 99u: goto L_00265338;
    case 100u: goto L_00265344;
    case 101u: goto L_00265358;
    case 102u: goto L_00265380;
    case 103u: goto L_002653D0;
    case 104u: goto L_00265424;
    case 105u: goto L_00265430;
    case 106u: goto L_0026544C;
    case 107u: goto L_0026548C;
    case 108u: goto L_00265498;
    case 109u: goto L_002654B4;
    case 110u: goto L_0026551C;
    case 111u: goto L_00265548;
    case 112u: goto L_00265558;
    case 113u: goto L_00265584;
    case 114u: goto L_002655B8;
    case 115u: goto L_002655D0;
    case 116u: goto L_0026560C;
    case 117u: goto L_00265624;
    case 118u: goto L_00265690;
    case 119u: goto L_0026574C;
    case 120u: goto L_00265758;
    case 121u: goto L_00265784;
    case 122u: goto L_00265790;
    case 123u: goto L_002657B0;
    case 124u: goto L_002658BC;
    case 125u: goto L_002658C8;
    case 126u: goto L_002658F4;
    case 127u: goto L_00265900;
    case 128u: goto L_00265954;
    case 129u: goto L_00265A68;
    case 130u: goto L_00265A78;
    case 131u: goto L_00265ABC;
    case 132u: goto L_00265AF0;
    case 133u: goto L_00265B08;
    case 134u: goto L_00265B44;
    case 135u: goto L_00265B5C;
    case 136u: goto L_00265B80;
    case 137u: goto L_00265BD4;
    case 138u: goto L_00265BF0;
    case 139u: goto L_00265C5C;
    case 140u: goto L_00265CA4;
    case 141u: goto L_00265D24;
    case 142u: goto L_00265D34;
    case 143u: goto L_00265D40;
    case 144u: goto L_00265DEC;
    case 145u: goto L_00265E5C;
    case 146u: goto L_00265E68;
    case 147u: goto L_00265E74;
    case 148u: goto L_00265F20;
    case 149u: goto L_00265F58;
    case 150u: goto L_00265FE8;
    case 151u: goto L_00266010;
    case 152u: goto L_00266088;
    case 153u: goto L_00266094;
    case 154u: goto L_00266144;
    case 155u: goto L_0026616C;
    case 156u: goto L_0026617C;
    case 157u: goto L_00266188;
    case 158u: goto L_002661A0;
    case 159u: goto L_002661C0;
    case 160u: goto L_002661F0;
    case 161u: goto L_00266228;
    case 162u: goto L_00266238;
    case 163u: goto L_00266250;
    case 164u: goto L_00266260;
    case 165u: goto L_00266288;
    case 166u: goto L_002662F8;
    case 167u: goto L_002663B4;
    case 168u: goto L_002663C0;
    case 169u: goto L_00266430;
    case 170u: goto L_00266484;
    case 171u: goto L_00266494;
    case 172u: goto L_002664AC;
    case 173u: goto L_00266518;
    case 174u: goto L_0026668C;
    case 175u: goto L_0026669C;
    case 176u: goto L_002666B0;
    case 177u: goto L_00266708;
    case 178u: goto L_0026672C;
    case 179u: goto L_00266738;
    case 180u: goto L_0026676C;
    case 181u: goto L_00266778;
    case 182u: goto L_002667A8;
    case 183u: goto L_002667DC;
    case 184u: goto L_002667E8;
    case 185u: goto L_00266800;
    case 186u: goto L_00266868;
    case 187u: goto L_002668DC;
    case 188u: goto L_00266990;
    case 189u: goto L_002669C4;
    case 190u: goto L_002669D8;
    case 191u: goto L_00266A24;
    case 192u: goto L_00266A34;
    case 193u: goto L_00266A88;
    case 194u: goto L_00266B90;
    case 195u: goto L_00266BC4;
    case 196u: goto L_00266BD8;
    case 197u: goto L_00266C24;
    case 198u: goto L_00266C34;
    case 199u: goto L_00266C50;
    case 200u: goto L_00266CF0;
    case 201u: goto L_00266D00;
    case 202u: goto L_00266D20;
    case 203u: goto L_00266D40;
    case 204u: goto L_00266DB4;
    case 205u: goto L_00266E34;
    case 206u: goto L_00266E78;
    case 207u: goto L_00266E84;
    case 208u: goto L_00266EF0;
    case 209u: goto L_00266F1C;
    case 210u: goto L_00266F30;
    case 211u: goto L_00266F7C;
    case 212u: goto L_00266FB4;
    case 213u: goto L_00266FC0;
    case 214u: goto L_00266FCC;
    case 215u: goto L_00266FD8;
    case 216u: goto L_00266FE4;
    case 217u: goto L_00266FF0;
    case 218u: goto L_00267010;
    case 219u: goto L_00267020;
    case 220u: goto L_00267048;
    case 221u: goto L_002670D0;
    case 222u: goto L_002670D8;
    case 223u: goto L_00267128;
    case 224u: goto L_00267134;
    case 225u: goto L_00267150;
    case 226u: goto L_0026715C;
    case 227u: goto L_00267188;
    case 228u: goto L_002671DC;
    case 229u: goto L_002671E8;
    case 230u: goto L_0026721C;
    case 231u: goto L_00267290;
    case 232u: goto L_00267364;
    case 233u: goto L_002673A0;
    case 234u: goto L_002673B0;
    case 235u: goto L_002673F4;
    case 236u: goto L_00267400;
    case 237u: goto L_0026740C;
    case 238u: goto L_00267418;
    case 239u: goto L_00267424;
    case 240u: goto L_00267430;
    case 241u: goto L_002674B0;
    case 242u: goto L_002674C0;
    case 243u: goto L_002674D0;
    case 244u: goto L_00267508;
    case 245u: goto L_002675E8;
    case 246u: goto L_00267620;
    case 247u: goto L_00267628;
    case 248u: goto L_00267644;
    case 249u: goto L_00267660;
    case 250u: goto L_002676A8;
    case 251u: goto L_002676D8;
    case 252u: goto L_002676E0;
    case 253u: goto L_002676F4;
    case 254u: goto L_00267710;
    case 255u: goto L_00267768;
    case 256u: goto L_00267774;
    case 257u: goto L_0026779C;
    case 258u: goto L_002677D0;
    case 259u: goto L_002677E0;
    case 260u: goto L_00267824;
    case 261u: goto L_002678B4;
    case 262u: goto L_002678D0;
    case 263u: goto L_002678D8;
    case 264u: goto L_00267924;
    case 265u: goto L_00267938;
    case 266u: goto L_0026797C;
    case 267u: goto L_002679A8;
    case 268u: goto L_002679BC;
    case 269u: goto L_00267A38;
    case 270u: goto L_00267A58;
    case 271u: goto L_00267A64;
    case 272u: goto L_00267A80;
    case 273u: goto L_00267AC8;
    case 274u: goto L_00267AD8;
    case 275u: goto L_00267AF0;
    case 276u: goto L_00267B34;
    case 277u: goto L_00267BCC;
    case 278u: goto L_00267BD8;
    case 279u: goto L_00267BE4;
    case 280u: goto L_00267BF8;
    case 281u: goto L_00267C18;
    case 282u: goto L_00267C48;
    case 283u: goto L_00267C5C;
    case 284u: goto L_00267C70;
    case 285u: goto L_00267C98;
    case 286u: goto L_00267CE8;
    case 287u: goto L_00267D3C;
    case 288u: goto L_00267D50;
    case 289u: goto L_00267D5C;
    case 290u: goto L_00267D78;
    case 291u: goto L_00267DB4;
    case 292u: goto L_00267DC0;
    case 293u: goto L_00267DDC;
    case 294u: goto L_00267E44;
    case 295u: goto L_00267E70;
    case 296u: goto L_00267E80;
    case 297u: goto L_00267EAC;
    case 298u: goto L_00267EE0;
    case 299u: goto L_00267EF8;
    case 300u: goto L_00267F34;
    case 301u: goto L_00267F4C;
    case 302u: goto L_00267FB0;
    case 303u: goto L_00267FC0;
    case 304u: goto L_00267FD0;
    case 305u: goto L_00267FE0;
    default: bad_entry(c, 0x00264000u); return;
    }
L_00264000:
    c.f[0] = ld32((c.r[17].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00264088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264018u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00264018u) [[unlikely]] return; }
L_00264018:
    c.f[2] = ld32((c.r[17].w[0] + 1156u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00264050; } }
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00264088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[2]);  if (t) { goto L_00264088; } }
    c.budget -= 1;
L_00264050:
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00264088; } }
    st32((c.r[17].w[0] + 104u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[0] = ld32((c.r[17].w[0] + 1156u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_00264088:
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 732u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 732u), c.f[0]);
    st32((c.r[17].w[0] + 1016u), c.f[20]);
    c.budget -= 6;
L_002640A0:
    c.f[1] = ld32((c.r[17].w[0] + 732u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002640C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640C0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x002640C0u) [[unlikely]] return; }
L_002640C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002640E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00264118; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002644C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002644C8; } }
L_00264118:
    set32(c.r[4], c.r[19].w[0] + 8592u);
    set32(c.r[5], c.r[19].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264128u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00264128u) [[unlikely]] return; }
L_00264128:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264138u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00264138u) [[unlikely]] return; }
L_00264138:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264154u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x00264154u) [[unlikely]] return; }
L_00264154:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264160u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00264160u) [[unlikely]] return; }
L_00264160:
    c.r[6].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 707u)));
    set32(c.r[4], c.r[4].w[0] + 18752u);
    set32(c.r[3], 0u + 2u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002643A8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00264288; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002641B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002644C8; } }
    c.budget -= 1;
L_002641B0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002644C8; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00264228; } }
    st8((c.r[19].w[0] + 707u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264208; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264200u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264200u) [[unlikely]] return; }
L_00264200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002644C8; } }
L_00264208:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264220u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264220u) [[unlikely]] return; }
L_00264220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002644C8; } }
L_00264228:
    c.r[1].d[0] = c.r[2].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002644C8; } }
    st8((c.r[19].w[0] + 707u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264268; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264260u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264260u) [[unlikely]] return; }
L_00264260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002644C8; } }
L_00264268:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264280u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264280u) [[unlikely]] return; }
L_00264280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002644C8; } }
L_00264288:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002642E8; } }
    st8((c.r[19].w[0] + 707u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002642D0; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642C8u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002642C8u) [[unlikely]] return; }
L_002642C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002642E8; } }
L_002642D0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002642E4u) [[unlikely]] return; }
L_002642E4:
    c.budget -= 1;
L_002642E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < -8192ll ? 1ull : 0ull;  if (t) { goto L_002644C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00264358; } }
    st8((c.r[19].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264338; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264330u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264330u) [[unlikely]] return; }
L_00264330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002643A8; } }
L_00264338:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264350u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264350u) [[unlikely]] return; }
L_00264350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002643A8; } }
L_00264358:
    st8((c.r[19].w[0] + 707u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264390; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264384u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264384u) [[unlikely]] return; }
L_00264384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002643A8; } }
    c.budget -= 1;
L_00264390:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002643A8u) [[unlikely]] return; }
L_002643A8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00264408; } }
    st8((c.r[19].w[0] + 707u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002643F0; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643E8u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002643E8u) [[unlikely]] return; }
L_002643E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264408; } }
L_002643F0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264408u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264408u) [[unlikely]] return; }
L_00264408:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_002644C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264478; } }
    st8((c.r[19].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264458; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264450u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264450u) [[unlikely]] return; }
L_00264450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002644C8; } }
L_00264458:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264470u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264470u) [[unlikely]] return; }
L_00264470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002644C8; } }
L_00264478:
    st8((c.r[19].w[0] + 707u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002644B0; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002644A4u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002644A4u) [[unlikely]] return; }
L_002644A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002644C8; } }
    c.budget -= 1;
L_002644B0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002644C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002644C8u) [[unlikely]] return; }
L_002644C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002644D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x002644D0u) [[unlikely]] return; }
L_002644D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002644F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00264548; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 16u);
    st8((c.r[19].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[19].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 276u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
L_00264548:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264554u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00264554u) [[unlikely]] return; }
L_00264554:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264578; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00264A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00264A18; } }
    c.budget -= 1;
L_00264578:
    set32(c.r[4], c.r[19].w[0] + 8592u);
    set32(c.r[5], c.r[19].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264588u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00264588u) [[unlikely]] return; }
L_00264588:
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264598u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00264598u) [[unlikely]] return; }
L_00264598:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002645B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x002645B4u) [[unlikely]] return; }
L_002645B4:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002645C0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002645C0u) [[unlikely]] return; }
L_002645C0:
    c.r[6].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 711u)));
    set32(c.r[4], c.r[4].w[0] + 18752u);
    set32(c.r[3], 0u + 2u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002648A0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00264728; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264A18; } }
    c.budget -= 1;
L_00264610:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_00264A18; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002646A8; } }
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264678; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264660u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264660u) [[unlikely]] return; }
L_00264660:
    set32(c.r[2], 0u + 8u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264A18; } }
    c.budget -= 1;
L_00264678:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264690u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264690u) [[unlikely]] return; }
L_00264690:
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264A18; } }
    c.budget -= 1;
L_002646A8:
    c.r[1].d[0] = c.r[2].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00264A18; } }
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002646F8; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646E0u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002646E0u) [[unlikely]] return; }
L_002646E0:
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264A18; } }
    c.budget -= 1;
L_002646F8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264710u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264710u) [[unlikely]] return; }
L_00264710:
    set32(c.r[2], 0u + 8u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264A18; } }
    c.budget -= 1;
L_00264728:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002647A8; } }
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264780; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264768u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264768u) [[unlikely]] return; }
L_00264768:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002647A8; } }
    c.budget -= 1;
L_00264780:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264794u) [[unlikely]] return; }
L_00264794:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002647A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < -8192ll ? 1ull : 0ull;  if (t) { goto L_00264A18; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00264838; } }
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264808; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647F0u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002647F0u) [[unlikely]] return; }
L_002647F0:
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002648A0; } }
    c.budget -= 1;
L_00264808:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264820u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264820u) [[unlikely]] return; }
L_00264820:
    set32(c.r[2], 0u + 8u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002648A0; } }
    c.budget -= 1;
L_00264838:
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264878; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264864u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264864u) [[unlikely]] return; }
L_00264864:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002648A0; } }
L_00264878:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264890u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264890u) [[unlikely]] return; }
L_00264890:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002648A0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00264920; } }
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002648F8; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648E0u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002648E0u) [[unlikely]] return; }
L_002648E0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264920; } }
    c.budget -= 1;
L_002648F8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264910u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264910u) [[unlikely]] return; }
L_00264910:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00264920:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_00264A18; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002649B0; } }
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264980; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264968u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264968u) [[unlikely]] return; }
L_00264968:
    set32(c.r[2], 0u + 8u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264A18; } }
    c.budget -= 1;
L_00264980:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264998u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264998u) [[unlikely]] return; }
L_00264998:
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264A18; } }
    c.budget -= 1;
L_002649B0:
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002649F0; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649DCu); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002649DCu) [[unlikely]] return; }
L_002649DC:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264A18; } }
L_002649F0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A08u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264A08u) [[unlikely]] return; }
L_00264A08:
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00264A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00264A20u) [[unlikely]] return; }
L_00264A20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_00264A48; } }
    set32(c.r[4], c.r[19].w[0] + 1408u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A40u); set32(c.r[5], c.r[19].w[0] + 1376u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00264A40u) [[unlikely]] return; }
L_00264A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264A58; } }
L_00264A48:
    set32(c.r[4], c.r[19].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A54u); set32(c.r[5], c.r[19].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00264A54u) [[unlikely]] return; }
L_00264A54:
    c.budget -= 1;
L_00264A58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264AA0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1036u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 1016u));
    set32(c.r[5], c.r[19].w[0] + 1408u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A94u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x00264A94u) [[unlikely]] return; }
L_00264A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264AC0; } }
    c.budget -= 1;
L_00264AA0:
    set32(c.r[2], ld32((c.r[19].w[0] + 1036u)));
    c.f[0] = ld32((c.r[19].w[0] + 1016u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 1408u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264ABCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x00264ABCu) [[unlikely]] return; }
L_00264ABC:
    c.budget -= 1;
L_00264AC0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264ACCu); set32(c.r[5], c.r[19].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00264ACCu) [[unlikely]] return; }
L_00264ACC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_00264AF0; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00264AECu) [[unlikely]] return; }
L_00264AEC:
    c.budget -= 1;
L_00264AF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B1Cu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00264B1Cu) [[unlikely]] return; }
L_00264B1C:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[2].w[0]), 0u);
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00264BA0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B70u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00264B70u) [[unlikely]] return; }
L_00264B70:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B7Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00264B7Cu) [[unlikely]] return; }
L_00264B7C:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[19].w[0] + 1392u), c.f[3]);
    st32((c.r[19].w[0] + 1396u), c.f[2]);
    st32((c.r[19].w[0] + 1400u), c.f[1]);
    st32((c.r[19].w[0] + 1404u), c.f[0]);
    c.budget -= 9;
L_00264BA0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BACu); set32(c.r[5], c.r[19].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00264BACu) [[unlikely]] return; }
L_00264BAC:
    c.f[2] = ld32((c.r[19].w[0] + 1156u));
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00264BE0; } }
    c.f[1] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00264C18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.f[2]);  if (t) { goto L_00264C18; } }
L_00264BE0:
    c.f[1] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00264C18; } }
    st32((c.r[19].w[0] + 104u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[0] = ld32((c.r[19].w[0] + 1156u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_00264C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00264C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_00264C90; } }
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + 17330u);
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264C88u) [[unlikely]] return; }
L_00264C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264C98; } }
L_00264C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C98u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00264C98u) [[unlikely]] return; }
L_00264C98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00264CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00264D70; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], 0u - 261u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 1264u), 0u);
    set32(c.r[2], c.r[2].w[0] + 17330u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264D40; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_00264D48; } }
    c.budget -= 1;
L_00264D40:
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_00264D48:
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00264D64u) [[unlikely]] return; }
L_00264D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264DB0; } }
    c.budget -= 1;
L_00264D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D78u);  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00264D78u) [[unlikely]] return; }
L_00264D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264DB0; } }
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], c.r[2].w[0] + 17331u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00264DB0u) [[unlikely]] return; }
L_00264DB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DBCu); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00264DBCu) [[unlikely]] return; }
L_00264DBC:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00264DD8; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 1;
L_00264DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00264EC8; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 18254u);
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E40u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00264E40u) [[unlikely]] return; }
L_00264E40:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_00264E58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00264F10; } }
L_00264E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 19424u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + 4608u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E74u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00264E74u) [[unlikely]] return; }
L_00264E74:
    set32(c.r[4], c.r[16].w[0] + 4672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E80u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00264E80u) [[unlikely]] return; }
L_00264E80:
    set32(c.r[4], c.r[16].w[0] + 4624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E8Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00264E8Cu) [[unlikely]] return; }
L_00264E8C:
    set32(c.r[4], c.r[16].w[0] + 4688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E98u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00264E98u) [[unlikely]] return; }
L_00264E98:
    set32(c.r[4], c.r[16].w[0] + 4640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EA4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00264EA4u) [[unlikely]] return; }
L_00264EA4:
    set32(c.r[4], c.r[16].w[0] + 4704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EB0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00264EB0u) [[unlikely]] return; }
L_00264EB0:
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264F10; } }
    c.budget -= 1;
L_00264EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264ED0u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00264ED0u) [[unlikely]] return; }
L_00264ED0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_00264EE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00264F10; } }
L_00264EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DD0C0u; return; } if (c.pc != 0x00264EF8u) [[unlikely]] return; }
L_00264EF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00264F10; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 8512u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 8513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00264F10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264F20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F64u); set32(c.r[16], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00264F64u) [[unlikely]] return; }
L_00264F64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_00265090; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00265070; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00264F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002650D8; } }
    c.budget -= 1;
L_00264F90:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u - 453u);
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 802u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 16u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 18u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00265000; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x00264FF4u) [[unlikely]] return; }
L_00264FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265010; } }
    c.budget -= 1;
L_00265000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265010u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x00265010u) [[unlikely]] return; }
L_00265010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265018u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 139u, depth + 1u); else { c.pc = 0x00269800u; return; } if (c.pc != 0x00265018u) [[unlikely]] return; }
L_00265018:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 18254u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265064u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00265064u) [[unlikely]] return; }
L_00265064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002650D8; } }
    c.budget -= 1;
L_00265070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265078u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00265078u) [[unlikely]] return; }
L_00265078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002650D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00265090:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 5u);
    st32((c.r[17].w[0] + 1408u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 1412u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 1416u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 1408u));
    c.f[2] = ld32((c.r[17].w[0] + 1412u));
    c.f[1] = ld32((c.r[17].w[0] + 1416u));
    c.f[0] = ld32((c.r[17].w[0] + 1420u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650D4u); st32((c.r[17].w[0] + 1436u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x002650D4u) [[unlikely]] return; }
L_002650D4:
    c.budget -= 1;
L_002650D8:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x002650E4u) [[unlikely]] return; }
L_002650E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265118; } }
    c.f[3] = ld32((c.r[17].w[0] + 1376u));
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[17].w[0] + 1380u));
    c.f[1] = ld32((c.r[17].w[0] + 1384u));
    c.f[0] = ld32((c.r[17].w[0] + 1388u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_00265130; } }
    c.budget -= 1;
L_00265118:
    c.f[0] = ld32((c.r[17].w[0] + 8624u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8628u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8632u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_00265130:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026514Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x0026514Cu) [[unlikely]] return; }
L_0026514C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265158u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x00265158u) [[unlikely]] return; }
L_00265158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00265170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_002651C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 18253u);
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651B8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002651B8u) [[unlikely]] return; }
L_002651B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002651C8; } }
L_002651C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651C8u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x002651C8u) [[unlikely]] return; }
L_002651C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002651E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265224u); set32(c.r[16], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00265224u) [[unlikely]] return; }
L_00265224:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265330; } }
L_00265238:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[17].w[0] + 1076u));
    set32(c.r[2], 0u + 7u);
    st32((c.r[17].w[0] + 728u), c.f[1]);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00265270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00265278; } }
    c.budget -= 1;
L_00265270:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00265278:
    set32(c.r[2], 0u + 32u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    c.f[12] = 0u;
    st32((c.r[17].w[0] + 280u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18253u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002652BCu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002652BCu) [[unlikely]] return; }
L_002652BC:
    set32(c.r[4], c.r[17].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002652C8u); set32(c.r[5], c.r[17].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002652C8u) [[unlikely]] return; }
L_002652C8:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002652D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x002652D4u) [[unlikely]] return; }
L_002652D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265318; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002652E8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x002652E8u) [[unlikely]] return; }
L_002652E8:
    c.f[2] = ld32((c.r[17].w[0] + 1000u));
    c.f[1] = ld32((c.r[17].w[0] + 1156u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265308u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00265308u) [[unlikely]] return; }
L_00265308:
    c.f[1] = ld32((c.r[17].w[0] + 1000u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_00265328; } }
L_00265318:
    st32((c.r[17].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1000u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00265328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_00265338; } }
L_00265330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00265338u) [[unlikely]] return; }
L_00265338:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265344u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00265344u) [[unlikely]] return; }
L_00265344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002654C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265358u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00265358u) [[unlikely]] return; }
L_00265358:
    c.f[3] = ld32((c.r[17].w[0] + 1004u));
    c.f[2] = ld32((c.r[17].w[0] + 1156u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265380u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00265380u) [[unlikely]] return; }
L_00265380:
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1080u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002653B0; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_002653B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1392u);
    set32(c.r[6], c.r[17].w[0] + 1376u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653D0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 224u, depth + 1u); else { c.pc = 0x0026A3F0u; return; } if (c.pc != 0x002653D0u) [[unlikely]] return; }
L_002653D0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265478; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265424u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00265424u) [[unlikely]] return; }
L_00265424:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265430u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00265430u) [[unlikely]] return; }
L_00265430:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026544Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x0026544Cu) [[unlikely]] return; }
L_0026544C:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1436u), c.f[0]);  if (t) { goto L_00265520; } }
    c.budget -= 1;
L_00265478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026548Cu); set32(c.r[5], c.r[17].w[0] + 1376u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0026548Cu) [[unlikely]] return; }
L_0026548C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265498u); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00265498u) [[unlikely]] return; }
L_00265498:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002654B4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x002654B4u) [[unlikely]] return; }
L_002654B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265520; } }
    c.budget -= 1;
L_002654C0:
    c.f[2] = ld32((c.r[17].w[0] + 1008u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00265500; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_00265500:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026551Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x0026551Cu) [[unlikely]] return; }
L_0026551C:
    c.budget -= 1;
L_00265520:
    c.f[1] = ld32((c.r[17].w[0] + 1084u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00265538; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00265538:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265548u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00265548u) [[unlikely]] return; }
L_00265548:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265558u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00265558u) [[unlikely]] return; }
L_00265558:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002655D8; } }
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265584u); set32(c.r[6], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 131u, depth + 1u); else { c.pc = 0x00269670u; return; } if (c.pc != 0x00265584u) [[unlikely]] return; }
L_00265584:
    c.f[0] = ld32((c.r[17].w[0] + 8608u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8612u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8616u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002655B8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x002655B8u) [[unlikely]] return; }
L_002655B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002655D0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x002655D0u) [[unlikely]] return; }
L_002655D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265628; } }
L_002655D8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 8608u));
    set32(c.r[5], c.r[17].w[0] + 1408u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8612u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8616u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026560Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x0026560Cu) [[unlikely]] return; }
L_0026560C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265624u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00265624u) [[unlikely]] return; }
L_00265624:
    c.budget -= 1;
L_00265628:
    c.f[2] = ld32((c.r[17].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00265670; } }
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 728u), c.f[1]);  if (t) { goto L_00265668; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00265668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265670; } }
L_00265670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00265690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 18256u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00265788; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00265750; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00265710; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002656F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265790; } }
L_002656F0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 712u), c.f[0]);
    c.budget -= 8;
L_00265710:
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 712u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 712u), c.f[0]);  if (t) { goto L_00265790; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 704u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026574Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x0026574Cu) [[unlikely]] return; }
L_0026574C:
    c.budget -= 1;
L_00265750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265758u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00265758u) [[unlikely]] return; }
L_00265758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265790; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 704u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265784u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00265784u) [[unlikely]] return; }
L_00265784:
    c.budget -= 1;
L_00265788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00265790u) [[unlikely]] return; }
L_00265790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002657B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 18256u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_002658F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002658C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265880; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00265810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265958; } }
L_00265810:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 8u);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 728u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 28;
L_00265880:
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 728u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 728u), c.f[0]);  if (t) { goto L_00265958; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658BCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002658BCu) [[unlikely]] return; }
L_002658BC:
    c.budget -= 1;
L_002658C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x002658C8u) [[unlikely]] return; }
L_002658C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265958; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002658F4u) [[unlikely]] return; }
L_002658F4:
    c.budget -= 1;
L_002658F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265900u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00265900u) [[unlikely]] return; }
L_00265900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265958; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], 0u - 73u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 1264u), 0u);
    st32((c.r[17].w[0] + 1260u), 0u);
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 849u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265954u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00265954u) [[unlikely]] return; }
L_00265954:
    c.budget -= 1;
L_00265958:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 709u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002659F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002659B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00265980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002659F0; } }
L_00265980:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002659F0; } }
    st8((c.r[17].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[2], 0u + 1024u);
    st32((c.r[17].w[0] + 732u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_002659B0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[17].w[0] + 732u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 732u), c.f[1]);  if (t) { goto L_002659F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002659F0:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00265A30; } }
    st32((c.r[17].w[0] + 108u), c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_00265A30:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00265A58; } }
    st32((c.r[17].w[0] + 108u), c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00265A58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A68u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00265A68u) [[unlikely]] return; }
L_00265A68:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A78u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00265A78u) [[unlikely]] return; }
L_00265A78:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00265B60; } }
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00265B10; } }
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265ABCu); set32(c.r[6], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 131u, depth + 1u); else { c.pc = 0x00269670u; return; } if (c.pc != 0x00265ABCu) [[unlikely]] return; }
L_00265ABC:
    c.f[0] = ld32((c.r[17].w[0] + 8608u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8612u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8616u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265AF0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00265AF0u) [[unlikely]] return; }
L_00265AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B08u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00265B08u) [[unlikely]] return; }
L_00265B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265B60; } }
L_00265B10:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 8608u));
    set32(c.r[5], c.r[17].w[0] + 1408u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8612u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8616u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B44u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00265B44u) [[unlikely]] return; }
L_00265B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B5Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00265B5Cu) [[unlikely]] return; }
L_00265B5C:
    c.budget -= 1;
L_00265B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00265B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 1u);  if (t) { goto L_00265BA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 712u), c.r[3].w[0]);  if (t) { goto L_00265BD8; } }
    c.budget -= 1;
L_00265BA8:
    c.f[1] = ld32((c.r[4].w[0] + 8252u));
    c.f[0] = ld32((c.r[4].w[0] + 712u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[0]);  if (t) { goto L_00265BD8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8298u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8326u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00265BD4u) [[unlikely]] return; }
L_00265BD4:
    c.budget -= 1;
L_00265BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00265BF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00265C70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00265C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265F00; } }
L_00265C20:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 261u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 728u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C5Cu); st8((c.r[17].w[0] + 765u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_003B(c, 334u, depth + 1u); else { c.pc = 0x001EF960u; return; } if (c.pc != 0x00265C5Cu) [[unlikely]] return; }
L_00265C5C:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_00265F00; } }
L_00265C70:
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 728u), c.f[1]);  if (t) { goto L_00265F00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265CA4u); c.r[5].d[0] = ld16((c.r[17].w[0] + 858u));  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00265CA4u) [[unlikely]] return; }
L_00265CA4:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[7], c.r[7].w[0] + 29184u);
    set32(c.r[3], c.r[3].w[0] + 29188u);
    set32(c.r[2], c.r[2].w[0] + 29192u);
    set32(c.r[16], c.r[29].w[0] + 56u);
    set32(c.r[4], c.r[17].w[0] + 8592u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 7);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D24u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 230u, depth + 1u); else { c.pc = 0x001BA690u; return; } if (c.pc != 0x00265D24u) [[unlikely]] return; }
L_00265D24:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D34u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00265D34u) [[unlikely]] return; }
L_00265D34:
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D40u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00265D40u) [[unlikely]] return; }
L_00265D40:
    st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    st32((c.r[17].w[0] + 1264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1260u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00265D78; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 4;
L_00265D78:
    c.f[3] = ld32((c.r[17].w[0] + 1376u));
    c.f[2] = ld32((c.r[17].w[0] + 1380u));
    c.f[1] = ld32((c.r[17].w[0] + 1384u));
    c.f[0] = ld32((c.r[17].w[0] + 1388u));
    st32((c.r[17].w[0] + 1392u), c.f[3]);
    st32((c.r[17].w[0] + 1396u), c.f[2]);
    st32((c.r[17].w[0] + 1400u), c.f[1]);
    st32((c.r[17].w[0] + 1404u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 1392u));
    c.f[2] = ld32((c.r[17].w[0] + 1396u));
    c.f[1] = ld32((c.r[17].w[0] + 1400u));
    c.f[0] = ld32((c.r[17].w[0] + 1404u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    st32((c.r[17].w[0] + 1436u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_00265DCC; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_00265DCC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 9u);
    st16((c.r[17].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 1256u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265DECu); st32((c.r[17].w[0] + 1268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x00265DECu) [[unlikely]] return; }
L_00265DEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 728u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 732u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 736u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E5Cu); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00265E5Cu) [[unlikely]] return; }
L_00265E5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E68u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x00265E68u) [[unlikely]] return; }
L_00265E68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E74u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00265E74u) [[unlikely]] return; }
L_00265E74:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00265EA0; } }
    set32(c.r[4], 0u + 2048u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[17].w[0] + 276u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00265F00; } }
L_00265EA0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00265EC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], 0u + 48u);
    st32((c.r[17].w[0] + 276u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00265F00; } }
    c.budget -= 1;
L_00265EC8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00265EF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u + 32u);
    st32((c.r[17].w[0] + 276u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00265F00; } }
    c.budget -= 1;
L_00265EF0:
    set32(c.r[3], 0u + 16384u);
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00265F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00265F20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 710u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00266088; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_00266088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F58u); set32(c.r[5], c.r[17].w[0] + 1312u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00265F58u) [[unlikely]] return; }
L_00265F58:
    c.f[1] = ld32((c.r[17].w[0] + 1224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00265F88; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], 0u + 15360u);  if (t) { goto L_00265F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265FE0; } }
L_00265F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - 15360u);  if (t) { goto L_00265FE0; } }
L_00265F88:
    c.f[1] = ld32((c.r[17].w[0] + 1228u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00265FC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1232u)));  if (t) { goto L_00265FE0; } }
L_00265FB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1232u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - c.r[2].w[0]);  if (t) { goto L_00265FE0; } }
    c.budget -= 1;
L_00265FC0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1234u)));  if (t) { goto L_00265FE0; } }
L_00265FD8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1234u)));
    set32(c.r[18], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_00265FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FE8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00265FE8u) [[unlikely]] return; }
L_00265FE8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266010u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x00266010u) [[unlikely]] return; }
L_00266010:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] + 29200u);
    set32(c.r[3], c.r[3].w[0] + 29204u);
    set32(c.r[2], c.r[2].w[0] + 29208u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1392u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266088u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00266088u) [[unlikely]] return; }
L_00266088:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266094u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00266094u) [[unlikely]] return; }
L_00266094:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002660B8; } }
    st32((c.r[17].w[0] + 108u), c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_002660B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00266118; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002660D4; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002660D4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 18624u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_00266148; } }
    c.budget -= 1;
L_00266118:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[17].w[0] + 1392u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266144u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00266144u) [[unlikely]] return; }
L_00266144:
    c.budget -= 1;
L_00266148:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026616Cu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026616Cu) [[unlikely]] return; }
L_0026616C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));
    set32(c.r[2], c.r[2].w[0] << 14);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026617Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0026617Cu) [[unlikely]] return; }
L_0026617C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266188u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00266188u) [[unlikely]] return; }
L_00266188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661A0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x002661A0u) [[unlikely]] return; }
L_002661A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002661C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00266238; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661F0u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x002661F0u) [[unlikely]] return; }
L_002661F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266238; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266228u); set32(c.r[6], c.r[2].w[0] + 11u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00266228u) [[unlikely]] return; }
L_00266228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266238; } }
L_00266230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266238u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00266238u) [[unlikely]] return; }
L_00266238:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00266250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266250u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00266250u) [[unlikely]] return; }
L_00266250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002664A0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266288u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00266288u) [[unlikely]] return; }
L_00266288:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00266478; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266428; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002663B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002662F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002662C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266488; } }
    c.budget -= 1;
L_002662C8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002662F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002662F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002662F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x002662F8u) [[unlikely]] return; }
L_002662F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266488; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266330; } }
    set32(c.r[3], 0u + 4096u);
    set32(c.r[2], 0u + 16u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266390; } }
L_00266330:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00266358; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], 0u + 48u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266390; } }
    c.budget -= 1;
L_00266358:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00266380; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], 0u + 32u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266390; } }
    c.budget -= 1;
L_00266380:
    c.r[2].d[0] = 0ull | 32768ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00266390:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663B4u); set32(c.r[6], c.r[2].w[0] + 11u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002663B4u) [[unlikely]] return; }
L_002663B4:
    c.budget -= 1;
L_002663B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x002663C0u) [[unlikely]] return; }
L_002663C0:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00266488; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00266488; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266488; } }
    c.budget -= 1;
L_00266428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266430u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00266430u) [[unlikely]] return; }
L_00266430:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 732u), c.f[1]);  if (t) { goto L_00266468; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266488; } }
    c.budget -= 1;
L_00266468:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00266478:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266484u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x00266484u) [[unlikely]] return; }
L_00266484:
    c.budget -= 1;
L_00266488:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266494u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 148u, depth + 1u); else { c.pc = 0x00265F20u; return; } if (c.pc != 0x00266494u) [[unlikely]] return; }
L_00266494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002666A0; } }
    c.budget -= 1;
L_002664A0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664ACu); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x002664ACu) [[unlikely]] return; }
L_002664AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00266680; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266638; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002665D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266510; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002664E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266690; } }
L_002664E8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266510; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00266510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266518u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00266518u) [[unlikely]] return; }
L_00266518:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 736u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 736u), c.f[1]);  if (t) { goto L_00266690; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266568; } }
    set32(c.r[3], 0u + 4096u);
    set32(c.r[2], 0u + 16u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266690; } }
L_00266568:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00266590; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], 0u + 48u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266690; } }
    c.budget -= 1;
L_00266590:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002665B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], 0u + 32u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266690; } }
    c.budget -= 1;
L_002665B8:
    c.r[2].d[0] = 0ull | 32768ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00266690; } }
    c.budget -= 1;
L_002665D0:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00266690; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00266690; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266690; } }
    c.budget -= 1;
L_00266638:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 732u), c.f[1]);  if (t) { goto L_00266670; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266690; } }
    c.budget -= 1;
L_00266670:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00266680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026668Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0026668Cu) [[unlikely]] return; }
L_0026668C:
    c.budget -= 1;
L_00266690:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026669Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 148u, depth + 1u); else { c.pc = 0x00265F20u; return; } if (c.pc != 0x0026669Cu) [[unlikely]] return; }
L_0026669C:
    c.budget -= 1;
L_002666A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002666B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00266780; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00266770; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00266730; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002666F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266778; } }
    c.budget -= 1;
L_002666F8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266708u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x00266708u) [[unlikely]] return; }
L_00266708:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026672Cu); set32(c.r[6], c.r[6].w[0] + 15u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x0026672Cu) [[unlikely]] return; }
L_0026672C:
    c.budget -= 1;
L_00266730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266738u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00266738u) [[unlikely]] return; }
L_00266738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266778; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026676Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x0026676Cu) [[unlikely]] return; }
L_0026676C:
    c.budget -= 1;
L_00266770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266778u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00266778u) [[unlikely]] return; }
L_00266778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002667E8; } }
L_00266780:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002667E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002667A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002667E8; } }
L_002667A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667A8u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x002667A8u) [[unlikely]] return; }
L_002667A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002667E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002667DCu) [[unlikely]] return; }
L_002667DC:
    c.budget -= 1;
L_002667E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x002667E8u) [[unlikely]] return; }
L_002667E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 3u);  if (t) { goto L_00266A18; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002669C8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00266970; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002668E8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00266858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A28; } }
    c.budget -= 1;
L_00266858:
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266868u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x00266868u) [[unlikely]] return; }
L_00266868:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002668DCu); set32(c.r[6], c.r[2].w[0] + 15u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002668DCu) [[unlikely]] return; }
L_002668DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A28; } }
    c.budget -= 1;
L_002668E8:
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266918; } }
    set32(c.r[2], 0u + 8192u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00266970; } }
    c.budget -= 1;
L_00266918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00266938; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], 0u + 32u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266970; } }
L_00266938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (t) { goto L_00266958; } }
    set32(c.r[2], 0u + 48u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266970; } }
    c.budget -= 1;
L_00266958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00266970:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266990u); st32((c.r[16].w[0] + 728u), c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00266990u) [[unlikely]] return; }
L_00266990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266A28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002669C4u) [[unlikely]] return; }
L_002669C4:
    c.budget -= 1;
L_002669C8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x002669D8u) [[unlikely]] return; }
L_002669D8:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00266A28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266A28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00266A18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00266A24u) [[unlikely]] return; }
L_00266A24:
    c.budget -= 1;
L_00266A28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0059(c, 148u, depth + 1u); else { c.pc = 0x00265F20u; return; } if (c.pc != 0x00266A34u) [[unlikely]] return; }
L_00266A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266C38; } }
    c.budget -= 1;
L_00266A40:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 3u);  if (t) { goto L_00266C18; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00266BC8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00266B70; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00266AE8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00266A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266C28; } }
L_00266A78:
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A88u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x00266A88u) [[unlikely]] return; }
L_00266A88:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_00266C28; } }
L_00266AE8:
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266B18; } }
    set32(c.r[2], 0u + 8192u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00266B70; } }
    c.budget -= 1;
L_00266B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00266B38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], 0u + 32u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266B70; } }
L_00266B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (t) { goto L_00266B58; } }
    set32(c.r[2], 0u + 48u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266B70; } }
    c.budget -= 1;
L_00266B58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00266B70:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B90u); st32((c.r[16].w[0] + 728u), c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00266B90u) [[unlikely]] return; }
L_00266B90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266C28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266BC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00266BC4u) [[unlikely]] return; }
L_00266BC4:
    c.budget -= 1;
L_00266BC8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266BD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00266BD8u) [[unlikely]] return; }
L_00266BD8:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00266C28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266C28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00266C18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00266C24u) [[unlikely]] return; }
L_00266C24:
    c.budget -= 1;
L_00266C28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0059(c, 148u, depth + 1u); else { c.pc = 0x00265F20u; return; } if (c.pc != 0x00266C34u) [[unlikely]] return; }
L_00266C34:
    c.budget -= 1;
L_00266C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00266CF8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));  if (t) { goto L_00266C84; } }
    set32(c.r[2], c.r[2].w[0] + 8191u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_00266C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 18608u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00266CA8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00266CC4; } }
L_00266CA8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00266CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 712u), c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CF0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00266CF0u) [[unlikely]] return; }
L_00266CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266D00; } }
L_00266CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266D00u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00266D00u) [[unlikely]] return; }
L_00266D00:
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 712u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266D40u); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00266D40u) [[unlikely]] return; }
L_00266D40:
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00266E70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266EF0; } }
L_00266D68:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266DB4u); c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00266DB4u) [[unlikely]] return; }
L_00266DB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));  if (t) { goto L_00266DC8; } }
    set32(c.r[2], c.r[2].w[0] + 8191u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_00266DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 18608u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00266DEC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00266E08; } }
L_00266DEC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00266E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E34u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00266E34u) [[unlikely]] return; }
L_00266E34:
    c.f[1] = ld32((c.r[16].w[0] + 1260u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    set32(c.r[2], 0u + 16u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[16].w[0] + 862u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266EF0; } }
    c.budget -= 1;
L_00266E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00266E78u) [[unlikely]] return; }
L_00266E78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E84u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00266E84u) [[unlikely]] return; }
L_00266E84:
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[3] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[0]);  if (t) { goto L_00266EF0; } }
    c.f[0] = ld32((c.r[16].w[0] + 1044u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1048u));
    c.f[1] = ld32((c.r[16].w[0] + 1044u));
    c.f[0] = ld32((c.r[16].w[0] + 1052u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    c.f[3] = ld32((c.r[16].w[0] + 1376u));
    c.f[2] = ld32((c.r[16].w[0] + 1380u));
    c.f[1] = ld32((c.r[16].w[0] + 1384u));
    c.f[0] = ld32((c.r[16].w[0] + 1388u));
    st32((c.r[16].w[0] + 1392u), c.f[3]);
    st32((c.r[16].w[0] + 1396u), c.f[2]);
    st32((c.r[16].w[0] + 1400u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EF0u); st32((c.r[16].w[0] + 1404u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x00266EF0u) [[unlikely]] return; }
L_00266EF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 862u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F1Cu); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00269DD0u; return; } if (c.pc != 0x00266F1Cu) [[unlikely]] return; }
L_00266F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00267008; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + 18000u);
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F7Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00266F7Cu) [[unlikely]] return; }
L_00266F7C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_00266F98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00267010; } }
    c.budget -= 1;
L_00266F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 19440u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + 4608u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FB4u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00266FB4u) [[unlikely]] return; }
L_00266FB4:
    set32(c.r[4], c.r[16].w[0] + 4672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FC0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00266FC0u) [[unlikely]] return; }
L_00266FC0:
    set32(c.r[4], c.r[16].w[0] + 4624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FCCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00266FCCu) [[unlikely]] return; }
L_00266FCC:
    set32(c.r[4], c.r[16].w[0] + 4688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FD8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00266FD8u) [[unlikely]] return; }
L_00266FD8:
    set32(c.r[4], c.r[16].w[0] + 4640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FE4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00266FE4u) [[unlikely]] return; }
L_00266FE4:
    set32(c.r[4], c.r[16].w[0] + 4704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FF0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00266FF0u) [[unlikely]] return; }
L_00266FF0:
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00267010; } }
    c.budget -= 1;
L_00267008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267010u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00267010u) [[unlikely]] return; }
L_00267010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267048u); st8((c.r[4].w[0] + 793u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00267048u) [[unlikely]] return; }
L_00267048:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00267120; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002670D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00267070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267128; } }
L_00267070:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], 0u + 16u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.f[0] = ld32((c.r[16].w[0] + 1052u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 18000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 728u), c.f[0]);
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 276u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002670D0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002670D0u) [[unlikely]] return; }
L_002670D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002670D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x002670D8u) [[unlikely]] return; }
L_002670D8:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00267128; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_00267128; } }
    c.budget -= 1;
L_00267120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00267128u) [[unlikely]] return; }
L_00267128:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00267134u) [[unlikely]] return; }
L_00267134:
    set32(c.r[2], ld32((c.r[16].w[0] + 1036u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1376u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267150u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x00267150u) [[unlikely]] return; }
L_00267150:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026715Cu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026715Cu) [[unlikely]] return; }
L_0026715C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267188u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00267188u) [[unlikely]] return; }
L_00267188:
    set32(c.r[2], c.r[29].w[0] + 36u);
    st32((c.r[2].w[0]), 0u);
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267210; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002671DCu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002671DCu) [[unlikely]] return; }
L_002671DC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002671E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002671E8u) [[unlikely]] return; }
L_002671E8:
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 1392u), c.f[3]);
    st32((c.r[16].w[0] + 1396u), c.f[2]);
    st32((c.r[16].w[0] + 1400u), c.f[1]);
    st32((c.r[16].w[0] + 1404u), c.f[0]);
    c.budget -= 10;
L_00267210:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026721Cu); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x0026721Cu) [[unlikely]] return; }
L_0026721C:
    c.f[2] = ld32((c.r[16].w[0] + 1048u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267250; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_00267278; } }
L_00267250:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  if (t) { goto L_00267278; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 4;
L_00267278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002674B8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00267460; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002673A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002672D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002674C0; } }
L_002672D0:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_002672F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002672F8; } }
L_002672F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00267300; } }
L_002672F8:
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00267300:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], c.r[3].w[0] + 18004u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 716u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00267370; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00267370; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267364u); set32(c.r[7], 0u + 13u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00267364u) [[unlikely]] return; }
L_00267364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002674C0; } }
    c.budget -= 1;
L_00267370:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 18001u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673A0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002673A0u) [[unlikely]] return; }
L_002673A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002674C0; } }
L_002673A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673B0u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x002673B0u) [[unlikely]] return; }
L_002673B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267440; } }
    c.f[1] = ld32((c.r[16].w[0] + 8264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 19456u);
    set32(c.r[4], c.r[16].w[0] + 4608u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673F4u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002673F4u) [[unlikely]] return; }
L_002673F4:
    set32(c.r[4], c.r[16].w[0] + 4672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267400u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00267400u) [[unlikely]] return; }
L_00267400:
    set32(c.r[4], c.r[16].w[0] + 4624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026740Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026740Cu) [[unlikely]] return; }
L_0026740C:
    set32(c.r[4], c.r[16].w[0] + 4688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267418u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00267418u) [[unlikely]] return; }
L_00267418:
    set32(c.r[4], c.r[16].w[0] + 4640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267424u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00267424u) [[unlikely]] return; }
L_00267424:
    set32(c.r[4], c.r[16].w[0] + 4704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267430u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00267430u) [[unlikely]] return; }
L_00267430:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00267440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002674C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002674C0; } }
    c.budget -= 1;
L_00267460:
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 716u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 716u), c.f[0]);  if (t) { goto L_002674C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 18002u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x002674B0u) [[unlikely]] return; }
L_002674B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002674C0; } }
L_002674B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674C0u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x002674C0u) [[unlikely]] return; }
L_002674C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002674D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00267778; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 18640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00264000u < 16384u) { entry = entries_0059[(t - 0x00264000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00267508:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[6], c.r[6].w[0] + 18003u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 18004u);
    st32((c.r[16].w[0] + 280u), 0u);
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], 0u + 11u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 47;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002675F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002675F0; } }
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675E8u); set32(c.r[7], 0u + 13u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002675E8u) [[unlikely]] return; }
L_002675E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267778; } }
L_002675F0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 18001u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267620u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00267620u) [[unlikely]] return; }
L_00267620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267778; } }
L_00267628:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267644u); st32((c.r[16].w[0] + 728u), c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00267644u) [[unlikely]] return; }
L_00267644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267778; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00267778; } }
    c.budget -= 1;
L_00267660:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 728u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 732u), c.f[1]);  if (t) { goto L_00267778; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002676A8u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x002676A8u) [[unlikely]] return; }
L_002676A8:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 18002u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002676D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x002676D8u) [[unlikely]] return; }
L_002676D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267778; } }
L_002676E0:
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002676F4u); st32((c.r[16].w[0] + 728u), c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x002676F4u) [[unlikely]] return; }
L_002676F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267778; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00267778; } }
    c.budget -= 1;
L_00267710:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00267778; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u - 73u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 14;
L_00267768:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00267774u) [[unlikely]] return; }
L_00267774:
    c.budget -= 1;
L_00267778:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 793u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267790; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00267790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026779Cu); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x0026779Cu) [[unlikely]] return; }
L_0026779C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002677C0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_002677C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002677D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00264DF0u | kUnwind; return; } goto L_00264DF0; }
L_002677E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267824u); set32(c.r[16], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00267824u) [[unlikely]] return; }
L_00267824:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_00267950; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00267930; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00267850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002679A8; } }
    c.budget -= 1;
L_00267850:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u - 453u);
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 802u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 16u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 18u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002678C0; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x002678B4u) [[unlikely]] return; }
L_002678B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002678D0; } }
    c.budget -= 1;
L_002678C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678D0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x002678D0u) [[unlikely]] return; }
L_002678D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 139u, depth + 1u); else { c.pc = 0x00269800u; return; } if (c.pc != 0x002678D8u) [[unlikely]] return; }
L_002678D8:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 18254u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267924u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00267924u) [[unlikely]] return; }
L_00267924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002679A8; } }
    c.budget -= 1;
L_00267930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00267938u) [[unlikely]] return; }
L_00267938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002679A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00267950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 1408u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 1412u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026797Cu); st32((c.r[17].w[0] + 1416u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0026797Cu) [[unlikely]] return; }
L_0026797C:
    c.f[3] = ld32((c.r[17].w[0] + 1408u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 1412u));
    set32(c.r[5], 0u + 14u);
    c.f[1] = ld32((c.r[17].w[0] + 1416u));
    c.f[0] = ld32((c.r[17].w[0] + 1420u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679A8u); st32((c.r[17].w[0] + 1436u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x002679A8u) [[unlikely]] return; }
L_002679A8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 11264ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679BCu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x002679BCu) [[unlikely]] return; }
L_002679BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002679F0; } }
    c.f[3] = ld32((c.r[17].w[0] + 1376u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[17].w[0] + 1380u));
    c.f[1] = ld32((c.r[17].w[0] + 1384u));
    c.f[0] = ld32((c.r[17].w[0] + 1388u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_00267A08; } }
    c.budget -= 1;
L_002679F0:
    c.f[0] = ld32((c.r[17].w[0] + 8624u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8628u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8632u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_00267A08:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A38u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00267A38u) [[unlikely]] return; }
L_00267A38:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A58u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00267A58u) [[unlikely]] return; }
L_00267A58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A64u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x00267A64u) [[unlikely]] return; }
L_00267A64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00267A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_00267AD0; } }
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 18253u);
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267AC8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00267AC8u) [[unlikely]] return; }
L_00267AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267AD8; } }
L_00267AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267AD8u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00267AD8u) [[unlikely]] return; }
L_00267AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00267AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B34u); set32(c.r[16], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00267B34u) [[unlikely]] return; }
L_00267B34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267C40; } }
L_00267B48:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[17].w[0] + 1076u));
    set32(c.r[2], 0u + 7u);
    st32((c.r[17].w[0] + 728u), c.f[1]);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00267B88; } }
    c.budget -= 1;
L_00267B80:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00267B88:
    set32(c.r[2], 0u + 32u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    c.f[12] = 0u;
    st32((c.r[17].w[0] + 280u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18253u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BCCu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00267BCCu) [[unlikely]] return; }
L_00267BCC:
    set32(c.r[4], c.r[17].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BD8u); set32(c.r[5], c.r[17].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00267BD8u) [[unlikely]] return; }
L_00267BD8:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00267BE4u) [[unlikely]] return; }
L_00267BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267C28; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BF8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00267BF8u) [[unlikely]] return; }
L_00267BF8:
    c.f[2] = ld32((c.r[17].w[0] + 1000u));
    c.f[1] = ld32((c.r[17].w[0] + 1156u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C18u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00267C18u) [[unlikely]] return; }
L_00267C18:
    c.f[1] = ld32((c.r[17].w[0] + 1000u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_00267C38; } }
L_00267C28:
    st32((c.r[17].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1000u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00267C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_00267C48; } }
L_00267C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00267C48u) [[unlikely]] return; }
L_00267C48:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 11264ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C5Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00267C5Cu) [[unlikely]] return; }
L_00267C5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267DE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C70u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00267C70u) [[unlikely]] return; }
L_00267C70:
    c.f[3] = ld32((c.r[17].w[0] + 1004u));
    c.f[2] = ld32((c.r[17].w[0] + 1156u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C98u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00267C98u) [[unlikely]] return; }
L_00267C98:
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1080u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267CC8; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_00267CC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1392u);
    set32(c.r[6], c.r[17].w[0] + 1376u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267CE8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 224u, depth + 1u); else { c.pc = 0x0026A3F0u; return; } if (c.pc != 0x00267CE8u) [[unlikely]] return; }
L_00267CE8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267DA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D3Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00267D3Cu) [[unlikely]] return; }
L_00267D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D50u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00267D50u) [[unlikely]] return; }
L_00267D50:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D5Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00267D5Cu) [[unlikely]] return; }
L_00267D5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D78u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00267D78u) [[unlikely]] return; }
L_00267D78:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1436u), c.f[0]);  if (t) { goto L_00267E48; } }
L_00267DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DB4u); set32(c.r[5], c.r[17].w[0] + 1376u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00267DB4u) [[unlikely]] return; }
L_00267DB4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DC0u); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00267DC0u) [[unlikely]] return; }
L_00267DC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DDCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00267DDCu) [[unlikely]] return; }
L_00267DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267E48; } }
    c.budget -= 1;
L_00267DE8:
    c.f[2] = ld32((c.r[17].w[0] + 1008u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00267E28; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_00267E28:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E44u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00267E44u) [[unlikely]] return; }
L_00267E44:
    c.budget -= 1;
L_00267E48:
    c.f[1] = ld32((c.r[17].w[0] + 1084u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267E60; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00267E60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E70u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00267E70u) [[unlikely]] return; }
L_00267E70:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E80u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00267E80u) [[unlikely]] return; }
L_00267E80:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267F00; } }
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EACu); set32(c.r[6], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 131u, depth + 1u); else { c.pc = 0x00269670u; return; } if (c.pc != 0x00267EACu) [[unlikely]] return; }
L_00267EAC:
    c.f[0] = ld32((c.r[17].w[0] + 8608u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8612u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8616u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EE0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00267EE0u) [[unlikely]] return; }
L_00267EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EF8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00267EF8u) [[unlikely]] return; }
L_00267EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267F50; } }
L_00267F00:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 8608u));
    set32(c.r[5], c.r[17].w[0] + 1408u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8612u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8616u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F34u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00267F34u) [[unlikely]] return; }
L_00267F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F4Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00267F4Cu) [[unlikely]] return; }
L_00267F4C:
    c.budget -= 1;
L_00267F50:
    c.f[2] = ld32((c.r[17].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267F98; } }
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 728u), c.f[1]);  if (t) { goto L_00267F90; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00267F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267F98; } }
L_00267F98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00267FB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00265690u | kUnwind; return; } goto L_00265690; }
L_00267FC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002657B0u | kUnwind; return; } goto L_002657B0; }
L_00267FD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00267FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 11u, depth); } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
    [[clang::musttail]] return unit_005A(c, 1u, depth);
}

}
