#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0018[4096] = {
    1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 9, 0, 10, 11, 12, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0,
    22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0,
    37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0,
    264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    279, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0018(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00160000;
    case 2u: goto L_00160004;
    case 3u: goto L_00160008;
    case 4u: goto L_0016000C;
    case 5u: goto L_00160010;
    case 6u: goto L_00160014;
    case 7u: goto L_00160018;
    case 8u: goto L_0016001C;
    case 9u: goto L_00160028;
    case 10u: goto L_00160030;
    case 11u: goto L_00160034;
    case 12u: goto L_00160038;
    case 13u: goto L_0016003C;
    case 14u: goto L_00160048;
    case 15u: goto L_00160058;
    case 16u: goto L_0016006C;
    case 17u: goto L_00160074;
    case 18u: goto L_001600A4;
    case 19u: goto L_00160100;
    case 20u: goto L_001601EC;
    case 21u: goto L_001601F8;
    case 22u: goto L_00160200;
    case 23u: goto L_00160210;
    case 24u: goto L_00160230;
    case 25u: goto L_00160238;
    case 26u: goto L_0016027C;
    case 27u: goto L_00160290;
    case 28u: goto L_001602A4;
    case 29u: goto L_001602FC;
    case 30u: goto L_00160388;
    case 31u: goto L_0016039C;
    case 32u: goto L_001603A8;
    case 33u: goto L_001603B8;
    case 34u: goto L_001603D4;
    case 35u: goto L_001603E8;
    case 36u: goto L_001603F0;
    case 37u: goto L_00160400;
    case 38u: goto L_00160404;
    case 39u: goto L_001604EC;
    case 40u: goto L_00160508;
    case 41u: goto L_0016051C;
    case 42u: goto L_00160550;
    case 43u: goto L_00160564;
    case 44u: goto L_00160580;
    case 45u: goto L_001605DC;
    case 46u: goto L_001605E4;
    case 47u: goto L_00160600;
    case 48u: goto L_0016061C;
    case 49u: goto L_00160828;
    case 50u: goto L_00160898;
    case 51u: goto L_00160A80;
    case 52u: goto L_00160B10;
    case 53u: goto L_00160B40;
    case 54u: goto L_00160B58;
    case 55u: goto L_00160B98;
    case 56u: goto L_00160BB4;
    case 57u: goto L_00160BC8;
    case 58u: goto L_00160BD0;
    case 59u: goto L_00160BE4;
    case 60u: goto L_00160BEC;
    case 61u: goto L_00160CEC;
    case 62u: goto L_00160CF4;
    case 63u: goto L_00160D54;
    case 64u: goto L_00160D5C;
    case 65u: goto L_00160D98;
    case 66u: goto L_00160DA0;
    case 67u: goto L_00160DE0;
    case 68u: goto L_00160DE8;
    case 69u: goto L_00160E14;
    case 70u: goto L_00160E28;
    case 71u: goto L_00160E30;
    case 72u: goto L_00160E98;
    case 73u: goto L_00160EAC;
    case 74u: goto L_00160EC0;
    case 75u: goto L_00160EC8;
    case 76u: goto L_00160F30;
    case 77u: goto L_00160F44;
    case 78u: goto L_00160F58;
    case 79u: goto L_00160F6C;
    case 80u: goto L_00160FE4;
    case 81u: goto L_00160FF8;
    case 82u: goto L_0016100C;
    case 83u: goto L_00161028;
    case 84u: goto L_00161040;
    case 85u: goto L_00161080;
    case 86u: goto L_001610C0;
    case 87u: goto L_001610F4;
    case 88u: goto L_0016110C;
    case 89u: goto L_00161120;
    case 90u: goto L_00161128;
    case 91u: goto L_00161144;
    case 92u: goto L_00161154;
    case 93u: goto L_00161168;
    case 94u: goto L_00161190;
    case 95u: goto L_001611D0;
    case 96u: goto L_00161200;
    case 97u: goto L_00161208;
    case 98u: goto L_00161270;
    case 99u: goto L_0016129C;
    case 100u: goto L_001612C0;
    case 101u: goto L_001612F8;
    case 102u: goto L_00161318;
    case 103u: goto L_00161390;
    case 104u: goto L_0016140C;
    case 105u: goto L_0016143C;
    case 106u: goto L_001614B0;
    case 107u: goto L_001614F0;
    case 108u: goto L_00161504;
    case 109u: goto L_0016152C;
    case 110u: goto L_00161538;
    case 111u: goto L_00161580;
    case 112u: goto L_00161588;
    case 113u: goto L_001615A4;
    case 114u: goto L_001615CC;
    case 115u: goto L_001615E0;
    case 116u: goto L_001615F8;
    case 117u: goto L_00161614;
    case 118u: goto L_00161628;
    case 119u: goto L_0016163C;
    case 120u: goto L_00161640;
    case 121u: goto L_00161650;
    case 122u: goto L_00161674;
    case 123u: goto L_00161740;
    case 124u: goto L_00161768;
    case 125u: goto L_00161778;
    case 126u: goto L_0016178C;
    case 127u: goto L_00161814;
    case 128u: goto L_0016183C;
    case 129u: goto L_00161840;
    case 130u: goto L_00161848;
    case 131u: goto L_00161880;
    case 132u: goto L_00161884;
    case 133u: goto L_00161898;
    case 134u: goto L_001618AC;
    case 135u: goto L_001618FC;
    case 136u: goto L_00161910;
    case 137u: goto L_00161924;
    case 138u: goto L_00161944;
    case 139u: goto L_00161958;
    case 140u: goto L_00161970;
    case 141u: goto L_00161998;
    case 142u: goto L_001619C4;
    case 143u: goto L_001619E0;
    case 144u: goto L_00161A80;
    case 145u: goto L_00161AAC;
    case 146u: goto L_00161AB8;
    case 147u: goto L_00161AC0;
    case 148u: goto L_00161AD4;
    case 149u: goto L_00161ADC;
    case 150u: goto L_00161AF0;
    case 151u: goto L_00161B04;
    case 152u: goto L_00161B0C;
    case 153u: goto L_00161B28;
    case 154u: goto L_00161B40;
    case 155u: goto L_00161B48;
    case 156u: goto L_00161B64;
    case 157u: goto L_00161B80;
    case 158u: goto L_00161B88;
    case 159u: goto L_00161BDC;
    case 160u: goto L_00161C04;
    case 161u: goto L_00161C10;
    case 162u: goto L_00161C3C;
    case 163u: goto L_00161C40;
    case 164u: goto L_00161CAC;
    case 165u: goto L_00161CC0;
    case 166u: goto L_00161CD4;
    case 167u: goto L_00161D20;
    case 168u: goto L_00161D34;
    case 169u: goto L_00161D48;
    case 170u: goto L_00161D68;
    case 171u: goto L_00161D7C;
    case 172u: goto L_00161D90;
    case 173u: goto L_00161DC0;
    case 174u: goto L_00161E1C;
    case 175u: goto L_00161E38;
    case 176u: goto L_00161E3C;
    case 177u: goto L_00161E58;
    case 178u: goto L_00161F10;
    case 179u: goto L_00161F1C;
    case 180u: goto L_00161F40;
    case 181u: goto L_00162040;
    case 182u: goto L_001620D8;
    case 183u: goto L_00162220;
    case 184u: goto L_00162264;
    case 185u: goto L_00162278;
    case 186u: goto L_00162294;
    case 187u: goto L_001622EC;
    case 188u: goto L_001622F4;
    case 189u: goto L_0016231C;
    case 190u: goto L_00162338;
    case 191u: goto L_00162360;
    case 192u: goto L_00162378;
    case 193u: goto L_0016238C;
    case 194u: goto L_001623A0;
    case 195u: goto L_001623BC;
    case 196u: goto L_00162414;
    case 197u: goto L_0016241C;
    case 198u: goto L_0016243C;
    case 199u: goto L_00162444;
    case 200u: goto L_00162460;
    case 201u: goto L_00162488;
    case 202u: goto L_001624A0;
    case 203u: goto L_001624C0;
    case 204u: goto L_00162560;
    case 205u: goto L_001625A4;
    case 206u: goto L_001625F0;
    case 207u: goto L_00162634;
    case 208u: goto L_00162680;
    case 209u: goto L_001626BC;
    case 210u: goto L_001626F0;
    case 211u: goto L_00162728;
    case 212u: goto L_00162740;
    case 213u: goto L_00162774;
    case 214u: goto L_00162790;
    case 215u: goto L_001627C0;
    case 216u: goto L_001627FC;
    case 217u: goto L_00162968;
    case 218u: goto L_00162988;
    case 219u: goto L_00162A40;
    case 220u: goto L_00162A54;
    case 221u: goto L_00162A60;
    case 222u: goto L_00162A84;
    case 223u: goto L_00162AA0;
    case 224u: goto L_00162BD4;
    case 225u: goto L_00162C1C;
    case 226u: goto L_00162C3C;
    case 227u: goto L_00162C58;
    case 228u: goto L_00162C88;
    case 229u: goto L_00162CB0;
    case 230u: goto L_00162CD8;
    case 231u: goto L_00162D04;
    case 232u: goto L_00162D2C;
    case 233u: goto L_00162D58;
    case 234u: goto L_00162D84;
    case 235u: goto L_00162DC0;
    case 236u: goto L_00162DDC;
    case 237u: goto L_00162E3C;
    case 238u: goto L_00162EC8;
    case 239u: goto L_001630A0;
    case 240u: goto L_001630C0;
    case 241u: goto L_00163160;
    case 242u: goto L_001631B0;
    case 243u: goto L_001631C4;
    case 244u: goto L_001631F0;
    case 245u: goto L_0016323C;
    case 246u: goto L_00163284;
    case 247u: goto L_001632A4;
    case 248u: goto L_001632CC;
    case 249u: goto L_001632EC;
    case 250u: goto L_00163300;
    case 251u: goto L_00163330;
    case 252u: goto L_00163368;
    case 253u: goto L_00163420;
    case 254u: goto L_00163430;
    case 255u: goto L_00163450;
    case 256u: goto L_0016346C;
    case 257u: goto L_00163480;
    case 258u: goto L_00163488;
    case 259u: goto L_001634B0;
    case 260u: goto L_0016352C;
    case 261u: goto L_00163550;
    case 262u: goto L_00163564;
    case 263u: goto L_00163578;
    case 264u: goto L_00163580;
    case 265u: goto L_00163588;
    case 266u: goto L_0016359C;
    case 267u: goto L_001635AC;
    case 268u: goto L_001635B4;
    case 269u: goto L_001635BC;
    case 270u: goto L_001635D8;
    case 271u: goto L_001635FC;
    case 272u: goto L_00163604;
    case 273u: goto L_0016360C;
    case 274u: goto L_00163628;
    case 275u: goto L_00163644;
    case 276u: goto L_0016364C;
    case 277u: goto L_001636D8;
    case 278u: goto L_001636EC;
    case 279u: goto L_00163700;
    case 280u: goto L_00163708;
    case 281u: goto L_00163710;
    case 282u: goto L_00163724;
    case 283u: goto L_00163744;
    case 284u: goto L_00163750;
    case 285u: goto L_00163758;
    case 286u: goto L_00163780;
    case 287u: goto L_00163788;
    case 288u: goto L_001637B0;
    case 289u: goto L_0016381C;
    case 290u: goto L_0016382C;
    case 291u: goto L_00163840;
    case 292u: goto L_00163864;
    case 293u: goto L_00163874;
    case 294u: goto L_00163880;
    case 295u: goto L_001638B8;
    case 296u: goto L_001639A0;
    case 297u: goto L_001639C0;
    case 298u: goto L_001639F0;
    case 299u: goto L_00163A10;
    case 300u: goto L_00163A20;
    case 301u: goto L_00163A30;
    case 302u: goto L_00163AF0;
    case 303u: goto L_00163B04;
    case 304u: goto L_00163B18;
    case 305u: goto L_00163B30;
    case 306u: goto L_00163C20;
    case 307u: goto L_00163C48;
    case 308u: goto L_00163C5C;
    case 309u: goto L_00163CF0;
    case 310u: goto L_00163D0C;
    case 311u: goto L_00163D14;
    case 312u: goto L_00163D28;
    case 313u: goto L_00163D9C;
    case 314u: goto L_00163DD0;
    case 315u: goto L_00163DE0;
    case 316u: goto L_00163DFC;
    case 317u: goto L_00163E34;
    case 318u: goto L_00163E6C;
    case 319u: goto L_00163E98;
    case 320u: goto L_00163EA0;
    case 321u: goto L_00163EB4;
    case 322u: goto L_00163EC8;
    case 323u: goto L_00163ED0;
    case 324u: goto L_00163EF0;
    case 325u: goto L_00163F20;
    case 326u: goto L_00163FD0;
    default: bad_entry(c, 0x00160000u); return;
    }
L_00160000:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00160004:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_00160008:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 515u));
    c.budget -= 1;
L_0016000C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 1;
L_00160010:
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 1;
L_00160014:
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00160018:
    c.r[5].d[0] = ld8((c.r[5].w[0] + 106u));
    c.budget -= 1;
L_0016001C:
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00160028:
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00160030:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 7u));
    c.budget -= 1;
L_00160034:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001601F8; } }
    goto L_0016003C;
L_00160038:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_0016003C:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 3;
L_00160048:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00160068; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8685u)));
    c.budget -= 1;
L_00160058:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00160068; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_00160068:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0016006C:
    c.r[5].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00160048u | kUnwind; return; } goto L_00160048; } }
    goto L_00160078;
L_00160074:
    set32(c.r[6], c.r[6].w[0] + 8704u);
    c.budget -= 1;
L_00160078:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00160090; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001601F8; } }
    c.budget -= 1;
L_00160090:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].d[0] = ld16((c.r[3].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 5;
L_001600A4:
    c.r[5].d[0] = ld16((c.r[5].w[0] + 106u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 130u);  if (t) { goto L_00160108; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld16((c.r[28].w[0] - 24152u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].d[0] = c.r[6].d[0] | 4ull;
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 106u));
    c.r[5].d[0] = c.r[6].d[0] & 65280ull;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001600F8; } }
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00160108; } }
    c.budget -= 1;
L_001600F8:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[5].d[0] = c.r[5].d[0] | 16ull;
    c.budget -= 2;
L_00160100:
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00160108:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001601F0; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00160168; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 184u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00160168; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 186u));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00160168; } }
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] & 65531ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001601F0; } }
L_00160168:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[5], c.r[4].w[0] - 1u);  if (t) { goto L_001601B0; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 112u), c.f[1]);  if (t) { goto L_001601F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_001601F0; } }
    c.budget -= 1;
L_001601B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 112u), c.f[1]);  if (t) { goto L_001601F0; } }
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] & 65531ull;
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001601EC:
    c.budget -= 1;
L_001601F0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001601F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 2;
L_00160200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00160210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00160568; } }
    goto L_00160234;
L_00160230:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00160234:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 1;
L_00160238:
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12786u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00160568; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 310u));
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[16], c.r[18].w[0] + 304u);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001603A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016027Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0016027Cu) [[unlikely]] return; }
L_0016027C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D60000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160290u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00160290u) [[unlikely]] return; }
L_00160290:
    c.f[12] = ld32((c.r[18].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001602A4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001602A4u) [[unlikely]] return; }
L_001602A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 7280u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001602FCu); st32((c.r[1].w[0] + 19452u), 0u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001602FCu) [[unlikely]] return; }
L_001602FC:
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0016033C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00160354; } }
L_0016033C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00160354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[15] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[1] = fp::mul(c.f[15], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42980000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160388u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00160388u) [[unlikely]] return; }
L_00160388:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016039Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0016039Cu) [[unlikely]] return; }
L_0016039C:
    c.budget -= 1;
L_001603A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001603A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x001603A8u) [[unlikely]] return; }
L_001603A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001603B8u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x001603B8u) [[unlikely]] return; }
L_001603B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2640000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001603D4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001603D4u) [[unlikely]] return; }
L_001603D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001603E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001603E8u) [[unlikely]] return; }
L_001603E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001603F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x001603F0u) [[unlikely]] return; }
L_001603F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 2960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160404u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00160404u) [[unlikely]] return; }
    goto L_00160404;
L_00160400:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00160404:
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160458; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00160458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);  if (t) { goto L_00160478; } }
L_00160458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.budget -= 8;
L_00160478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + 2720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001604A0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001604B8; } }
L_001604A0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001604B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[15] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[1] = fp::mul(c.f[15], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42980000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001604ECu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001604ECu) [[unlikely]] return; }
L_001604EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43810000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2600000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160508u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00160508u) [[unlikely]] return; }
L_00160508:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016051Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0016051Cu) [[unlikely]] return; }
L_0016051C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00160568; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42300000u);  if (t) { goto L_00160568; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160550u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00160550u) [[unlikely]] return; }
L_00160550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 4640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160564u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00160564u) [[unlikely]] return; }
L_00160564:
    c.budget -= 1;
L_00160568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00160580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001605DCu); set32(c.r[16], c.r[2].w[0] + 140u);  if (depth < kMaxDepth) unit_0018(c, 215u, depth + 1u); else { c.pc = 0x001627C0u; return; } if (c.pc != 0x001605DCu) [[unlikely]] return; }
L_001605DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001605E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x001605E4u) [[unlikely]] return; }
L_001605E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00160AF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00160620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160600u);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x00160600u) [[unlikely]] return; }
L_00160600:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016061Cu); st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 318u, depth + 1u); else { c.pc = 0x0015F610u; return; } if (c.pc != 0x0016061Cu) [[unlikely]] return; }
L_0016061C:
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.budget -= 1;
L_00160620:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1024u);
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001608E0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_00160760; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00160658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160AE8; } }
    c.budget -= 1;
L_00160658:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_001606A0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00160678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001606A8; } }
L_00160678:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00160690; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_001606A8; } }
L_00160690:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001606A8; } }
    c.budget -= 1;
L_001606A0:
    set32(c.r[3], 0u + 10u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001606A8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00160708; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[7], c.r[17].w[0] + 12u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 16u), c.r[5].w[0]);
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[7].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 20;
L_00160708:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00160AE8; } }
    c.budget -= 1;
L_00160760:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001607D8; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00160AE8; } }
    c.budget -= 1;
L_001607D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 235u));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + 1u);  if (t) { goto L_00160808; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00160AE8; } }
    c.budget -= 1;
L_00160808:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[17].w[0] + 12u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 8;
L_00160828:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00160840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00160848; } }
    c.budget -= 1;
L_00160840:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00160848:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00160870; } }
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0] + 4u), c.f[1]);  if (t) { goto L_00160870; } }
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_00160870:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00160828u | kUnwind; return; } goto L_00160828; } }
    c.r[3].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00160AE8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.budget -= 1;
L_00160898:
    set32(c.r[7], c.r[17].w[0] + 12u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 16u), c.r[5].w[0]);
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_00160AE8; } }
    c.budget -= 1;
L_001608E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 235u));
    set32(c.r[3], c.r[6].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001609B8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00160928; } }
    st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00160960; } }
L_00160928:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00160940; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00160960; } }
L_00160940:
    set32(c.r[3], c.r[4].w[0] - 5u);
    st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00160960; } }
    st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00160960:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00160AE8; } }
    c.budget -= 1;
L_001609B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8693u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8694u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001609E0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00160A50; } }
    c.budget -= 1;
L_001609E0:
    c.r[3].d[0] = 0ull << 48;
    st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00160AE8; } }
L_00160A50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[8], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 12;
L_00160A80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00160A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_00160AA0; } }
    c.budget -= 1;
L_00160A98:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00160AA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00160AD0; } }
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[8].w[0] + 4u), c.f[1]);  if (t) { goto L_00160AD0; } }
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[8].w[0] + 4u), c.r[5].w[0]);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
L_00160AD0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00160A80u | kUnwind; return; } goto L_00160A80; } }
    c.budget -= 1;
L_00160AE8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00160AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00160B10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160B40u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0018(c, 215u, depth + 1u); else { c.pc = 0x001627C0u; return; } if (c.pc != 0x00160B40u) [[unlikely]] return; }
L_00160B40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160B58u);  if (depth < kMaxDepth) unit_0014(c, 254u, depth + 1u); else { c.pc = 0x00152E00u; return; } if (c.pc != 0x00160B58u) [[unlikely]] return; }
L_00160B58:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[1] = ld32((c.r[19].w[0] + 348u));
    set32(c.r[3], c.r[3].w[0] - 27856u);
    c.f[0] = c.r[2].w[0];
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[17], c.r[19].w[0] + 304u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    c.f[20] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 9);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160B98u); set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00160B98u) [[unlikely]] return; }
L_00160B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC32C0000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160BB4u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00160BB4u) [[unlikely]] return; }
L_00160BB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160BC8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x00160BC8u) [[unlikely]] return; }
L_00160BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160BD0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00160BD0u) [[unlikely]] return; }
L_00160BD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3960000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160BE4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00160BE4u) [[unlikely]] return; }
L_00160BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160BECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00160BECu) [[unlikely]] return; }
L_00160BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 13040u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00160C98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00160C38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00160C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160E00; } }
L_00160C38:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 13264u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13268u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13272u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_00160E00; } }
L_00160C98:
    c.r[20].d[0] = c.r[16].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00160D90; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00160D28; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00160CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160E00; } }
L_00160CC0:
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[20], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160CECu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00160CECu) [[unlikely]] return; }
L_00160CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160CF4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00160CF4u) [[unlikely]] return; }
L_00160CF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + 13272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_00160E00; } }
    c.budget -= 1;
L_00160D28:
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[20], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D54u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00160D54u) [[unlikely]] return; }
L_00160D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D5Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00160D5Cu) [[unlikely]] return; }
L_00160D5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + 13272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_00160E00; } }
    c.budget -= 1;
L_00160D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D98u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00160D98u) [[unlikely]] return; }
L_00160D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160DA0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00160DA0u) [[unlikely]] return; }
L_00160DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], c.r[20].w[0] << 1);
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 13268u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160DE0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00160DE0u) [[unlikely]] return; }
L_00160DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160DE8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00160DE8u) [[unlikely]] return; }
L_00160DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_00160E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160E14u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00160E14u) [[unlikely]] return; }
L_00160E14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160E28u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00160E28u) [[unlikely]] return; }
L_00160E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160E30u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00160E30u) [[unlikely]] return; }
L_00160E30:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8693u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00160E70; } }
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_00160E90; } }
L_00160E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.budget -= 8;
L_00160E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160E98u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00160E98u) [[unlikely]] return; }
L_00160E98:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160EACu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00160EACu) [[unlikely]] return; }
L_00160EAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160EC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00160EC0u) [[unlikely]] return; }
L_00160EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160EC8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00160EC8u) [[unlikely]] return; }
L_00160EC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00160F00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00161020; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 235u));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161020; } }
    c.budget -= 1;
L_00160F00:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[21], c.r[17].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[19].w[0] + 4u);
    set32(c.r[17], c.r[19].w[0] + 8u);
    c.budget -= 12;
L_00160F30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160F44u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00160F44u) [[unlikely]] return; }
L_00160F44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160F58u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00160F58u) [[unlikely]] return; }
L_00160F58:
    c.f[12] = ld32((c.r[21].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160F6Cu); c.f[13] = fp::mul(c.f[12], c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00160F6Cu) [[unlikely]] return; }
L_00160F6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 12800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 12u);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[1].w[0] + 19444u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160FE4u); st32((c.r[1].w[0] + 19456u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00160FE4u) [[unlikely]] return; }
L_00160FE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160FF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00160FF8u) [[unlikely]] return; }
L_00160FF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016100Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0016100Cu) [[unlikely]] return; }
L_0016100C:
    c.budget -= 1;
L_00161010:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00160F30u | kUnwind; return; } goto L_00160F30; } }
L_00161020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161028u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00161028u) [[unlikely]] return; }
L_00161028:
    c.f[1] = c.r[16].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19412u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 6;
L_00161040:
    set32(c.r[2], c.r[2].w[0] + 12560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[2] = c.r[3].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 16;
L_00161080:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13268u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13272u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC36C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    st32((c.r[1].w[0] + 19416u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 16;
L_001610C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    c.f[14] = 0u;
    st32((c.r[1].w[0] + 19448u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = c.r[3].w[0];
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001610F4u); st32((c.r[1].w[0] + 19456u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001610F4u) [[unlikely]] return; }
L_001610F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016110Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016110Cu) [[unlikely]] return; }
L_0016110C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161120u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161120u) [[unlikely]] return; }
L_00161120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161128u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00161128u) [[unlikely]] return; }
L_00161128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC39C0000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161144u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161144u) [[unlikely]] return; }
L_00161144:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161154u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x00161154u) [[unlikely]] return; }
L_00161154:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161168u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161168u) [[unlikely]] return; }
L_00161168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00161190:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001611C0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001611C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001611D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001611F8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001611F8:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00161200:
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_00161208:
    set32(c.r[5], c.r[3].w[0] << (c.r[7].w[0] & 31u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161248; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[2].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[7].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00161260; } }
    c.budget -= 1;
L_00161248:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161208u | kUnwind; return; } goto L_00161208; } }
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00161260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00161490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016129Cu);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0016129Cu) [[unlikely]] return; }
L_0016129C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161490; } }
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001612F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001612C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161328; } }
    goto L_001612C4;
L_001612C0:
    c.budget -= 1;
L_001612C4:
    c.budget -= 1;
L_001612C8:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_001612F0:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001612F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[7].d[0] << 56;  if (t) { goto L_00161318; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161318u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0018(c, 94u, depth + 1u); else { c.pc = 0x00161190u; return; } if (c.pc != 0x00161318u) [[unlikely]] return; }
L_00161318:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001612F8u | kUnwind; return; } goto L_001612F8; } }
L_00161328:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161490; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00161448; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001613E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00161390; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00161368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161488; } }
L_00161368:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00161488; } }
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161390u); st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0018(c, 95u, depth + 1u); else { c.pc = 0x001611D0u; return; } if (c.pc != 0x00161390u) [[unlikely]] return; }
L_00161390:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161488; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 120u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00161488; } }
L_001613E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00161488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016140Cu);  if (depth < kMaxDepth) unit_0018(c, 95u, depth + 1u); else { c.pc = 0x001611D0u; return; } if (c.pc != 0x0016140Cu) [[unlikely]] return; }
L_0016140C:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00161438; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00161488; } }
L_00161438:
    set32(c.r[3], 0u + 120u);
    c.budget -= 1;
L_0016143C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00161488; } }
    c.budget -= 1;
L_00161448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161488; } }
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00161488:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00161490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001614B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161640; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161640; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 306u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 304u);  if (t) { goto L_00161640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001614F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001614F0u) [[unlikely]] return; }
L_001614F0:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2340000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161504u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161504u) [[unlikely]] return; }
L_00161504:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[13];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016152Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016152Cu) [[unlikely]] return; }
L_0016152C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.budget -= 3;
L_00161538:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161580u); st32((c.r[1].w[0] + 19456u), 0u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161580u) [[unlikely]] return; }
L_00161580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161588u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00161588u) [[unlikely]] return; }
L_00161588:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2340000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001615A4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001615A4u) [[unlikely]] return; }
L_001615A4:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[13];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001615CCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001615CCu) [[unlikely]] return; }
L_001615CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 16880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001615E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x001615E0u) [[unlikely]] return; }
L_001615E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00161640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001615F8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001615F8u) [[unlikely]] return; }
L_001615F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2380000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161614u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161614u) [[unlikely]] return; }
L_00161614:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161628u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00161628u) [[unlikely]] return; }
L_00161628:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161640u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x00161640u) [[unlikely]] return; }
    goto L_00161640;
L_0016163C:
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_00161640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00161650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00161730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161674u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00161674u) [[unlikely]] return; }
L_00161674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161730; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[16].w[0] + 304u);  if (t) { goto L_00161698; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    c.budget -= 4;
L_00161698:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] - 26064u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001616E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[7].w[0]), c.r[4].w[0]);  if (t) { goto L_001616E0; } }
    set32(c.r[3], 0u + 240u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001616E8; } }
    c.budget -= 1;
L_001616E0:
    st32((c.r[7].w[0] + 8u), 0u);
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 2;
L_001616E8:
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00161720; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[7].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00161728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), 0u);  if (t) { goto L_00161728; } }
    c.budget -= 1;
L_00161720:
    set32(c.r[3], 0u + 15u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00161728:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00161730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00161740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00161958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161768u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00161768u) [[unlikely]] return; }
L_00161768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161778u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x00161778u) [[unlikely]] return; }
L_00161778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016178Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0016178Cu) [[unlikely]] return; }
L_0016178C:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001617D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_001617F0; } }
    c.budget -= 1;
L_001617D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_001617F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 3680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161814u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161814u) [[unlikely]] return; }
L_00161814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.budget -= 10;
L_0016183C:
    c.f[13] = c.r[2].w[0];
    c.budget -= 1;
L_00161840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161848u); st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161848u) [[unlikely]] return; }
L_00161848:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161884u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00161884u) [[unlikely]] return; }
    goto L_00161884;
L_00161880:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00161884:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161898u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161898u) [[unlikely]] return; }
L_00161898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001618ACu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001618ACu) [[unlikely]] return; }
L_001618AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001618FCu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x001618FCu) [[unlikely]] return; }
L_001618FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161910u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161910u) [[unlikely]] return; }
L_00161910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161924u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161924u) [[unlikely]] return; }
L_00161924:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161944u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00161944u) [[unlikely]] return; }
L_00161944:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161958u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161958u) [[unlikely]] return; }
L_00161958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00161970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00161A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161998u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00161998u) [[unlikely]] return; }
L_00161998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161A68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_001619C8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001619C4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x001619C4u) [[unlikely]] return; }
L_001619C4:
    c.budget -= 1;
L_001619C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    set32(c.r[5], 0u + 240u);
    set32(c.r[4], 0u + 15u);
    c.budget -= 6;
L_001619E0:
    set32(c.r[7], ld32((c.r[6].w[0] + 1792u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00161A08; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[16].w[0]), c.r[7].w[0]);  if (t) { goto L_00161A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00161A08; } }
L_00161A00:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 2;
L_00161A08:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00161A40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00161A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00161A48; } }
    c.budget -= 1;
L_00161A40:
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 2;
L_00161A48:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001619E0u | kUnwind; return; } goto L_001619E0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00161A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00161A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00161DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161AACu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00161AACu) [[unlikely]] return; }
L_00161AAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 48u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 3;
L_00161AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161AC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00161AC0u) [[unlikely]] return; }
L_00161AC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161AD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161AD4u) [[unlikely]] return; }
L_00161AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161ADCu); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00161ADCu) [[unlikely]] return; }
L_00161ADC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 48u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161AF0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00161AF0u) [[unlikely]] return; }
L_00161AF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B04u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161B04u) [[unlikely]] return; }
L_00161B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B0Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00161B0Cu) [[unlikely]] return; }
L_00161B0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC32D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43420000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B28u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161B28u) [[unlikely]] return; }
L_00161B28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B40u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x00161B40u) [[unlikely]] return; }
L_00161B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B48u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00161B48u) [[unlikely]] return; }
L_00161B48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43640000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43420000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B64u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161B64u) [[unlikely]] return; }
L_00161B64:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B80u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x00161B80u) [[unlikely]] return; }
L_00161B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B88u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00161B88u) [[unlikely]] return; }
L_00161B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 9920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161BDCu); st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161BDCu) [[unlikely]] return; }
L_00161BDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2A20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 1840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161C04u); st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161C04u) [[unlikely]] return; }
L_00161C04:
    set32(c.r[18], c.r[16].w[0] + 304u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00161C10:
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00161C58; } }
L_00161C3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_00161C40:
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_00161C70; } }
L_00161C58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_00161C70:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CACu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00161CACu) [[unlikely]] return; }
L_00161CAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161CC0u) [[unlikely]] return; }
L_00161CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CD4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161CD4u) [[unlikely]] return; }
L_00161CD4:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D20u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00161D20u) [[unlikely]] return; }
L_00161D20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161D34u) [[unlikely]] return; }
L_00161D34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D48u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161D48u) [[unlikely]] return; }
L_00161D48:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D68u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00161D68u) [[unlikely]] return; }
L_00161D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00161D7Cu) [[unlikely]] return; }
L_00161D7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D90u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00161D90u) [[unlikely]] return; }
L_00161D90:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161C10u | kUnwind; return; } goto L_00161C10; } }
L_00161DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00161DC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 39u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001621F0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001621F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001621F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161E1Cu);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00161E1Cu) [[unlikely]] return; }
L_00161E1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001621F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 285u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001621F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    c.budget -= 1;
L_00161E38:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00161E3C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 191u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[20], c.r[21].w[0] + 304u);  if (t) { goto L_001621F0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00161E58:
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00161F88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00161E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162018; } }
L_00161E78:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 110u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] != 0ull; st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00161EC8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00161EF8; } }
L_00161EC8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[2].w[0] - 27856u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 191u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 12;
L_00161EF8:
    set32(c.r[22], ld32((c.r[20].w[0] + 20u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[20].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00161F10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 10304u);
    c.budget -= 3;
L_00161F1C:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161F40u); set32(c.r[4], c.r[2].w[0] + 556u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00161F40u) [[unlikely]] return; }
L_00161F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00161F70; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 32u));
    set32(c.r[4], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    set32(c.r[3], 0u + 20u);
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_00161F70:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161F10u | kUnwind; return; } goto L_00161F10; } }
    c.budget -= 1;
L_00161F88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00161FA0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00161FA0:
    set32(c.r[7], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 1800u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] - 1u);  if (t) { goto L_00162018; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 32u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162018; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00161FE0; } }
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00162018; } }
    c.budget -= 1;
L_00161FE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 515u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 186u));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162018; } }
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[20].w[0] + 16u), 0u);
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st8((c.r[7].w[0] + 785u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00162018:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 186u));
    set32(c.r[4], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162058; } }
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00162040:
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[20].w[0] + 16u), 0u);
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001621D8; } }
L_00162058:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 184u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001621D8; } }
    c.r[5].d[0] = ld16((c.r[20].w[0] + 10u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00162180; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00162128; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_001620C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00162098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001621D8; } }
    c.budget -= 1;
L_00162098:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_001621D8; } }
    set32(c.r[3], 0u + 10u);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 16u), 0u);
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 8;
L_001620C8:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_001620D8:
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001621D8; } }
    c.r[5].d[0] = ld16((c.r[20].w[0] + 10u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 90u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[20].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001621D8; } }
    c.budget -= 1;
L_00162128:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00162148; } }
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 90u);
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00162148:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001621D8; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 10u));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001621D8; } }
    c.budget -= 1;
L_00162180:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001621D8; } }
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001621D8; } }
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001621D8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161E58u | kUnwind; return; } goto L_00161E58; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[21].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001621F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00162220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001624A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001624A0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 312u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + 304u);  if (t) { goto L_00162378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162264u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00162264u) [[unlikely]] return; }
L_00162264:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3090000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162278u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00162278u) [[unlikely]] return; }
L_00162278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162294u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00162294u) [[unlikely]] return; }
L_00162294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001622ECu); st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001622ECu) [[unlikely]] return; }
L_001622EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001622F4u); set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001622F4u) [[unlikely]] return; }
L_001622F4:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F570000u);
    c.r[3].d[0] = c.r[2].d[0] | 2621ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[13];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016231Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0016231Cu) [[unlikely]] return; }
L_0016231C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162338u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00162338u) [[unlikely]] return; }
L_00162338:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    c.f[13] = 0u;
    c.f[14] = c.f[13];
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 22u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162360u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00162360u) [[unlikely]] return; }
L_00162360:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = ld16((c.r[17].w[0] + 2u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162378u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 87u, depth + 1u); else { c.pc = 0x002D9300u; return; } if (c.pc != 0x00162378u) [[unlikely]] return; }
L_00162378:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001624A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016238Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0016238Cu) [[unlikely]] return; }
L_0016238C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3270000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001623A0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001623A0u) [[unlikely]] return; }
L_001623A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001623BCu); c.f[12] = ld32((c.r[17].w[0] + 52u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001623BCu) [[unlikely]] return; }
L_001623BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162414u); st32((c.r[1].w[0] + 19456u), 0u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00162414u) [[unlikely]] return; }
L_00162414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016241Cu); set32(c.r[16], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0016241Cu) [[unlikely]] return; }
L_0016241C:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F570000u);
    c.r[3].d[0] = c.r[2].d[0] | 2621ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[13];
    c.budget -= 8;
L_0016243C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162444u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00162444u) [[unlikely]] return; }
L_00162444:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3280000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162460u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00162460u) [[unlikely]] return; }
L_00162460:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 38u));
    c.f[13] = 0u;
    c.f[14] = c.f[13];
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 58u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162488u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00162488u) [[unlikely]] return; }
L_00162488:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = ld16((c.r[17].w[0] + 38u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001624A0u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 87u, depth + 1u); else { c.pc = 0x002D9300u; return; } if (c.pc != 0x001624A0u) [[unlikely]] return; }
L_001624A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001624C0:
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 1840u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] - 27856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 82u)));
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[6], c.r[8].w[0] << 4);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 9);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8661u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00162538; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.f[0]);  if (t) { goto L_00162550; } }
    c.budget -= 1;
L_00162538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 6;
L_00162550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162560:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - 1840u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001625A4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 208u, depth + 1u); else { c.pc = 0x00162680u; return; } if (c.pc != 0x001625A4u) [[unlikely]] return; }
L_001625A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_001625C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_001625E0; } }
    c.budget -= 1;
L_001625C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 6;
L_001625E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001625F0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - 1840u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162634u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 208u, depth + 1u); else { c.pc = 0x00162680u; return; } if (c.pc != 0x00162634u) [[unlikely]] return; }
L_00162634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00162658; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_00162670; } }
    c.budget -= 1;
L_00162658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 6;
L_00162670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00162680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[4].w[0] << 4);  if (t) { goto L_001626C4; } }
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001626BCu); c.r[4].d[0] = ld8((c.r[2].w[0] + 515u));  if (depth < kMaxDepth) unit_0072(c, 23u, depth + 1u); else { c.pc = 0x002C82E0u; return; } if (c.pc != 0x001626BCu) [[unlikely]] return; }
L_001626BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001626E0; } }
L_001626C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 515u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_001626E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001626F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x00162728u) [[unlikely]] return; }
L_00162728:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162740u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x00162740u) [[unlikely]] return; }
L_00162740:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00162778; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162774u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00162774u) [[unlikely]] return; }
L_00162774:
    c.budget -= 1;
L_00162778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00162790:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001627B0; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001627B8; } }
L_001627B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001627B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001627C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001627FCu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x001627FCu) [[unlikely]] return; }
L_001627FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00162A18; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00162948; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_001628B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00162870; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00162840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162A20; } }
    c.budget -= 1;
L_00162840:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162A28; } }
L_00162858:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00162A20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162A28; } }
L_00162870:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162898; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];  if (t) { goto L_00162A28; } }
    c.budget -= 1;
L_00162898:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162A20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162A28; } }
L_001628B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001628F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001628D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 1ull;  if (t) { goto L_001628F8; } }
    c.budget -= 1;
L_001628D8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001628F8; } }
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 2;
L_001628F8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162910; } }
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 2;
L_00162910:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162920; } }
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 1;
L_00162920:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162930; } }
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 1;
L_00162930:
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162940; } }
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 1;
L_00162940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162A28; } }
L_00162948:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 26u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00162960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162A28; } }
L_00162960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162968u);  if (depth < kMaxDepth) unit_0072(c, 40u, depth + 1u); else { c.pc = 0x002C88F0u; return; } if (c.pc != 0x00162968u) [[unlikely]] return; }
L_00162968:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6792u)));
    set32(c.r[10], c.r[10].w[0] - 27856u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[5], 0u + 255u);
    c.budget -= 8;
L_00162988:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_00162A00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162A00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 8661u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_00162A00; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 26u));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 8658u));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 6u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00162A00; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001629F8; } }
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001629F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00162A00; } }
    c.budget -= 1;
L_001629F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00162A28; } }
L_00162A00:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162988u | kUnwind; return; } goto L_00162988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162A20; } }
L_00162A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 27u));  if (t) { goto L_00162A28; } }
L_00162A20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00162A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00162A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162A54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00162A54u) [[unlikely]] return; }
L_00162A54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162A60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x00162A60u) [[unlikely]] return; }
L_00162A60:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00162A88; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2300000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162A84u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00162A84u) [[unlikely]] return; }
L_00162A84:
    c.budget -= 1;
L_00162A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00162AA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 27856u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 592u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 9);
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00163140; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 19ll ? 1ull : 0ull;  if (t) { goto L_00163140; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 18u);  if (t) { goto L_00163140; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00162B20; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 503u)));
    set32(c.r[4], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00163140; } }
    c.budget -= 1;
L_00162B20:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00162B40; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00162B40; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00163140; } }
L_00162B40:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00163008; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00162DC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00162B80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00162D60; } }
    c.budget -= 1;
L_00162B80:
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00162CB8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00162BE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00162BE0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162BD4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162BD4u) [[unlikely]] return; }
L_00162BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 1;
L_00162BE0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00162DC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00162C28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162DC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162C1Cu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162C1Cu) [[unlikely]] return; }
L_00162C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 1;
L_00162C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00162C60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162DC0; } }
    goto L_00162C40;
L_00162C3C:
    c.budget -= 1;
L_00162C40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162C58u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162C58u) [[unlikely]] return; }
L_00162C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162DC0; } }
L_00162C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162C88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00162C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162C88u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162C88u) [[unlikely]] return; }
L_00162C88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162DC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162CB0u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162CB0u) [[unlikely]] return; }
L_00162CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162DC0; } }
L_00162CB8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00162D10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00162CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162CD8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162CD8u) [[unlikely]] return; }
L_00162CD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162DC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D04u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162D04u) [[unlikely]] return; }
L_00162D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 1;
L_00162D10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00162DC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00162D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D2Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162D2Cu) [[unlikely]] return; }
L_00162D2C:
    c.budget -= 1;
L_00162D30:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162DC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D58u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162D58u) [[unlikely]] return; }
L_00162D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162DC0; } }
L_00162D60:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00162D88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00162D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D84u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162D84u) [[unlikely]] return; }
L_00162D84:
    c.budget -= 1;
L_00162D88:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162DC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162DC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00162DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162DC0u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00162DC0u) [[unlikely]] return; }
L_00162DC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00162EC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162DDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 28u, depth + 1u); else { c.pc = 0x001501D0u; return; } if (c.pc != 0x00162DDCu) [[unlikely]] return; }
L_00162DDC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00162E80; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00162E48; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00162E20; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00162E20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00162E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162EB8; } }
    c.budget -= 1;
L_00162E20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 887u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[4].d[0]; c.r[9].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00162E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));  if (t) { goto L_00162FC8; } }
L_00162E3C:
    c.budget -= 1;
L_00162E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162FC8; } }
L_00162E48:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00163140; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_00163140; } }
    c.r[8].d[0] = ld8((c.r[28].w[0] - 24164u));
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 24168u), c.r[16].w[0]);
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24164u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00162FC8; } }
L_00162E80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 503u)));
    set32(c.r[4], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00163140; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24160u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_00163140; } }
    c.r[8].d[0] = ld8((c.r[28].w[0] - 24156u));
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 24160u), c.r[16].w[0]);
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24156u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00162FC8; } }
L_00162EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163140; } }
L_00162EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162EC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 28u, depth + 1u); else { c.pc = 0x001501D0u; return; } if (c.pc != 0x00162EC8u) [[unlikely]] return; }
L_00162EC8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00162F80; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00162F50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00162F00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00162F00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162FC0; } }
    c.budget -= 1;
L_00162F00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00162F20; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00162FC8; } }
L_00162F20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00162F40; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_00162FC8; } }
    c.budget -= 1;
L_00162F40:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00162FC8; } }
L_00162F50:
    set32(c.r[4], ld32((c.r[28].w[0] - 24168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_00163140; } }
    c.r[8].d[0] = ld8((c.r[28].w[0] - 24164u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 24168u), c.r[16].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24164u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00162FC8; } }
    c.budget -= 1;
L_00162F80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 503u)));
    set32(c.r[4], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00163140; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24160u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_00163140; } }
    c.r[8].d[0] = ld8((c.r[28].w[0] - 24156u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 24160u), c.r[16].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24156u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00162FC8; } }
    c.budget -= 1;
L_00162FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163140; } }
L_00162FC8:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[5], c.r[6].w[0] << 13);
    set32(c.r[4], c.r[9].w[0] << 12);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[8].w[0] << 8);
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[6], c.r[7].w[0] << 11);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = ld16((c.r[8].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001630F0; } }
    c.budget -= 1;
L_00163008:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 76u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00163020; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00163140; } }
L_00163020:
    set32(c.r[4], ld32((c.r[19].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00163038; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00163040; } }
L_00163038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163140; } }
L_00163040:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_00163098; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00163088; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00163078; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00163078; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00163078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001630B0; } }
L_00163078:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));  if (t) { goto L_001630B8; } }
    c.budget -= 1;
L_00163088:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00163140; } }
L_00163098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001630A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 28u, depth + 1u); else { c.pc = 0x001501D0u; return; } if (c.pc != 0x001630A0u) [[unlikely]] return; }
L_001630A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00163140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_001630B8; } }
L_001630B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163140; } }
L_001630B8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 2;
L_001630C0:
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 11);
    c.r[5].d[0] = c.r[5].d[0] | 16384ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 56u)));
    c.r[3].d[0] = ld16((c.r[8].w[0] + 36u));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
L_001630F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00163140; } }
    set32(c.r[3], 0u + 480u);
    set32(c.r[4], 0u + 120u);
    st16((c.r[8].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 54u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 56u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 36u));
    st16((c.r[3].w[0] + 36u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 38u));
    st16((c.r[3].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 40u));
    st16((c.r[3].w[0] + 40u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 18;
L_00163140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00163160:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[6], 0u + 480u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 120u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 36u));
    st16((c.r[5].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 38u));
    st16((c.r[3].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 40u));
    st16((c.r[3].w[0] + 40u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_001631B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001631C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x001631C4u) [[unlikely]] return; }
L_001631C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001631D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));  if (t) { goto L_001631D8; } }
L_001631D4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_001631D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001631F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_00163248; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001632F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00163228; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001632F0; } }
L_00163228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30D0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016323Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016323Cu) [[unlikely]] return; }
L_0016323C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001632F0; } }
    c.budget -= 1;
L_00163248:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00163268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001632B0; } }
    c.budget -= 1;
L_00163268:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC3160000u);  if (t) { goto L_00163290; } }
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163284u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00163284u) [[unlikely]] return; }
L_00163284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001632F0; } }
    c.budget -= 1;
L_00163290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001632A4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001632A4u) [[unlikely]] return; }
L_001632A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001632F0; } }
    c.budget -= 1;
L_001632B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC3200000u);  if (t) { goto L_001632D8; } }
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001632CCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001632CCu) [[unlikely]] return; }
L_001632CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001632F0; } }
    c.budget -= 1;
L_001632D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001632ECu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001632ECu) [[unlikely]] return; }
L_001632EC:
    c.budget -= 1;
L_001632F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00163300:
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], 0u - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 27856u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
L_00163330:
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    c.r[10].d[0] = c.r[5].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    set32(c.r[6], c.r[7].w[0] << (c.r[10].w[0] & 31u));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 56u)));
    c.r[6].d[0] = c.r[11].d[0] & c.r[6].d[0];
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001633F8; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1556u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[13].d[0] = 0ull + 0ull;
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[12].w[0] - 27856u);
    c.budget -= 6;
L_00163368:
    c.r[8].d[0] = c.r[14].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[6], c.r[7].w[0] << (c.r[8].w[0] & 31u));
    c.r[6].d[0] = c.r[11].d[0] & c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001633C0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[10].d[0];  if (t) { goto L_001633C0; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 1556u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001633A8; } }
    set32(c.r[6], c.r[13].w[0] + 1u);
    c.r[13].d[0] = c.r[6].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);  if (t) { goto L_001633C0; } }
L_001633A8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[8].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;  if (t) { goto L_001633C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[13].w[0] + 1u);  if (t) { goto L_001633C0; } }
    c.r[13].d[0] = c.r[6].d[0] << 48;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);
    c.budget -= 2;
L_001633C0:
    set32(c.r[6], c.r[14].w[0] + 1u);
    c.r[14].d[0] = c.r[6].d[0] << 48;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 48);
    c.r[6].d[0] = c.r[14].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163368u | kUnwind; return; } goto L_00163368; } }
    c.r[6].d[0] = c.r[13].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    st8((c.r[6].w[0] + 197u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.budget -= 8;
L_001633F8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163330u | kUnwind; return; } goto L_00163330; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163420:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_00163430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
L_00163450:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00163498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016346Cu);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0016346Cu) [[unlikely]] return; }
L_0016346C:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163480u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0018(c, 259u, depth + 1u); else { c.pc = 0x001634B0u; return; } if (c.pc != 0x00163480u) [[unlikely]] return; }
L_00163480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163488u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00163488u) [[unlikely]] return; }
L_00163488:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163450u | kUnwind; return; } goto L_00163450; } }
L_00163498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001634B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 19195u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[20] = c.f[12];
    c.f[12] = 0u;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.f[14] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13936u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[2].w[0];
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016352Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016352Cu) [[unlikely]] return; }
L_0016352C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00163580; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00163580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163550u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00163550u) [[unlikely]] return; }
L_00163550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430D0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163564u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00163564u) [[unlikely]] return; }
L_00163564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 5840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163578u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00163578u) [[unlikely]] return; }
L_00163578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163580u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00163580u) [[unlikely]] return; }
L_00163580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163588u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00163588u) [[unlikely]] return; }
L_00163588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016359Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0016359Cu) [[unlikely]] return; }
L_0016359C:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635ACu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0018(c, 288u, depth + 1u); else { c.pc = 0x001637B0u; return; } if (c.pc != 0x001635ACu) [[unlikely]] return; }
L_001635AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001635B4u) [[unlikely]] return; }
L_001635B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001635BCu) [[unlikely]] return; }
L_001635BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2180000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635D8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001635D8u) [[unlikely]] return; }
L_001635D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[2], ld32((c.r[1].w[0] - 5884u)));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635FCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x001635FCu) [[unlikely]] return; }
L_001635FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163604u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00163604u) [[unlikely]] return; }
L_00163604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016360Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0016360Cu) [[unlikely]] return; }
L_0016360C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163628u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00163628u) [[unlikely]] return; }
L_00163628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163644u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D9160u; return; } if (c.pc != 0x00163644u) [[unlikely]] return; }
L_00163644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016364Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0016364Cu) [[unlikely]] return; }
L_0016364C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00163680; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_0016369C; } }
L_00163680:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.budget -= 7;
L_0016369C:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001636C0; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 18175ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_001636D0; } }
L_001636C0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[17].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 4;
L_001636D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001636D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001636D8u) [[unlikely]] return; }
L_001636D8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001636ECu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001636ECu) [[unlikely]] return; }
L_001636EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 5120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163700u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00163700u) [[unlikely]] return; }
L_00163700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163708u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00163708u) [[unlikely]] return; }
L_00163708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163710u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00163710u) [[unlikely]] return; }
L_00163710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163724u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00163724u) [[unlikely]] return; }
L_00163724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[3].d[0] = c.r[2].d[0] | 26214ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163744u); c.r[17].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x00163744u) [[unlikely]] return; }
L_00163744:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163750u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x00163750u) [[unlikely]] return; }
L_00163750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163758u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x00163758u) [[unlikely]] return; }
L_00163758:
    set32(c.r[4], c.r[16].w[0] + 30u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[12] = c.f[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163780u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00163780u) [[unlikely]] return; }
L_00163780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163788u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00163788u) [[unlikely]] return; }
L_00163788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001637B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.f[0] = c.r[3].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 640u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[13] = 0u;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016381Cu); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0016381Cu) [[unlikely]] return; }
L_0016381C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016382Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0016382Cu) [[unlikely]] return; }
L_0016382C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163840u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00163840u) [[unlikely]] return; }
L_00163840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[14] = c.f[13];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163864u); c.f[15] = c.f[13];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00163864u) [[unlikely]] return; }
L_00163864:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163874u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00163874u) [[unlikely]] return; }
L_00163874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00163880:
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
    set32(c.r[5], 0u + 5u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001638B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001638B8u) [[unlikely]] return; }
L_001638B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163980; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 14752u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 305u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    st8((c.r[2].w[0] + 306u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 304u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[2].w[0] + 304u);  if (t) { goto L_00163940; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00163948; } }
    c.budget -= 1;
L_00163940:
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00163948:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00163980; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18105u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[1].w[0] + 18105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_00163980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001639A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13952u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00160000u < 16384u) { entry = entries_0018[(t - 0x00160000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001639C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 13904u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_001639F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00160000u < 16384u) { entry = entries_0018[(t - 0x00160000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00163A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00163A20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00163A30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_00163AB0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00163A80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00163A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163AE0; } }
    c.budget -= 1;
L_00163A60:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], 0u + 600u);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 8;
L_00163A80:
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00163AE0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00163AE0; } }
L_00163AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[6].w[0] + 8u), c.f[1]);  if (t) { goto L_00163AE0; } }
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 2;
L_00163AE0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00163AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163B04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00163B04u) [[unlikely]] return; }
L_00163B04:
    c.f[12] = ld32((c.r[16].w[0] + 308u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 15424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163B18u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00163B18u) [[unlikely]] return; }
L_00163B18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00163B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00163C88; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00163C68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00163B90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00163B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163CD0; } }
L_00163B78:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 6;
L_00163B90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00163BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_00163BD0; } }
    c.budget -= 1;
L_00163BB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_00163BD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_00163BF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00163CD0; } }
L_00163BF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163C20u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x00163C20u) [[unlikely]] return; }
L_00163C20:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00163CD0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163C48u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x00163C48u) [[unlikely]] return; }
L_00163C48:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163C5Cu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x00163C5Cu) [[unlikely]] return; }
L_00163C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163CD0; } }
    c.budget -= 1;
L_00163C68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18107u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00163CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00163CD0; } }
    c.budget -= 1;
L_00163C88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_00163CD0; } }
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18107u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00163CD8; } }
    c.budget -= 1;
L_00163CD0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00163CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00163CF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163D0Cu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00163D0Cu) [[unlikely]] return; }
L_00163D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163D14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 244u, depth + 1u); else { c.pc = 0x001631F0u; return; } if (c.pc != 0x00163D14u) [[unlikely]] return; }
L_00163D14:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163D28u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00163D28u) [[unlikely]] return; }
L_00163D28:
    set32(c.r[2], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - 160u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42580000u);  if (t) { goto L_00163DA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43440000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163D9Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00163D9Cu) [[unlikely]] return; }
L_00163D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163DD0; } }
    c.budget -= 1;
L_00163DA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D80000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42580000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163DD0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00163DD0u) [[unlikely]] return; }
L_00163DD0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163DE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00163DE0u) [[unlikely]] return; }
L_00163DE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00163E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163DFCu);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x00163DFCu) [[unlikely]] return; }
L_00163DFC:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 14000u);
    set32(c.r[5], 0u + 8u);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163E34u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00163E34u) [[unlikely]] return; }
L_00163E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163E70; } }
    c.budget -= 1;
L_00163E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 8u);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163E6Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00163E6Cu) [[unlikely]] return; }
L_00163E6C:
    c.budget -= 1;
L_00163E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18108u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00163ED0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00163ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163E98u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00163E98u) [[unlikely]] return; }
L_00163E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163EA0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00163EA0u) [[unlikely]] return; }
L_00163EA0:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163EB4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00163EB4u) [[unlikely]] return; }
L_00163EB4:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 1840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163EC8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00163EC8u) [[unlikely]] return; }
L_00163EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163ED0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00163ED0u) [[unlikely]] return; }
L_00163ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00163EF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { [[clang::musttail]] return unit_0019(c, 3u, depth); } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 13968u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00160000u < 16384u) { entry = entries_0018[(t - 0x00160000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00163F20:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00163F80; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 500u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 23u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { [[clang::musttail]] return unit_0019(c, 3u, depth); } }
    c.budget -= 1;
L_00163F80:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 500u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], 0u - 23u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 35u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { [[clang::musttail]] return unit_0019(c, 3u, depth); } }
    c.budget -= 1;
L_00163FD0:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 500u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], 0u - 23u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 35u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 12;
    [[clang::musttail]] return unit_0019(c, 1u, depth);
}

}
