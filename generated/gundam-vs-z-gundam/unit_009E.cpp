#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75,
    0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0,
    248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0,
    253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 0,
};

void unit_009E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00378000;
    case 2u: goto L_0037801C;
    case 3u: goto L_00378050;
    case 4u: goto L_003780A4;
    case 5u: goto L_003780C0;
    case 6u: goto L_00378100;
    case 7u: goto L_0037812C;
    case 8u: goto L_00378150;
    case 9u: goto L_00378170;
    case 10u: goto L_00378198;
    case 11u: goto L_003781B0;
    case 12u: goto L_00378330;
    case 13u: goto L_00378384;
    case 14u: goto L_0037839C;
    case 15u: goto L_003783F4;
    case 16u: goto L_00378404;
    case 17u: goto L_00378438;
    case 18u: goto L_00378448;
    case 19u: goto L_003784E4;
    case 20u: goto L_00378514;
    case 21u: goto L_00378540;
    case 22u: goto L_0037858C;
    case 23u: goto L_003786B8;
    case 24u: goto L_003786D0;
    case 25u: goto L_003786F0;
    case 26u: goto L_00378718;
    case 27u: goto L_00378730;
    case 28u: goto L_003787A0;
    case 29u: goto L_00378850;
    case 30u: goto L_00378874;
    case 31u: goto L_00378888;
    case 32u: goto L_003788A0;
    case 33u: goto L_003788EC;
    case 34u: goto L_00378980;
    case 35u: goto L_003789CC;
    case 36u: goto L_00378A60;
    case 37u: goto L_00378A98;
    case 38u: goto L_00378B40;
    case 39u: goto L_00378B74;
    case 40u: goto L_00378B84;
    case 41u: goto L_00378BA0;
    case 42u: goto L_00378BD4;
    case 43u: goto L_00378BE4;
    case 44u: goto L_00378C00;
    case 45u: goto L_00378C5C;
    case 46u: goto L_00378CC0;
    case 47u: goto L_00378CE0;
    case 48u: goto L_00378D3C;
    case 49u: goto L_00378DA0;
    case 50u: goto L_00378DC0;
    case 51u: goto L_00378E1C;
    case 52u: goto L_00378E80;
    case 53u: goto L_00378EA0;
    case 54u: goto L_00378EF4;
    case 55u: goto L_00378F60;
    case 56u: goto L_00378FB4;
    case 57u: goto L_00379020;
    case 58u: goto L_00379030;
    case 59u: goto L_00379070;
    case 60u: goto L_00379090;
    case 61u: goto L_003790A4;
    case 62u: goto L_003790B4;
    case 63u: goto L_00379210;
    case 64u: goto L_00379230;
    case 65u: goto L_00379258;
    case 66u: goto L_003792A0;
    case 67u: goto L_003792A8;
    case 68u: goto L_003792C0;
    case 69u: goto L_003792E0;
    case 70u: goto L_003792F8;
    case 71u: goto L_003794B8;
    case 72u: goto L_003794C0;
    case 73u: goto L_003794E4;
    case 74u: goto L_003794EC;
    case 75u: goto L_003794FC;
    case 76u: goto L_0037950C;
    case 77u: goto L_00379514;
    case 78u: goto L_003795A4;
    case 79u: goto L_003795AC;
    case 80u: goto L_003795F4;
    case 81u: goto L_00379610;
    case 82u: goto L_00379618;
    case 83u: goto L_0037963C;
    case 84u: goto L_00379644;
    case 85u: goto L_00379650;
    case 86u: goto L_003796E0;
    case 87u: goto L_003796E8;
    case 88u: goto L_00379730;
    case 89u: goto L_00379748;
    case 90u: goto L_00379750;
    case 91u: goto L_00379774;
    case 92u: goto L_0037977C;
    case 93u: goto L_00379788;
    case 94u: goto L_0037981C;
    case 95u: goto L_00379824;
    case 96u: goto L_00379870;
    case 97u: goto L_00379888;
    case 98u: goto L_00379890;
    case 99u: goto L_003798B4;
    case 100u: goto L_003798BC;
    case 101u: goto L_003798C8;
    case 102u: goto L_0037995C;
    case 103u: goto L_00379964;
    case 104u: goto L_003799B0;
    case 105u: goto L_003799C8;
    case 106u: goto L_003799D0;
    case 107u: goto L_003799F4;
    case 108u: goto L_003799FC;
    case 109u: goto L_00379A08;
    case 110u: goto L_00379A9C;
    case 111u: goto L_00379AA4;
    case 112u: goto L_00379AF0;
    case 113u: goto L_00379B00;
    case 114u: goto L_00379B78;
    case 115u: goto L_00379B84;
    case 116u: goto L_00379C00;
    case 117u: goto L_00379C10;
    case 118u: goto L_00379C88;
    case 119u: goto L_00379C98;
    case 120u: goto L_00379CAC;
    case 121u: goto L_00379CB8;
    case 122u: goto L_00379D1C;
    case 123u: goto L_00379D68;
    case 124u: goto L_00379D70;
    case 125u: goto L_00379D88;
    case 126u: goto L_00379DA8;
    case 127u: goto L_00379DC0;
    case 128u: goto L_00379E08;
    case 129u: goto L_00379E10;
    case 130u: goto L_00379E28;
    case 131u: goto L_00379E48;
    case 132u: goto L_00379E60;
    case 133u: goto L_00379E80;
    case 134u: goto L_00379E88;
    case 135u: goto L_00379EA0;
    case 136u: goto L_00379EC0;
    case 137u: goto L_00379ED8;
    case 138u: goto L_00379EEC;
    case 139u: goto L_00379EF4;
    case 140u: goto L_00379F18;
    case 141u: goto L_00379F28;
    case 142u: goto L_00379FA4;
    case 143u: goto L_00379FB8;
    case 144u: goto L_0037A030;
    case 145u: goto L_0037A03C;
    case 146u: goto L_0037A04C;
    case 147u: goto L_0037A064;
    case 148u: goto L_0037A0BC;
    case 149u: goto L_0037A0D0;
    case 150u: goto L_0037A138;
    case 151u: goto L_0037A144;
    case 152u: goto L_0037A1AC;
    case 153u: goto L_0037A1E0;
    case 154u: goto L_0037A278;
    case 155u: goto L_0037A2C0;
    case 156u: goto L_0037A2E0;
    case 157u: goto L_0037A2F4;
    case 158u: goto L_0037A304;
    case 159u: goto L_0037A4A0;
    case 160u: goto L_0037A4B4;
    case 161u: goto L_0037A4F0;
    case 162u: goto L_0037A4F8;
    case 163u: goto L_0037A504;
    case 164u: goto L_0037A550;
    case 165u: goto L_0037A570;
    case 166u: goto L_0037A598;
    case 167u: goto L_0037A5B0;
    case 168u: goto L_0037A5D0;
    case 169u: goto L_0037A5E4;
    case 170u: goto L_0037A5F4;
    case 171u: goto L_0037A710;
    case 172u: goto L_0037A730;
    case 173u: goto L_0037A784;
    case 174u: goto L_0037A800;
    case 175u: goto L_0037A824;
    case 176u: goto L_0037A838;
    case 177u: goto L_0037A850;
    case 178u: goto L_0037A870;
    case 179u: goto L_0037A884;
    case 180u: goto L_0037A90C;
    case 181u: goto L_0037A91C;
    case 182u: goto L_0037A924;
    case 183u: goto L_0037A950;
    case 184u: goto L_0037A974;
    case 185u: goto L_0037A99C;
    case 186u: goto L_0037A9CC;
    case 187u: goto L_0037A9F0;
    case 188u: goto L_0037AA10;
    case 189u: goto L_0037AA24;
    case 190u: goto L_0037AA34;
    case 191u: goto L_0037ABE0;
    case 192u: goto L_0037AC00;
    case 193u: goto L_0037AC14;
    case 194u: goto L_0037AC24;
    case 195u: goto L_0037AD90;
    case 196u: goto L_0037ADE0;
    case 197u: goto L_0037ADFC;
    case 198u: goto L_0037AE1C;
    case 199u: goto L_0037AE8C;
    case 200u: goto L_0037AE94;
    case 201u: goto L_0037AEE0;
    case 202u: goto L_0037AEFC;
    case 203u: goto L_0037AF20;
    case 204u: goto L_0037AF48;
    case 205u: goto L_0037AF60;
    case 206u: goto L_0037AF7C;
    case 207u: goto L_0037AF9C;
    case 208u: goto L_0037AFC0;
    case 209u: goto L_0037AFDC;
    case 210u: goto L_0037AFFC;
    case 211u: goto L_0037B018;
    case 212u: goto L_0037B030;
    case 213u: goto L_0037B04C;
    case 214u: goto L_0037B06C;
    case 215u: goto L_0037B090;
    case 216u: goto L_0037B130;
    case 217u: goto L_0037B140;
    case 218u: goto L_0037B168;
    case 219u: goto L_0037B1B0;
    case 220u: goto L_0037B1B8;
    case 221u: goto L_0037B1E8;
    case 222u: goto L_0037B208;
    case 223u: goto L_0037B238;
    case 224u: goto L_0037B300;
    case 225u: goto L_0037B384;
    case 226u: goto L_0037B398;
    case 227u: goto L_0037B41C;
    case 228u: goto L_0037B428;
    case 229u: goto L_0037B4AC;
    case 230u: goto L_0037B4C0;
    case 231u: goto L_0037B544;
    case 232u: goto L_0037B554;
    case 233u: goto L_0037B568;
    case 234u: goto L_0037B574;
    case 235u: goto L_0037B5E8;
    case 236u: goto L_0037B600;
    case 237u: goto L_0037B6FC;
    case 238u: goto L_0037B704;
    case 239u: goto L_0037B718;
    case 240u: goto L_0037B720;
    case 241u: goto L_0037B748;
    case 242u: goto L_0037B76C;
    case 243u: goto L_0037B788;
    case 244u: goto L_0037B7B8;
    case 245u: goto L_0037B7D0;
    case 246u: goto L_0037B7E8;
    case 247u: goto L_0037B7F8;
    case 248u: goto L_0037B800;
    case 249u: goto L_0037B808;
    case 250u: goto L_0037B858;
    case 251u: goto L_0037B868;
    case 252u: goto L_0037B878;
    case 253u: goto L_0037B880;
    case 254u: goto L_0037B888;
    case 255u: goto L_0037B8B0;
    case 256u: goto L_0037B8D8;
    case 257u: goto L_0037B8E0;
    case 258u: goto L_0037B95C;
    case 259u: goto L_0037B970;
    case 260u: goto L_0037B9A8;
    case 261u: goto L_0037B9B0;
    case 262u: goto L_0037B9B8;
    case 263u: goto L_0037B9C4;
    case 264u: goto L_0037B9F0;
    case 265u: goto L_0037B9F8;
    case 266u: goto L_0037BA00;
    case 267u: goto L_0037BA38;
    case 268u: goto L_0037BA90;
    case 269u: goto L_0037BA98;
    case 270u: goto L_0037BAA0;
    case 271u: goto L_0037BAC0;
    case 272u: goto L_0037BAC8;
    case 273u: goto L_0037BAD0;
    case 274u: goto L_0037BAE0;
    case 275u: goto L_0037BAF0;
    case 276u: goto L_0037BB00;
    case 277u: goto L_0037BB08;
    case 278u: goto L_0037BB14;
    case 279u: goto L_0037BB9C;
    case 280u: goto L_0037BBB0;
    case 281u: goto L_0037BBD8;
    case 282u: goto L_0037BBE0;
    case 283u: goto L_0037BC5C;
    case 284u: goto L_0037BC84;
    case 285u: goto L_0037BC9C;
    case 286u: goto L_0037BCD8;
    case 287u: goto L_0037BD3C;
    case 288u: goto L_0037BD70;
    case 289u: goto L_0037BDC4;
    case 290u: goto L_0037BE38;
    case 291u: goto L_0037BE48;
    case 292u: goto L_0037BE58;
    case 293u: goto L_0037BE68;
    case 294u: goto L_0037BEB4;
    case 295u: goto L_0037BED0;
    case 296u: goto L_0037BF24;
    case 297u: goto L_0037BFC4;
    case 298u: goto L_0037BFD8;
    case 299u: goto L_0037BFE0;
    case 300u: goto L_0037BFE8;
    default: bad_entry(c, 0x00378000u); return;
    }
L_00378000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8880u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2589u));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0037803C; } }
L_0037801C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8720u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2589u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_0037803C:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003780B8; } }
    c.budget -= 1;
L_00378050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 3136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003780A4u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003780A4u) [[unlikely]] return; }
L_003780A4:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378050u | kUnwind; return; } goto L_00378050; } }
L_003780B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003780C0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003780C0u) [[unlikely]] return; }
L_003780C0:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B10000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[2].w[0] - 3072u);
    set32(c.r[16], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[14] = c.r[3].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378100u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00378100u) [[unlikely]] return; }
L_00378100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 3068u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[14] = c.r[3].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037812Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037812Cu) [[unlikely]] return; }
L_0037812C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00378150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2578u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378170u);  if (depth < kMaxDepth) unit_008D(c, 11u, depth + 1u); else { c.pc = 0x003340F0u; return; } if (c.pc != 0x00378170u) [[unlikely]] return; }
L_00378170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378198; } }
L_00378178:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378198u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378198u) [[unlikely]] return; }
L_00378198:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003781B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_00378278; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003781D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378318; } }
L_003781D0:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 26214ull;
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    set32(c.r[7], 0u + 8u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    st32((c.r[4].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15648u);
    set32(c.r[6], 0u + 15u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], 0u + 11u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[1] = c.r[3].w[0];
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 48u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 41;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { goto L_00378318; } }
    c.budget -= 1;
L_00378278:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003782C0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB90000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_00378318; } }
L_003782C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB90000u);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_00378318; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 8;
L_00378318:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00378330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00378390; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00378368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378518; } }
    c.budget -= 1;
L_00378368:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378384u); st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 340u, depth + 1u); else { c.pc = 0x00377F40u; return; } if (c.pc != 0x00378384u) [[unlikely]] return; }
L_00378384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378518; } }
    c.budget -= 1;
L_00378390:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037839Cu); c.r[4].d[0] = ld8((c.r[2].w[0] + 2584u));  if (depth < kMaxDepth) unit_009D(c, 342u, depth + 1u); else { c.pc = 0x00377FC0u; return; } if (c.pc != 0x0037839Cu) [[unlikely]] return; }
L_0037839C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003783CC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8880u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2589u));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003783EC; } }
L_003783CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8720u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2589u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_003783EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003783F4u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003783F4u) [[unlikely]] return; }
L_003783F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00378410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378404u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00378404u) [[unlikely]] return; }
L_00378404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378440; } }
    c.budget -= 1;
L_00378410:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378438u); st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00378438u) [[unlikely]] return; }
L_00378438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378518; } }
L_00378440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378448u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00378448u) [[unlikely]] return; }
L_00378448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003784F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003784A8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 8879u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2589u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2584u));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0] + 2580u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003784D8; } }
L_003784A8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 8719u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2589u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2584u));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st16((c.r[6].w[0] + 2580u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_003784D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003784E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003784E4u) [[unlikely]] return; }
L_003784E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00378518; } }
    c.budget -= 1;
L_003784F8:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378514u); set32(c.r[4], c.r[3].w[0] + 2584u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x00378514u) [[unlikely]] return; }
L_00378514:
    c.budget -= 1;
L_00378518:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00378688; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003785B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00378580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003786B8; } }
    c.budget -= 1;
L_00378580:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037858Cu); c.r[4].d[0] = ld8((c.r[2].w[0] + 2584u));  if (depth < kMaxDepth) unit_009D(c, 342u, depth + 1u); else { c.pc = 0x00377FC0u; return; } if (c.pc != 0x0037858Cu) [[unlikely]] return; }
L_0037858C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003786B8; } }
    set32(c.r[3], 0u + 15u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003786B8; } }
L_003785B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00378618; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3418u));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003786B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003786B8; } }
    c.budget -= 1;
L_00378618:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 116u), c.f[1]);  if (t) { goto L_003786B8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[4].d[0] = c.r[3].d[0] | 26214ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3418u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003786B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003786B8; } }
L_00378688:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2580u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003786A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2578u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003786B0; } }
L_003786A8:
    st8((c.r[4].w[0] + 2578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003786B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003786B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003786B8u) [[unlikely]] return; }
L_003786B8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003786D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2578u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003786F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003786F0u);  if (depth < kMaxDepth) unit_008D(c, 11u, depth + 1u); else { c.pc = 0x003340F0u; return; } if (c.pc != 0x003786F0u) [[unlikely]] return; }
L_003786F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378718; } }
L_003786F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8560u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378718u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378718u) [[unlikely]] return; }
L_00378718:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00378730:
    set32(c.r[3], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 15648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[5], 0u + 21u);
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    set32(c.r[3], 0u + 7u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003787A0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 185u);
    set32(c.r[3], 0u + 2u);
    c.r[7].d[0] = ld8((c.r[6].w[0] + 2584u));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3420u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_00378820; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[3], c.r[3].w[0] + 16288u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] + 9u));
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[8].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_00378848; } }
L_00378820:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2578u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00378848; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_00378848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_00378880; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378874u); st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00378874u) [[unlikely]] return; }
L_00378874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378888; } }
    c.budget -= 1;
L_00378880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378888u);  if (depth < kMaxDepth) unit_008D(c, 11u, depth + 1u); else { c.pc = 0x003340F0u; return; } if (c.pc != 0x00378888u) [[unlikely]] return; }
L_00378888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003788A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u + 255u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003788ECu); st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003788ECu) [[unlikely]] return; }
L_003788EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378968; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] - 28560u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[8], c.r[2].w[0] + 304u);  if (t) { goto L_00378958; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00378968; } }
    c.budget -= 1;
L_00378958:
    set32(c.r[4], ld32((c.r[28].w[0] - 22396u)));
    set32(c.r[3], 0u + 8u);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00378968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u + 255u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003789CCu); st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003789CCu) [[unlikely]] return; }
L_003789CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378A48; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] - 21536u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[8], c.r[2].w[0] + 304u);  if (t) { goto L_00378A38; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00378A48; } }
    c.budget -= 1;
L_00378A38:
    set32(c.r[4], ld32((c.r[28].w[0] - 22396u)));
    set32(c.r[3], 0u + 8u);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00378A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378A98u); st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00378A98u) [[unlikely]] return; }
L_00378A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378B28; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] - 23120u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[2].w[0] + 304u);  if (t) { goto L_00378B00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], 0u + 9u);
    set32(c.r[4], ld32((c.r[4].w[0] + 212u)));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00378B18; } }
L_00378B00:
    set32(c.r[5], ld32((c.r[28].w[0] - 22396u)));
    set32(c.r[4], 0u + 23u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00378B18:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    st32((c.r[2].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 4;
L_00378B28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00378B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 255u);
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B74u); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00378B74u) [[unlikely]] return; }
L_00378B74:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B84u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 36u, depth + 1u); else { c.pc = 0x00378A60u; return; } if (c.pc != 0x00378B84u) [[unlikely]] return; }
L_00378B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 255u);
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BD4u); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00378BD4u) [[unlikely]] return; }
L_00378BD4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BE4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 36u, depth + 1u); else { c.pc = 0x00378A60u; return; } if (c.pc != 0x00378BE4u) [[unlikely]] return; }
L_00378BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[8], 0u + 255u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C5Cu); st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00378C5Cu) [[unlikely]] return; }
L_00378C5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378CB0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] - 28560u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    st32((c.r[2].w[0] + 304u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
L_00378CB0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378CC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 36u, depth + 1u); else { c.pc = 0x00378A60u; return; } if (c.pc != 0x00378CC0u) [[unlikely]] return; }
L_00378CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00378CE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[8], 0u + 255u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378D3Cu); st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00378D3Cu) [[unlikely]] return; }
L_00378D3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378D90; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] - 28560u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    st32((c.r[2].w[0] + 304u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
L_00378D90:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378DA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 36u, depth + 1u); else { c.pc = 0x00378A60u; return; } if (c.pc != 0x00378DA0u) [[unlikely]] return; }
L_00378DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00378DC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[8], 0u + 255u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E1Cu); st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00378E1Cu) [[unlikely]] return; }
L_00378E1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378E70; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] - 22448u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    st32((c.r[2].w[0] + 304u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
L_00378E70:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 36u, depth + 1u); else { c.pc = 0x00378A60u; return; } if (c.pc != 0x00378E80u) [[unlikely]] return; }
L_00378E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00378EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], 0u + 255u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378EF4u); st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00378EF4u) [[unlikely]] return; }
L_00378EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378F48; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] - 23872u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    st32((c.r[2].w[0] + 304u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
L_00378F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], 0u + 255u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378FB4u); st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00378FB4u) [[unlikely]] return; }
L_00378FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379008; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] - 22032u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    st32((c.r[2].w[0] + 304u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
L_00379008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00379020:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3424u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00379030:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 10u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3424u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00379050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379060; } }
L_00379050:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] ^ 76ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00379060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379070:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00379090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003790A4u); set32(c.r[12], c.r[5].w[0] + 304u);  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x003790A4u) [[unlikely]] return; }
L_003790A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003790C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003790B4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003790B4u) [[unlikely]] return; }
L_003790B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379200; } }
    c.budget -= 1;
L_003790C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00379160; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003790E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003791F8; } }
L_003790E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00379200; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[10].d[0] = c.r[3].d[0] | 39322ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CDA0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[3].d[0] | 29709ull;
    set32(c.r[8], c.r[8].w[0] + 15648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D310000u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], 0u + 30u);
    c.r[3].d[0] = c.r[3].d[0] | 32331ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[5].w[0] + 116u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 112u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 120u), c.r[9].w[0]);
    st32((c.r[5].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[5].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 36u), 0u);
    st8((c.r[12].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[5].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003791F8; } }
L_00379160:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003791A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_003791F0; } }
L_003791A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[2] = ld32((c.r[5].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 116u), c.f[1]);  if (t) { goto L_003791F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 116u), c.f[0]);
    c.budget -= 7;
L_003791F0:
    set32(c.r[3], 0u + 63u);
    st16((c.r[28].w[0] - 22480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003791F8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[5].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00379200:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379210:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379230u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x00379230u) [[unlikely]] return; }
L_00379230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379248; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00379248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379258u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x00379258u) [[unlikely]] return; }
L_00379258:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 3872u);
    set32(c.r[3], 0u + 24u);
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_003792F8; } }
    set32(c.r[3], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003792F8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003792D8; } }
    c.budget -= 1;
L_003792A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003792A8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003792A8u) [[unlikely]] return; }
L_003792A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003792C0u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003792C0u) [[unlikely]] return; }
L_003792C0:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003792A0u | kUnwind; return; } goto L_003792A0; } }
L_003792D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003792E0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003792E0u) [[unlikely]] return; }
L_003792E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003792F8u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003792F8u) [[unlikely]] return; }
L_003792F8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[4], 0u + 167u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 162u);  if (t) { goto L_0037A0C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379FB0; } }
    set32(c.r[4], 0u + 166u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 165u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 164u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 163u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 161u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 160u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 159u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 112u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 110u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 107u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 106u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 105u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 104u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 103u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 88u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 49u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 29u);  if (t) { goto L_00379F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379F20; } }
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 123u);  if (t) { goto L_0037A1B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0037A1B0; } }
    set32(c.r[4], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_00379EE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379DC8; } }
    set32(c.r[4], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 45u);  if (t) { goto L_00379D28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379C08; } }
    set32(c.r[4], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 44u);  if (t) { goto L_00379AF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379AF8; } }
    set32(c.r[4], 0u + 97u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 94u);  if (t) { goto L_003799B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003799B8; } }
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 93u);  if (t) { goto L_00379878; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379878; } }
    set32(c.r[4], 0u + 131u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_00379738; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379738; } }
    set32(c.r[4], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 22u);  if (t) { goto L_00379738; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379600; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 60u);  if (t) { goto L_00379600; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003794A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_003794A8:
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003794B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003794B8u) [[unlikely]] return; }
L_003794B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003794C0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003794C0u) [[unlikely]] return; }
L_003794C0:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003794E4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003794E4u) [[unlikely]] return; }
L_003794E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003794ECu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003794ECu) [[unlikely]] return; }
L_003794EC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003794FCu); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003794FCu) [[unlikely]] return; }
L_003794FC:
    set32(c.r[5], c.r[18].w[0] + 8u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037950Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0037950Cu) [[unlikely]] return; }
L_0037950C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379514u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00379514u) [[unlikely]] return; }
L_00379514:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379530; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
L_00379530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[3], c.r[16].w[0] >> 1);  if (t) { goto L_0037954C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379564; } }
L_0037954C:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00379564:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43280000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    fpu_div(c, 1u, c.f[1], c.f[14]);
    fpu_div(c, 1u, c.f[1], c.f[14]);
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003795A4u); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003795A4u) [[unlikely]] return; }
L_003795A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003795ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003795ACu) [[unlikely]] return; }
L_003795AC:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43280000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[1].w[0] - 2792u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[13] = c.r[5].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003795F4u); c.f[12] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003795F4u) [[unlikely]] return; }
L_003795F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
    c.budget -= 1;
L_00379600:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379610u); set32(c.r[4], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00379610u) [[unlikely]] return; }
L_00379610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379618u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379618u) [[unlikely]] return; }
L_00379618:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037963Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037963Cu) [[unlikely]] return; }
L_0037963C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379644u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379644u) [[unlikely]] return; }
L_00379644:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379650u); set32(c.r[4], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00379650u) [[unlikely]] return; }
L_00379650:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379668; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_00379668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[3], c.r[16].w[0] >> 1);  if (t) { goto L_00379684; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037969C; } }
L_00379684:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0037969C:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43280000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 1u, c.f[1], c.f[14]);
    set32(c.r[4], c.r[2].w[0] + 4668u);
    fpu_div(c, 1u, c.f[1], c.f[14]);
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[13] = c.r[3].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796E0u); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003796E0u) [[unlikely]] return; }
L_003796E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003796E8u) [[unlikely]] return; }
L_003796E8:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43280000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[1].w[0] - 2792u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[13] = c.r[5].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379730u); c.f[12] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379730u) [[unlikely]] return; }
L_00379730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_00379738:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379748u); set32(c.r[4], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00379748u) [[unlikely]] return; }
L_00379748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379750u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379750u) [[unlikely]] return; }
L_00379750:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379774u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379774u) [[unlikely]] return; }
L_00379774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037977Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0037977Cu) [[unlikely]] return; }
L_0037977C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379788u); set32(c.r[4], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00379788u) [[unlikely]] return; }
L_00379788:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003797A0; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_003797A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[3], c.r[18].w[0] >> 1);  if (t) { goto L_003797BC; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003797D4; } }
L_003797BC:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_003797D4:
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42840000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 2u, c.f[2], c.f[14]);
    set32(c.r[4], c.r[2].w[0] + 4668u);
    fpu_div(c, 2u, c.f[2], c.f[14]);
    c.f[20] = fp::sub(c.f[0], c.f[2]);
    c.f[2] = c.r[5].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037981Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037981Cu) [[unlikely]] return; }
L_0037981C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379824u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379824u) [[unlikely]] return; }
L_00379824:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42840000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2792u)));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = fp::add(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = c.r[5].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379870u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379870u) [[unlikely]] return; }
L_00379870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_00379878:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379888u); set32(c.r[4], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00379888u) [[unlikely]] return; }
L_00379888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379890u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379890u) [[unlikely]] return; }
L_00379890:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798B4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003798B4u) [[unlikely]] return; }
L_003798B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798BCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003798BCu) [[unlikely]] return; }
L_003798BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798C8u); set32(c.r[4], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003798C8u) [[unlikely]] return; }
L_003798C8:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003798E0; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_003798E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[3], c.r[18].w[0] >> 1);  if (t) { goto L_003798FC; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379914; } }
L_003798FC:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00379914:
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42300000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 2u, c.f[2], c.f[14]);
    set32(c.r[4], c.r[2].w[0] + 4668u);
    fpu_div(c, 2u, c.f[2], c.f[14]);
    c.f[20] = fp::sub(c.f[0], c.f[2]);
    c.f[2] = c.r[5].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037995Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037995Cu) [[unlikely]] return; }
L_0037995C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379964u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379964u) [[unlikely]] return; }
L_00379964:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42300000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2792u)));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = fp::add(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = c.r[5].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003799B0u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003799B0u) [[unlikely]] return; }
L_003799B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_003799B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003799C8u); set32(c.r[4], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003799C8u) [[unlikely]] return; }
L_003799C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003799D0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003799D0u) [[unlikely]] return; }
L_003799D0:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003799F4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x003799F4u) [[unlikely]] return; }
L_003799F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003799FCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003799FCu) [[unlikely]] return; }
L_003799FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A08u); set32(c.r[4], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00379A08u) [[unlikely]] return; }
L_00379A08:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379A20; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_00379A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[3], c.r[18].w[0] >> 1);  if (t) { goto L_00379A3C; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379A54; } }
L_00379A3C:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00379A54:
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42840000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 2u, c.f[2], c.f[14]);
    set32(c.r[4], c.r[2].w[0] + 4668u);
    fpu_div(c, 2u, c.f[2], c.f[14]);
    c.f[20] = fp::sub(c.f[0], c.f[2]);
    c.f[2] = c.r[5].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A9Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379A9Cu) [[unlikely]] return; }
L_00379A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AA4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379AA4u) [[unlikely]] return; }
L_00379AA4:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42840000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2792u)));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = fp::add(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = c.r[5].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AF0u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379AF0u) [[unlikely]] return; }
L_00379AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_00379AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B00u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379B00u) [[unlikely]] return; }
L_00379B00:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_00379B18; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379B34; } }
L_00379B18:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00379B34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.f[14] = c.r[5].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B78u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379B78u) [[unlikely]] return; }
L_00379B78:
    set32(c.r[16], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B84u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379B84u) [[unlikely]] return; }
L_00379B84:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[16].w[0] + 4u));  if (t) { goto L_00379B9C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379BB8; } }
L_00379B9C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00379BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.f[1] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[14] = c.r[5].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C00u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379C00u) [[unlikely]] return; }
L_00379C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_00379C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C10u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379C10u) [[unlikely]] return; }
L_00379C10:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_00379C28; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379C44; } }
L_00379C28:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00379C44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.f[14] = c.r[5].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C88u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379C88u) [[unlikely]] return; }
L_00379C88:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C98u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00379C98u) [[unlikely]] return; }
L_00379C98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[5].w[0] + 20256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CACu); set32(c.r[6], 0u + 123u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00379CACu) [[unlikely]] return; }
L_00379CAC:
    set32(c.r[16], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CB8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379CB8u) [[unlikely]] return; }
L_00379CB8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[16].w[0] + 4u));  if (t) { goto L_00379CD0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379CEC; } }
L_00379CD0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00379CEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D1Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379D1Cu) [[unlikely]] return; }
L_00379D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
    c.budget -= 1;
L_00379D28:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22480u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[28].w[0] - 22480u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00379D40; } }
    set32(c.r[3], 0u + 63u);
    st16((c.r[28].w[0] - 22480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00379D40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22480u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037A1B0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379DA0; } }
    c.budget -= 1;
L_00379D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D70u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379D70u) [[unlikely]] return; }
L_00379D70:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D88u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379D88u) [[unlikely]] return; }
L_00379D88:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379D68u | kUnwind; return; } goto L_00379D68; } }
L_00379DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379DA8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379DA8u) [[unlikely]] return; }
L_00379DA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379DC0u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379DC0u) [[unlikely]] return; }
L_00379DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_00379DC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22480u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[28].w[0] - 22480u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00379DE0; } }
    set32(c.r[2], 0u + 255u);
    st16((c.r[28].w[0] - 22480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00379DE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22480u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379E68; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379E40; } }
    c.budget -= 1;
L_00379E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E10u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379E10u) [[unlikely]] return; }
L_00379E10:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E28u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379E28u) [[unlikely]] return; }
L_00379E28:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379E08u | kUnwind; return; } goto L_00379E08; } }
L_00379E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E48u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379E48u) [[unlikely]] return; }
L_00379E48:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E60u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379E60u) [[unlikely]] return; }
L_00379E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_00379E68:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379EB8; } }
L_00379E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E88u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379E88u) [[unlikely]] return; }
L_00379E88:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EA0u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379EA0u) [[unlikely]] return; }
L_00379EA0:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379E80u | kUnwind; return; } goto L_00379E80; } }
L_00379EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EC0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379EC0u) [[unlikely]] return; }
L_00379EC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379ED8u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379ED8u) [[unlikely]] return; }
L_00379ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_00379EE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EECu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00379EECu) [[unlikely]] return; }
L_00379EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EF4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379EF4u) [[unlikely]] return; }
L_00379EF4:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F18u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00379F18u) [[unlikely]] return; }
L_00379F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
L_00379F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F28u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379F28u) [[unlikely]] return; }
L_00379F28:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_00379F40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379F5C; } }
L_00379F40:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00379F5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.f[1] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[14] = c.r[5].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FA4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00379FA4u) [[unlikely]] return; }
L_00379FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
    c.budget -= 1;
L_00379FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FB8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00379FB8u) [[unlikely]] return; }
L_00379FB8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_00379FD0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379FEC; } }
L_00379FD0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00379FEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.f[14] = c.r[5].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A030u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037A030u) [[unlikely]] return; }
L_0037A030:
    set32(c.r[16], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A03Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0037A03Cu) [[unlikely]] return; }
L_0037A03C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A04Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0037A04Cu) [[unlikely]] return; }
L_0037A04C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5082u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A064u); set32(c.r[5], c.r[5].w[0] + 20256u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037A064u) [[unlikely]] return; }
L_0037A064:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = ld32((c.r[16].w[0] + 4u));  if (t) { goto L_0037A07C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037A098; } }
L_0037A07C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0037A098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A0BCu); c.f[12] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037A0BCu) [[unlikely]] return; }
L_0037A0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A1B0; } }
    c.budget -= 1;
L_0037A0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A0D0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0037A0D0u) [[unlikely]] return; }
L_0037A0D0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_0037A0E8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037A104; } }
L_0037A0E8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0037A104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[1].w[0] - 8524u)));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A138u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037A138u) [[unlikely]] return; }
L_0037A138:
    set32(c.r[16], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A144u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0037A144u) [[unlikely]] return; }
L_0037A144:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[16].w[0] + 4u));  if (t) { goto L_0037A15C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037A178; } }
L_0037A15C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0037A178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[1].w[0] - 8520u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A1ACu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037A1ACu) [[unlikely]] return; }
L_0037A1AC:
    c.budget -= 1;
L_0037A1B0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0037A1E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0037A228; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037A208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A2A0; } }
L_0037A208:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    set32(c.r[3], 0u + 15u);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0037A2A0; } }
L_0037A228:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037A280; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3418u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037A270; } }
    st8((c.r[5].w[0] + 3416u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037A270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A278u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0037A278u) [[unlikely]] return; }
L_0037A278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A2A8; } }
L_0037A280:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 8;
L_0037A2A0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037A2A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A2C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037A2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A2F4u); set32(c.r[5], c.r[6].w[0] + 304u);  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x0037A2F4u) [[unlikely]] return; }
L_0037A2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0037A310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A304u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0037A304u) [[unlikely]] return; }
L_0037A304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A490; } }
    c.budget -= 1;
L_0037A310:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037A460; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037A3C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037A338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A488; } }
L_0037A338:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037A490; } }
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[12].d[0] = c.r[3].d[0] | 26214ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D160000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D5A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[10], c.r[10].w[0] + 15648u);
    set32(c.r[9], 0u + 11u);
    set32(c.r[8], 0u + 8u);
    set32(c.r[7], 0u + 15u);
    c.r[4].d[0] = c.r[4].d[0] | 12234ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 29710ull;
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[6].w[0] + 116u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 112u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 120u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 168u), c.r[10].w[0]);
    st32((c.r[6].w[0] + 32u), 0u);
    st32((c.r[6].w[0] + 36u), 0u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[6].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0037A488; } }
L_0037A3C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037A400; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0037A450; } }
    c.budget -= 1;
L_0037A400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.f[1] = ld32((c.r[6].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 52u));
    c.f[1] = ld32((c.r[6].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 116u), c.f[1]);  if (t) { goto L_0037A450; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 116u), c.f[0]);
    c.budget -= 7;
L_0037A450:
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22480u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0037A488; } }
    c.budget -= 1;
L_0037A460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0037A478; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3415u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0037A478:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0037A488:
    set32(c.r[3], 0u + 2u);
    st8((c.r[6].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037A490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A4B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x0037A4B4u) [[unlikely]] return; }
L_0037A4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037A4C8; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0037A4C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037A5A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_0037A578; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A4F0u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0037A4F0u) [[unlikely]] return; }
L_0037A4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A4F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0037A4F8u) [[unlikely]] return; }
L_0037A4F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A504u); set32(c.r[4], c.r[2].w[0] + 2621u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0037A504u) [[unlikely]] return; }
L_0037A504:
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42980000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    fpu_div(c, 1u, c.f[1], c.f[14]);
    set32(c.r[4], c.r[2].w[0] + 2621u);
    fpu_div(c, 1u, c.f[1], c.f[14]);
    c.f[0] = c.r[5].w[0];
    c.f[13] = c.r[3].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A550u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037A550u) [[unlikely]] return; }
L_0037A550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C60000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A570u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325650u; return; } if (c.pc != 0x0037A570u) [[unlikely]] return; }
L_0037A570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A598; } }
L_0037A578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42880000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A598u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325650u; return; } if (c.pc != 0x0037A598u) [[unlikely]] return; }
L_0037A598:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037A5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A5B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037A5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A5E4u); set32(c.r[5], c.r[6].w[0] + 304u);  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x0037A5E4u) [[unlikely]] return; }
L_0037A5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0037A600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A5F4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0037A5F4u) [[unlikely]] return; }
L_0037A5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A700; } }
    c.budget -= 1;
L_0037A600:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037A6D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037A620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A700; } }
L_0037A620:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037A700; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    c.r[11].d[0] = c.r[3].d[0] | 26214ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[8], c.r[8].w[0] + 16288u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], 0u + 15u);
    set32(c.r[3], 0u + 11u);
    c.f[0] = c.r[9].w[0];
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[6].w[0] + 112u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 116u), c.r[10].w[0]);
    st32((c.r[6].w[0] + 120u), c.r[9].w[0]);
    st32((c.r[6].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[6].w[0] + 32u), 0u);
    st32((c.r[6].w[0] + 36u), 0u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10u)));
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0037A700; } }
    st32((c.r[6].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 112u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037A6C0; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037A700; } }
    c.budget -= 1;
L_0037A6C0:
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037A700; } }
    c.budget -= 1;
L_0037A6D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037A700; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0037A700:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A730u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x0037A730u) [[unlikely]] return; }
L_0037A730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A748; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0037A748:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 20272u);
    set32(c.r[5], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A784u); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x0037A784u) [[unlikely]] return; }
L_0037A784:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3420u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037A7C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037A7E8; } }
    c.budget -= 1;
L_0037A7C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2578u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037A7E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0037A7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037A830; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A824u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x0037A824u) [[unlikely]] return; }
L_0037A824:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037A838; } }
L_0037A830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A838u);  if (depth < kMaxDepth) unit_008D(c, 11u, depth + 1u); else { c.pc = 0x003340F0u; return; } if (c.pc != 0x0037A838u) [[unlikely]] return; }
L_0037A838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037A870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x0037A884u) [[unlikely]] return; }
L_0037A884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037A898; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0037A898:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3420u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037A8D8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037A8E0; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037A8E0; } }
    c.budget -= 1;
L_0037A8D8:
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0037A8E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037A9D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C60000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A90Cu);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325650u; return; } if (c.pc != 0x0037A90Cu) [[unlikely]] return; }
L_0037A90C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A91Cu);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0037A91Cu) [[unlikely]] return; }
L_0037A91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A924u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0037A924u) [[unlikely]] return; }
L_0037A924:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43730000u);  if (t) { goto L_0037A9A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43780000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A950u); set32(c.r[4], c.r[4].w[0] + 20288u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037A950u) [[unlikely]] return; }
L_0037A950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438B0000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A974u); set32(c.r[4], c.r[4].w[0] + 20304u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037A974u) [[unlikely]] return; }
L_0037A974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43990000u);
    c.r[4].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A99Cu); set32(c.r[4], c.r[4].w[0] + 20312u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037A99Cu) [[unlikely]] return; }
L_0037A99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A9D0; } }
    c.budget -= 1;
L_0037A9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43990000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9CCu); set32(c.r[4], c.r[4].w[0] + 20320u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037A9CCu) [[unlikely]] return; }
L_0037A9CC:
    c.budget -= 1;
L_0037A9D0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037A9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A9F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037AA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA24u); set32(c.r[5], c.r[6].w[0] + 304u);  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x0037AA24u) [[unlikely]] return; }
L_0037AA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0037AA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA34u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0037AA34u) [[unlikely]] return; }
L_0037AA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037ABD0; } }
    c.budget -= 1;
L_0037AA40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037ABA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037AAF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037AA68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037ABC8; } }
L_0037AA68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037ABD0; } }
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[12].d[0] = c.r[3].d[0] | 13107ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D960000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[10], c.r[10].w[0] + 15648u);
    set32(c.r[9], 0u + 11u);
    set32(c.r[8], 0u + 8u);
    set32(c.r[7], 0u + 15u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 12234ull;
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[6].w[0] + 116u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 112u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 120u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 168u), c.r[10].w[0]);
    st32((c.r[6].w[0] + 32u), 0u);
    st32((c.r[6].w[0] + 36u), 0u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[6].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0037ABC8; } }
L_0037AAF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037AB38; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB90000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0037AB90; } }
    c.budget -= 1;
L_0037AB38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB90000u);
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = ld32((c.r[6].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 52u));
    c.f[1] = ld32((c.r[6].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 116u), c.f[1]);  if (t) { goto L_0037AB90; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 116u), c.f[0]);
    c.budget -= 8;
L_0037AB90:
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22480u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0037ABC8; } }
    c.budget -= 1;
L_0037ABA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0037ABB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3415u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0037ABB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0037ABC8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[6].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037ABD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037ABE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037AC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC14u); set32(c.r[12], c.r[5].w[0] + 304u);  if (depth < kMaxDepth) unit_009E(c, 58u, depth + 1u); else { c.pc = 0x00379030u; return; } if (c.pc != 0x0037AC14u) [[unlikely]] return; }
L_0037AC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037AC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC24u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0037AC24u) [[unlikely]] return; }
L_0037AC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037AD80; } }
    c.budget -= 1;
L_0037AC30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037ACD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037AC50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037AD78; } }
L_0037AC50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037AD80; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[10].d[0] = c.r[3].d[0] | 26214ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D310000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[3].d[0] | 32332ull;
    set32(c.r[8], c.r[8].w[0] + 15648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], 0u + 15u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[5].w[0] + 116u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 112u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 120u), c.r[9].w[0]);
    st32((c.r[5].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[5].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 36u), 0u);
    st8((c.r[12].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[5].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0037AD78; } }
L_0037ACD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037AD18; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB90000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0037AD70; } }
L_0037AD18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB90000u);
    c.f[2] = ld32((c.r[5].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = ld32((c.r[5].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 116u), c.f[1]);  if (t) { goto L_0037AD70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 116u), c.f[0]);
    c.budget -= 8;
L_0037AD70:
    set32(c.r[3], 0u + 63u);
    st16((c.r[28].w[0] - 22480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037AD78:
    set32(c.r[3], 0u + 2u);
    st8((c.r[5].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037AD80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AD90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] >> 5);  if (t) { goto L_0037ADD0; } }
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_0037ADD8; } }
    c.budget -= 1;
L_0037ADD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0037ADD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037ADE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ADFCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x0037ADFCu) [[unlikely]] return; }
L_0037ADFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037B070; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 18582u));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 18580u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE1Cu); set32(c.r[4], ld32((c.r[1].w[0] + 4760u)));  if (depth < kMaxDepth) unit_009E(c, 195u, depth + 1u); else { c.pc = 0x0037AD90u; return; } if (c.pc != 0x0037AE1Cu) [[unlikely]] return; }
L_0037AE1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 4776u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 18576u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 4780u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 16960ull;
    c.r[1].d[0] = c.r[17].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037AE5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[17].d[0] = c.r[2].d[0] | 16959ull;
    c.budget -= 2;
L_0037AE5C:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = ld16((c.r[6].w[0] + 18582u));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 18580u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 18584u));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 18586u));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE8Cu); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0037AE8Cu) [[unlikely]] return; }
L_0037AE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE94u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0037AE94u) [[unlikely]] return; }
L_0037AE94:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037B008; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0037AFA8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0037AF28; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0037AEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B070; } }
    c.budget -= 1;
L_0037AEC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0037AEE8; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEE0u); set32(c.r[5], c.r[5].w[0] + 20336u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037AEE0u) [[unlikely]] return; }
L_0037AEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037AF00; } }
L_0037AEE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEFCu); set32(c.r[5], c.r[5].w[0] + 20368u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037AEFCu) [[unlikely]] return; }
L_0037AEFC:
    c.budget -= 1;
L_0037AF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C20000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF20u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037AF20u) [[unlikely]] return; }
L_0037AF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B070; } }
L_0037AF28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF48u); set32(c.r[4], c.r[4].w[0] + 20400u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037AF48u) [[unlikely]] return; }
L_0037AF48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0037AF68; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF60u); set32(c.r[5], c.r[5].w[0] + 20416u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037AF60u) [[unlikely]] return; }
L_0037AF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037AF80; } }
L_0037AF68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF7Cu); set32(c.r[5], c.r[5].w[0] + 20432u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037AF7Cu) [[unlikely]] return; }
L_0037AF7C:
    c.budget -= 1;
L_0037AF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF9Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037AF9Cu) [[unlikely]] return; }
L_0037AF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B070; } }
    c.budget -= 1;
L_0037AFA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0037AFC8; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AFC0u); set32(c.r[5], c.r[5].w[0] + 20336u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037AFC0u) [[unlikely]] return; }
L_0037AFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037AFE0; } }
L_0037AFC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AFDCu); set32(c.r[5], c.r[5].w[0] + 20368u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037AFDCu) [[unlikely]] return; }
L_0037AFDC:
    c.budget -= 1;
L_0037AFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AFFCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037AFFCu) [[unlikely]] return; }
L_0037AFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B070; } }
    c.budget -= 1;
L_0037B008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B018u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0037B018u) [[unlikely]] return; }
L_0037B018:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0037B038; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B030u); set32(c.r[5], c.r[5].w[0] + 20448u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037B030u) [[unlikely]] return; }
L_0037B030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B050; } }
L_0037B038:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B04Cu); set32(c.r[5], c.r[5].w[0] + 20464u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037B04Cu) [[unlikely]] return; }
L_0037B04C:
    c.budget -= 1;
L_0037B050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43680000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AB0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B06Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0037B06Cu) [[unlikely]] return; }
L_0037B06C:
    c.budget -= 1;
L_0037B070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0037B090:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 31u);  if (t) { goto L_0037B118; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0037B118; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0037B118; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0037B118; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0037B118; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0037B118; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0037B118; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_0037B118; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0037B118; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0037B110; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037B108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B118; } }
    c.budget -= 1;
L_0037B108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0037B118; } }
L_0037B110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037B118; } }
L_0037B118:
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.budget -= 3;
    { c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003351C0u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 97u, depth); }
L_0037B130:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[5].d[0] = c.r[4].d[0] + 0ull;  [[clang::musttail]] return unit_00AA(c, 45u, depth); }
L_0037B140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0037B5E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B168u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009E(c, 216u, depth + 1u); else { c.pc = 0x0037B130u; return; } if (c.pc != 0x0037B168u) [[unlikely]] return; }
L_0037B168:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 3872u);
    c.r[5].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], 0u + 24u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_0037B238; } }
    set32(c.r[3], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0037B238; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B200; } }
L_0037B1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1B8u); c.r[4].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_009E(c, 215u, depth + 1u); else { c.pc = 0x0037B090u; return; } if (c.pc != 0x0037B1B8u) [[unlikely]] return; }
L_0037B1B8:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1E8u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037B1E8u) [[unlikely]] return; }
L_0037B1E8:
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B1B0u | kUnwind; return; } goto L_0037B1B0; } }
L_0037B200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B208u); c.r[4].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_009E(c, 215u, depth + 1u); else { c.pc = 0x0037B090u; return; } if (c.pc != 0x0037B208u) [[unlikely]] return; }
L_0037B208:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B238u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037B238u) [[unlikely]] return; }
L_0037B238:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 114u);  if (t) { goto L_0037B4B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B390; } }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 107u);  if (t) { goto L_0037B390; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B2F8; } }
    set32(c.r[3], 0u + 106u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 112u);  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B2F8; } }
    set32(c.r[3], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 111u);  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B2F8; } }
    set32(c.r[3], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 105u);  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B2F8; } }
    set32(c.r[3], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 104u);  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B2F8; } }
    set32(c.r[3], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 102u);  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B2F8; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 29u);  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B2F8; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 49u);  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B5E8; } }
L_0037B2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B300u); c.r[4].d[0] = ld16((c.r[17].w[0] + 20u));  if (depth < kMaxDepth) unit_009E(c, 215u, depth + 1u); else { c.pc = 0x0037B090u; return; } if (c.pc != 0x0037B300u) [[unlikely]] return; }
L_0037B300:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = ld32((c.r[17].w[0] + 24u));  if (t) { goto L_0037B318; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037B334; } }
L_0037B318:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_0037B334:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.f[2] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.r[5].w[0];
    c.f[12] = fp::add(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[0] = c.r[6].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B384u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037B384u) [[unlikely]] return; }
L_0037B384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B5E8; } }
    c.budget -= 1;
L_0037B390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B398u); c.r[4].d[0] = ld16((c.r[17].w[0] + 20u));  if (depth < kMaxDepth) unit_009E(c, 215u, depth + 1u); else { c.pc = 0x0037B090u; return; } if (c.pc != 0x0037B398u) [[unlikely]] return; }
L_0037B398:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = ld32((c.r[17].w[0] + 24u));  if (t) { goto L_0037B3B0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037B3CC; } }
L_0037B3B0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_0037B3CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8432u);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = fp::add(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = c.r[6].w[0];
    c.f[14] = c.r[5].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B41Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037B41Cu) [[unlikely]] return; }
L_0037B41C:
    set32(c.r[17], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B428u); c.r[4].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_009E(c, 215u, depth + 1u); else { c.pc = 0x0037B090u; return; } if (c.pc != 0x0037B428u) [[unlikely]] return; }
L_0037B428:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = ld32((c.r[17].w[0] + 4u));  if (t) { goto L_0037B440; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037B45C; } }
L_0037B440:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_0037B45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.f[2] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.r[5].w[0];
    c.f[12] = fp::add(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[0] = c.r[6].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B4ACu); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037B4ACu) [[unlikely]] return; }
L_0037B4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B5E8; } }
    c.budget -= 1;
L_0037B4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B4C0u); c.r[4].d[0] = ld16((c.r[17].w[0] + 20u));  if (depth < kMaxDepth) unit_009E(c, 215u, depth + 1u); else { c.pc = 0x0037B090u; return; } if (c.pc != 0x0037B4C0u) [[unlikely]] return; }
L_0037B4C0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = ld32((c.r[17].w[0] + 24u));  if (t) { goto L_0037B4D8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037B4F4; } }
L_0037B4D8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_0037B4F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23072u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 8432u);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = fp::add(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = c.r[6].w[0];
    c.f[14] = c.r[5].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B544u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037B544u) [[unlikely]] return; }
L_0037B544:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B554u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0037B554u) [[unlikely]] return; }
L_0037B554:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[5].w[0] + 20256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B568u); set32(c.r[6], 0u + 123u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0037B568u) [[unlikely]] return; }
L_0037B568:
    set32(c.r[17], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B574u); c.r[4].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_009E(c, 215u, depth + 1u); else { c.pc = 0x0037B090u; return; } if (c.pc != 0x0037B574u) [[unlikely]] return; }
L_0037B574:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = ld32((c.r[17].w[0] + 4u));  if (t) { goto L_0037B58C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037B5A8; } }
L_0037B58C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_0037B5A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B5E8u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x0037B5E8u) [[unlikely]] return; }
L_0037B5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037B600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 40u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 18u, depth); } }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 33u);  if (t) { [[clang::musttail]] return unit_009F(c, 16u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_009F(c, 15u, depth); } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 31u);  if (t) { [[clang::musttail]] return unit_009F(c, 13u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0037BFD0; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_0037BF80; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_0037BF50; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_0037BEC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_0037BDE8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_0037BDE0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0037BD68; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0037BCD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0037BBA8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0037BAF8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0037B9A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0037B8A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0037B710; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0037B6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037B6C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 11u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B6FCu); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037B6FCu) [[unlikely]] return; }
L_0037B6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B704u);  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x0037B704u) [[unlikely]] return; }
L_0037B704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037B710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B718u); set32(c.r[4], 0u + 137u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037B718u) [[unlikely]] return; }
L_0037B718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B720u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037B720u) [[unlikely]] return; }
L_0037B720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B740; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037B740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B748u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0037B748u) [[unlikely]] return; }
L_0037B748:
    c.r[3].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037B798; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037B780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B76Cu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037B76Cu) [[unlikely]] return; }
L_0037B76C:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037B7E0; } }
    c.budget -= 1;
L_0037B780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B788u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037B788u) [[unlikely]] return; }
L_0037B788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037B7E0; } }
    c.budget -= 1;
L_0037B798:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037B7E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7B8u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037B7B8u) [[unlikely]] return; }
L_0037B7B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037B7E0; } }
    c.budget -= 1;
L_0037B7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7D0u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037B7D0u) [[unlikely]] return; }
L_0037B7D0:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0037B7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7E8u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037B7E8u) [[unlikely]] return; }
L_0037B7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0037B860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7F8u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037B7F8u) [[unlikely]] return; }
L_0037B7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B800u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037B800u) [[unlikely]] return; }
L_0037B800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B808u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037B808u) [[unlikely]] return; }
L_0037B808:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4973u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B858u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x0037B858u) [[unlikely]] return; }
L_0037B858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037B860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B868u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0037B868u) [[unlikely]] return; }
L_0037B868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B878u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037B878u) [[unlikely]] return; }
L_0037B878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B880u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037B880u) [[unlikely]] return; }
L_0037B880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B888u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037B888u) [[unlikely]] return; }
L_0037B888:
    set32(c.r[3], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037B8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8B0u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037B8B0u) [[unlikely]] return; }
L_0037B8B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B8D0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037B8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8D8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037B8D8u) [[unlikely]] return; }
L_0037B8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8E0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037B8E0u) [[unlikely]] return; }
L_0037B8E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 251u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037B978; } }
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 252u);  if (t) { goto L_0037B978; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037B978; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 254u);  if (t) { goto L_0037B978; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037B978; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037B978; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037B938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B95Cu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037B95Cu) [[unlikely]] return; }
L_0037B95C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B970u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037B970u) [[unlikely]] return; }
L_0037B970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037B978:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 300u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037B9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9A8u); set32(c.r[4], 0u + 151u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037B9A8u) [[unlikely]] return; }
L_0037B9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9B0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037B9B0u) [[unlikely]] return; }
L_0037B9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9B8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037B9B8u) [[unlikely]] return; }
L_0037B9B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9C4u); c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037B9C4u) [[unlikely]] return; }
L_0037B9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037BA08; } }
    set32(c.r[2], 0u + 40u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9F0u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037B9F0u) [[unlikely]] return; }
L_0037B9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9F8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037B9F8u) [[unlikely]] return; }
L_0037B9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA00u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037BA00u) [[unlikely]] return; }
L_0037BA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BA08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0037BA28; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0037BA28:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA38u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037BA38u) [[unlikely]] return; }
L_0037BA38:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037BAA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037BA60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BA60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA90u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037BA90u) [[unlikely]] return; }
L_0037BA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA98u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037BA98u) [[unlikely]] return; }
L_0037BA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAA0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037BAA0u) [[unlikely]] return; }
L_0037BAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BAA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAC0u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037BAC0u) [[unlikely]] return; }
L_0037BAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAC8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037BAC8u) [[unlikely]] return; }
L_0037BAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAD0u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037BAD0u) [[unlikely]] return; }
L_0037BAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037BAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAE0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037BAE0u) [[unlikely]] return; }
L_0037BAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAF0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037BAF0u) [[unlikely]] return; }
L_0037BAF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BB00u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BB00u) [[unlikely]] return; }
L_0037BB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BB08u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037BB08u) [[unlikely]] return; }
L_0037BB08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BB14u); c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037BB14u) [[unlikely]] return; }
L_0037BB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037BB40; } }
    set32(c.r[2], 0u + 40u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BB40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BB9Cu); st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_008F(c, 11u, depth + 1u); else { c.pc = 0x0033C270u; return; } if (c.pc != 0x0037BB9Cu) [[unlikely]] return; }
L_0037BB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BBB0u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BBB0u) [[unlikely]] return; }
L_0037BBB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BBD0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BBD8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037BBD8u) [[unlikely]] return; }
L_0037BBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BBE0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037BBE0u) [[unlikely]] return; }
L_0037BBE0:
    set32(c.r[3], 0u - 251u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 252u);  if (t) { goto L_0037BCA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037BCA8; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 254u);  if (t) { goto L_0037BCA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037BCA8; } }
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 255u);  if (t) { goto L_0037BCA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037BCA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BC30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BC30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[3], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BC5Cu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 414u, depth + 1u); else { c.pc = 0x00343830u; return; } if (c.pc != 0x0037BC5Cu) [[unlikely]] return; }
L_0037BC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BC70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 256u);  if (t) { goto L_0037BCA8; } }
    c.budget -= 1;
L_0037BC70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[2].d[0] | 57344ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BC84u); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0037BC84u) [[unlikely]] return; }
L_0037BC84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = c.r[3].d[0] | 57344ull;
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BC9Cu); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0037BC9Cu) [[unlikely]] return; }
L_0037BC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BCA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 300u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BCD8u); set32(c.r[4], 0u + 105u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BCD8u) [[unlikely]] return; }
L_0037BCD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037BD20; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BD20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 271ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD3Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037BD3Cu) [[unlikely]] return; }
L_0037BD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BD70u) [[unlikely]] return; }
L_0037BD70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037BDA8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BDA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 211ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BDC4u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037BDC4u) [[unlikely]] return; }
L_0037BDC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BDE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], 0u - 251u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 252u);  if (t) { goto L_0037BE60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037BE50; } }
    set32(c.r[2], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 254u);  if (t) { goto L_0037BE50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037BE40; } }
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037BE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BE68; } }
    c.budget -= 1;
L_0037BE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE38u); set32(c.r[4], 0u + 138u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BE38u) [[unlikely]] return; }
L_0037BE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BE68; } }
L_0037BE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE48u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BE48u) [[unlikely]] return; }
L_0037BE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BE68; } }
L_0037BE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE58u); set32(c.r[4], 0u + 139u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BE58u) [[unlikely]] return; }
L_0037BE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BE68; } }
L_0037BE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE68u); set32(c.r[4], 0u + 153u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BE68u) [[unlikely]] return; }
L_0037BE68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037BE98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BE98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 271ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEB4u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037BEB4u) [[unlikely]] return; }
L_0037BEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BED0u); set32(c.r[4], 0u + 106u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BED0u) [[unlikely]] return; }
L_0037BED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037BF08; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
L_0037BF08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 271ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF24u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037BF24u) [[unlikely]] return; }
L_0037BF24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BF50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BF80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFC4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037BFC4u) [[unlikely]] return; }
L_0037BFC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    c.budget -= 1;
L_0037BFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFD8u); set32(c.r[4], 0u + 150u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037BFD8u) [[unlikely]] return; }
L_0037BFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFE0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037BFE0u) [[unlikely]] return; }
L_0037BFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFE8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037BFE8u) [[unlikely]] return; }
L_0037BFE8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { [[clang::musttail]] return unit_009F(c, 7u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_009F(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 21u, depth); } }
    [[clang::musttail]] return unit_009F(c, 2u, depth);
}

}
