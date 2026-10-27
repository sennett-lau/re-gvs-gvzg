#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0,
    13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0,
    91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0,
    100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 299, 0,
};

void unit_008B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0032C000;
    case 2u: goto L_0032C03C;
    case 3u: goto L_0032C050;
    case 4u: goto L_0032C058;
    case 5u: goto L_0032C068;
    case 6u: goto L_0032C080;
    case 7u: goto L_0032C09C;
    case 8u: goto L_0032C0C8;
    case 9u: goto L_0032C0D0;
    case 10u: goto L_0032C0D8;
    case 11u: goto L_0032C0F0;
    case 12u: goto L_0032C0F8;
    case 13u: goto L_0032C100;
    case 14u: goto L_0032C110;
    case 15u: goto L_0032C11C;
    case 16u: goto L_0032C124;
    case 17u: goto L_0032C12C;
    case 18u: goto L_0032C138;
    case 19u: goto L_0032C150;
    case 20u: goto L_0032C190;
    case 21u: goto L_0032C198;
    case 22u: goto L_0032C1B0;
    case 23u: goto L_0032C1C0;
    case 24u: goto L_0032C1D0;
    case 25u: goto L_0032C1EC;
    case 26u: goto L_0032C200;
    case 27u: goto L_0032C21C;
    case 28u: goto L_0032C230;
    case 29u: goto L_0032C278;
    case 30u: goto L_0032C288;
    case 31u: goto L_0032C290;
    case 32u: goto L_0032C298;
    case 33u: goto L_0032C2A0;
    case 34u: goto L_0032C2AC;
    case 35u: goto L_0032C2B4;
    case 36u: goto L_0032C2BC;
    case 37u: goto L_0032C2C4;
    case 38u: goto L_0032C2D8;
    case 39u: goto L_0032C2E4;
    case 40u: goto L_0032C320;
    case 41u: goto L_0032C358;
    case 42u: goto L_0032C368;
    case 43u: goto L_0032C370;
    case 44u: goto L_0032C380;
    case 45u: goto L_0032C390;
    case 46u: goto L_0032C398;
    case 47u: goto L_0032C3B0;
    case 48u: goto L_0032C3C4;
    case 49u: goto L_0032C3CC;
    case 50u: goto L_0032C3D4;
    case 51u: goto L_0032C3E0;
    case 52u: goto L_0032C418;
    case 53u: goto L_0032C42C;
    case 54u: goto L_0032C438;
    case 55u: goto L_0032C470;
    case 56u: goto L_0032C494;
    case 57u: goto L_0032C49C;
    case 58u: goto L_0032C4AC;
    case 59u: goto L_0032C4BC;
    case 60u: goto L_0032C4CC;
    case 61u: goto L_0032C4E8;
    case 62u: goto L_0032C500;
    case 63u: goto L_0032C54C;
    case 64u: goto L_0032C554;
    case 65u: goto L_0032C570;
    case 66u: goto L_0032C594;
    case 67u: goto L_0032C59C;
    case 68u: goto L_0032C5A8;
    case 69u: goto L_0032C5C0;
    case 70u: goto L_0032C5D4;
    case 71u: goto L_0032C5DC;
    case 72u: goto L_0032C610;
    case 73u: goto L_0032C640;
    case 74u: goto L_0032C648;
    case 75u: goto L_0032C654;
    case 76u: goto L_0032C66C;
    case 77u: goto L_0032C674;
    case 78u: goto L_0032C6A0;
    case 79u: goto L_0032C6B8;
    case 80u: goto L_0032C6C4;
    case 81u: goto L_0032C6D0;
    case 82u: goto L_0032C6F0;
    case 83u: goto L_0032C704;
    case 84u: goto L_0032C720;
    case 85u: goto L_0032C790;
    case 86u: goto L_0032C7A4;
    case 87u: goto L_0032C7C0;
    case 88u: goto L_0032C7DC;
    case 89u: goto L_0032C7E8;
    case 90u: goto L_0032C7F4;
    case 91u: goto L_0032C800;
    case 92u: goto L_0032C80C;
    case 93u: goto L_0032C818;
    case 94u: goto L_0032C824;
    case 95u: goto L_0032C830;
    case 96u: goto L_0032C83C;
    case 97u: goto L_0032C848;
    case 98u: goto L_0032C860;
    case 99u: goto L_0032C874;
    case 100u: goto L_0032C880;
    case 101u: goto L_0032C88C;
    case 102u: goto L_0032C898;
    case 103u: goto L_0032C8B0;
    case 104u: goto L_0032C998;
    case 105u: goto L_0032C9A0;
    case 106u: goto L_0032C9A8;
    case 107u: goto L_0032C9B0;
    case 108u: goto L_0032C9B8;
    case 109u: goto L_0032C9E8;
    case 110u: goto L_0032CA4C;
    case 111u: goto L_0032CA80;
    case 112u: goto L_0032CA88;
    case 113u: goto L_0032CA90;
    case 114u: goto L_0032CA98;
    case 115u: goto L_0032CAA0;
    case 116u: goto L_0032CAA8;
    case 117u: goto L_0032CAB0;
    case 118u: goto L_0032CAB8;
    case 119u: goto L_0032CAF8;
    case 120u: goto L_0032CB1C;
    case 121u: goto L_0032CB58;
    case 122u: goto L_0032CB98;
    case 123u: goto L_0032CBC8;
    case 124u: goto L_0032CC04;
    case 125u: goto L_0032CC20;
    case 126u: goto L_0032CD64;
    case 127u: goto L_0032CD90;
    case 128u: goto L_0032D034;
    case 129u: goto L_0032D060;
    case 130u: goto L_0032D110;
    case 131u: goto L_0032D1B0;
    case 132u: goto L_0032D250;
    case 133u: goto L_0032D298;
    case 134u: goto L_0032D2D0;
    case 135u: goto L_0032D318;
    case 136u: goto L_0032D390;
    case 137u: goto L_0032D3E8;
    case 138u: goto L_0032D460;
    case 139u: goto L_0032D498;
    case 140u: goto L_0032D4C0;
    case 141u: goto L_0032D4F8;
    case 142u: goto L_0032D768;
    case 143u: goto L_0032D790;
    case 144u: goto L_0032D820;
    case 145u: goto L_0032D840;
    case 146u: goto L_0032D888;
    case 147u: goto L_0032D940;
    case 148u: goto L_0032D9A8;
    case 149u: goto L_0032DA8C;
    case 150u: goto L_0032DAC0;
    case 151u: goto L_0032DB28;
    case 152u: goto L_0032DC38;
    case 153u: goto L_0032DC60;
    case 154u: goto L_0032DCD0;
    case 155u: goto L_0032DCE8;
    case 156u: goto L_0032DCF8;
    case 157u: goto L_0032DD2C;
    case 158u: goto L_0032DD70;
    case 159u: goto L_0032DE9C;
    case 160u: goto L_0032DEE0;
    case 161u: goto L_0032DF0C;
    case 162u: goto L_0032DF24;
    case 163u: goto L_0032DF34;
    case 164u: goto L_0032DF74;
    case 165u: goto L_0032E02C;
    case 166u: goto L_0032E110;
    case 167u: goto L_0032E144;
    case 168u: goto L_0032E14C;
    case 169u: goto L_0032E158;
    case 170u: goto L_0032E170;
    case 171u: goto L_0032E1A0;
    case 172u: goto L_0032E1B0;
    case 173u: goto L_0032E1C0;
    case 174u: goto L_0032E1D0;
    case 175u: goto L_0032E1E0;
    case 176u: goto L_0032E1F0;
    case 177u: goto L_0032E208;
    case 178u: goto L_0032E258;
    case 179u: goto L_0032E280;
    case 180u: goto L_0032E2B8;
    case 181u: goto L_0032E368;
    case 182u: goto L_0032E3A8;
    case 183u: goto L_0032E458;
    case 184u: goto L_0032E500;
    case 185u: goto L_0032E538;
    case 186u: goto L_0032E568;
    case 187u: goto L_0032E640;
    case 188u: goto L_0032E670;
    case 189u: goto L_0032E6AC;
    case 190u: goto L_0032E6DC;
    case 191u: goto L_0032E718;
    case 192u: goto L_0032E798;
    case 193u: goto L_0032E830;
    case 194u: goto L_0032E838;
    case 195u: goto L_0032E8CC;
    case 196u: goto L_0032E958;
    case 197u: goto L_0032E96C;
    case 198u: goto L_0032E9D0;
    case 199u: goto L_0032EA40;
    case 200u: goto L_0032EA60;
    case 201u: goto L_0032EAE0;
    case 202u: goto L_0032EAE8;
    case 203u: goto L_0032EB34;
    case 204u: goto L_0032EBA8;
    case 205u: goto L_0032EBB0;
    case 206u: goto L_0032EBF0;
    case 207u: goto L_0032EC30;
    case 208u: goto L_0032EC80;
    case 209u: goto L_0032ECA8;
    case 210u: goto L_0032ECC4;
    case 211u: goto L_0032ED00;
    case 212u: goto L_0032ED58;
    case 213u: goto L_0032ED70;
    case 214u: goto L_0032EDA8;
    case 215u: goto L_0032EDC0;
    case 216u: goto L_0032EE30;
    case 217u: goto L_0032EEB0;
    case 218u: goto L_0032EEC0;
    case 219u: goto L_0032EED0;
    case 220u: goto L_0032EEE0;
    case 221u: goto L_0032EF00;
    case 222u: goto L_0032F060;
    case 223u: goto L_0032F098;
    case 224u: goto L_0032F0A4;
    case 225u: goto L_0032F0B0;
    case 226u: goto L_0032F0E0;
    case 227u: goto L_0032F128;
    case 228u: goto L_0032F134;
    case 229u: goto L_0032F178;
    case 230u: goto L_0032F1E8;
    case 231u: goto L_0032F270;
    case 232u: goto L_0032F29C;
    case 233u: goto L_0032F2C0;
    case 234u: goto L_0032F2D0;
    case 235u: goto L_0032F320;
    case 236u: goto L_0032F350;
    case 237u: goto L_0032F360;
    case 238u: goto L_0032F370;
    case 239u: goto L_0032F384;
    case 240u: goto L_0032F3B0;
    case 241u: goto L_0032F400;
    case 242u: goto L_0032F420;
    case 243u: goto L_0032F460;
    case 244u: goto L_0032F4D4;
    case 245u: goto L_0032F4E0;
    case 246u: goto L_0032F4F0;
    case 247u: goto L_0032F518;
    case 248u: goto L_0032F530;
    case 249u: goto L_0032F538;
    case 250u: goto L_0032F548;
    case 251u: goto L_0032F570;
    case 252u: goto L_0032F588;
    case 253u: goto L_0032F590;
    case 254u: goto L_0032F5A0;
    case 255u: goto L_0032F5C8;
    case 256u: goto L_0032F5E0;
    case 257u: goto L_0032F640;
    case 258u: goto L_0032F65C;
    case 259u: goto L_0032F670;
    case 260u: goto L_0032F6C8;
    case 261u: goto L_0032F6F8;
    case 262u: goto L_0032F708;
    case 263u: goto L_0032F740;
    case 264u: goto L_0032F784;
    case 265u: goto L_0032F7C8;
    case 266u: goto L_0032F7E0;
    case 267u: goto L_0032F81C;
    case 268u: goto L_0032F890;
    case 269u: goto L_0032F8A0;
    case 270u: goto L_0032F908;
    case 271u: goto L_0032F938;
    case 272u: goto L_0032F988;
    case 273u: goto L_0032F99C;
    case 274u: goto L_0032FA0C;
    case 275u: goto L_0032FA14;
    case 276u: goto L_0032FA54;
    case 277u: goto L_0032FAD0;
    case 278u: goto L_0032FB30;
    case 279u: goto L_0032FB70;
    case 280u: goto L_0032FB94;
    case 281u: goto L_0032FBE4;
    case 282u: goto L_0032FBEC;
    case 283u: goto L_0032FBF4;
    case 284u: goto L_0032FC10;
    case 285u: goto L_0032FC60;
    case 286u: goto L_0032FC90;
    case 287u: goto L_0032FCC4;
    case 288u: goto L_0032FCD4;
    case 289u: goto L_0032FCE4;
    case 290u: goto L_0032FD30;
    case 291u: goto L_0032FD80;
    case 292u: goto L_0032FD90;
    case 293u: goto L_0032FDB0;
    case 294u: goto L_0032FE70;
    case 295u: goto L_0032FE94;
    case 296u: goto L_0032FEBC;
    case 297u: goto L_0032FF54;
    case 298u: goto L_0032FFF4;
    case 299u: goto L_0032FFF8;
    default: bad_entry(c, 0x0032C000u); return;
    }
L_0032C000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] >> 16);
    set32(c.r[16], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C03Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_008A(c, 44u, depth + 1u); else { c.pc = 0x00328D70u; return; } if (c.pc != 0x0032C03Cu) [[unlikely]] return; }
L_0032C03C:
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C050u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 40u, depth + 1u); else { c.pc = 0x0012CB90u; return; } if (c.pc != 0x0032C050u) [[unlikely]] return; }
L_0032C050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C058u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000B(c, 33u, depth + 1u); else { c.pc = 0x0012CA70u; return; } if (c.pc != 0x0032C058u) [[unlikely]] return; }
L_0032C058:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C068u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012B970u; return; } if (c.pc != 0x0032C068u) [[unlikely]] return; }
L_0032C068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032C080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x016F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C09Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_008B(c, 170u, depth + 1u); else { c.pc = 0x0032E170u; return; } if (c.pc != 0x0032C09Cu) [[unlikely]] return; }
L_0032C09C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01630000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    st32((c.r[1].w[0] - 6544u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 6544u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C0C8u); st32((c.r[1].w[0] - 6540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 19u, depth + 1u); else { c.pc = 0x0032C150u; return; } if (c.pc != 0x0032C0C8u) [[unlikely]] return; }
L_0032C0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C0D0u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x0032C0D0u) [[unlikely]] return; }
L_0032C0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C0D8u);  if (depth < kMaxDepth) unit_000A(c, 248u, depth + 1u); else { c.pc = 0x0012B8F0u; return; } if (c.pc != 0x0032C0D8u) [[unlikely]] return; }
L_0032C0D8:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00EC0000u);
    set32(c.r[6], 0u + 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C0F0u); c.r[7].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000B(c, 27u, depth + 1u); else { c.pc = 0x0012C8A0u; return; } if (c.pc != 0x0032C0F0u) [[unlikely]] return; }
L_0032C0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C0F8u);  if (depth < kMaxDepth) unit_008A(c, 6u, depth + 1u); else { c.pc = 0x00328100u; return; } if (c.pc != 0x0032C0F8u) [[unlikely]] return; }
L_0032C0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C100u);  if (depth < kMaxDepth) unit_00AA(c, 31u, depth + 1u); else { c.pc = 0x003A83E0u; return; } if (c.pc != 0x0032C100u) [[unlikely]] return; }
L_0032C100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C110u); set32(c.r[4], c.r[4].w[0] - 4224u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x0032C110u) [[unlikely]] return; }
L_0032C110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C11Cu); c.r[4].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_00AA(c, 28u, depth + 1u); else { c.pc = 0x003A82C0u; return; } if (c.pc != 0x0032C11Cu) [[unlikely]] return; }
L_0032C11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C124u);  if (depth < kMaxDepth) unit_00AA(c, 32u, depth + 1u); else { c.pc = 0x003A83F0u; return; } if (c.pc != 0x0032C124u) [[unlikely]] return; }
L_0032C124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C12Cu);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x0032C12Cu) [[unlikely]] return; }
L_0032C12C:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C138u); c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C138u) [[unlikely]] return; }
L_0032C138:
    st32((c.r[28].w[0] - 22680u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[2], c.r[2].w[0] - 6544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[28].w[0] - 22656u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 22660u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22656u)));
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C190u); st32((c.r[28].w[0] - 22664u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 87u, depth + 1u); else { c.pc = 0x0032C7C0u; return; } if (c.pc != 0x0032C190u) [[unlikely]] return; }
L_0032C190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C198u);  if (depth < kMaxDepth) unit_008B(c, 166u, depth + 1u); else { c.pc = 0x0032E110u; return; } if (c.pc != 0x0032C198u) [[unlikely]] return; }
L_0032C198:
    st32((c.r[28].w[0] - 22680u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C1B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 15936u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FEB0u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 414u, depth); }
L_0032C1C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22652u), c.r[3].w[0]);  c.pc = t; return; }
L_0032C1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22652u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032C1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C1ECu);  if (depth < kMaxDepth) unit_006B(c, 161u, depth + 1u); else { c.pc = 0x002ADFF0u; return; } if (c.pc != 0x0032C1ECu) [[unlikely]] return; }
L_0032C1EC:
    c.budget -= 1;
L_0032C1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22652u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032C220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C21Cu);  if (depth < kMaxDepth) unit_006B(c, 165u, depth + 1u); else { c.pc = 0x002AE0F0u; return; } if (c.pc != 0x0032C21Cu) [[unlikely]] return; }
L_0032C21C:
    c.budget -= 1;
L_0032C220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u - 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[1].w[0] - 6544u), c.r[18].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 6544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C278u); st32((c.r[1].w[0] - 6540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 31u, depth + 1u); else { c.pc = 0x003A83E0u; return; } if (c.pc != 0x0032C278u) [[unlikely]] return; }
L_0032C278:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C288u); set32(c.r[4], c.r[4].w[0] - 4224u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x0032C288u) [[unlikely]] return; }
L_0032C288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C290u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 28u, depth + 1u); else { c.pc = 0x003A82C0u; return; } if (c.pc != 0x0032C290u) [[unlikely]] return; }
L_0032C290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C298u);  if (depth < kMaxDepth) unit_00AA(c, 32u, depth + 1u); else { c.pc = 0x003A83F0u; return; } if (c.pc != 0x0032C298u) [[unlikely]] return; }
L_0032C298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2A0u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x0032C2A0u) [[unlikely]] return; }
L_0032C2A0:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2ACu); c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C2ACu) [[unlikely]] return; }
L_0032C2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2B4u);  if (depth < kMaxDepth) unit_008D(c, 322u, depth + 1u); else { c.pc = 0x003374B0u; return; } if (c.pc != 0x0032C2B4u) [[unlikely]] return; }
L_0032C2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2BCu);  if (depth < kMaxDepth) unit_00A2(c, 325u, depth + 1u); else { c.pc = 0x0038ACF0u; return; } if (c.pc != 0x0032C2BCu) [[unlikely]] return; }
L_0032C2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2C4u);  if (depth < kMaxDepth) unit_00A2(c, 308u, depth + 1u); else { c.pc = 0x0038AB30u; return; } if (c.pc != 0x0032C2C4u) [[unlikely]] return; }
L_0032C2C4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 254u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x0032C2D8u) [[unlikely]] return; }
L_0032C2D8:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2E4u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x0032C2E4u) [[unlikely]] return; }
L_0032C2E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5932u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5936u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5940u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032C320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st32((c.r[1].w[0] - 6544u), c.r[4].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 6544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C358u); st32((c.r[1].w[0] - 6540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 31u, depth + 1u); else { c.pc = 0x003A83E0u; return; } if (c.pc != 0x0032C358u) [[unlikely]] return; }
L_0032C358:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C368u); set32(c.r[4], c.r[4].w[0] - 4224u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x0032C368u) [[unlikely]] return; }
L_0032C368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C370u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 28u, depth + 1u); else { c.pc = 0x003A82C0u; return; } if (c.pc != 0x0032C370u) [[unlikely]] return; }
L_0032C370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032C380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C390u);  if (depth < kMaxDepth) unit_00AA(c, 38u, depth + 1u); else { c.pc = 0x003A8500u; return; } if (c.pc != 0x0032C390u) [[unlikely]] return; }
L_0032C390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C398u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x0032C398u) [[unlikely]] return; }
L_0032C398:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C3C4u); c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C3C4u) [[unlikely]] return; }
L_0032C3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C3CCu);  if (depth < kMaxDepth) unit_008D(c, 322u, depth + 1u); else { c.pc = 0x003374B0u; return; } if (c.pc != 0x0032C3CCu) [[unlikely]] return; }
L_0032C3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C3D4u);  if (depth < kMaxDepth) unit_00A2(c, 325u, depth + 1u); else { c.pc = 0x0038ACF0u; return; } if (c.pc != 0x0032C3D4u) [[unlikely]] return; }
L_0032C3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], c.r[28].w[0] - 23748u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C418u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 165u, depth + 1u); else { c.pc = 0x0012A180u; return; } if (c.pc != 0x0032C418u) [[unlikely]] return; }
L_0032C418:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 254u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C42Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x0032C42Cu) [[unlikely]] return; }
L_0032C42C:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C438u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x0032C438u) [[unlikely]] return; }
L_0032C438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5932u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5936u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5940u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032C470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C494u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 40u, depth + 1u); else { c.pc = 0x0032C320u; return; } if (c.pc != 0x0032C494u) [[unlikely]] return; }
L_0032C494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C49Cu);  if (depth < kMaxDepth) unit_00AA(c, 35u, depth + 1u); else { c.pc = 0x003A8420u; return; } if (c.pc != 0x0032C49Cu) [[unlikely]] return; }
L_0032C49C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4ACu); set32(c.r[4], c.r[4].w[0] - 15488u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0032C4ACu) [[unlikely]] return; }
L_0032C4AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4BCu); set32(c.r[4], c.r[4].w[0] - 15440u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0032C4BCu) [[unlikely]] return; }
L_0032C4BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    set32(c.r[4], 0u + 3145u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4CCu); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0032C4CCu) [[unlikely]] return; }
L_0032C4CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15392u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4E8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0032C4E8u) [[unlikely]] return; }
L_0032C4E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032C500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[4], c.r[4].w[0] - 6544u);
    set32(c.r[2], 0u - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] + 5936u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[28].w[0] - 22656u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 22660u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22656u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C54Cu); st32((c.r[28].w[0] - 22664u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 87u, depth + 1u); else { c.pc = 0x0032C7C0u; return; } if (c.pc != 0x0032C54Cu) [[unlikely]] return; }
L_0032C54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C554u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x0032C554u) [[unlikely]] return; }
L_0032C554:
    st32((c.r[28].w[0] - 22680u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C570:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 4216u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C594u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0032C594u) [[unlikely]] return; }
L_0032C594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C59Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_008C(c, 121u, depth + 1u); else { c.pc = 0x003320B0u; return; } if (c.pc != 0x0032C59Cu) [[unlikely]] return; }
L_0032C59C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 58u, depth + 1u); else { c.pc = 0x00108730u; return; } if (c.pc != 0x0032C5A8u) [[unlikely]] return; }
L_0032C5A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032C5E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5C0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 92u, depth + 1u); else { c.pc = 0x00108B38u; return; } if (c.pc != 0x0032C5C0u) [[unlikely]] return; }
L_0032C5C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 92u, depth + 1u); else { c.pc = 0x00108B38u; return; } if (c.pc != 0x0032C5D4u) [[unlikely]] return; }
L_0032C5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 79u, depth + 1u); else { c.pc = 0x001089B8u; return; } if (c.pc != 0x0032C5DCu) [[unlikely]] return; }
L_0032C5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032C5F0; } }
    c.budget -= 1;
L_0032C5E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032C5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0032C610:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4216u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C640u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0032C640u) [[unlikely]] return; }
L_0032C640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C648u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008C(c, 121u, depth + 1u); else { c.pc = 0x003320B0u; return; } if (c.pc != 0x0032C648u) [[unlikely]] return; }
L_0032C648:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C654u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 58u, depth + 1u); else { c.pc = 0x00108730u; return; } if (c.pc != 0x0032C654u) [[unlikely]] return; }
L_0032C654:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032C680; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C66Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 109u, depth + 1u); else { c.pc = 0x00108D70u; return; } if (c.pc != 0x0032C66Cu) [[unlikely]] return; }
L_0032C66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C674u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 79u, depth + 1u); else { c.pc = 0x001089B8u; return; } if (c.pc != 0x0032C674u) [[unlikely]] return; }
L_0032C674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032C688; } }
    c.budget -= 1;
L_0032C680:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0032C688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0032C6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 17u, depth + 1u); else { c.pc = 0x00280070u; return; } if (c.pc != 0x0032C6B8u) [[unlikely]] return; }
L_0032C6B8:
    st32((c.r[28].w[0] - 23924u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6C4u); set32(c.r[4], ld32((c.r[28].w[0] - 23924u)));  if (depth < kMaxDepth) unit_0060(c, 107u, depth + 1u); else { c.pc = 0x00280A38u; return; } if (c.pc != 0x0032C6C4u) [[unlikely]] return; }
L_0032C6C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23924u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6D0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 35u, depth + 1u); else { c.pc = 0x00280180u; return; } if (c.pc != 0x0032C6D0u) [[unlikely]] return; }
L_0032C6D0:
    set32(c.r[2], c.r[16].w[0] << 11);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032C6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C704u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x0032C704u) [[unlikely]] return; }
L_0032C704:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032C720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 36;
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    set32(c.r[8], c.r[5].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[3], c.r[5].w[0] - 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[8].d[0] | c.r[2].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[4].w[0] + 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x13000000u);
    st32((c.r[6].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51000000u);
    st32((c.r[6].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[6].w[0] + 16u), 0ull);
    st64((c.r[6].w[0] + 24u), 0ull);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22376u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032C798; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C790u); set32(c.r[5], c.r[6].w[0] + 16u);  if (depth < kMaxDepth) unit_006B(c, 158u, depth + 1u); else { c.pc = 0x002ADF30u; return; } if (c.pc != 0x0032C790u) [[unlikely]] return; }
L_0032C790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032C7A8; } }
L_0032C798:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C7A4u); set32(c.r[5], c.r[6].w[0] + 16u);  if (depth < kMaxDepth) unit_006B(c, 162u, depth + 1u); else { c.pc = 0x002AE030u; return; } if (c.pc != 0x0032C7A4u) [[unlikely]] return; }
L_0032C7A4:
    c.budget -= 1;
L_0032C7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 97u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st32((c.r[28].w[0] - 22640u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C7DCu); st32((c.r[28].w[0] - 22648u), 0u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C7DCu) [[unlikely]] return; }
L_0032C7DC:
    set32(c.r[4], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C7E8u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C7E8u) [[unlikely]] return; }
L_0032C7E8:
    set32(c.r[4], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C7F4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C7F4u) [[unlikely]] return; }
L_0032C7F4:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C800u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C800u) [[unlikely]] return; }
L_0032C800:
    set32(c.r[4], 0u + 109u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C80Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C80Cu) [[unlikely]] return; }
L_0032C80C:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C818u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032C818u) [[unlikely]] return; }
L_0032C818:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C824u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 129u, depth + 1u); else { c.pc = 0x0032D060u; return; } if (c.pc != 0x0032C824u) [[unlikely]] return; }
L_0032C824:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C830u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 127u, depth + 1u); else { c.pc = 0x0032CD90u; return; } if (c.pc != 0x0032C830u) [[unlikely]] return; }
L_0032C830:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C83Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 143u, depth + 1u); else { c.pc = 0x0032D790u; return; } if (c.pc != 0x0032C83Cu) [[unlikely]] return; }
L_0032C83C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C848u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 125u, depth + 1u); else { c.pc = 0x0032CC20u; return; } if (c.pc != 0x0032C848u) [[unlikely]] return; }
L_0032C848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C874u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 129u, depth + 1u); else { c.pc = 0x0032D060u; return; } if (c.pc != 0x0032C874u) [[unlikely]] return; }
L_0032C874:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C880u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 127u, depth + 1u); else { c.pc = 0x0032CD90u; return; } if (c.pc != 0x0032C880u) [[unlikely]] return; }
L_0032C880:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C88Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 143u, depth + 1u); else { c.pc = 0x0032D790u; return; } if (c.pc != 0x0032C88Cu) [[unlikely]] return; }
L_0032C88C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C898u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 125u, depth + 1u); else { c.pc = 0x0032CC20u; return; } if (c.pc != 0x0032C898u) [[unlikely]] return; }
L_0032C898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 99u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032CBD0; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 97u);  if (t) { goto L_0032CB98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032CB60; } }
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 96u);  if (t) { goto L_0032CB28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032CB00; } }
    set32(c.r[2], 0u + 95u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 108u);  if (t) { goto L_0032CA58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032C9F8; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032C9F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032CC08; } }
    set32(c.r[2], 0u + 109u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_0032C970; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032C958; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0032C958; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032C958; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032C958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CC08; } }
    c.budget -= 1;
L_0032C958:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0032CC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22668u), c.r[16].w[0]);  if (t) { goto L_0032CC08; } }
    c.budget -= 1;
L_0032C970:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0032C9B8; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0032C000u < 16384u) { entry = entries_008B[(t - 0x0032C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032C998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032C9B8; } }
L_0032C9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 28672u);  if (t) { goto L_0032C9B8; } }
L_0032C9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4096u);  if (t) { goto L_0032C9B8; } }
L_0032C9B0:
    set32(c.r[16], 0u + 12288u);
    c.budget -= 2;
L_0032C9B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[3].d[0] & 28672ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[2], 0u - 28673u);  if (t) { goto L_0032CC08; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C9E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 127u, depth + 1u); else { c.pc = 0x0032CD90u; return; } if (c.pc != 0x0032C9E8u) [[unlikely]] return; }
L_0032C9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CC08; } }
L_0032C9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22644u), c.r[16].w[0]);  if (t) { goto L_0032CC08; } }
L_0032C9F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0032CA10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull | 32768ull;  if (t) { goto L_0032CA18; } }
    c.budget -= 1;
L_0032CA10:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032CA18:
    set32(c.r[3], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0032CC08; } }
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 125u, depth + 1u); else { c.pc = 0x0032CC20u; return; } if (c.pc != 0x0032CA4Cu) [[unlikely]] return; }
L_0032CA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CC08; } }
    c.budget -= 1;
L_0032CA58:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0032CAC0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0032C000u < 16384u) { entry = entries_008B[(t - 0x0032C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032CA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0032CAC0; } }
L_0032CA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00280000u);  if (t) { goto L_0032CAC0; } }
L_0032CA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0032CAC0; } }
L_0032CA98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00300000u);  if (t) { goto L_0032CAC0; } }
L_0032CAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032CAC0; } }
L_0032CAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00380000u);  if (t) { goto L_0032CAC0; } }
L_0032CAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0032CAC0; } }
L_0032CAB8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 2;
L_0032CAC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFC70000u);  if (t) { goto L_0032CC08; } }
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CAF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 127u, depth + 1u); else { c.pc = 0x0032CD90u; return; } if (c.pc != 0x0032CAF8u) [[unlikely]] return; }
L_0032CAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CC08; } }
L_0032CB00:
    set32(c.r[2], ld32((c.r[28].w[0] - 22640u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0032CC08; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB1Cu); st32((c.r[28].w[0] - 22640u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008B(c, 127u, depth + 1u); else { c.pc = 0x0032CD90u; return; } if (c.pc != 0x0032CB1Cu) [[unlikely]] return; }
L_0032CB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CC08; } }
    c.budget -= 1;
L_0032CB28:
    set32(c.r[3], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[2], 0u - 256u);  if (t) { goto L_0032CC08; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 129u, depth + 1u); else { c.pc = 0x0032D060u; return; } if (c.pc != 0x0032CB58u) [[unlikely]] return; }
L_0032CB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CC08; } }
L_0032CB60:
    set32(c.r[3], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);  if (t) { goto L_0032CB98; } }
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 129u, depth + 1u); else { c.pc = 0x0032D060u; return; } if (c.pc != 0x0032CB98u) [[unlikely]] return; }
L_0032CB98:
    set32(c.r[3], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[3].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[2], 0u - 3073u);  if (t) { goto L_0032CC08; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 129u, depth + 1u); else { c.pc = 0x0032D060u; return; } if (c.pc != 0x0032CBC8u) [[unlikely]] return; }
L_0032CBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CC08; } }
L_0032CBD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);  if (t) { goto L_0032CBF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22636u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    c.budget -= 3;
L_0032CBF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 143u, depth + 1u); else { c.pc = 0x0032D790u; return; } if (c.pc != 0x0032CC04u) [[unlikely]] return; }
L_0032CC04:
    c.budget -= 1;
L_0032CC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 32768ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 20268u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[6], c.r[6].w[0] >> 5);
    set32(c.r[4], ld32((c.r[1].w[0] - 20280u)));
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 24;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[10].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_0032CC74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0032CC78; } }
L_0032CC74:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0032CC78:
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[16], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[9].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032CCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032CD78; } }
L_0032CCA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], c.r[2].w[0] - 3u);
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    set32(c.r[9], c.r[9].w[0] + 32u);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    set32(c.r[6], 0u + 14u);
    st64((c.r[9].w[0]), c.r[7].d[0]);
    st64((c.r[9].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[9], c.r[9].w[0] + 16u);  if (t) { goto L_0032CD28; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0032CD10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0032CCF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CD58; } }
L_0032CCF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19272u), c.r[10].d[0]);
    set32(c.r[3], 0u + 78u);
    st64((c.r[9].w[0]), c.r[10].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[9].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_0032CD58; } }
L_0032CD10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19264u), c.r[10].d[0]);
    set32(c.r[3], 0u + 79u);
    st64((c.r[9].w[0]), c.r[10].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[9].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_0032CD58; } }
L_0032CD28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19272u), c.r[10].d[0]);
    set32(c.r[5], 0u + 78u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], 0u + 79u);
    st64((c.r[1].w[0] - 19264u), c.r[10].d[0]);
    st64((c.r[9].w[0]), c.r[10].d[0]);
    st64((c.r[9].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    st64((c.r[9].w[0]), c.r[10].d[0]);
    st64((c.r[9].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 12;
L_0032CD58:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD64u); set32(c.r[6], c.r[9].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 84u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x0032CD64u) [[unlikely]] return; }
L_0032CD64:
    set32(c.r[3], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 5;
L_0032CD78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 255u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], ld32((c.r[28].w[0] - 22640u)));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_0032CDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 128u);  if (t) { goto L_0032CDD0; } }
    c.budget -= 1;
L_0032CDB8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0032CDD0; } }
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_0032CDD0; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 1;
L_0032CDD0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00380000u);
    c.r[7].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0032CE68; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0032CE60; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0032CE58; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0032CE50; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0032CE48; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0032CE40; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_0032CE38; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0032CE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CE70; } }
    c.budget -= 1;
L_0032CE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032CE70; } }
L_0032CE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0032CE70; } }
L_0032CE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0032CE70; } }
L_0032CE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0032CE70; } }
L_0032CE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0032CE70; } }
L_0032CE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0032CE70; } }
L_0032CE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_0032CE70; } }
L_0032CE68:
    set32(c.r[3], 0u + 7u);
    c.budget -= 2;
L_0032CE70:
    c.r[6].d[0] = c.r[4].d[0] & 28672ull;
    set32(c.r[4], 0u + 24576u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0032CEF0; } }
    set32(c.r[4], 0u + 16384u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 20480u);  if (t) { goto L_0032CEF0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0032CEF0; } }
    set32(c.r[4], 0u + 8192u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0032CEF0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], 0u + 28672u);  if (t) { goto L_0032CEE8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0032CEE0; } }
    set32(c.r[4], 0u + 12288u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 4096u);  if (t) { goto L_0032CED8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0032CED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CEF8; } }
    c.budget -= 1;
L_0032CED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0032CEF8; } }
L_0032CED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0032CEF8; } }
L_0032CEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032CEF8; } }
L_0032CEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032CEF8; } }
L_0032CEF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0032CEF8:
    c.r[4].d[0] = c.r[9].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = c.r[3].d[0] << 1;
    c.r[4].d[0] = c.r[3].d[0] | 1ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 17;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 2u);
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[9].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_0032CF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0032CF44; } }
L_0032CF40:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0032CF44:
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[16], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[10].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032CF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D048; } }
    c.budget -= 1;
L_0032CF70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], c.r[2].w[0] - 3u);
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    set32(c.r[10], c.r[10].w[0] + 32u);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    set32(c.r[6], 0u + 14u);
    st64((c.r[10].w[0]), c.r[7].d[0]);
    st64((c.r[10].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[10], c.r[10].w[0] + 16u);  if (t) { goto L_0032CFF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0032CFE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0032CFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D028; } }
L_0032CFC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19288u), c.r[9].d[0]);
    set32(c.r[3], 0u + 71u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[10].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_0032D028; } }
L_0032CFE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19280u), c.r[9].d[0]);
    set32(c.r[3], 0u + 72u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[10].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_0032D028; } }
L_0032CFF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st64((c.r[1].w[0] - 19288u), c.r[9].d[0]);
    set32(c.r[5], 0u + 71u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[3], 0u + 72u);
    st64((c.r[1].w[0] - 19280u), c.r[9].d[0]);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    st64((c.r[10].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    st64((c.r[10].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 12;
L_0032D028:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D034u); set32(c.r[6], c.r[10].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 84u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x0032D034u) [[unlikely]] return; }
L_0032D034:
    set32(c.r[3], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 5;
L_0032D048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032D060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0032D07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 4u);  if (t) { goto L_0032D080; } }
L_0032D07C:
    set32(c.r[7], 0u + 5u);
    c.budget -= 1;
L_0032D080:
    set32(c.r[3], c.r[7].w[0] + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[16], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[8], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032D0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D0A8:
    set32(c.r[9], c.r[7].w[0] - 3u);
    c.r[11].d[0] = c.r[9].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[10].d[0] = c.r[8].d[0] << 32;
    c.r[9].d[0] = 0ull | 32768ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    c.r[9].d[0] = c.r[11].d[0] | c.r[9].d[0];
    set32(c.r[3], c.r[2].w[0] + 32u);
    set32(c.r[8], 0u + 14u);
    st64((c.r[2].w[0] + 32u), c.r[9].d[0]);
    c.r[10].d[0] = c.r[4].d[0] & 3072ull;
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 15;
    { const bool t = c.r[10].d[0] != 0ull; st64((c.r[2].w[0] + 40u), c.r[8].d[0]);  if (t) { goto L_0032D358; } }
    c.r[6].d[0] = c.r[4].d[0] & 15ull;
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0032D350; } }
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - 4096u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[6].w[0];  c.pc = t; if (t - 0x0032C000u < 16384u) { entry = entries_008B[(t - 0x0032C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032D110:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 64u);  if (t) { goto L_0032D1A0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D198; } }
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 32u);  if (t) { goto L_0032D190; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D188; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0032D170; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D1A8; } }
    c.budget -= 1;
L_0032D158:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 104u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D170:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 168u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 9u);  if (t) { goto L_0032D6D0; } }
L_0032D190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 6u);  if (t) { goto L_0032D6D0; } }
L_0032D198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 25u);  if (t) { goto L_0032D6D0; } }
L_0032D1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 22u);  if (t) { goto L_0032D6D0; } }
L_0032D1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D1B0:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 64u);  if (t) { goto L_0032D240; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D238; } }
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 32u);  if (t) { goto L_0032D230; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D228; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0032D210; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D248; } }
    c.budget -= 1;
L_0032D1F8:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 106u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D210:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 170u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 137u);  if (t) { goto L_0032D6D0; } }
L_0032D230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 70u);  if (t) { goto L_0032D6D0; } }
L_0032D238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 153u);  if (t) { goto L_0032D6D0; } }
L_0032D240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 86u);  if (t) { goto L_0032D6D0; } }
L_0032D248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D250:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D288; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0032D280; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D290; } }
L_0032D278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 72u);  if (t) { goto L_0032D6D0; } }
L_0032D280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 136u);  if (t) { goto L_0032D6D0; } }
L_0032D288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 68u);  if (t) { goto L_0032D6D0; } }
L_0032D290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D298:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D2C0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0032D2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D2C8; } }
L_0032D2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_0032D6D0; } }
L_0032D2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0032D6D0; } }
L_0032D2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D2D0:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D308; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0032D300; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D2F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D310; } }
L_0032D2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 88u);  if (t) { goto L_0032D6D0; } }
L_0032D300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 152u);  if (t) { goto L_0032D6D0; } }
L_0032D308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 84u);  if (t) { goto L_0032D6D0; } }
L_0032D310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D318:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D340; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0032D338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D348; } }
L_0032D338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 18u);  if (t) { goto L_0032D6D0; } }
L_0032D340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 17u);  if (t) { goto L_0032D6D0; } }
L_0032D348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D358:
    set32(c.r[8], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[8].d[0];  if (t) { goto L_0032D528; } }
    c.r[6].d[0] = c.r[4].d[0] & 15ull;
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0032D520; } }
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - 4128u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[6].w[0];  c.pc = t; if (t - 0x0032C000u < 16384u) { entry = entries_008B[(t - 0x0032C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032D390:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0032D3C8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D3E0; } }
    c.budget -= 1;
L_0032D3B0:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 164u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D3C8:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 42u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D3E8:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 32u);  if (t) { goto L_0032D450; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D448; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0032D430; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D458; } }
L_0032D418:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 166u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D430:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 170u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 134u);  if (t) { goto L_0032D6D0; } }
L_0032D450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 150u);  if (t) { goto L_0032D6D0; } }
L_0032D458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D460:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D488; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0032D480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D490; } }
L_0032D480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 136u);  if (t) { goto L_0032D6D0; } }
L_0032D488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 132u);  if (t) { goto L_0032D6D0; } }
L_0032D490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D498:
    c.r[6].d[0] = c.r[4].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0032D4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D4B8; } }
    c.budget -= 1;
L_0032D4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_0032D6D0; } }
L_0032D4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D4C0:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D4E8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0032D4E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D4F0; } }
L_0032D4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 152u);  if (t) { goto L_0032D6D0; } }
L_0032D4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 148u);  if (t) { goto L_0032D6D0; } }
L_0032D4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D4F8:
    c.r[6].d[0] = c.r[4].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0032D510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D518; } }
    c.budget -= 1;
L_0032D510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 86u);  if (t) { goto L_0032D6D0; } }
L_0032D518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D528:
    set32(c.r[8], 0u + 2048u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[8].d[0]; c.r[8].d[0] = c.r[4].d[0] & 15ull;  if (t) { goto L_0032D6D0; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_0032D690; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D658; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0032D5B8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D6C8; } }
L_0032D560:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0032D598; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D5B0; } }
    c.budget -= 1;
L_0032D580:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 161u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D598:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 162u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D5B8:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 64u);  if (t) { goto L_0032D648; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D640; } }
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 32u);  if (t) { goto L_0032D638; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D630; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0032D618; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D650; } }
    c.budget -= 1;
L_0032D600:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 169u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D618:
    set32(c.r[6], 0u + 128u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    set32(c.r[6], 0u + 170u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];  if (t) { goto L_0032D6D0; } }
    c.budget -= 1;
L_0032D630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 137u);  if (t) { goto L_0032D6D0; } }
L_0032D638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 70u);  if (t) { goto L_0032D6D0; } }
L_0032D640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 153u);  if (t) { goto L_0032D6D0; } }
L_0032D648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 86u);  if (t) { goto L_0032D6D0; } }
L_0032D650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D658:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D680; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0032D678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D688; } }
L_0032D678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 130u);  if (t) { goto L_0032D6D0; } }
L_0032D680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 129u);  if (t) { goto L_0032D6D0; } }
L_0032D688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D690:
    c.r[8].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0032D6B8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0032D6B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D6C0; } }
L_0032D6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 146u);  if (t) { goto L_0032D6D0; } }
L_0032D6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 145u);  if (t) { goto L_0032D6D0; } }
L_0032D6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D778; } }
L_0032D6D0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0032D6F0; } }
    set32(c.r[6], 0u + 128u);
    set32(c.r[4], 0u + 168u);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.budget -= 4;
L_0032D6F0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0032D738; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0032D728; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0032D718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D758; } }
    c.budget -= 1;
L_0032D718:
    st64((c.r[3].w[0]), c.r[6].d[0]);
    set32(c.r[4], 0u + 66u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0] + 8u), c.r[4].d[0]);  if (t) { goto L_0032D758; } }
L_0032D728:
    st64((c.r[3].w[0]), c.r[6].d[0]);
    set32(c.r[4], 0u + 67u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0] + 8u), c.r[4].d[0]);  if (t) { goto L_0032D758; } }
L_0032D738:
    st64((c.r[3].w[0]), c.r[6].d[0]);
    set32(c.r[5], 0u + 66u);
    set32(c.r[4], 0u + 67u);
    st64((c.r[3].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st64((c.r[3].w[0]), c.r[6].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[4].d[0]);
    c.budget -= 8;
L_0032D758:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D768u); set32(c.r[6], c.r[3].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 84u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x0032D768u) [[unlikely]] return; }
L_0032D768:
    set32(c.r[3], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 4;
L_0032D778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032D790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[3], c.r[8].w[0] + 96u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0032D7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032D830; } }
L_0032D7B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[6].w[0]), c.r[2].d[0]);
    set32(c.r[7], 0u + 14u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st64((c.r[6].w[0] + 8u), c.r[7].d[0]);  if (t) { goto L_0032D7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[6].w[0] + 16u), 0ull);  if (t) { goto L_0032D7F8; } }
    c.budget -= 1;
L_0032D7F0:
    set32(c.r[2], 0u + 96u);
    st64((c.r[6].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 2;
L_0032D7F8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0032D808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[6].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_0032D810; } }
L_0032D808:
    set32(c.r[2], 0u + 21u);
    st64((c.r[6].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 2;
L_0032D810:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D820u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008B(c, 84u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x0032D820u) [[unlikely]] return; }
L_0032D820:
    set32(c.r[3], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 96u);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 4;
L_0032D830:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032D840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] >> 16);
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[29].w[0] + 13u);
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[7], c.r[29].w[0] + 14u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 15u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[4].w[0] >> 24);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032D8D8; } }
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 12u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 128u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
L_0032D888:
    c.r[2].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0032D8A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0032D8C0; } }
    c.budget -= 1;
L_0032D8A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032D8C0; } }
    set32(c.r[2], c.r[2].w[0] >> 1);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032D8C0; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0032D8C0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D888u | kUnwind; return; } goto L_0032D888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D910; } }
L_0032D8D8:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 128u);  if (t) { goto L_0032D8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032D910; } }
L_0032D8F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] >> 1);  if (t) { goto L_0032D910; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032D910; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0032D910:
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 12u));
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032D940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[3], c.r[16].w[0] + 128u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032D970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032DAA0; } }
L_0032D970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x64000000u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    st64((c.r[16].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 17424ull;
    set32(c.r[2], 0u + 515u);
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D9A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 145u, depth + 1u); else { c.pc = 0x0032D840u; return; } if (c.pc != 0x0032D9A8u) [[unlikely]] return; }
L_0032D9A8:
    set32(c.r[4], c.r[2].w[0] >> 16);
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] << 24;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    mmi::pcpyld(c.r[4], c.r[0], c.r[2]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + 1824u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 1728u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1824u);
    set32(c.r[3], c.r[3].w[0] + 1728u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1824u);
    set32(c.r[3], c.r[3].w[0] + 1728u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 24u), 0ull);
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DA8Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 84u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x0032DA8Cu) [[unlikely]] return; }
L_0032DA8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 128u);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 5;
L_0032DAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032DAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[3], c.r[16].w[0] + 144u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032DAF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032DC48; } }
L_0032DAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x84000000u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[16].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 17424ull;
    set32(c.r[2], 0u + 579u);
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DB28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 145u, depth + 1u); else { c.pc = 0x0032D840u; return; } if (c.pc != 0x0032DB28u) [[unlikely]] return; }
L_0032DB28:
    set32(c.r[4], 0u + 580u);
    set32(c.r[3], c.r[2].w[0] >> 16);
    st64((c.r[16].w[0] + 16u), c.r[4].d[0]);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] << 8;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 24;
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u - 1u);
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 1824u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 1728u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1824u);
    set32(c.r[4], c.r[4].w[0] + 1728u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1824u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 1728u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1824u);
    set32(c.r[4], c.r[4].w[0] + 1728u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 68;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DC38u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 84u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x0032DC38u) [[unlikely]] return; }
L_0032DC38:
    set32(c.r[3], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 144u);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 4;
L_0032DC48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032DC60:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[3], c.r[20].w[0] + 144u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032DCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032DEB0; } }
L_0032DCA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5648u));
    c.r[19].d[0] = ld16((c.r[21].w[0] + 12u));
    c.r[17].d[0] = ld16((c.r[21].w[0] + 14u));
    c.r[18].d[0] = ld16((c.r[21].w[0] + 16u));
    c.r[23].d[0] = ld16((c.r[21].w[0] + 18u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 32u);  if (t) { goto L_0032DCD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DCD0u); set32(c.r[4], ld32((c.r[28].w[0] - 22668u)));  if (depth < kMaxDepth) unit_008A(c, 264u, depth + 1u); else { c.pc = 0x0032BE20u; return; } if (c.pc != 0x0032DCD0u) [[unlikely]] return; }
L_0032DCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));  if (t) { goto L_0032DCE0; } }
L_0032DCD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23748u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.budget -= 2;
L_0032DCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DCE8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x0032DCE8u) [[unlikely]] return; }
L_0032DCE8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DCF8u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x0032DCF8u) [[unlikely]] return; }
L_0032DCF8:
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x84000000u);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    st64((c.r[20].w[0]), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 6512ull;
    st64((c.r[20].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], 0u + 854u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD2Cu); st64((c.r[20].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_008B(c, 160u, depth + 1u); else { c.pc = 0x0032DEE0u; return; } if (c.pc != 0x0032DD2Cu) [[unlikely]] return; }
L_0032DD2C:
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = c.r[22].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[20], c.r[20].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.r[3].d[0] = c.r[3].d[0] | 10ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[20].w[0]), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 145u, depth + 1u); else { c.pc = 0x0032D840u; return; } if (c.pc != 0x0032DD70u) [[unlikely]] return; }
L_0032DD70:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[2].w[0] >> 16);
    c.r[4].d[0] = c.r[3].d[0] << 16;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - 8u);
    set32(c.r[6], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[23].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[6].d[0] = c.r[4].d[0] << 8;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[7].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = c.r[4].d[0] << 24;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u - 1u);
    st64((c.r[20].w[0] + 8u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st64((c.r[20].w[0] + 16u), c.r[5].d[0]);
    mmi::pcpyld(c.r[8], c.r[0], c.r[2]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[5], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1824u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 1728u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[20], c.r[20].w[0] + 32u);
    st64((c.r[20].w[0]), c.r[3].d[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1824u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 1728u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st64((c.r[20].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    c.budget -= 75;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DE9Cu); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 84u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x0032DE9Cu) [[unlikely]] return; }
L_0032DE9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 144u);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 5;
L_0032DEB0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0032DEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5648u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032DF14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DF0Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22668u)));  if (depth < kMaxDepth) unit_008A(c, 264u, depth + 1u); else { c.pc = 0x0032BE20u; return; } if (c.pc != 0x0032DF0Cu) [[unlikely]] return; }
L_0032DF0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));  if (t) { goto L_0032DF1C; } }
L_0032DF14:
    set32(c.r[2], ld32((c.r[28].w[0] - 23748u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.budget -= 2;
L_0032DF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DF24u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x0032DF24u) [[unlikely]] return; }
L_0032DF24:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DF34u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x0032DF34u) [[unlikely]] return; }
L_0032DF34:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5648u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0032DFF0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032DF80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22668u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DF74u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_000B(c, 59u, depth + 1u); else { c.pc = 0x0012D010u; return; } if (c.pc != 0x0032DF74u) [[unlikely]] return; }
L_0032DF74:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_0032DF84; } }
L_0032DF80:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 1;
L_0032DF84:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[6].d[0] = c.r[2].d[0] << 26;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[8].d[0] = c.r[8].d[0] << 14;
    c.r[5].d[0] = c.r[2].d[0] << 30;
    c.r[7].d[0] = c.r[7].d[0] << 20;
    set32(c.r[2], 0u + 4u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_0032E0F0; } }
    c.budget -= 1;
L_0032DFF0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] ^ 27ull;
    c.r[2].d[0] = c.r[4].d[0] ^ 19ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032E0A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032E038; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E02Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 59u, depth + 1u); else { c.pc = 0x0012D010u; return; } if (c.pc != 0x0032E02Cu) [[unlikely]] return; }
L_0032E02C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_0032E03C; } }
L_0032E038:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 1;
L_0032E03C:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[6].d[0] = c.r[2].d[0] << 26;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[8].d[0] = c.r[8].d[0] << 14;
    c.r[5].d[0] = c.r[2].d[0] << 30;
    c.r[7].d[0] = c.r[7].d[0] << 20;
    set32(c.r[2], 0u + 4u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_0032E0F0; } }
    c.budget -= 1;
L_0032E0A8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[5].d[0] = c.r[4].d[0] << 20;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = c.r[3].d[0] << 26;
    c.r[3].d[0] = c.r[2].d[0] << 30;
    c.r[6].d[0] = c.r[6].d[0] << 14;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 18;
L_0032E0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032E110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 640u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 108u);
    st16((c.r[29].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 448u);
    st16((c.r[29].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22644u)));
    st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E144u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032E144u) [[unlikely]] return; }
L_0032E144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E14Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032DAC0u; return; } if (c.pc != 0x0032E14Cu) [[unlikely]] return; }
L_0032E14C:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E158u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0032E158u) [[unlikely]] return; }
L_0032E158:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032E170:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - 2432u);
    set32(c.r[5], c.r[5].w[0] - 6528u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 10;
    { set32(c.r[10], 0u + 1u);  goto L_0032E480; }
L_0032E1A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 2432u);  goto L_0032E670; }
L_0032E1B0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 2432u);  goto L_0032E500; }
L_0032E1C0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 2432u);  goto L_0032E990; }
L_0032E1D0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 2432u);  goto L_0032E9D0; }
L_0032E1E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 2432u);  goto L_0032EA60; }
L_0032E1F0:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0032E278; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[6].w[0] - 8u);  if (t) { goto L_0032E248; } }
L_0032E208:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E208u | kUnwind; return; } goto L_0032E208; } }
    c.budget -= 1;
L_0032E248:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032E278; } }
    c.budget -= 1;
L_0032E258:
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E258u | kUnwind; return; } goto L_0032E258; } }
    c.budget -= 1;
L_0032E278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E280:
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0032E390; } }
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] - 1u);  if (t) { goto L_0032E390; } }
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);  if (t) { goto L_0032E478; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[14], c.r[6].w[0] - 8u);  if (t) { goto L_0032E358; } }
L_0032E2B8:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[7].w[0] - 1u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[5], c.r[8].w[0] - 1u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[13].w[0] - 1u);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[12].w[0] - 1u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[11].w[0] - 1u);
    c.r[7].d[0] = c.r[3].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[10].w[0] - 1u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[9].w[0] - 1u);
    st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[4], c.r[4].w[0] - 2u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[8].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    set32(c.r[4], c.r[4].w[0] - 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[4], c.r[4].w[0] - 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 39;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E2B8u | kUnwind; return; } goto L_0032E2B8; } }
    c.budget -= 1;
L_0032E358:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032E478; } }
    c.budget -= 1;
L_0032E368:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E368u | kUnwind; return; } goto L_0032E368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032E478; } }
L_0032E390:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0032E478; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[14], c.r[6].w[0] - 8u);  if (t) { goto L_0032E448; } }
L_0032E3A8:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[13], c.r[13].w[0] + 8u);
    set32(c.r[5], c.r[7].w[0] + 1u);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[12].w[0] + 1u);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], c.r[11].w[0] + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[13].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[9].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 39;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E3A8u | kUnwind; return; } goto L_0032E3A8; } }
    c.budget -= 1;
L_0032E448:
    c.r[1].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032E478; } }
    c.budget -= 1;
L_0032E458:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E458u | kUnwind; return; } goto L_0032E458; } }
L_0032E478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E480:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.budget -= 6;
    { const bool t = c.r[10].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.r[9].w[0]);  if (t) { goto L_0032E4B8; } }
    set32(c.r[2], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[9].w[0] - 1u);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0032E4D0; } }
    c.budget -= 1;
L_0032E4B8:
    set32(c.r[3], c.r[9].w[0] - 1u);
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
L_0032E4D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[6].w[0] << 4);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E1F0u | kUnwind; return; } goto L_0032E1F0; }
L_0032E500:
    c.budget -= 2;
    { set32(c.r[6], ld32((c.r[4].w[0] + 24u)));  goto L_0032E510; }
L_0032E510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E538u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008B(c, 207u, depth + 1u); else { c.pc = 0x0032EC30u; return; } if (c.pc != 0x0032E538u) [[unlikely]] return; }
L_0032E538:
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032E550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032E648; } }
L_0032E550:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032E560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032E648; } }
L_0032E560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E568u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 208u, depth + 1u); else { c.pc = 0x0032EC80u; return; } if (c.pc != 0x0032E568u) [[unlikely]] return; }
L_0032E568:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0032E580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032E648; } }
L_0032E580:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032E5F8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] - 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0032E628; } }
    c.budget -= 1;
L_0032E5F8:
    set32(c.r[3], c.r[17].w[0] - 1u);
    c.r[5].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 12;
L_0032E628:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E640u); st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 211u, depth + 1u); else { c.pc = 0x0032ED00u; return; } if (c.pc != 0x0032E640u) [[unlikely]] return; }
L_0032E640:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0032E648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032E670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E6ACu); c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_008B(c, 208u, depth + 1u); else { c.pc = 0x0032EC80u; return; } if (c.pc != 0x0032E6ACu) [[unlikely]] return; }
L_0032E6AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[7].d[0];  if (t) { goto L_0032E6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032E970; } }
    c.budget -= 1;
L_0032E6C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0032E6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E6DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 184u, depth + 1u); else { c.pc = 0x0032E500u; return; } if (c.pc != 0x0032E6DCu) [[unlikely]] return; }
L_0032E6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032E970; } }
    c.budget -= 1;
L_0032E6E8:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0032E8E0; } }
    c.r[4].d[0] = ld16((c.r[3].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_0032E7B0; } }
    set32(c.r[9], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[9].w[0] - 1u);
    c.r[8].d[0] = ~(c.r[4].d[0] | 0ull);
    c.budget -= 4;
L_0032E718:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 14u));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[10].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[10].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[17].w[0] << 4);  if (t) { goto L_0032E7A0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E798u); st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 211u, depth + 1u); else { c.pc = 0x0032ED00u; return; } if (c.pc != 0x0032E798u) [[unlikely]] return; }
L_0032E798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_0032E970; } }
L_0032E7A0:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E718u | kUnwind; return; } goto L_0032E718; } }
    c.budget -= 1;
L_0032E7B0:
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[6].d[0] = c.r[4].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[17].w[0] << 4);  if (t) { goto L_0032E960; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E830u); st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 211u, depth + 1u); else { c.pc = 0x0032ED00u; return; } if (c.pc != 0x0032E830u) [[unlikely]] return; }
L_0032E830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_0032E970; } }
L_0032E838:
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[9], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[9].w[0] - 1u);
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[17].w[0] << 4);  if (t) { goto L_0032E8D8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E8CCu); st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 211u, depth + 1u); else { c.pc = 0x0032ED00u; return; } if (c.pc != 0x0032E8CCu) [[unlikely]] return; }
L_0032E8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_0032E970; } }
    c.budget -= 1;
L_0032E8D8:
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_0032E8E0:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 14u));
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E838u | kUnwind; return; } goto L_0032E838; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[17].w[0] << 4);  if (t) { goto L_0032E960; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E958u); st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 211u, depth + 1u); else { c.pc = 0x0032ED00u; return; } if (c.pc != 0x0032E958u) [[unlikely]] return; }
L_0032E958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_0032E970; } }
L_0032E960:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E96Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 184u, depth + 1u); else { c.pc = 0x0032E500u; return; } if (c.pc != 0x0032E96Cu) [[unlikely]] return; }
L_0032E96C:
    c.budget -= 1;
L_0032E970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032E990:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032E9B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0032E9B8; } }
    c.budget -= 1;
L_0032E9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032E9C8; } }
L_0032E9B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0032E9C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032E9F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EA48; } }
    c.budget -= 1;
L_0032E9F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032EA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EA48; } }
L_0032EA18:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA40u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_008B(c, 216u, depth + 1u); else { c.pc = 0x0032EE30u; return; } if (c.pc != 0x0032EA40u) [[unlikely]] return; }
L_0032EA40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0032EA48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032EA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032EA98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_0032EC18; } }
    c.budget -= 1;
L_0032EA98:
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0032EB78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[18].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_0032EB38; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EAE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032E280u; return; } if (c.pc != 0x0032EAE0u) [[unlikely]] return; }
L_0032EAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[18].w[0]);  if (t) { goto L_0032EB38; } }
L_0032EAE8:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[18].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_0032EB38; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EB34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032E280u; return; } if (c.pc != 0x0032EB34u) [[unlikely]] return; }
L_0032EB34:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_0032EB38:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 14u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EAE8u | kUnwind; return; } goto L_0032EAE8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0032EC10; } }
    c.budget -= 1;
L_0032EB78:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.r[18].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0032EBF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EBA8u);  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032E280u; return; } if (c.pc != 0x0032EBA8u) [[unlikely]] return; }
L_0032EBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[18].w[0]);  if (t) { goto L_0032EBF8; } }
L_0032EBB0:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.r[18].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[18].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0032EBF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EBF0u);  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032E280u; return; } if (c.pc != 0x0032EBF0u) [[unlikely]] return; }
L_0032EBF0:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 2;
L_0032EBF8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 14u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EBB0u | kUnwind; return; } goto L_0032EBB0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_0032EC10:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_0032EC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032EC30:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032EC5C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_0032EC78; } }
L_0032EC5C:
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
L_0032EC78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032ECE0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0032ECA8:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { goto L_0032ECD0; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ECC4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_008B(c, 176u, depth + 1u); else { c.pc = 0x0032E1F0u; return; } if (c.pc != 0x0032ECC4u) [[unlikely]] return; }
L_0032ECC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032ECE8; } }
    c.budget -= 1;
L_0032ECD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ECA8u | kUnwind; return; } goto L_0032ECA8; } }
L_0032ECE0:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_0032ECE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032ED00:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[10].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[10].d[0]; set32(c.r[12], c.r[8].w[0] + c.r[6].w[0]);  if (t) { goto L_0032ED28; } }
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st16((c.r[12].w[0] + 12u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[12].w[0] + 14u), static_cast<std::uint16_t>(c.r[10].w[0]));  if (t) { goto L_0032EE20; } }
L_0032ED28:
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[11], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0032ED88; } }
    set32(c.r[9], ld32((c.r[12].w[0])));
    set32(c.r[6], ld32((c.r[11].w[0])));
    c.r[1].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032EE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EDD0; } }
L_0032ED58:
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[11].w[0] + 14u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0032EDD0; } }
    set32(c.r[11], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0032ED70:
    set32(c.r[6], ld32((c.r[11].w[0])));
    c.r[6].d[0] = c.r[6].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ED58u | kUnwind; return; } goto L_0032ED58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EDD0; } }
L_0032ED88:
    set32(c.r[9], ld32((c.r[12].w[0])));
    set32(c.r[6], ld32((c.r[11].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032EE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EDD0; } }
    c.budget -= 1;
L_0032EDA8:
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[11].w[0] + 14u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0032EDD0; } }
    set32(c.r[11], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0032EDC0:
    set32(c.r[6], ld32((c.r[11].w[0])));
    c.r[1].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EDA8u | kUnwind; return; } goto L_0032EDA8; } }
L_0032EDD0:
    st16((c.r[12].w[0] + 12u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[6].d[0]; st16((c.r[12].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0032EDF0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[10].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[6].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
L_0032EDF0:
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0032EE08; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
L_0032EE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EE20; } }
L_0032EE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EDC0u | kUnwind; return; } goto L_0032EDC0; } }
L_0032EE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ED70u | kUnwind; return; } goto L_0032ED70; } }
L_0032EE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EE30:
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[5].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0] + 12u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0032EE60; } }
    c.r[5].d[0] = ld16((c.r[7].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0032EE80; } }
L_0032EE60:
    c.r[3].d[0] = ld16((c.r[7].w[0] + 14u));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0032EE80; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
L_0032EE80:
    c.r[5].d[0] = ld16((c.r[7].w[0] + 14u));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0032EEA8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[6].d[0] = ld16((c.r[7].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 6;
L_0032EEA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0032EEC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EEE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 2594u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { st8((c.r[2].w[0] + 2595u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_00A2(c, 336u, depth); }
L_0032EF00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032EF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F058; } }
    c.budget -= 1;
L_0032EF20:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1630u));
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_0032EF70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 73ll ? 1ull : 0ull;  if (t) { goto L_0032EF48; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032EF70; } }
    c.budget -= 1;
L_0032EF48:
    c.r[3].d[0] = c.r[2].sd[0] < 83ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 135ll ? 1ull : 0ull;  if (t) { goto L_0032EF60; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032EF70; } }
    c.budget -= 1;
L_0032EF60:
    c.r[3].d[0] = c.r[2].sd[0] < 140ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032EF78; } }
    c.budget -= 1;
L_0032EF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032F058; } }
L_0032EF78:
    set32(c.r[3], 0u + 139u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 138u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 136u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 82u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 80u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 78u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 76u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 74u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 57u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 49u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 42u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F050; } }
L_0032F048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032F058; } }
L_0032F050:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0032F058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032F060:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[1].w[0] - 1520u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0032F2D8; } }
    c.budget -= 1;
L_0032F098:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 149u, depth + 1u); else { c.pc = 0x0011E4D0u; return; } if (c.pc != 0x0032F0A4u) [[unlikely]] return; }
L_0032F0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032F2A8; } }
    c.budget -= 1;
L_0032F0B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[21].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032F0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0032F118; } }
L_0032F0C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 1632u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F118; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 2u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] - 1632u);
    c.budget -= 4;
L_0032F0E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032F108; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 1u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0032F108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0032F118; } }
    c.budget -= 1;
L_0032F108:
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F0E0u | kUnwind; return; } goto L_0032F0E0; } }
L_0032F118:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0032F2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F128u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F128u) [[unlikely]] return; }
L_0032F128:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F134u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F134u) [[unlikely]] return; }
L_0032F134:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[19].w[0] + c.r[17].w[0]);  if (t) { goto L_0032F1B0; } }
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032F158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0032F1B0; } }
    c.budget -= 1;
L_0032F158:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 1632u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F1B0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] - 1632u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 4;
L_0032F178:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0032F1A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0032F1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0032F1B0; } }
    c.budget -= 1;
L_0032F1A0:
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F178u | kUnwind; return; } goto L_0032F178; } }
L_0032F1B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0032F2A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_0032F1C8; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0032F1C8:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_0032F290; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] - 8u);  if (t) { goto L_0032F258; } }
    set32(c.r[4], 0u - 127u);
    set32(c.r[3], 0u - 106u);
    c.budget -= 3;
L_0032F1E8:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F1E8u | kUnwind; return; } goto L_0032F1E8; } }
    c.budget -= 1;
L_0032F258:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032F290; } }
    set32(c.r[4], 0u - 127u);
    set32(c.r[3], 0u - 106u);
    c.budget -= 3;
L_0032F270:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F270u | kUnwind; return; } goto L_0032F270; } }
    c.budget -= 1;
L_0032F290:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F29Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 149u, depth + 1u); else { c.pc = 0x0011E4D0u; return; } if (c.pc != 0x0032F29Cu) [[unlikely]] return; }
L_0032F29C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F0B0u | kUnwind; return; } goto L_0032F0B0; } }
    c.budget -= 1;
L_0032F2A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 1520u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_0032F2C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F098u | kUnwind; return; } goto L_0032F098; } }
    c.budget -= 1;
L_0032F2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F2F0; } }
L_0032F2D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F2D0u | kUnwind; return; } goto L_0032F2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F2C0u | kUnwind; return; } goto L_0032F2C0; } }
    c.budget -= 1;
L_0032F2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0032F320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 129u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032F358; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0032F358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F350u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0032F350u) [[unlikely]] return; }
L_0032F350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F360; } }
L_0032F358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F360u);  if (depth < kMaxDepth) unit_008B(c, 222u, depth + 1u); else { c.pc = 0x0032F060u; return; } if (c.pc != 0x0032F360u) [[unlikely]] return; }
L_0032F360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032F370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F384u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F384u) [[unlikely]] return; }
L_0032F384:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0032F39C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0032F39C:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032F3E8; } }
    c.r[3].d[0] = 0ull | 33088ull;
    c.budget -= 2;
L_0032F3B0:
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F3D8; } }
    c.r[7].d[0] = c.r[7].d[0] | 1ull;
    c.budget -= 2;
L_0032F3D8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F3B0u | kUnwind; return; } goto L_0032F3B0; } }
L_0032F3E8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032F3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F408; } }
L_0032F3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F400u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 222u, depth + 1u); else { c.pc = 0x0032F060u; return; } if (c.pc != 0x0032F400u) [[unlikely]] return; }
L_0032F400:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0032F408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032F420:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0032F4C8; } }
    set32(c.r[2], 0u + 46u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
L_0032F460:
    c.r[4].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_0032F488; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032F488; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0032F4B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032F620; } }
L_0032F488:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F4B0; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_0032F4A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032F620; } }
    c.budget -= 1;
L_0032F4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0032F4B8; } }
L_0032F4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032F620; } }
L_0032F4B8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F460u | kUnwind; return; } goto L_0032F460; } }
L_0032F4C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F4D4u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x0032F4D4u) [[unlikely]] return; }
L_0032F4D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0032F4E8; } }
    c.budget -= 1;
L_0032F4E0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0032F4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F4F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F4F0u) [[unlikely]] return; }
L_0032F4F0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0032F510; } }
    set32(c.r[2], 0u + 46u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F4E0u | kUnwind; return; } goto L_0032F4E0; } }
    c.budget -= 1;
L_0032F510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F518u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F518u) [[unlikely]] return; }
L_0032F518:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032F528; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0032F528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F530u); set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x0032F530u) [[unlikely]] return; }
L_0032F530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0032F540; } }
L_0032F538:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0032F540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F548u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F548u) [[unlikely]] return; }
L_0032F548:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0032F568; } }
    set32(c.r[2], 0u + 46u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F538u | kUnwind; return; } goto L_0032F538; } }
    c.budget -= 1;
L_0032F568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F570u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F570u) [[unlikely]] return; }
L_0032F570:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032F580; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0032F580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F588u); set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x0032F588u) [[unlikely]] return; }
L_0032F588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0032F598; } }
L_0032F590:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0032F598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F5A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F5A0u) [[unlikely]] return; }
L_0032F5A0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0032F5C0; } }
    set32(c.r[2], 0u + 46u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F590u | kUnwind; return; } goto L_0032F590; } }
    c.budget -= 1;
L_0032F5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F5C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0032F5C8u) [[unlikely]] return; }
L_0032F5C8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032F5D8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0032F5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F5E0u); set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x0032F5E0u) [[unlikely]] return; }
L_0032F5E0:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    c.r[5].d[0] = c.r[4].d[0] & 65280ull;
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 16;
L_0032F620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0032F640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 2320u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F65Cu); set32(c.r[6], 0u + 2080u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0032F65Cu) [[unlikely]] return; }
L_0032F65C:
    st32((c.r[28].w[0] - 22620u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032F670:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0032F778; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F858; } }
    c.budget -= 1;
L_0032F6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F6C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 242u, depth + 1u); else { c.pc = 0x0032F420u; return; } if (c.pc != 0x0032F6C8u) [[unlikely]] return; }
L_0032F6C8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F6E8; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0032F860; } }
L_0032F6E8:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] - 2320u);
    c.budget -= 4;
L_0032F6F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F708u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x0032F708u) [[unlikely]] return; }
L_0032F708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032F728; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 256u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0032F860; } }
L_0032F728:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 260u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F6F8u | kUnwind; return; } goto L_0032F6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 95u, depth + 1u); else { c.pc = 0x003103D0u; return; } if (c.pc != 0x0032F740u) [[unlikely]] return; }
L_0032F740:
    st16((c.r[28].w[0] - 22616u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22616u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032F760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F860; } }
    c.budget -= 1;
L_0032F760:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0032F858; } }
    c.budget -= 1;
L_0032F778:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F784u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310470u; return; } if (c.pc != 0x0032F784u) [[unlikely]] return; }
L_0032F784:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0032F7D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F7C0; } }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 3u);  if (t) { goto L_0032F7C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F7C0; } }
    c.budget -= 1;
L_0032F7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032F860; } }
L_0032F7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7C8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22616u)));  if (depth < kMaxDepth) unit_0084(c, 98u, depth + 1u); else { c.pc = 0x00310420u; return; } if (c.pc != 0x0032F7C8u) [[unlikely]] return; }
L_0032F7C8:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0032F860; } }
L_0032F7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7E0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22616u)));  if (depth < kMaxDepth) unit_0084(c, 98u, depth + 1u); else { c.pc = 0x00310420u; return; } if (c.pc != 0x0032F7E0u) [[unlikely]] return; }
L_0032F7E0:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] - 2320u);
    set32(c.r[6], 0u + 256u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22620u)));
    set32(c.r[3], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F81Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0032F81Cu) [[unlikely]] return; }
L_0032F81C:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 22620u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22620u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_0032F848; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F848; } }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_0032F848:
    st32((c.r[28].w[0] - 22620u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032F860; } }
    c.budget -= 1;
L_0032F858:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032F860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0032F890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0032F8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 32u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11296u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 31u);  if (t) { goto L_0032FA78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032FA48; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_0032FA30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032F9E0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032F930; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FAB0; } }
    c.budget -= 1;
L_0032F8F8:
    set32(c.r[2], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F908u); st16((c.r[1].w[0] + 11300u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 226u, depth + 1u); else { c.pc = 0x003368A0u; return; } if (c.pc != 0x0032F908u) [[unlikely]] return; }
L_0032F908:
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 30u);  if (t) { goto L_0032F920; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032FAB0; } }
L_0032F920:
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032FAB0; } }
L_0032F930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F938u);  if (depth < kMaxDepth) unit_008D(c, 268u, depth + 1u); else { c.pc = 0x00336EC0u; return; } if (c.pc != 0x0032F938u) [[unlikely]] return; }
L_0032F938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11300u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11300u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_0032F970; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 11300u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0032FAB8; } }
L_0032F970:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 12592u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
L_0032F988:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0032F9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F99Cu);  if (depth < kMaxDepth) unit_008D(c, 228u, depth + 1u); else { c.pc = 0x003368E0u; return; } if (c.pc != 0x0032F99Cu) [[unlikely]] return; }
L_0032F99C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11296u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032FAB0; } }
    c.budget -= 1;
L_0032F9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032F9C8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0032F9C8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F988u | kUnwind; return; } goto L_0032F988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FAB0; } }
L_0032F9E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11300u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11300u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0032FAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FA0Cu);  if (depth < kMaxDepth) unit_008D(c, 249u, depth + 1u); else { c.pc = 0x00336C10u; return; } if (c.pc != 0x0032FA0Cu) [[unlikely]] return; }
L_0032FA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FA14u);  if (depth < kMaxDepth) unit_008D(c, 241u, depth + 1u); else { c.pc = 0x00336AF0u; return; } if (c.pc != 0x0032FA14u) [[unlikely]] return; }
L_0032FA14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 11300u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0032FAB8; } }
    c.budget -= 1;
L_0032FA30:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11297u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032FAB0; } }
L_0032FA48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FA54u); set32(c.r[4], c.r[4].w[0] + 11297u);  if (depth < kMaxDepth) unit_008D(c, 275u, depth + 1u); else { c.pc = 0x00337010u; return; } if (c.pc != 0x0032FA54u) [[unlikely]] return; }
L_0032FA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_0032FAB0; } }
    st8((c.r[1].w[0] + 11297u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11296u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0032FAB0; } }
L_0032FA78:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[1].w[0] + 11296u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11300u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032FAA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FAA8; } }
L_0032FAA4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0032FAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FAB8; } }
L_0032FAB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032FAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032FAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0032FBF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032FB00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FBA8; } }
L_0032FB00:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032FB40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032FB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FBA8; } }
    c.budget -= 1;
L_0032FB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB30u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0084(c, 107u, depth + 1u); else { c.pc = 0x00310550u; return; } if (c.pc != 0x0032FB30u) [[unlikely]] return; }
L_0032FB30:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_0032FBA8; } }
    c.budget -= 1;
L_0032FB40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22840u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032FB80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0032FBA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032FB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FBA8; } }
    c.budget -= 1;
L_0032FB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB70u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0084(c, 107u, depth + 1u); else { c.pc = 0x00310550u; return; } if (c.pc != 0x0032FB70u) [[unlikely]] return; }
L_0032FB70:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_0032FBA8; } }
    c.budget -= 1;
L_0032FB80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 11824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB94u); set32(c.r[5], c.r[5].w[0] + 10112u);  if (depth < kMaxDepth) unit_0084(c, 190u, depth + 1u); else { c.pc = 0x00311040u; return; } if (c.pc != 0x0032FB94u) [[unlikely]] return; }
L_0032FB94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 10112u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10116u)));
    c.budget -= 5;
L_0032FBA8:
    set32(c.r[5], ld32((c.r[28].w[0] - 22848u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0032FBBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 22852u)));  if (t) { goto L_0032FBC4; } }
L_0032FBBC:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 22852u)));
    c.budget -= 2;
L_0032FBC4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0032FBD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FBD8; } }
L_0032FBD4:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0032FBD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FBE4u); set32(c.r[4], c.r[4].w[0] + 11824u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310310u; return; } if (c.pc != 0x0032FBE4u) [[unlikely]] return; }
L_0032FBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FBECu);  if (depth < kMaxDepth) unit_008B(c, 257u, depth + 1u); else { c.pc = 0x0032F640u; return; } if (c.pc != 0x0032FBECu) [[unlikely]] return; }
L_0032FBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FBF4u);  if (depth < kMaxDepth) unit_0084(c, 295u, depth + 1u); else { c.pc = 0x003120B0u; return; } if (c.pc != 0x0032FBF4u) [[unlikely]] return; }
L_0032FBF4:
    c.budget -= 1;
L_0032FBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032FC10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 11297u);
    set32(c.r[5], c.r[5].w[0] + 11298u);
    set32(c.r[6], c.r[6].w[0] + 11299u);
    set32(c.r[7], c.r[7].w[0] + 11300u);
    set32(c.r[8], c.r[8].w[0] + 11302u);
    set32(c.r[9], c.r[9].w[0] + 11304u);
    set32(c.r[10], c.r[10].w[0] + 11306u);
    c.budget -= 17;
    { set32(c.r[11], c.r[11].w[0] + 11311u);  goto L_0032FE50; }
L_0032FC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032FC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FD18; } }
    c.budget -= 1;
L_0032FC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC90u); set32(c.r[4], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0084(c, 196u, depth + 1u); else { c.pc = 0x003110D0u; return; } if (c.pc != 0x0032FC90u) [[unlikely]] return; }
L_0032FC90:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0032FCB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032FCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FD10; } }
    c.budget -= 1;
L_0032FCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032FD18; } }
L_0032FCB8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FCC4u); set32(c.r[5], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0084(c, 198u, depth + 1u); else { c.pc = 0x00311140u; return; } if (c.pc != 0x0032FCC4u) [[unlikely]] return; }
L_0032FCC4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0032FD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FCD4u);  if (depth < kMaxDepth) unit_0083(c, 406u, depth + 1u); else { c.pc = 0x0030FBF0u; return; } if (c.pc != 0x0032FCD4u) [[unlikely]] return; }
L_0032FCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FCE4u); set32(c.r[4], ld32((c.r[29].w[0] + 24u)));  if (depth < kMaxDepth) unit_0084(c, 200u, depth + 1u); else { c.pc = 0x00311180u; return; } if (c.pc != 0x0032FCE4u) [[unlikely]] return; }
L_0032FCE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FD00; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_0032FD18; } }
L_0032FD00:
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_0032FD10:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0032FD18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032FD30:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22844u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0032FD60; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0032FD80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 240u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0032FD88; } }
    c.budget -= 1;
L_0032FD60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 240u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0032FD80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 240u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0032FD88; } }
    c.budget -= 1;
L_0032FD80:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0032FD88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FD90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 240u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 22844u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0032FDB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0032FE18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0032FE08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032FDF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0032FDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FE28; } }
    c.budget -= 1;
L_0032FDE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 160u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0032FE28; } }
    c.budget -= 1;
L_0032FDF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 160u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0032FE28; } }
    c.budget -= 1;
L_0032FE08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 160u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0032FE28; } }
    c.budget -= 1;
L_0032FE18:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 160u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0032FE28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22860u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 160u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - c.r[2].w[0]);  c.pc = t; return; }
L_0032FE50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0032C000u < 16384u) { entry = entries_008B[(t - 0x0032C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032FE70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 9;
L_0032FE94:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FEBCu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 285u, depth + 1u); else { c.pc = 0x0032FC60u; return; } if (c.pc != 0x0032FEBCu) [[unlikely]] return; }
L_0032FEBC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0032FEF8; } }
    set32(c.r[2], 0u - 81u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { [[clang::musttail]] return unit_008C(c, 46u, depth); } }
    c.budget -= 1;
L_0032FEF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11309u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032FF18; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0032FF18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], 0u + 100u);
    st8((c.r[1].w[0] + 11309u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 99u);  if (t) { [[clang::musttail]] return unit_008C(c, 43u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_008C(c, 42u, depth); } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 6u);  if (t) { [[clang::musttail]] return unit_008C(c, 41u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 5u);  if (t) { [[clang::musttail]] return unit_008C(c, 37u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_008C(c, 26u, depth); } }
L_0032FF54:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 3u);  if (t) { [[clang::musttail]] return unit_008C(c, 25u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[7], 0u + 2u);  if (t) { [[clang::musttail]] return unit_008C(c, 21u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; set32(c.r[5], 0u + 1u);  if (t) { [[clang::musttail]] return unit_008C(c, 18u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 10u);  if (t) { [[clang::musttail]] return unit_008C(c, 16u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_008C(c, 7u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0032FF90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008C(c, 45u, depth); } }
L_0032FF90:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 81u);  if (t) { goto L_0032FFA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_008C(c, 46u, depth); } }
    c.budget -= 1;
L_0032FFA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11309u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_008C(c, 6u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22840u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008C(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_008C(c, 3u, depth); } }
    goto L_0032FFF8;
L_0032FFF4:
    c.budget -= 1;
L_0032FFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_008C(c, 2u, depth); } }
    [[clang::musttail]] return unit_008C(c, 1u, depth);
}

}
