#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0019[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
};

void unit_0019(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00164000;
    case 2u: goto L_00164020;
    case 3u: goto L_00164060;
    case 4u: goto L_00164070;
    case 5u: goto L_001640F0;
    case 6u: goto L_00164148;
    case 7u: goto L_001641F0;
    case 8u: goto L_00164214;
    case 9u: goto L_0016421C;
    case 10u: goto L_00164240;
    case 11u: goto L_00164254;
    case 12u: goto L_00164268;
    case 13u: goto L_00164280;
    case 14u: goto L_0016429C;
    case 15u: goto L_001642C4;
    case 16u: goto L_001642E4;
    case 17u: goto L_001642F0;
    case 18u: goto L_00164320;
    case 19u: goto L_00164360;
    case 20u: goto L_00164368;
    case 21u: goto L_00164394;
    case 22u: goto L_00164398;
    case 23u: goto L_001643C0;
    case 24u: goto L_00164474;
    case 25u: goto L_001644B0;
    case 26u: goto L_00164520;
    case 27u: goto L_00164568;
    case 28u: goto L_001645C8;
    case 29u: goto L_00164628;
    case 30u: goto L_00164674;
    case 31u: goto L_001646A0;
    case 32u: goto L_001646C8;
    case 33u: goto L_00164748;
    case 34u: goto L_00164750;
    case 35u: goto L_00164770;
    case 36u: goto L_001647B0;
    case 37u: goto L_001648F8;
    case 38u: goto L_00164970;
    case 39u: goto L_001649C4;
    case 40u: goto L_001649CC;
    case 41u: goto L_001649F0;
    case 42u: goto L_00164A18;
    case 43u: goto L_00164A44;
    case 44u: goto L_00164A68;
    case 45u: goto L_00164A90;
    case 46u: goto L_00164AA0;
    case 47u: goto L_00164AA8;
    case 48u: goto L_00164AC4;
    case 49u: goto L_00164AEC;
    case 50u: goto L_00164AF8;
    case 51u: goto L_00164B14;
    case 52u: goto L_00164B20;
    case 53u: goto L_00164B40;
    case 54u: goto L_00164B64;
    case 55u: goto L_00164BA8;
    case 56u: goto L_00164BB0;
    case 57u: goto L_00164BC8;
    case 58u: goto L_00164BD0;
    case 59u: goto L_00164BF0;
    case 60u: goto L_00164C14;
    case 61u: goto L_00164C58;
    case 62u: goto L_00164C60;
    case 63u: goto L_00164CC8;
    case 64u: goto L_00164CDC;
    case 65u: goto L_00164CEC;
    case 66u: goto L_00164D00;
    case 67u: goto L_00164D20;
    case 68u: goto L_00164D44;
    case 69u: goto L_00164D88;
    case 70u: goto L_00164D90;
    case 71u: goto L_00164DB0;
    case 72u: goto L_00164DD4;
    case 73u: goto L_00164E18;
    case 74u: goto L_00164E20;
    case 75u: goto L_00164E64;
    case 76u: goto L_00164E80;
    case 77u: goto L_00164E8C;
    case 78u: goto L_00164E94;
    case 79u: goto L_00164EB0;
    case 80u: goto L_00164EDC;
    case 81u: goto L_00164F08;
    case 82u: goto L_00164F2C;
    case 83u: goto L_00164F38;
    case 84u: goto L_00164F68;
    case 85u: goto L_00164F94;
    case 86u: goto L_00164FC8;
    case 87u: goto L_00164FE0;
    case 88u: goto L_00164FF4;
    case 89u: goto L_00165030;
    case 90u: goto L_00165088;
    case 91u: goto L_001650E4;
    case 92u: goto L_001650F4;
    case 93u: goto L_00165120;
    case 94u: goto L_00165150;
    case 95u: goto L_00165210;
    case 96u: goto L_00165220;
    case 97u: goto L_00165234;
    case 98u: goto L_00165290;
    case 99u: goto L_001652A0;
    case 100u: goto L_001652B4;
    case 101u: goto L_001652E4;
    case 102u: goto L_001652F4;
    case 103u: goto L_00165308;
    case 104u: goto L_0016534C;
    case 105u: goto L_0016535C;
    case 106u: goto L_00165370;
    case 107u: goto L_001653D0;
    case 108u: goto L_001653D8;
    case 109u: goto L_001653EC;
    case 110u: goto L_00165408;
    case 111u: goto L_00165418;
    case 112u: goto L_00165420;
    case 113u: goto L_00165434;
    case 114u: goto L_00165464;
    case 115u: goto L_0016546C;
    case 116u: goto L_00165480;
    case 117u: goto L_0016549C;
    case 118u: goto L_001654AC;
    case 119u: goto L_001654B4;
    case 120u: goto L_001654C8;
    case 121u: goto L_001654F0;
    case 122u: goto L_00165548;
    case 123u: goto L_0016555C;
    case 124u: goto L_00165570;
    case 125u: goto L_001655A0;
    case 126u: goto L_001655B0;
    case 127u: goto L_001655D0;
    case 128u: goto L_00165628;
    case 129u: goto L_0016563C;
    case 130u: goto L_00165650;
    case 131u: goto L_00165684;
    case 132u: goto L_00165694;
    case 133u: goto L_001656B0;
    case 134u: goto L_0016575C;
    case 135u: goto L_0016576C;
    case 136u: goto L_001657E0;
    case 137u: goto L_00165818;
    case 138u: goto L_00165820;
    case 139u: goto L_00165844;
    case 140u: goto L_00165854;
    case 141u: goto L_0016585C;
    case 142u: goto L_001658B8;
    case 143u: goto L_001658E4;
    case 144u: goto L_001658F4;
    case 145u: goto L_001658FC;
    case 146u: goto L_00165910;
    case 147u: goto L_00165940;
    case 148u: goto L_00165950;
    case 149u: goto L_00165958;
    case 150u: goto L_00165960;
    case 151u: goto L_00165990;
    case 152u: goto L_001659A0;
    case 153u: goto L_001659A8;
    case 154u: goto L_001659C0;
    case 155u: goto L_001659C8;
    case 156u: goto L_001659EC;
    case 157u: goto L_001659FC;
    case 158u: goto L_00165A04;
    case 159u: goto L_00165A88;
    case 160u: goto L_00165A98;
    case 161u: goto L_00165AC0;
    case 162u: goto L_00165B08;
    case 163u: goto L_00165B6C;
    case 164u: goto L_00165B7C;
    case 165u: goto L_00165B90;
    case 166u: goto L_0016617C;
    case 167u: goto L_00166220;
    case 168u: goto L_0016628C;
    case 169u: goto L_00166308;
    case 170u: goto L_00166370;
    case 171u: goto L_001663A0;
    case 172u: goto L_001663BC;
    case 173u: goto L_001663CC;
    case 174u: goto L_001663D8;
    case 175u: goto L_001663FC;
    case 176u: goto L_00166404;
    case 177u: goto L_00166410;
    case 178u: goto L_00166430;
    case 179u: goto L_001664B0;
    case 180u: goto L_001664C0;
    case 181u: goto L_001664D4;
    case 182u: goto L_001664F0;
    case 183u: goto L_00166590;
    case 184u: goto L_00166634;
    case 185u: goto L_001668A8;
    case 186u: goto L_001668B0;
    case 187u: goto L_001669A0;
    case 188u: goto L_001669F0;
    case 189u: goto L_00166A68;
    case 190u: goto L_00166A70;
    case 191u: goto L_00166A78;
    case 192u: goto L_00166A8C;
    case 193u: goto L_00166AB0;
    case 194u: goto L_00166ACC;
    case 195u: goto L_00166AD8;
    case 196u: goto L_00166AE0;
    case 197u: goto L_00166AE8;
    case 198u: goto L_00166AF0;
    case 199u: goto L_00166B04;
    case 200u: goto L_00166B28;
    case 201u: goto L_00166B44;
    case 202u: goto L_00166B4C;
    case 203u: goto L_00166B58;
    case 204u: goto L_00166B68;
    case 205u: goto L_00166B70;
    case 206u: goto L_00166B84;
    case 207u: goto L_00166BAC;
    case 208u: goto L_00166BB8;
    case 209u: goto L_00166BC0;
    case 210u: goto L_00166BC8;
    case 211u: goto L_00166BDC;
    case 212u: goto L_00166C00;
    case 213u: goto L_00166C0C;
    case 214u: goto L_00166C18;
    case 215u: goto L_00166C20;
    case 216u: goto L_00166C28;
    case 217u: goto L_00166C54;
    case 218u: goto L_00166C5C;
    case 219u: goto L_00166C70;
    case 220u: goto L_00166C80;
    case 221u: goto L_00166C94;
    case 222u: goto L_00166C9C;
    case 223u: goto L_00166CA4;
    case 224u: goto L_00166CBC;
    case 225u: goto L_00166CCC;
    case 226u: goto L_00166CE4;
    case 227u: goto L_00166CEC;
    case 228u: goto L_00166CF4;
    case 229u: goto L_00166D14;
    case 230u: goto L_00166D34;
    case 231u: goto L_00166D44;
    case 232u: goto L_00166D4C;
    case 233u: goto L_00166D54;
    case 234u: goto L_00166D68;
    case 235u: goto L_00166D84;
    case 236u: goto L_00166DA4;
    case 237u: goto L_00166DBC;
    case 238u: goto L_00166DD8;
    case 239u: goto L_00166DF4;
    case 240u: goto L_00166E00;
    case 241u: goto L_00166E14;
    case 242u: goto L_00166E34;
    case 243u: goto L_00166E54;
    case 244u: goto L_00166E58;
    case 245u: goto L_00166E80;
    case 246u: goto L_00166F50;
    case 247u: goto L_00166F60;
    case 248u: goto L_00166F74;
    case 249u: goto L_00166FDC;
    case 250u: goto L_00166FEC;
    case 251u: goto L_00167000;
    case 252u: goto L_0016705C;
    case 253u: goto L_0016706C;
    case 254u: goto L_00167080;
    case 255u: goto L_001670A4;
    case 256u: goto L_001670B4;
    case 257u: goto L_001670C0;
    case 258u: goto L_001671BC;
    case 259u: goto L_001671E8;
    case 260u: goto L_0016721C;
    case 261u: goto L_00167248;
    case 262u: goto L_0016727C;
    case 263u: goto L_001672A8;
    case 264u: goto L_001672C0;
    case 265u: goto L_00167420;
    case 266u: goto L_00167458;
    case 267u: goto L_00167460;
    case 268u: goto L_0016748C;
    case 269u: goto L_001674B0;
    case 270u: goto L_001675B0;
    case 271u: goto L_001675C0;
    case 272u: goto L_001675D4;
    case 273u: goto L_0016763C;
    case 274u: goto L_0016765C;
    case 275u: goto L_00167674;
    case 276u: goto L_00167680;
    case 277u: goto L_001676B0;
    case 278u: goto L_00167710;
    case 279u: goto L_00167730;
    case 280u: goto L_00167790;
    case 281u: goto L_001677F0;
    case 282u: goto L_00167800;
    case 283u: goto L_00167810;
    case 284u: goto L_001678A8;
    case 285u: goto L_001678E0;
    case 286u: goto L_001678F0;
    case 287u: goto L_00167910;
    case 288u: goto L_00167940;
    case 289u: goto L_00167950;
    case 290u: goto L_00167970;
    case 291u: goto L_00167980;
    case 292u: goto L_00167A10;
    case 293u: goto L_00167A20;
    case 294u: goto L_00167A30;
    case 295u: goto L_00167A40;
    case 296u: goto L_00167B70;
    case 297u: goto L_00167BA0;
    case 298u: goto L_00167C48;
    case 299u: goto L_00167C5C;
    case 300u: goto L_00167C90;
    case 301u: goto L_00167CD0;
    case 302u: goto L_00167D40;
    case 303u: goto L_00167D70;
    case 304u: goto L_00167DC0;
    case 305u: goto L_00167DD0;
    case 306u: goto L_00167E50;
    case 307u: goto L_00167E70;
    case 308u: goto L_00167ED0;
    case 309u: goto L_00167F30;
    case 310u: goto L_00167F40;
    case 311u: goto L_00167F50;
    case 312u: goto L_00167FA8;
    case 313u: goto L_00167FB0;
    case 314u: goto L_00167FF0;
    default: bad_entry(c, 0x00164000u); return;
    }
L_00164000:
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_00164060; } }
    c.budget -= 1;
L_00164020:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 500u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.budget -= 16;
L_00164060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00164070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00164188; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00164168; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001640F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001640B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001641C8; } }
L_001640B8:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3F00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] + 19464u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001640F0u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0018(c, 324u, depth + 1u); else { c.pc = 0x00163EF0u; return; } if (c.pc != 0x001640F0u) [[unlikely]] return; }
L_001640F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 36u), c.f[1]);  if (t) { goto L_00164128; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00164148; } }
    c.budget -= 1;
L_00164128:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 36u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164148u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x00164148u) [[unlikely]] return; }
L_00164148:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] + 19464u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001641C8; } }
L_00164168:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18107u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001641C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001641C8; } }
    c.budget -= 1;
L_00164188:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_001641C8; } }
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001641D0; } }
    c.budget -= 1;
L_001641C8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001641D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001641F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164214u); set32(c.r[18], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00164214u) [[unlikely]] return; }
L_00164214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016421Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x0016421Cu) [[unlikely]] return; }
L_0016421C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] + 19464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164240u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164240u) [[unlikely]] return; }
L_00164240:
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164254u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00164254u) [[unlikely]] return; }
L_00164254:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 14008u);
    c.budget -= 5;
L_00164268:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u - 500u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001642F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164280u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00164280u) [[unlikely]] return; }
L_00164280:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016429Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016429Cu) [[unlikely]] return; }
L_0016429C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001642C4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x001642C4u) [[unlikely]] return; }
L_001642C4:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001642E8; } }
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 2000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001642E4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x001642E4u) [[unlikely]] return; }
L_001642E4:
    c.budget -= 1;
L_001642E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001642F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001642F0u) [[unlikely]] return; }
L_001642F0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00164268u | kUnwind; return; } goto L_00164268; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00164320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00164948; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 14000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00164000u < 16384u) { entry = entries_0019[(t - 0x00164000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00164360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164368u);  if (depth < kMaxDepth) unit_0019(c, 165u, depth + 1u); else { c.pc = 0x00165B90u; return; } if (c.pc != 0x00164368u) [[unlikely]] return; }
L_00164368:
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[16].w[0] + 4u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164394u); st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0018(c, 324u, depth + 1u); else { c.pc = 0x00163EF0u; return; } if (c.pc != 0x00164394u) [[unlikely]] return; }
L_00164394:
    c.budget -= 1;
L_00164398:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00164480; } }
    set32(c.r[3], 0u + 14u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
L_001643C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 42u)));
    set32(c.r[6], c.r[6].w[0] + 7u);
    c.r[3].d[0] = c.r[6].sd[0] < 14ll ? 1ull : 0ull;
    st16((c.r[5].w[0] + 44u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 46u)));
    st16((c.r[5].w[0] + 48u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 50u)));
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 54u)));
    st16((c.r[5].w[0] + 56u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 58u)));
    st16((c.r[5].w[0] + 60u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 62u)));
    st16((c.r[5].w[0] + 64u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 66u)));
    st16((c.r[5].w[0] + 68u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001643C0u | kUnwind; return; } goto L_001643C0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 98u)));
    set32(c.r[3], 0u + 3u);
    st16((c.r[16].w[0] + 100u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 102u)));
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 106u)));
    st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00164948; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00164948; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00164948; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164474u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x00164474u) [[unlikely]] return; }
L_00164474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164948; } }
    c.budget -= 1;
L_00164480:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 42u)));
    set32(c.r[5], c.r[3].w[0] + 44u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001644B0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00164540; } }
L_001644B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_00164528; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00164540; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_00164540; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00164540; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164520u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x00164520u) [[unlikely]] return; }
L_00164520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164540; } }
L_00164528:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 500u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001644B0u | kUnwind; return; } goto L_001644B0; } }
L_00164540:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00164560; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 98u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001645A0; } }
    c.budget -= 1;
L_00164560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164568u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00164568u) [[unlikely]] return; }
L_00164568:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[3].d[0] & 127ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], 0u + 100u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 100u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 100u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st16((c.r[16].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_001645A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001645C0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 102u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00164600; } }
    c.budget -= 1;
L_001645C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001645C8u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x001645C8u) [[unlikely]] return; }
L_001645C8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 104u)));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[3].d[0] & 127ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], 0u + 100u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 104u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_00164600:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00164620; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 106u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00164660; } }
    c.budget -= 1;
L_00164620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164628u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00164628u) [[unlikely]] return; }
L_00164628:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[3].d[0] & 127ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], 0u + 100u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_00164660:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00164678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164674u); set32(c.r[5], 0u + 170u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00164674u) [[unlikely]] return; }
L_00164674:
    c.budget -= 1;
L_00164678:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00164948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00164948; } }
    c.budget -= 1;
L_001646A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00164708; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001646D0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001646C8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x001646C8u) [[unlikely]] return; }
L_001646C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001646F8; } }
L_001646D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18106u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[1].w[0] + 18106u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_001646F8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00164948; } }
    c.budget -= 1;
L_00164708:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18106u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[6], c.r[6].w[0] << (c.r[7].w[0] & 31u));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[1].w[0] + 18106u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164748u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 250u, depth + 1u); else { c.pc = 0x00163300u; return; } if (c.pc != 0x00164748u) [[unlikely]] return; }
L_00164748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164948; } }
L_00164750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18107u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00164948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00164948; } }
    c.budget -= 1;
L_00164770:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[1]);  if (t) { goto L_00164948; } }
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00164950; } }
    c.budget -= 1;
L_001647B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 140u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_001648A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00164870; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00164818; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001647E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001648F0; } }
    c.budget -= 1;
L_001647E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9604u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001648F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001648F0; } }
    c.budget -= 1;
L_00164818:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    set32(c.r[4], c.r[4].w[0] + 19464u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001648F0; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001648F0; } }
L_00164870:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9604u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001648F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001648F0; } }
    c.budget -= 1;
L_001648A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] + 19464u);
    c.f[0] = 0u;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001648F0; } }
    st32((c.r[3].w[0]), c.f[0]);
    st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001648F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001648F8u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 253u, depth + 1u); else { c.pc = 0x00163420u; return; } if (c.pc != 0x001648F8u) [[unlikely]] return; }
L_001648F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18107u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00164948; } }
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[1]);  if (t) { goto L_00164948; } }
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00164950; } }
L_00164948:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00164950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00164970:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[23].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001649C4u); set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001649C4u) [[unlikely]] return; }
L_001649C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001649CCu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x001649CCu) [[unlikely]] return; }
L_001649CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] + 19464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001649F0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001649F0u) [[unlikely]] return; }
L_001649F0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 40u)));
    c.r[1].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00164E48; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 14032u);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[30], c.r[29].w[0] + 196u);
    c.budget -= 6;
L_00164A18:
    c.r[16].d[0] = c.r[19].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[1].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00164E20; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    set32(c.r[3], 0u - 500u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00164E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164A44u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00164A44u) [[unlikely]] return; }
L_00164A44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164A68u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164A68u) [[unlikely]] return; }
L_00164A68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00164E18; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00164000u < 16384u) { entry = entries_0019[(t - 0x00164000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00164A90:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164AA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164AA0u) [[unlikely]] return; }
L_00164AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164AA8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00164AD0; } }
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164AC4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 56u)));  if (depth < kMaxDepth) unit_0019(c, 121u, depth + 1u); else { c.pc = 0x001654F0u; return; } if (c.pc != 0x00164AC4u) [[unlikely]] return; }
L_00164AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
    c.budget -= 1;
L_00164AD0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00164E18; } }
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164AECu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 60u)));  if (depth < kMaxDepth) unit_0019(c, 121u, depth + 1u); else { c.pc = 0x001654F0u; return; } if (c.pc != 0x00164AECu) [[unlikely]] return; }
L_00164AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
    c.budget -= 1;
L_00164AF8:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00164E18; } }
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164B14u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 64u)));  if (depth < kMaxDepth) unit_0019(c, 127u, depth + 1u); else { c.pc = 0x001655D0u; return; } if (c.pc != 0x00164B14u) [[unlikely]] return; }
L_00164B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
    c.budget -= 1;
L_00164B20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00164B48; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 112u)));
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164B40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164B40u) [[unlikely]] return; }
L_00164B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164B48:
    set32(c.r[3], ld32((c.r[20].w[0] + 112u)));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00164B70; } }
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164B64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164B64u) [[unlikely]] return; }
L_00164B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
    c.budget -= 1;
L_00164B70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164BA8u) [[unlikely]] return; }
L_00164BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164BB0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00164E18; } }
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BC8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_0019(c, 133u, depth + 1u); else { c.pc = 0x001656B0u; return; } if (c.pc != 0x00164BC8u) [[unlikely]] return; }
L_00164BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164BD0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00164BF8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164BF0u) [[unlikely]] return; }
L_00164BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164BF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00164C20; } }
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164C14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164C14u) [[unlikely]] return; }
L_00164C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
    c.budget -= 1;
L_00164C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164C58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164C58u) [[unlikely]] return; }
L_00164C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164C60:
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 1120u);
    c.f[13] = 0u;
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[14] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[30].w[0]), c.f[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.f[15] = c.f[14];
    set32(c.r[2], c.r[29].w[0] + 204u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + 208u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164CC8u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00164CC8u) [[unlikely]] return; }
L_00164CC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164CDCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164CDCu) [[unlikely]] return; }
L_00164CDC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164CECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00164CECu) [[unlikely]] return; }
L_00164CEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D00u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164D00u) [[unlikely]] return; }
L_00164D00:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00164D28; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 120u)));
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164D20u) [[unlikely]] return; }
L_00164D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164D28:
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00164D50; } }
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164D44u) [[unlikely]] return; }
L_00164D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
    c.budget -= 1;
L_00164D50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164D88u) [[unlikely]] return; }
L_00164D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164D90:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00164DB8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164DB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164DB0u) [[unlikely]] return; }
L_00164DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
L_00164DB8:
    set32(c.r[3], ld32((c.r[20].w[0] + 124u)));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00164DE0; } }
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164DD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164DD4u) [[unlikely]] return; }
L_00164DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164E18; } }
    c.budget -= 1;
L_00164DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 89u, depth + 1u); else { c.pc = 0x00165030u; return; } if (c.pc != 0x00164E18u) [[unlikely]] return; }
L_00164E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E20u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00164E20u) [[unlikely]] return; }
L_00164E20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 40u)));
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    set32(c.r[18], c.r[18].w[0] + 6u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00164A18u | kUnwind; return; } goto L_00164A18; } }
    c.budget -= 1;
L_00164E48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 1564u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;  if (t) { goto L_00164E98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00164E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E64u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00164E64u) [[unlikely]] return; }
L_00164E64:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 32u)));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E80u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164E80u) [[unlikely]] return; }
L_00164E80:
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E8Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 1564u)));  if (depth < kMaxDepth) unit_0019(c, 161u, depth + 1u); else { c.pc = 0x00165AC0u; return; } if (c.pc != 0x00164E8Cu) [[unlikely]] return; }
L_00164E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E94u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00164E94u) [[unlikely]] return; }
L_00164E94:
    c.budget -= 1;
L_00164E98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 140u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00164FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164EB0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00164EB0u) [[unlikely]] return; }
L_00164EB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00164EE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3F00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164EDCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164EDCu) [[unlikely]] return; }
L_00164EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164F08; } }
    c.budget -= 1;
L_00164EE8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00164F08; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164F08u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164F08u) [[unlikely]] return; }
L_00164F08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] + 19464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164F2Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164F2Cu) [[unlikely]] return; }
L_00164F2C:
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164F38u); set32(c.r[4], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 254u, depth + 1u); else { c.pc = 0x00163430u; return; } if (c.pc != 0x00164F38u) [[unlikely]] return; }
L_00164F38:
    set32(c.r[3], ld32((c.r[20].w[0] + 136u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00164FF8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00164F60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00164FF8; } }
    c.budget -= 1;
L_00164F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164F68u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00164F68u) [[unlikely]] return; }
L_00164F68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00164FA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164F94u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164F94u) [[unlikely]] return; }
L_00164F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00164FC8; } }
    c.budget -= 1;
L_00164FA0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00164FC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164FC8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00164FC8u) [[unlikely]] return; }
L_00164FC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 140u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull | 32768ull;  if (t) { goto L_00164FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164FE0u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00164FE0u) [[unlikely]] return; }
L_00164FE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[4], c.r[4].w[0] - 1360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164FF4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00164FF4u) [[unlikely]] return; }
L_00164FF4:
    c.budget -= 1;
L_00164FF8:
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
L_00165030:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = c.r[4].w[0];
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    set32(c.r[3], c.r[3].w[0] - 1120u);
    set32(c.r[16], 0u + 1u);
    st32((c.r[29].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 100u), c.f[0]);  if (t) { goto L_00165120; } }
    c.budget -= 1;
L_00165088:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    mmi::div(c, 0, c.r[18].w[0], c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.f[15] = c.f[14];
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001650E4u); set32(c.r[18], c.r[18].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001650E4u) [[unlikely]] return; }
L_001650E4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001650F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001650F4u) [[unlikely]] return; }
L_001650F4:
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    set32(c.r[16], c.r[3].w[0] << 1);
    c.f[13] = 0u;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.f[12] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165120u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165120u) [[unlikely]] return; }
L_00165120:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00165088u | kUnwind; return; } goto L_00165088; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00165088u | kUnwind; return; } goto L_00165088; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00165150:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 1120u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 148u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < 100ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 26;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00165220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[3], c.r[20].w[0] >> 31);
    c.r[4].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.f[15] = c.f[14];
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165210u); set32(c.r[20], c.r[20].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00165210u) [[unlikely]] return; }
L_00165210:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165220u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00165220u) [[unlikely]] return; }
L_00165220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165234u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165234u) [[unlikely]] return; }
L_00165234:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);  if (t) { goto L_001652A0; } }
    set32(c.r[3], c.r[20].w[0] >> 31);
    c.r[4].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.f[15] = c.f[14];
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[20], c.r[20].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165290u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00165290u) [[unlikely]] return; }
L_00165290:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001652A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001652A0u) [[unlikely]] return; }
L_001652A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001652B4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001652B4u) [[unlikely]] return; }
L_001652B4:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[13] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001652E4u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001652E4u) [[unlikely]] return; }
L_001652E4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001652F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001652F4u) [[unlikely]] return; }
L_001652F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165308u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165308u) [[unlikely]] return; }
L_00165308:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] - 880u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 220u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[15] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016534Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0016534Cu) [[unlikely]] return; }
L_0016534C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016535Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0016535Cu) [[unlikely]] return; }
L_0016535C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165370u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165370u) [[unlikely]] return; }
L_00165370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[3], c.r[3].w[0] - 1120u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] >> 31);
    set32(c.r[4], 0u + 1u);
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].d[0] = c.hi.d[0];
    c.f[15] = c.f[14];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001653D0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001653D0u) [[unlikely]] return; }
L_001653D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001653D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001653D8u) [[unlikely]] return; }
L_001653D8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001653ECu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001653ECu) [[unlikely]] return; }
L_001653EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165408u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00165408u) [[unlikely]] return; }
L_00165408:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165418u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00165418u) [[unlikely]] return; }
L_00165418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165420u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00165420u) [[unlikely]] return; }
L_00165420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165434u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165434u) [[unlikely]] return; }
L_00165434:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[13] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165464u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00165464u) [[unlikely]] return; }
L_00165464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016546Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0016546Cu) [[unlikely]] return; }
L_0016546C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165480u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165480u) [[unlikely]] return; }
L_00165480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016549Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016549Cu) [[unlikely]] return; }
L_0016549C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001654ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001654ACu) [[unlikely]] return; }
L_001654AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001654B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001654B4u) [[unlikely]] return; }
L_001654B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001654C8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001654C8u) [[unlikely]] return; }
L_001654C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001654F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[13] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2E80000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165548u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165548u) [[unlikely]] return; }
L_00165548:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016555Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 94u, depth + 1u); else { c.pc = 0x00165150u; return; } if (c.pc != 0x0016555Cu) [[unlikely]] return; }
L_0016555C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165570u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165570u) [[unlikely]] return; }
L_00165570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 1120u);
    c.f[13] = 0u;
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], 0u + 1u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001655A0u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001655A0u) [[unlikely]] return; }
L_001655A0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001655B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001655B0u) [[unlikely]] return; }
L_001655B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001655D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[13] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2E00000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165628u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165628u) [[unlikely]] return; }
L_00165628:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016563Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 94u, depth + 1u); else { c.pc = 0x00165150u; return; } if (c.pc != 0x0016563Cu) [[unlikely]] return; }
L_0016563C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165650u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165650u) [[unlikely]] return; }
L_00165650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 880u);
    c.f[13] = 0u;
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], 0u + 1u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165684u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00165684u) [[unlikely]] return; }
L_00165684:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165694u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00165694u) [[unlikely]] return; }
L_00165694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001656B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[5], c.r[5].w[0] + 3680u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 148u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14128u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14130u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[14] = c.r[2].w[0];
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[18].w[0]), c.r[5].w[0]);
    c.f[15] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[1] = c.r[6].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016575Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0016575Cu) [[unlikely]] return; }
L_0016575C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016576Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0016576Cu) [[unlikely]] return; }
L_0016576C:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 14256u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], c.r[7].w[0] + 3920u);
    set32(c.r[6], c.r[6].w[0] + 14192u);
    set32(c.r[3], c.r[3].w[0] + 14194u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[18].w[0]), c.r[7].w[0]);
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[15] = c.f[14];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001657E0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001657E0u) [[unlikely]] return; }
L_001657E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_00165878; } }
    set32(c.r[2], c.r[2].w[0] + 14257u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00165A18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14256u);
    set32(c.r[19], c.r[19].w[0] + 14224u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 6;
L_00165818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165820u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00165820u) [[unlikely]] return; }
L_00165820:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165844u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165844u) [[unlikely]] return; }
L_00165844:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165854u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00165854u) [[unlikely]] return; }
L_00165854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016585Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0016585Cu) [[unlikely]] return; }
L_0016585C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00165818u | kUnwind; return; } goto L_00165818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00165A18; } }
L_00165878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14257u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001659B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00165908; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001658B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00165A18; } }
L_001658B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001658B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001658B8u) [[unlikely]] return; }
L_001658B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 14240u)));
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 14242u)));
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001658E4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001658E4u) [[unlikely]] return; }
L_001658E4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001658F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001658F4u) [[unlikely]] return; }
L_001658F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001658FCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001658FCu) [[unlikely]] return; }
L_001658FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00165A18; } }
    c.budget -= 1;
L_00165908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165910u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00165910u) [[unlikely]] return; }
L_00165910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 14232u)));
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 14234u)));
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165940u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165940u) [[unlikely]] return; }
L_00165940:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165950u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00165950u) [[unlikely]] return; }
L_00165950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165958u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00165958u) [[unlikely]] return; }
L_00165958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165960u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00165960u) [[unlikely]] return; }
L_00165960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 14236u)));
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 14238u)));
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165990u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00165990u) [[unlikely]] return; }
L_00165990:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001659A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001659A0u) [[unlikely]] return; }
L_001659A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001659A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001659A8u) [[unlikely]] return; }
L_001659A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00165A18; } }
L_001659B0:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 14232u);
    c.budget -= 4;
L_001659C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001659C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001659C8u) [[unlikely]] return; }
L_001659C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001659ECu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001659ECu) [[unlikely]] return; }
L_001659EC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001659FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001659FCu) [[unlikely]] return; }
L_001659FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165A04u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00165A04u) [[unlikely]] return; }
L_00165A04:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001659C0u | kUnwind; return; } goto L_001659C0; } }
    c.budget -= 1;
L_00165A18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14258u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], c.r[7].w[0] + 4160u);
    set32(c.r[6], c.r[6].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + 14210u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    st32((c.r[18].w[0]), c.r[7].w[0]);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165A88u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00165A88u) [[unlikely]] return; }
L_00165A88:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165A98u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00165A98u) [[unlikely]] return; }
L_00165A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00165AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4400u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165B08u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00165B08u) [[unlikely]] return; }
L_00165B08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 4640u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 14304u);
    set32(c.r[2], c.r[2].w[0] + 14306u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[15] = c.f[14];
    c.f[1] = c.r[6].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165B6Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00165B6Cu) [[unlikely]] return; }
L_00165B6C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165B7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00165B7Cu) [[unlikely]] return; }
L_00165B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00165B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1520u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1526u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 346u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1521u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1527u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 350u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 352u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1525u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1531u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 354u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 356u), static_cast<std::uint16_t>(0u));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1538u)));
    c.budget -= 30;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1520u);  if (t) { goto L_00165C18; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00165C80; } }
    c.budget -= 1;
L_00165C18:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 20u)));
    set32(c.r[4], 0u + 10000u);
    set32(c.r[3], 0u + 100u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::div(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 25;
    { const bool t = c.r[4].sd[0] >= 0; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_00165C80; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00165C80:
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 100u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 54u)));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00165CA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 98u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00165CB0; } }
    c.budget -= 1;
L_00165CA8:
    st16((c.r[17].w[0] + 98u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00165CB0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.r[6].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00165D58; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    set32(c.r[7], c.r[3].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    set32(c.r[10], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_00165CE8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00165D60; } }
L_00165CE8:
    c.r[8].d[0] = c.r[7].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[6], 0u + 10000u);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[8].w[0]);
    mmi::mult(c, 1, c.r[8].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[6], 0u + 100u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    mmi::div(c, 0, c.r[8].w[0], c.r[10].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[7].w[0], c.r[10].w[0]);
    c.r[9].d[0] = c.r[8].d[0] << 48;
    c.r[7].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.r[6].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 26;
    { const bool t = c.r[8].sd[0] >= 0; c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);  if (t) { goto L_00165D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00165D60; } }
L_00165D58:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00165D60:
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], 0u + 2u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00165D90; } }
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00165D90; } }
    set32(c.r[9], 0u + 100u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00165D90:
    st16((c.r[17].w[0] + 58u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 104u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 58u)));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00165DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 102u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_00165DC0; } }
    c.budget -= 1;
L_00165DB8:
    st16((c.r[17].w[0] + 102u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00165DC0:
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 108u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00165E80; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 92u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[7].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], 0u + 60u);  if (t) { goto L_00165E28; } }
    set32(c.r[4], 0u + 999u);
    set32(c.r[3], 0u + 99u);
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00165F68; } }
L_00165E28:
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x22B60000u);
    c.r[3].d[0] = c.r[3].d[0] | 15551ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00165F68; } }
L_00165E80:
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_00165EA0; } }
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00165F68; } }
    c.budget -= 1;
L_00165EA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00165F60; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 182u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);  if (t) { goto L_00165EC8; } }
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00165F68; } }
    c.budget -= 1;
L_00165EC8:
    set32(c.r[10], ld32((c.r[7].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x22B60000u);
    set32(c.r[9], 0u + 60u);
    set32(c.r[6], 0u + 59u);
    c.r[4].d[0] = c.r[4].d[0] | 15551ull;
    c.r[7].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[8], c.r[10].w[0] >> 31);
    mmi::mult(c, 0, c.r[7].w[0], c.r[10].w[0]);
    set32(c.r[3], 0u + 99u);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 5));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 92u)));
    mmi::div(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 5);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] >> 31);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 37;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00165F68; } }
    c.budget -= 1;
L_00165F60:
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00165F68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 22u)));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00165F94; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 22u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_00165FA4; } }
L_00165F94:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 22u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_00165FA4:
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 74u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 76u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00165FD0; } }
    st32((c.r[17].w[0] + 116u), 0u);
    c.budget -= 2;
L_00165FD0:
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00980000u);
    c.r[4].d[0] = c.r[3].d[0] | 38527ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00165FF0; } }
    st32((c.r[17].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 2;
L_00165FF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00166008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 78u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00166010; } }
L_00166008:
    set32(c.r[3], 0u + 50u);
    st16((c.r[17].w[0] + 78u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00166010:
    st16((c.r[17].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001661A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BB0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8684u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[3] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6881u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[8], c.r[8].w[0] - 20368u);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[3], c.r[3].w[0] + 14336u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[2]);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 48;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);  if (t) { goto L_00166120; } }
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 14;
L_00166120:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.r[1].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00166148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00166158; } }
    c.budget -= 1;
L_00166148:
    set32(c.r[2], 0u + 50u);
    st16((c.r[17].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 92u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00166158:
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016617Cu); set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  if (depth < kMaxDepth) unit_0072(c, 35u, depth + 1u); else { c.pc = 0x002C8760u; return; } if (c.pc != 0x0016617Cu) [[unlikely]] return; }
L_0016617C:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00166198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001661F0; } }
    c.budget -= 1;
L_00166198:
    set32(c.r[3], 0u + 50u);
    st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 96u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001661F0; } }
L_001661A8:
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001661C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001661D0; } }
L_001661C8:
    set32(c.r[3], 0u + 50u);
    st16((c.r[17].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001661D0:
    st16((c.r[17].w[0] + 84u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001661F0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[28].w[0] - 24148u), c.r[3].w[0]);
    c.budget -= 2;
L_001661F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8683u)));
    st16((c.r[17].w[0] + 86u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8683u)));
    st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00166220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00166328; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00166300; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00166290; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00166268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166368; } }
L_00166268:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3F00000u);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016628Cu); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0018(c, 250u, depth + 1u); else { c.pc = 0x00163300u; return; } if (c.pc != 0x0016628Cu) [[unlikely]] return; }
L_0016628C:
    c.budget -= 1;
L_00166290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 36u), c.f[1]);  if (t) { goto L_001662C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00166368; } }
    c.budget -= 1;
L_001662C8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18106u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[1].w[0] + 18106u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_00166368; } }
L_00166300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166308u);  if (depth < kMaxDepth) unit_0019(c, 182u, depth + 1u); else { c.pc = 0x001664F0u; return; } if (c.pc != 0x00166308u) [[unlikely]] return; }
L_00166308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18107u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00166368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00166368; } }
    c.budget -= 1;
L_00166328:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 16u), c.f[1]);  if (t) { goto L_00166368; } }
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00166388; } }
    c.budget -= 1;
L_00166368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166370u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0018(c, 253u, depth + 1u); else { c.pc = 0x00163420u; return; } if (c.pc != 0x00166370u) [[unlikely]] return; }
L_00166370:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00166388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001663A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001663BCu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001663BCu) [[unlikely]] return; }
L_001663BC:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001663CCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001663CCu) [[unlikely]] return; }
L_001663CC:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001663D8u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0018(c, 254u, depth + 1u); else { c.pc = 0x00163430u; return; } if (c.pc != 0x001663D8u) [[unlikely]] return; }
L_001663D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00166410; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00166410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001663FCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001663FCu) [[unlikely]] return; }
L_001663FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166404u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x00166404u) [[unlikely]] return; }
L_00166404:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166410u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 21u)));  if (depth < kMaxDepth) unit_0019(c, 178u, depth + 1u); else { c.pc = 0x00166430u; return; } if (c.pc != 0x00166410u) [[unlikely]] return; }
L_00166410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00166430:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[20] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + 8000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x431E0000u);
    set32(c.r[4], c.r[4].w[0] + 168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[14] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.f[15] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001664B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001664B0u) [[unlikely]] return; }
L_001664B0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001664C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001664C0u) [[unlikely]] return; }
L_001664C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001664D4u); set32(c.r[4], c.r[4].w[0] + 8240u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x001664D4u) [[unlikely]] return; }
L_001664D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001664F0:
    set32(c.r[6], c.r[4].w[0] + 304u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 191u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00166588; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00166588; } }
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 9476u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00166588; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00166580; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00166570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00166588; } }
    c.budget -= 1;
L_00166570:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00166588; } }
    c.budget -= 1;
L_00166580:
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00166588:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 18080u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_001669D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001669C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00166660; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001665F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001669C8; } }
L_001665F8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[5], c.r[5].w[0] + 7280u);
    set32(c.r[6], c.r[6].w[0] + 7520u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166634u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x00166634u) [[unlikely]] return; }
L_00166634:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00166658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00166660; } }
    c.budget -= 1;
L_00166658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_00166660:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00166998; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00166828; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001667C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00166788; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001666A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001669C8; } }
L_001666A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[5], 0u + 90u);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001666F8; } }
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00166748; } }
    c.budget -= 1;
L_001666F8:
    c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00166710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00166748; } }
    c.budget -= 1;
L_00166710:
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C8B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17302ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 14;
L_00166748:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00166768; } }
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 1;
L_00166768:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001669C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_001669C8; } }
L_00166788:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_001667B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001667C0; } }
    c.budget -= 1;
L_001667B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001669C8; } }
    c.budget -= 1;
L_001667C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_001669C8; } }
L_001667C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 55050ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 16u), c.f[1]);  if (t) { goto L_001667F8; } }
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 1;
L_001667F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 4u), c.f[1]);  if (t) { goto L_001669C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_001669C8; } }
L_00166828:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 20u), c.f[1]);  if (t) { goto L_00166858; } }
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 1;
L_00166858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 4u), c.f[1]);  if (t) { goto L_00166888; } }
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_00166888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001668A8; } }
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001668A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x001668A8u) [[unlikely]] return; }
L_001668A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001668B0u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x001668B0u) [[unlikely]] return; }
L_001668B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[5], 0u + 90u);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00166908; } }
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00166958; } }
    c.budget -= 1;
L_00166908:
    c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00166920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00166958; } }
    c.budget -= 1;
L_00166920:
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C8B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17302ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 14;
L_00166958:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00166978; } }
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 1;
L_00166978:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001669C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_001669C8; } }
L_00166998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001669A0u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x001669A0u) [[unlikely]] return; }
L_001669A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001669B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001669B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 4;
L_001669C8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001669D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001669F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 50u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    if (c.r[5].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] + 18080u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[19].w[0] + 304u);  if (t) { goto L_00166E58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14064u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00164000u < 16384u) { entry = entries_0019[(t - 0x00164000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00166A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166A70u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00166A70u) [[unlikely]] return; }
L_00166A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166A78u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x00166A78u) [[unlikely]] return; }
L_00166A78:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 6320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166A8Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00166A8Cu) [[unlikely]] return; }
L_00166A8C:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u - 256u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166AB0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00166AB0u) [[unlikely]] return; }
L_00166AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166ACCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166ACCu) [[unlikely]] return; }
L_00166ACC:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166AD8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0019(c, 245u, depth + 1u); else { c.pc = 0x00166E80u; return; } if (c.pc != 0x00166AD8u) [[unlikely]] return; }
L_00166AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166E58; } }
L_00166AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166AE8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00166AE8u) [[unlikely]] return; }
L_00166AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166AF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x00166AF0u) [[unlikely]] return; }
L_00166AF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 6320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B04u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166B04u) [[unlikely]] return; }
L_00166B04:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u - 256u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B28u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00166B28u) [[unlikely]] return; }
L_00166B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B44u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166B44u) [[unlikely]] return; }
L_00166B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B4Cu); c.f[12] = ld32((c.r[17].w[0] + 12u));  if (depth < kMaxDepth) unit_0019(c, 251u, depth + 1u); else { c.pc = 0x00167000u; return; } if (c.pc != 0x00166B4Cu) [[unlikely]] return; }
L_00166B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166E58; } }
    c.budget -= 1;
L_00166B58:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00166E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B68u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00166B68u) [[unlikely]] return; }
L_00166B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B70u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x00166B70u) [[unlikely]] return; }
L_00166B70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 1600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166B84u) [[unlikely]] return; }
L_00166B84:
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1840u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[5], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166BACu); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00166BACu) [[unlikely]] return; }
L_00166BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166E58; } }
    c.budget -= 1;
L_00166BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166BC0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00166BC0u) [[unlikely]] return; }
L_00166BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166BC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x00166BC8u) [[unlikely]] return; }
L_00166BC8:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 6080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166BDCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00166BDCu) [[unlikely]] return; }
L_00166BDC:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 9u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C00u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00166C00u) [[unlikely]] return; }
L_00166C00:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C0Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));  if (depth < kMaxDepth) unit_0019(c, 257u, depth + 1u); else { c.pc = 0x001670C0u; return; } if (c.pc != 0x00166C0Cu) [[unlikely]] return; }
L_00166C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166E58; } }
    c.budget -= 1;
L_00166C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C20u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00166C20u) [[unlikely]] return; }
L_00166C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x00166C28u) [[unlikely]] return; }
L_00166C28:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_00166E00; } }
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 6560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C54u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166C54u) [[unlikely]] return; }
L_00166C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C5Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00166C5Cu) [[unlikely]] return; }
L_00166C5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 28u);  if (t) { goto L_00166C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C70u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00166C70u) [[unlikely]] return; }
L_00166C70:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C80u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166C80u) [[unlikely]] return; }
L_00166C80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 6800u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166C94u) [[unlikely]] return; }
L_00166C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C9Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00166C9Cu) [[unlikely]] return; }
L_00166C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166CA4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00166CA4u) [[unlikely]] return; }
L_00166CA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 28u);  if (t) { goto L_00166CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166CBCu);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00166CBCu) [[unlikely]] return; }
L_00166CBC:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166CCCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166CCCu) [[unlikely]] return; }
L_00166CCC:
    c.budget -= 1;
L_00166CD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 7040u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166CE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166CE4u) [[unlikely]] return; }
L_00166CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166CECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00166CECu) [[unlikely]] return; }
L_00166CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166CF4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00166CF4u) [[unlikely]] return; }
L_00166CF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00166D20; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D14u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166D14u) [[unlikely]] return; }
L_00166D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166D38; } }
    c.budget -= 1;
L_00166D20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D34u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166D34u) [[unlikely]] return; }
L_00166D34:
    c.budget -= 1;
L_00166D38:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D44u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00166D44u) [[unlikely]] return; }
L_00166D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D4Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00166D4Cu) [[unlikely]] return; }
L_00166D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00166D54u) [[unlikely]] return; }
L_00166D54:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D68u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166D68u) [[unlikely]] return; }
L_00166D68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_00166D90; } }
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 9440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166D84u) [[unlikely]] return; }
L_00166D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166DA8; } }
    c.budget -= 1;
L_00166D90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 9200u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166DA4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166DA4u) [[unlikely]] return; }
L_00166DA4:
    c.budget -= 1;
L_00166DA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166DBCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166DBCu) [[unlikely]] return; }
L_00166DBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_00166DE0; } }
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 9200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166DD8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166DD8u) [[unlikely]] return; }
L_00166DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166DF8; } }
L_00166DE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 9440u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166DF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00166DF4u) [[unlikely]] return; }
L_00166DF4:
    c.budget -= 1;
L_00166DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166E00u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00166E00u) [[unlikely]] return; }
L_00166E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166E14u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00166E14u) [[unlikely]] return; }
L_00166E14:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00166E40; } }
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 7760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166E34u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00166E34u) [[unlikely]] return; }
L_00166E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166E58; } }
    c.budget -= 1;
L_00166E40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[4].w[0] + 9920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166E54u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00166E54u) [[unlikely]] return; }
L_00166E54:
    c.budget -= 1;
L_00166E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00166E80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 640u);
    set32(c.r[7], c.r[16].w[0] >> 31);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[6].w[0] + 14368u);
    set32(c.r[3], c.r[3].w[0] + 14370u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].d[0] = c.hi.d[0];
    c.f[15] = c.f[14];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166F50u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00166F50u) [[unlikely]] return; }
L_00166F50:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166F60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00166F60u) [[unlikely]] return; }
L_00166F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166F74u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00166F74u) [[unlikely]] return; }
L_00166F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14368u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14370u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166FDCu); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00166FDCu) [[unlikely]] return; }
L_00166FDC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166FECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00166FECu) [[unlikely]] return; }
L_00166FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00167000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    set32(c.r[2], c.r[2].w[0] - 640u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[14] = c.f[13];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016705Cu); c.f[15] = c.f[13];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0016705Cu) [[unlikely]] return; }
L_0016705C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016706Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0016706Cu) [[unlikely]] return; }
L_0016706C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167080u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00167080u) [[unlikely]] return; }
L_00167080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[14] = c.f[13];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001670A4u); c.f[15] = c.f[13];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001670A4u) [[unlikely]] return; }
L_001670A4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001670B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001670B4u) [[unlikely]] return; }
L_001670B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001670C0:
    c.f[0] = 0u;
    set32(c.r[29], c.r[29].w[0] - 32u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001672A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(0u));
    c.f[0] = c.r[3].w[0];
    st8((c.r[29].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.f[1] = fp::mul(c.f[0], c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[29].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00167110; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00167128; } }
L_00167110:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_00167128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[1].w[0] + 20248u), 0u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[29].w[0] + 28u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00167250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001671F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00167190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001672A8; } }
    c.budget -= 1;
L_00167190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 14512u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001671BCu); st32((c.r[1].w[0] + 20264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 396u, depth + 1u); else { c.pc = 0x0029B090u; return; } if (c.pc != 0x001671BCu) [[unlikely]] return; }
L_001671BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 14432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 14516u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001671E8u); st32((c.r[1].w[0] + 20264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 396u, depth + 1u); else { c.pc = 0x0029B090u; return; } if (c.pc != 0x001671E8u) [[unlikely]] return; }
L_001671E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001672A8; } }
L_001671F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 14512u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016721Cu); st32((c.r[1].w[0] + 20264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 396u, depth + 1u); else { c.pc = 0x0029B090u; return; } if (c.pc != 0x0016721Cu) [[unlikely]] return; }
L_0016721C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 14464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 14516u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167248u); st32((c.r[1].w[0] + 20264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 396u, depth + 1u); else { c.pc = 0x0029B090u; return; } if (c.pc != 0x00167248u) [[unlikely]] return; }
L_00167248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001672A8; } }
L_00167250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 14480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 14512u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016727Cu); st32((c.r[1].w[0] + 20264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 396u, depth + 1u); else { c.pc = 0x0029B090u; return; } if (c.pc != 0x0016727Cu) [[unlikely]] return; }
L_0016727C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 14496u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 14516u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001672A8u); st32((c.r[1].w[0] + 20264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 396u, depth + 1u); else { c.pc = 0x0029B090u; return; } if (c.pc != 0x001672A8u) [[unlikely]] return; }
L_001672A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001672C0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[7], c.r[7].w[0] + 18080u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + 304u);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_00167310; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00167300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00167410; } }
    c.budget -= 1;
L_00167300:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 4;
L_00167310:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00167350; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3A840000u);
    c.r[5].d[0] = c.r[5].d[0] | 25950ull;
    set32(c.r[6], 0u + 990u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[5], c.r[6].w[0] - c.r[7].w[0]);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00167390; } }
L_00167350:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00167390; } }
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[6].d[0] = c.r[5].d[0] | 55050ull;
    c.f[1] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 8u), c.f[1]);  if (t) { goto L_00167390; } }
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 2;
L_00167390:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);  if (t) { goto L_001673D8; } }
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00167410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[1]);  if (t) { goto L_00167410; } }
    c.budget -= 1;
L_001673D8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);  if (t) { goto L_00167410; } }
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00167410; } }
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_00167410:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00167420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 45u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167458u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00167458u) [[unlikely]] return; }
L_00167458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167460u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x00167460u) [[unlikely]] return; }
L_00167460:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016748Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0016748Cu) [[unlikely]] return; }
L_0016748C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001674B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_00167598; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00167568; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00167500; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001674E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001675A0; } }
    c.budget -= 1;
L_001674E8:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 20u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 6;
L_00167500:
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_001675A0; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00167550; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001675A0; } }
    c.budget -= 1;
L_00167550:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_001675A0; } }
L_00167568:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_001675A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_001675A0; } }
L_00167598:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001675A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001675B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001675C0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001675C0u) [[unlikely]] return; }
L_001675C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 10864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001675D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x001675D4u) [[unlikely]] return; }
L_001675D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00167648; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10384u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E700000u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016763Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0016763Cu) [[unlikely]] return; }
L_0016763C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00167660; } }
    c.budget -= 1;
L_00167648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 10384u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016765Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0016765Cu) [[unlikely]] return; }
L_0016765C:
    c.budget -= 1;
L_00167660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 10624u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167674u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00167674u) [[unlikely]] return; }
L_00167674:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00167680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001676B0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001676B0u) [[unlikely]] return; }
L_001676B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001676F8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 30480u);
    set32(c.r[3], c.r[3].w[0] + 30736u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_001676F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00167710:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 16064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00164000u < 16384u) { entry = entries_0019[(t - 0x00164000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00167730:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[8], c.r[4].w[0] + 304u);
    set32(c.r[5], c.r[5].w[0] + 14528u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 15920u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_00167790:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001677B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001677C8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001677C8; } }
L_001677B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001677E0; } }
L_001677C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 769u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001677E0; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001677E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001677F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00167800:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00167810:
    set32(c.r[29], c.r[29].w[0] - 848u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    c.f[0] = ld32((c.r[7].w[0] + 240u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 244u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 248u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 20;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_00167918; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001678B0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00167880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00167C60; } }
    c.budget -= 1;
L_00167880:
    c.f[1] = ld32((c.r[7].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00167C60; } }
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001678A8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0019(c, 301u, depth + 1u); else { c.pc = 0x00167CD0u; return; } if (c.pc != 0x001678A8u) [[unlikely]] return; }
L_001678A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00167C60; } }
L_001678B0:
    c.f[1] = ld32((c.r[7].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001678D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00167C60; } }
L_001678D0:
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001678F8; } }
    c.budget -= 1;
L_001678E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001678F0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 300u, depth + 1u); else { c.pc = 0x00167C90u; return; } if (c.pc != 0x001678F0u) [[unlikely]] return; }
L_001678F0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001678F8:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001678E0u | kUnwind; return; } goto L_001678E0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167910u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0019(c, 301u, depth + 1u); else { c.pc = 0x00167CD0u; return; } if (c.pc != 0x00167910u) [[unlikely]] return; }
L_00167910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00167C60; } }
L_00167918:
    c.f[1] = ld32((c.r[7].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00167938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00167970; } }
L_00167938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00167958; } }
L_00167940:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167950u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 300u, depth + 1u); else { c.pc = 0x00167C90u; return; } if (c.pc != 0x00167950u) [[unlikely]] return; }
L_00167950:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00167958:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00167940u | kUnwind; return; } goto L_00167940; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167970u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0019(c, 301u, depth + 1u); else { c.pc = 0x00167CD0u; return; } if (c.pc != 0x00167970u) [[unlikely]] return; }
L_00167970:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_001679F8; } }
    c.budget -= 1;
L_00167980:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    set32(c.r[2], c.r[17].w[0] << 4);
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 752u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 756u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 760u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 96u));
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 688u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 100u));
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 692u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 696u), c.f[0]);
    c.budget -= 30;
L_001679F8:
    c.r[1].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 752u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00167980u | kUnwind; return; } goto L_00167980; } }
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167A10u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 393u, depth + 1u); else { c.pc = 0x0020F7F0u; return; } if (c.pc != 0x00167A10u) [[unlikely]] return; }
L_00167A10:
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167A20u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 393u, depth + 1u); else { c.pc = 0x0020F7F0u; return; } if (c.pc != 0x00167A20u) [[unlikely]] return; }
L_00167A20:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00167B88; } }
    c.budget -= 1;
L_00167A30:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00167B78; } }
    c.budget -= 1;
L_00167A40:
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.f[4] = ld32((c.r[3].w[0] + 432u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[29].w[0] + 832u);
    c.f[3] = ld32((c.r[3].w[0] + 448u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 464u));
    c.f[1] = ld32((c.r[3].w[0] + 480u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 832u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 436u));
    c.f[3] = ld32((c.r[3].w[0] + 452u));
    c.f[2] = ld32((c.r[3].w[0] + 468u));
    c.f[1] = ld32((c.r[3].w[0] + 484u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 836u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 440u));
    c.f[3] = ld32((c.r[3].w[0] + 456u));
    c.f[2] = ld32((c.r[3].w[0] + 472u));
    c.f[1] = ld32((c.r[3].w[0] + 488u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 840u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 176u));
    c.f[3] = ld32((c.r[3].w[0] + 192u));
    c.f[2] = ld32((c.r[3].w[0] + 208u));
    c.f[1] = ld32((c.r[3].w[0] + 224u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 816u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 180u));
    c.f[3] = ld32((c.r[3].w[0] + 196u));
    c.f[2] = ld32((c.r[3].w[0] + 212u));
    c.f[1] = ld32((c.r[3].w[0] + 228u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 820u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 184u));
    c.f[3] = ld32((c.r[3].w[0] + 200u));
    c.f[2] = ld32((c.r[3].w[0] + 216u));
    c.f[1] = ld32((c.r[3].w[0] + 232u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 76;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167B70u); st32((c.r[29].w[0] + 824u), c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00167D40u; return; } if (c.pc != 0x00167B70u) [[unlikely]] return; }
L_00167B70:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00167B78:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00167A40u | kUnwind; return; } goto L_00167A40; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00167B88:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00167A30u | kUnwind; return; } goto L_00167A30; } }
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167BA0u); set32(c.r[5], c.r[29].w[0] + 832u);  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00167D40u; return; } if (c.pc != 0x00167BA0u) [[unlikely]] return; }
L_00167BA0:
    set32(c.r[2], c.r[20].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[7]);
    vu::mr32(c.vu0, 15u, 6u, 0u);
    vu::move(c.vu0, 1u, 7u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 6u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mr32(c.vu0, 15u, 4u, 5u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 19472u);
    st32((c.r[1].w[0] + 20240u), c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 15936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[1].w[0] + 20244u), c.r[4].w[0]);
    set32(c.r[3], 0u + 32u);
    set32(c.r[7], ld32((c.r[19].w[0] + 160u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[1].w[0] + 20272u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20296u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167C48u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x00167C48u) [[unlikely]] return; }
L_00167C48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167C5Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 120u, depth + 1u); else { c.pc = 0x0029DF90u; return; } if (c.pc != 0x00167C5Cu) [[unlikely]] return; }
L_00167C5C:
    c.budget -= 1;
L_00167C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 848u);  c.pc = t; return; }
L_00167C90:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] + 96u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 96u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00167CD0:
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[3].w[0] + 32u);
    set32(c.r[6], c.r[3].w[0] + 96u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[8].w[0] + 192u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);
    vu::move(c.vu0, 1u, 7u, 0u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 8u, 7u, c.vu0.vf[8].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[9].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[9].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[9].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[9].w[3]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[9]);  c.pc = t; return; }
L_00167D40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 19472u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::move(c.vu0, 1u, 4u, 0u);
    vu::move(c.vu0, 1u, 5u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00167D70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[1].d[0] = c.r[3].sd[0] < 77ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00167E30; } }
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 16080u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00167E30; } }
L_00167DC0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167DD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00167DD0u) [[unlikely]] return; }
L_00167DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00167E18; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 32336u);
    set32(c.r[3], c.r[3].w[0] + 32592u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_00167E18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00167DC0u | kUnwind; return; } goto L_00167DC0; } }
    c.budget -= 1;
L_00167E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00167E50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 17312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00164000u < 16384u) { entry = entries_0019[(t - 0x00164000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00167E70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 16080u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] << 4);
    st32((c.r[4].w[0] + 320u), 0u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 324u), 0u);
    st32((c.r[4].w[0] + 328u), 0u);
    st32((c.r[4].w[0] + 336u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[4].w[0] + 340u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[4].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 312u), c.f[0]);  c.pc = t; return; }
L_00167ED0:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00167EF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00167F28; } }
    c.budget -= 1;
L_00167EF8:
    set32(c.r[3], ld32((c.r[6].w[0] + 1236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00167F28; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00167F28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00167F28; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00167F28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00167F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00167F40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00167F50:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.f[1] = ld32((c.r[1].w[0] + 19712u));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 19720u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 272u), c.f[1]);
    st32((c.r[29].w[0] + 276u), 0u);
    st32((c.r[29].w[0] + 260u), 0u);
    st32((c.r[29].w[0] + 256u), 0u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167FA8u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x00167FA8u) [[unlikely]] return; }
L_00167FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167FB0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x00167FB0u) [[unlikely]] return; }
L_00167FB0:
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00167FD8; } }
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00167FE8; } }
    c.budget -= 1;
L_00167FD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_00167FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167FF0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00167FF0u) [[unlikely]] return; }
L_00167FF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x410A0000u);  if (t) { [[clang::musttail]] return unit_001A(c, 2u, depth); } }
    [[clang::musttail]] return unit_001A(c, 1u, depth);
}

}
