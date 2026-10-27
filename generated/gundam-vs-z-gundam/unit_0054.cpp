#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0054[4096] = {
    1, 2, 0, 3, 0, 4, 0, 0, 0, 5, 6, 7, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0,
    137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0,
    153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0,
    0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 289,
    0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0,
};

void unit_0054(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00250000;
    case 2u: goto L_00250004;
    case 3u: goto L_0025000C;
    case 4u: goto L_00250014;
    case 5u: goto L_00250024;
    case 6u: goto L_00250028;
    case 7u: goto L_0025002C;
    case 8u: goto L_00250030;
    case 9u: goto L_00250034;
    case 10u: goto L_0025005C;
    case 11u: goto L_00250060;
    case 12u: goto L_00250090;
    case 13u: goto L_002500DC;
    case 14u: goto L_00250100;
    case 15u: goto L_0025017C;
    case 16u: goto L_00250184;
    case 17u: goto L_00250198;
    case 18u: goto L_002501B0;
    case 19u: goto L_002501C8;
    case 20u: goto L_002501D8;
    case 21u: goto L_002501FC;
    case 22u: goto L_00250200;
    case 23u: goto L_00250214;
    case 24u: goto L_0025022C;
    case 25u: goto L_00250234;
    case 26u: goto L_00250258;
    case 27u: goto L_00250264;
    case 28u: goto L_0025027C;
    case 29u: goto L_00250284;
    case 30u: goto L_002502AC;
    case 31u: goto L_002502EC;
    case 32u: goto L_00250300;
    case 33u: goto L_00250314;
    case 34u: goto L_00250324;
    case 35u: goto L_0025033C;
    case 36u: goto L_00250358;
    case 37u: goto L_002503A0;
    case 38u: goto L_002503F0;
    case 39u: goto L_002503F8;
    case 40u: goto L_00250408;
    case 41u: goto L_00250410;
    case 42u: goto L_00250438;
    case 43u: goto L_00250440;
    case 44u: goto L_00250450;
    case 45u: goto L_00250458;
    case 46u: goto L_00250480;
    case 47u: goto L_002504A0;
    case 48u: goto L_002504B8;
    case 49u: goto L_002504C8;
    case 50u: goto L_002504F0;
    case 51u: goto L_00250528;
    case 52u: goto L_00250544;
    case 53u: goto L_00250580;
    case 54u: goto L_002505B0;
    case 55u: goto L_00250690;
    case 56u: goto L_002506C0;
    case 57u: goto L_00250760;
    case 58u: goto L_00250780;
    case 59u: goto L_00250890;
    case 60u: goto L_002508E0;
    case 61u: goto L_00250918;
    case 62u: goto L_0025092C;
    case 63u: goto L_00250990;
    case 64u: goto L_00250A28;
    case 65u: goto L_00250A58;
    case 66u: goto L_00250A60;
    case 67u: goto L_00250AD0;
    case 68u: goto L_00250B20;
    case 69u: goto L_00250BF0;
    case 70u: goto L_00250C1C;
    case 71u: goto L_00250C4C;
    case 72u: goto L_00250D48;
    case 73u: goto L_00250D94;
    case 74u: goto L_00250DD8;
    case 75u: goto L_00250EF0;
    case 76u: goto L_00250F28;
    case 77u: goto L_00250F3C;
    case 78u: goto L_00250F44;
    case 79u: goto L_00250F74;
    case 80u: goto L_00250FA8;
    case 81u: goto L_00250FC4;
    case 82u: goto L_00250FE0;
    case 83u: goto L_002510B8;
    case 84u: goto L_002510E8;
    case 85u: goto L_00251180;
    case 86u: goto L_002511A0;
    case 87u: goto L_002511B0;
    case 88u: goto L_002511CC;
    case 89u: goto L_002511E0;
    case 90u: goto L_002511E8;
    case 91u: goto L_00251210;
    case 92u: goto L_00251224;
    case 93u: goto L_00251270;
    case 94u: goto L_002512C4;
    case 95u: goto L_002512DC;
    case 96u: goto L_00251308;
    case 97u: goto L_00251380;
    case 98u: goto L_00251384;
    case 99u: goto L_00251390;
    case 100u: goto L_002513A0;
    case 101u: goto L_002513C0;
    case 102u: goto L_00251438;
    case 103u: goto L_00251490;
    case 104u: goto L_002514C0;
    case 105u: goto L_0025155C;
    case 106u: goto L_00251578;
    case 107u: goto L_002515CC;
    case 108u: goto L_002515F0;
    case 109u: goto L_00251600;
    case 110u: goto L_00251648;
    case 111u: goto L_00251668;
    case 112u: goto L_002516C0;
    case 113u: goto L_002516D0;
    case 114u: goto L_00251780;
    case 115u: goto L_00251790;
    case 116u: goto L_002517C8;
    case 117u: goto L_002517D4;
    case 118u: goto L_002517E0;
    case 119u: goto L_00251894;
    case 120u: goto L_002518A0;
    case 121u: goto L_002518B0;
    case 122u: goto L_002518CC;
    case 123u: goto L_00251920;
    case 124u: goto L_002519D8;
    case 125u: goto L_002519E8;
    case 126u: goto L_00251A44;
    case 127u: goto L_00251AD0;
    case 128u: goto L_00251B08;
    case 129u: goto L_00251B18;
    case 130u: goto L_00251B90;
    case 131u: goto L_00251BD0;
    case 132u: goto L_00251BD8;
    case 133u: goto L_00251BE0;
    case 134u: goto L_00251BE8;
    case 135u: goto L_00251BF0;
    case 136u: goto L_00251BF8;
    case 137u: goto L_00251C00;
    case 138u: goto L_00251C08;
    case 139u: goto L_00251C10;
    case 140u: goto L_00251C18;
    case 141u: goto L_00251C20;
    case 142u: goto L_00251C28;
    case 143u: goto L_00251C30;
    case 144u: goto L_00251C38;
    case 145u: goto L_00251C40;
    case 146u: goto L_00251C48;
    case 147u: goto L_00251C50;
    case 148u: goto L_00251C58;
    case 149u: goto L_00251C60;
    case 150u: goto L_00251C68;
    case 151u: goto L_00251C70;
    case 152u: goto L_00251C78;
    case 153u: goto L_00251C80;
    case 154u: goto L_00251C88;
    case 155u: goto L_00251C90;
    case 156u: goto L_00251C98;
    case 157u: goto L_00251CA0;
    case 158u: goto L_00251CA8;
    case 159u: goto L_00251CB0;
    case 160u: goto L_00251CB8;
    case 161u: goto L_00251CC0;
    case 162u: goto L_00251CC8;
    case 163u: goto L_00251CD0;
    case 164u: goto L_00251CE0;
    case 165u: goto L_00251DC8;
    case 166u: goto L_00251DD4;
    case 167u: goto L_00251E0C;
    case 168u: goto L_00251E18;
    case 169u: goto L_00251E2C;
    case 170u: goto L_00251E38;
    case 171u: goto L_00251E88;
    case 172u: goto L_00251ED8;
    case 173u: goto L_00251EF0;
    case 174u: goto L_00251F40;
    case 175u: goto L_00251F58;
    case 176u: goto L_00251F90;
    case 177u: goto L_00251FA8;
    case 178u: goto L_00251FBC;
    case 179u: goto L_00252030;
    case 180u: goto L_0025203C;
    case 181u: goto L_00252078;
    case 182u: goto L_00252090;
    case 183u: goto L_002520A8;
    case 184u: goto L_002520C0;
    case 185u: goto L_002520D8;
    case 186u: goto L_002520F0;
    case 187u: goto L_00252128;
    case 188u: goto L_00252140;
    case 189u: goto L_002521DC;
    case 190u: goto L_00252220;
    case 191u: goto L_00252230;
    case 192u: goto L_00252290;
    case 193u: goto L_002522A8;
    case 194u: goto L_002522E0;
    case 195u: goto L_002522F4;
    case 196u: goto L_0025230C;
    case 197u: goto L_0025233C;
    case 198u: goto L_00252438;
    case 199u: goto L_002524A0;
    case 200u: goto L_00252534;
    case 201u: goto L_0025254C;
    case 202u: goto L_00252670;
    case 203u: goto L_002526D0;
    case 204u: goto L_00252710;
    case 205u: goto L_00252750;
    case 206u: goto L_00252820;
    case 207u: goto L_002528B8;
    case 208u: goto L_002528C0;
    case 209u: goto L_0025291C;
    case 210u: goto L_00252960;
    case 211u: goto L_00252970;
    case 212u: goto L_002529C8;
    case 213u: goto L_002529E0;
    case 214u: goto L_00252A18;
    case 215u: goto L_00252A30;
    case 216u: goto L_00252A44;
    case 217u: goto L_00252A94;
    case 218u: goto L_00252AD0;
    case 219u: goto L_00252B28;
    case 220u: goto L_00252B40;
    case 221u: goto L_00252D1C;
    case 222u: goto L_00252D60;
    case 223u: goto L_00252DB0;
    case 224u: goto L_00252DC8;
    case 225u: goto L_00252E00;
    case 226u: goto L_00252E18;
    case 227u: goto L_00252E2C;
    case 228u: goto L_00252E40;
    case 229u: goto L_00252E94;
    case 230u: goto L_00252ED0;
    case 231u: goto L_00252F28;
    case 232u: goto L_00252F40;
    case 233u: goto L_00253064;
    case 234u: goto L_002530A0;
    case 235u: goto L_002530B0;
    case 236u: goto L_002530C0;
    case 237u: goto L_00253110;
    case 238u: goto L_00253128;
    case 239u: goto L_00253160;
    case 240u: goto L_00253178;
    case 241u: goto L_0025318C;
    case 242u: goto L_002531DC;
    case 243u: goto L_0025321C;
    case 244u: goto L_002532A0;
    case 245u: goto L_002532B8;
    case 246u: goto L_00253344;
    case 247u: goto L_00253390;
    case 248u: goto L_002533A0;
    case 249u: goto L_002533F0;
    case 250u: goto L_00253408;
    case 251u: goto L_00253440;
    case 252u: goto L_00253458;
    case 253u: goto L_0025346C;
    case 254u: goto L_002534BC;
    case 255u: goto L_002534FC;
    case 256u: goto L_00253580;
    case 257u: goto L_00253598;
    case 258u: goto L_00253624;
    case 259u: goto L_00253670;
    case 260u: goto L_00253688;
    case 261u: goto L_00253690;
    case 262u: goto L_00253698;
    case 263u: goto L_002536A8;
    case 264u: goto L_002536B4;
    case 265u: goto L_002536BC;
    case 266u: goto L_002536C8;
    case 267u: goto L_00253770;
    case 268u: goto L_002537A0;
    case 269u: goto L_002537F0;
    case 270u: goto L_00253818;
    case 271u: goto L_00253820;
    case 272u: goto L_00253880;
    case 273u: goto L_002538B0;
    case 274u: goto L_00253900;
    case 275u: goto L_00253928;
    case 276u: goto L_00253930;
    case 277u: goto L_00253990;
    case 278u: goto L_002539EC;
    case 279u: goto L_002539F8;
    case 280u: goto L_00253A10;
    case 281u: goto L_00253A18;
    case 282u: goto L_00253A2C;
    case 283u: goto L_00253B30;
    case 284u: goto L_00253B84;
    case 285u: goto L_00253BA8;
    case 286u: goto L_00253BD8;
    case 287u: goto L_00253BE8;
    case 288u: goto L_00253BF4;
    case 289u: goto L_00253BFC;
    case 290u: goto L_00253C14;
    case 291u: goto L_00253C1C;
    case 292u: goto L_00253C38;
    case 293u: goto L_00253C70;
    case 294u: goto L_00253D10;
    case 295u: goto L_00253D28;
    case 296u: goto L_00253D40;
    case 297u: goto L_00253D60;
    case 298u: goto L_00253D90;
    case 299u: goto L_00253E88;
    case 300u: goto L_00253E98;
    case 301u: goto L_00253EB0;
    case 302u: goto L_00253EE0;
    case 303u: goto L_00253FDC;
    case 304u: goto L_00253FF0;
    default: bad_entry(c, 0x00250000u); return;
    }
L_00250000:
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 1;
L_00250004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025000Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 274u, depth + 1u); else { c.pc = 0x0024F570u; return; } if (c.pc != 0x0025000Cu) [[unlikely]] return; }
L_0025000C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250014u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 321u, depth + 1u); else { c.pc = 0x0024FC20u; return; } if (c.pc != 0x00250014u) [[unlikely]] return; }
L_00250014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00250024:
    c.budget -= 1;
L_00250028:
    c.budget -= 1;
L_0025002C:
    c.budget -= 1;
L_00250030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 1;
L_00250034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 13136u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025005Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025005Cu) [[unlikely]] return; }
L_0025005C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.budget -= 1;
L_00250060:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00250070; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00250070:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250090; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00250090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250090u);  if (depth < kMaxDepth) unit_0054(c, 18u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x00250090u) [[unlikely]] return; }
L_00250090:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002500A8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002500A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002500C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002500E0; } }
    c.budget -= 1;
L_002500C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002500E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002500DCu);  if (depth < kMaxDepth) unit_0053(c, 234u, depth + 1u); else { c.pc = 0x0024F150u; return; } if (c.pc != 0x002500DCu) [[unlikely]] return; }
L_002500DC:
    c.budget -= 1;
L_002500E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250150; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00250108; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250150; } }
    goto L_00250104;
L_00250100:
    c.budget -= 1;
L_00250104:
    c.budget -= 1;
L_00250108:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_00250130; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250130; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250148; } }
    c.budget -= 1;
L_00250130:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250150; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250150; } }
L_00250148:
    set32(c.r[3], 0u + 20u);
    st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00250150:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250198; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 300u);  if (t) { goto L_00250190; } }
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025017Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 274u, depth + 1u); else { c.pc = 0x0024F570u; return; } if (c.pc != 0x0025017Cu) [[unlikely]] return; }
L_0025017C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 321u, depth + 1u); else { c.pc = 0x0024FC20u; return; } if (c.pc != 0x00250184u) [[unlikely]] return; }
L_00250184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250198; } }
    c.budget -= 1;
L_00250190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250198u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x00250198u) [[unlikely]] return; }
L_00250198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002501B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002501C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0054(c, 118u, depth + 1u); else { c.pc = 0x002517E0u; return; } if (c.pc != 0x002501C8u) [[unlikely]] return; }
L_002501C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002501E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002501D8u);  if (depth < kMaxDepth) unit_0052(c, 246u, depth + 1u); else { c.pc = 0x0024AB30u; return; } if (c.pc != 0x002501D8u) [[unlikely]] return; }
L_002501D8:
    set32(c.r[3], 0u + 10u);
    st8((c.r[17].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1819u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250468; } }
L_002501E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00250290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002501FCu);  if (depth < kMaxDepth) unit_0026(c, 195u, depth + 1u); else { c.pc = 0x0019B310u; return; } if (c.pc != 0x002501FCu) [[unlikely]] return; }
L_002501FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.budget -= 1;
L_00250200:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00250298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250214u);  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194800u; return; } if (c.pc != 0x00250214u) [[unlikely]] return; }
L_00250214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00250298; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025022Cu); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0025022Cu) [[unlikely]] return; }
L_0025022C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250234u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00250234u) [[unlikely]] return; }
L_00250234:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250298; } }
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250258u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00250258u) [[unlikely]] return; }
L_00250258:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250264u); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x00250264u) [[unlikely]] return; }
L_00250264:
    set32(c.r[3], 0u + 24576u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00250298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025027Cu); st32((c.r[17].w[0] + 1920u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0054(c, 100u, depth + 1u); else { c.pc = 0x002513A0u; return; } if (c.pc != 0x0025027Cu) [[unlikely]] return; }
L_0025027C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250284u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x00250284u) [[unlikely]] return; }
L_00250284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250468; } }
    c.budget -= 1;
L_00250290:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00250298:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1924u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00250460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502ACu);  if (depth < kMaxDepth) unit_0026(c, 204u, depth + 1u); else { c.pc = 0x0019B410u; return; } if (c.pc != 0x002502ACu) [[unlikely]] return; }
L_002502AC:
    set32(c.r[16], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00250468; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (t) { goto L_002502D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_002502DC; } }
L_002502D4:
    set32(c.r[3], 0u + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002502DC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00250468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502ECu);  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x002502ECu) [[unlikely]] return; }
L_002502EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00250308; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 2;
L_00250300:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00250468; } }
L_00250308:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250314u); st32((c.r[17].w[0] + 1920u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0053(c, 106u, depth + 1u); else { c.pc = 0x0024DCC0u; return; } if (c.pc != 0x00250314u) [[unlikely]] return; }
L_00250314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00250468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250324u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 116u, depth + 1u); else { c.pc = 0x0024DEB0u; return; } if (c.pc != 0x00250324u) [[unlikely]] return; }
L_00250324:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00250468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025033Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0025033Cu) [[unlikely]] return; }
L_0025033C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250358u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x00250358u) [[unlikely]] return; }
L_00250358:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002503B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_002503A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00250398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002503B8; } }
    c.budget -= 1;
L_00250398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002503A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 220u, depth + 1u); else { c.pc = 0x0019B610u; return; } if (c.pc != 0x002503A0u) [[unlikely]] return; }
L_002503A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002503C0; } }
L_002503A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002503C0; } }
L_002503B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002503C0; } }
L_002503B8:
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_002503C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250418; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00250400; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002503E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250468; } }
L_002503E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002503F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 246u, depth + 1u); else { c.pc = 0x0024AB30u; return; } if (c.pc != 0x002503F0u) [[unlikely]] return; }
L_002503F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002503F8u);  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x002503F8u) [[unlikely]] return; }
L_002503F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250468; } }
L_00250400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 247u, depth + 1u); else { c.pc = 0x0024AB40u; return; } if (c.pc != 0x00250408u) [[unlikely]] return; }
L_00250408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250410u);  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x00250410u) [[unlikely]] return; }
L_00250410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250468; } }
L_00250418:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00250448; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00250430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250468; } }
L_00250430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250438u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 324u, depth + 1u); else { c.pc = 0x0024BEA0u; return; } if (c.pc != 0x00250438u) [[unlikely]] return; }
L_00250438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250440u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x00250440u) [[unlikely]] return; }
L_00250440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250468; } }
L_00250448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C110u; return; } if (c.pc != 0x00250450u) [[unlikely]] return; }
L_00250450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250458u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x00250458u) [[unlikely]] return; }
L_00250458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250468; } }
L_00250460:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00250468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00250480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002504A8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002504A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00250598; } }
L_002504A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002504B8u);  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x002504B8u) [[unlikely]] return; }
L_002504B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002504D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002504C8u);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x002504C8u) [[unlikely]] return; }
L_002504C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250598; } }
L_002504D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_00250598; } }
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002504F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 230u, depth + 1u); else { c.pc = 0x0024F110u; return; } if (c.pc != 0x002504F0u) [[unlikely]] return; }
L_002504F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250510; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250598; } }
    c.budget -= 1;
L_00250510:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    set32(c.r[2], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00250558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250528u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00250528u) [[unlikely]] return; }
L_00250528:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250598; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250544u); st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00250544u) [[unlikely]] return; }
L_00250544:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00250598; } }
    c.budget -= 1;
L_00250558:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250598; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);  if (t) { goto L_00250598; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250580u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x00250580u) [[unlikely]] return; }
L_00250580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250598; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00250598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002505B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00250678; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00250640; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002505F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250740; } }
    c.budget -= 1;
L_002505F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_00250618; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250638; } }
    c.budget -= 1;
L_00250618:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250638; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00250638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00250748; } }
L_00250640:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_00250668; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250670; } }
    c.budget -= 1;
L_00250668:
    set32(c.r[2], c.r[6].w[0] - 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00250670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00250748; } }
L_00250678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250690u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0054(c, 115u, depth + 1u); else { c.pc = 0x00251790u; return; } if (c.pc != 0x00250690u) [[unlikely]] return; }
L_00250690:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002506A8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002506A8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002506B8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002506B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002506C0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x002506C0u) [[unlikely]] return; }
L_002506C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002506D0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002506D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002506E0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002506E0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002506F8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250740; } }
L_002506F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250718; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250740; } }
    c.budget -= 1;
L_00250718:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_00250740; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00250740:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00250748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00250760:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250778; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00250778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00250780:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00250868; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00250808; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002507A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250880; } }
L_002507A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002507C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002507D8; } }
    c.budget -= 1;
L_002507C8:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00250888; } }
L_002507D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00250880; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250880; } }
    c.budget -= 1;
L_00250808:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250830; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_00250830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00250880; } }
L_00250830:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00250858; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250880; } }
    c.budget -= 1;
L_00250858:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00250880; } }
    c.budget -= 1;
L_00250868:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00250880; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00250880:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00250888:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00250890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002508C0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002508D0; } }
    c.budget -= 1;
L_002508C0:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00250978; } }
L_002508D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002508E0u);  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x002508E0u) [[unlikely]] return; }
L_002508E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_002508F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250978; } }
L_002508F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250918u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 230u, depth + 1u); else { c.pc = 0x0024F110u; return; } if (c.pc != 0x00250918u) [[unlikely]] return; }
L_00250918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250970; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025092Cu); st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025092Cu) [[unlikely]] return; }
L_0025092C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250948; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250970; } }
    c.budget -= 1;
L_00250948:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250970; } }
    c.budget -= 1;
L_00250958:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00250970:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00250978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00250990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002509C0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002509D0; } }
L_002509C0:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00250AB8; } }
L_002509D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00250A10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002509F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250AB0; } }
L_002509F0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250AB8; } }
    c.budget -= 1;
L_00250A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A28u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0054(c, 115u, depth + 1u); else { c.pc = 0x00251790u; return; } if (c.pc != 0x00250A28u) [[unlikely]] return; }
L_00250A28:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250A40; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00250A40:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00250A50; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00250A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A58u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x00250A58u) [[unlikely]] return; }
L_00250A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250A68; } }
L_00250A60:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00250A68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250A78; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00250A78:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00250A90; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250AB0; } }
L_00250A90:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 4u);  if (t) { goto L_00250AB0; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00250AB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00250AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00250AD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250AF0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00250B00; } }
L_00250AF0:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250B10; } }
    c.budget -= 1;
L_00250B00:
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00250B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00250B20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00250BC8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00250B78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00250B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250BE0; } }
L_00250B48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00250BE0; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250BE0; } }
    c.budget -= 1;
L_00250B78:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_00250B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00250BE0; } }
L_00250B90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00250BB8; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250BE0; } }
    c.budget -= 1;
L_00250BB8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00250BE0; } }
    c.budget -= 1;
L_00250BC8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00250BE0; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00250BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00250BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 13168u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250C1Cu) [[unlikely]] return; }
L_00250C1C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00250C38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250ED8; } }
    c.budget -= 1;
L_00250C38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00250C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C4Cu);  if (depth < kMaxDepth) unit_0053(c, 234u, depth + 1u); else { c.pc = 0x0024F150u; return; } if (c.pc != 0x00250C4Cu) [[unlikely]] return; }
L_00250C4C:
    c.budget -= 1;
L_00250C50:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250CC0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00250C78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250CC0; } }
    c.budget -= 1;
L_00250C78:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_00250CA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250CA0; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250CB8; } }
    c.budget -= 1;
L_00250CA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250CC0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250CC0; } }
L_00250CB8:
    set32(c.r[3], 0u + 20u);
    st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00250CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1819u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250ED0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00250E48; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_00250E28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00250DB0; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00250D80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00250D60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00250D38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00250D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250ED8; } }
L_00250D20:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
L_00250D38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00250D50; } }
L_00250D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
L_00250D50:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
    c.budget -= 1;
L_00250D60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00250ED8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250ED8; } }
    c.budget -= 1;
L_00250D80:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D94u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00250D94u) [[unlikely]] return; }
L_00250D94:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + 3u);
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
L_00250DB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250E10; } }
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250DD8u); st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0054(c, 118u, depth + 1u); else { c.pc = 0x002517E0u; return; } if (c.pc != 0x00250DD8u) [[unlikely]] return; }
L_00250DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250DF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00250E00; } }
    c.budget -= 1;
L_00250DF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
L_00250E00:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
L_00250E10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
L_00250E28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00250ED8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250ED8; } }
    c.budget -= 1;
L_00250E48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00250EB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00250E88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00250E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250ED8; } }
    c.budget -= 1;
L_00250E70:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
L_00250E88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00250EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
L_00250EA0:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250ED8; } }
    c.budget -= 1;
L_00250EB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00250ED8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250ED8; } }
    c.budget -= 1;
L_00250ED0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00250ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00250EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00250F18; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250FD0; } }
L_00250F18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F28u);  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x00250F28u) [[unlikely]] return; }
L_00250F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250F50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 274u, depth + 1u); else { c.pc = 0x0024F570u; return; } if (c.pc != 0x00250F3Cu) [[unlikely]] return; }
L_00250F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 321u, depth + 1u); else { c.pc = 0x0024FC20u; return; } if (c.pc != 0x00250F44u) [[unlikely]] return; }
L_00250F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250FD0; } }
    c.budget -= 1;
L_00250F50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250FD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 230u, depth + 1u); else { c.pc = 0x0024F110u; return; } if (c.pc != 0x00250F74u) [[unlikely]] return; }
L_00250F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00250F90; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250FD0; } }
    c.budget -= 1;
L_00250F90:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    set32(c.r[3], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250FA8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00250FA8u) [[unlikely]] return; }
L_00250FA8:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250FD0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250FC4u); st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00250FC4u) [[unlikely]] return; }
L_00250FC4:
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[3], c.r[3].w[0] + 60u);
    st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00250FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00250FE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002510A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00251068; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00251020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251160; } }
    c.budget -= 1;
L_00251020:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00251048; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251160; } }
    c.budget -= 1;
L_00251048:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251160; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251160; } }
L_00251068:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00251090; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251160; } }
    c.budget -= 1;
L_00251090:
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251160; } }
    c.budget -= 1;
L_002510A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510B8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0054(c, 115u, depth + 1u); else { c.pc = 0x00251790u; return; } if (c.pc != 0x002510B8u) [[unlikely]] return; }
L_002510B8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002510D0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002510D0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002510E0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002510E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510E8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x002510E8u) [[unlikely]] return; }
L_002510E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002510F8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002510F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251108; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00251108:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00251120; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251160; } }
L_00251120:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251140; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251160; } }
    c.budget -= 1;
L_00251140:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 2u);  if (t) { goto L_00251160; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00251160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00251180:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251198; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00251198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002511A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002511B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002511CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x002511CCu) [[unlikely]] return; }
L_002511CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002511F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002511E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 274u, depth + 1u); else { c.pc = 0x0024F570u; return; } if (c.pc != 0x002511E0u) [[unlikely]] return; }
L_002511E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002511E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 321u, depth + 1u); else { c.pc = 0x0024FC20u; return; } if (c.pc != 0x002511E8u) [[unlikely]] return; }
L_002511E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251260; } }
L_002511F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 230u, depth + 1u); else { c.pc = 0x0024F110u; return; } if (c.pc != 0x00251210u) [[unlikely]] return; }
L_00251210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251260; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251224u); st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00251224u) [[unlikely]] return; }
L_00251224:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_00251238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251260; } }
L_00251238:
    set32(c.r[3], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251260; } }
    c.budget -= 1;
L_00251248:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00251260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00251270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002512C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002512A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251360; } }
    c.budget -= 1;
L_002512A8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002512C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.budget -= 1;
L_002512C4:
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002512DCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0054(c, 115u, depth + 1u); else { c.pc = 0x00251790u; return; } if (c.pc != 0x002512DCu) [[unlikely]] return; }
L_002512DC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002512F0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 1945u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002512F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1945u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00251300; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00251300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251308u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x00251308u) [[unlikely]] return; }
L_00251308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00251318; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00251318:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251328; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00251328:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_00251340; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251360; } }
L_00251340:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 4u);  if (t) { goto L_00251360; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00251360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00251380:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00251384:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00251390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002513A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1920u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002513C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002513C0u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x002513C0u) [[unlikely]] return; }
L_002513C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));  if (t) { goto L_002513D4; } }
L_002513C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 3;
L_002513D4:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 35u);  if (t) { goto L_00251448; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002513F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251498; } }
L_002513F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00251410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251498; } }
L_00251410:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00251430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251498; } }
L_00251430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251438u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00251438u) [[unlikely]] return; }
L_00251438:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251498; } }
    c.budget -= 1;
L_00251448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00251468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251498; } }
L_00251468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00251488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251498; } }
L_00251488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251490u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00251490u) [[unlikely]] return; }
L_00251490:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00251498:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002514C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002515D8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00251580; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00251510; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00251500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002515F0; } }
L_00251500:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00251510:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251538; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00251570; } }
    c.budget -= 1;
L_00251538:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00251560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025155Cu);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x0025155Cu) [[unlikely]] return; }
L_0025155C:
    c.budget -= 1;
L_00251560:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002515F0; } }
L_00251570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251578u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x00251578u) [[unlikely]] return; }
L_00251578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002515F0; } }
L_00251580:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002515A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002515B0; } }
    c.budget -= 1;
L_002515A0:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002515F0; } }
L_002515B0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002515F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002515CCu);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x002515CCu) [[unlikely]] return; }
L_002515CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002515F0; } }
    c.budget -= 1;
L_002515D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002515F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002515F0u);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x002515F0u) [[unlikely]] return; }
L_002515F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00251600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00251690; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00251688; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00251660; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00251640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002516C0; } }
L_00251640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251648u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x00251648u) [[unlikely]] return; }
L_00251648:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002516C0; } }
L_00251660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251668u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x00251668u) [[unlikely]] return; }
L_00251668:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00251680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002516C0; } }
L_00251680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002516C0; } }
L_00251688:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00251690:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 4096ull;  if (t) { goto L_002516C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002516B8; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002516C0; } }
L_002516B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002516C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x002516C0u) [[unlikely]] return; }
L_002516C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002516D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00251750; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00251748; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00251728; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00251710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251780; } }
    c.budget -= 1;
L_00251710:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251780; } }
    c.budget -= 1;
L_00251728:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00251780; } }
L_00251740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251780; } }
L_00251748:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00251750:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 4096ull;  if (t) { goto L_00251780; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251778; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251780; } }
L_00251778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251780u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x00251780u) [[unlikely]] return; }
L_00251780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00251790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8592u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 4u), c.f[12]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 8u), c.f[13]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002517C8u); st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002517C8u) [[unlikely]] return; }
L_002517C8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002517D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002517D4u) [[unlikely]] return; }
L_002517D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002517E0:
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
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00251860; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00251830; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00251848; } }
L_00251830:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00251848:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00251868; } }
    c.budget -= 1;
L_00251860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00251AA0; } }
L_00251868:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00251880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251AA0; } }
    c.budget -= 1;
L_00251880:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1928u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00251A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251894u);  if (depth < kMaxDepth) unit_0026(c, 230u, depth + 1u); else { c.pc = 0x0019B870u; return; } if (c.pc != 0x00251894u) [[unlikely]] return; }
L_00251894:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002518A0u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002518A0u) [[unlikely]] return; }
L_002518A0:
    set32(c.r[4], ld32((c.r[20].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 130u);  if (t) { goto L_002518E8; } }
    c.budget -= 1;
L_002518B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 64u);  if (t) { goto L_002518D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002518CCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002518CCu) [[unlikely]] return; }
L_002518CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002518E8; } }
    c.budget -= 1;
L_002518D8:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002518B0u | kUnwind; return; } goto L_002518B0; } }
    c.budget -= 1;
L_002518E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00251A98; } }
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    set32(c.r[21], c.r[29].w[0] + 148u);
    set32(c.r[22], c.r[29].w[0] + 152u);
    c.budget -= 5;
L_00251920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00251A60; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251A60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251A60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00251A60; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00251A60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[20].d[0];  if (t) { goto L_00251A60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251A60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251A60; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00251A60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00251A60; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 562u));
    c.r[2].d[0] = c.r[3].d[0] & 17408ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251A60; } }
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_00251A60; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002519D8u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002519D8u) [[unlikely]] return; }
L_002519D8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002519E8u); set32(c.r[6], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002519E8u) [[unlikely]] return; }
L_002519E8:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00251A60; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[22].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_00251A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251A44u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00251A44u) [[unlikely]] return; }
L_00251A44:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00251A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251AA0; } }
L_00251A60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251920u | kUnwind; return; } goto L_00251920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251A98; } }
L_00251A90:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 1928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00251A98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00251AA0:
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
L_00251AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 65u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00251B00; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 75u);  if (t) { goto L_00251B00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00251B10; } }
L_00251B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 94u, depth + 1u); else { c.pc = 0x002490F0u; return; } if (c.pc != 0x00251B08u) [[unlikely]] return; }
L_00251B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B18u); st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00AC(c, 38u, depth + 1u); else { c.pc = 0x003B0360u; return; } if (c.pc != 0x00251B18u) [[unlikely]] return; }
L_00251B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251B50; } }
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
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1946u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00251CD0; } }
L_00251B50:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00251CD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251B88; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00251CD0; } }
    c.budget -= 1;
L_00251B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B90u);  if (depth < kMaxDepth) unit_00AC(c, 37u, depth + 1u); else { c.pc = 0x003B0350u; return; } if (c.pc != 0x00251B90u) [[unlikely]] return; }
L_00251B90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_00251BA0; } }
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00251BA0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] - 64u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00251CD0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18336u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00250000u < 16384u) { entry = entries_0054[(t - 0x00250000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00251BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 173u, depth + 1u); else { c.pc = 0x00251EF0u; return; } if (c.pc != 0x00251BD8u) [[unlikely]] return; }
L_00251BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 164u, depth + 1u); else { c.pc = 0x00251CE0u; return; } if (c.pc != 0x00251BE0u) [[unlikely]] return; }
L_00251BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 190u, depth + 1u); else { c.pc = 0x00252220u; return; } if (c.pc != 0x00251BF0u) [[unlikely]] return; }
L_00251BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 191u, depth + 1u); else { c.pc = 0x00252230u; return; } if (c.pc != 0x00251C00u) [[unlikely]] return; }
L_00251C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 164u, depth + 1u); else { c.pc = 0x00251CE0u; return; } if (c.pc != 0x00251C08u) [[unlikely]] return; }
L_00251C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 210u, depth + 1u); else { c.pc = 0x00252960u; return; } if (c.pc != 0x00251C18u) [[unlikely]] return; }
L_00251C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 211u, depth + 1u); else { c.pc = 0x00252970u; return; } if (c.pc != 0x00251C28u) [[unlikely]] return; }
L_00251C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 164u, depth + 1u); else { c.pc = 0x00251CE0u; return; } if (c.pc != 0x00251C30u) [[unlikely]] return; }
L_00251C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 222u, depth + 1u); else { c.pc = 0x00252D60u; return; } if (c.pc != 0x00251C40u) [[unlikely]] return; }
L_00251C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 164u, depth + 1u); else { c.pc = 0x00251CE0u; return; } if (c.pc != 0x00251C48u) [[unlikely]] return; }
L_00251C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 234u, depth + 1u); else { c.pc = 0x002530A0u; return; } if (c.pc != 0x00251C58u) [[unlikely]] return; }
L_00251C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 235u, depth + 1u); else { c.pc = 0x002530B0u; return; } if (c.pc != 0x00251C68u) [[unlikely]] return; }
L_00251C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 236u, depth + 1u); else { c.pc = 0x002530C0u; return; } if (c.pc != 0x00251C78u) [[unlikely]] return; }
L_00251C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 164u, depth + 1u); else { c.pc = 0x00251CE0u; return; } if (c.pc != 0x00251C80u) [[unlikely]] return; }
L_00251C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 247u, depth + 1u); else { c.pc = 0x00253390u; return; } if (c.pc != 0x00251C90u) [[unlikely]] return; }
L_00251C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 248u, depth + 1u); else { c.pc = 0x002533A0u; return; } if (c.pc != 0x00251CA0u) [[unlikely]] return; }
L_00251CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 164u, depth + 1u); else { c.pc = 0x00251CE0u; return; } if (c.pc != 0x00251CA8u) [[unlikely]] return; }
L_00251CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 190u, depth + 1u); else { c.pc = 0x00252220u; return; } if (c.pc != 0x00251CB8u) [[unlikely]] return; }
L_00251CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251CD0; } }
L_00251CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 236u, depth + 1u); else { c.pc = 0x002530C0u; return; } if (c.pc != 0x00251CC8u) [[unlikely]] return; }
L_00251CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 164u, depth + 1u); else { c.pc = 0x00251CE0u; return; } if (c.pc != 0x00251CD0u) [[unlikely]] return; }
L_00251CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00251CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00251ED8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00251ED8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00251D88; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1948u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00251D38; } }
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1941u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1942u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251ED8; } }
    c.budget -= 1;
L_00251D38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1956u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251D58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00251D58; } }
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00251D58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1956u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251ED8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1958u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00251ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00251ED8; } }
    c.budget -= 1;
L_00251D88:
    set32(c.r[2], 0u + 1000u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[5] = ld32((c.r[2].w[0] + 656u));
    c.f[1] = ld32((c.r[2].w[0] + 664u));
    c.f[3] = ld32((c.r[2].w[0] + 660u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DC8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00251DC8u) [[unlikely]] return; }
L_00251DC8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DD4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00251DD4u) [[unlikely]] return; }
L_00251DD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 2u);  if (t) { goto L_00251E90; } }
    set32(c.r[2], 0u + 12u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00251E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E0Cu); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x00251E0Cu) [[unlikely]] return; }
L_00251E0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E18u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x00251E18u) [[unlikely]] return; }
L_00251E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251E38; } }
L_00251E20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E2Cu); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x00251E2Cu) [[unlikely]] return; }
L_00251E2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E38u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x00251E38u) [[unlikely]] return; }
L_00251E38:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[4], 0u - 24576u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 3584ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251ED8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00251ED8; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E88u); st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x00251E88u) [[unlikely]] return; }
L_00251E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251ED8; } }
L_00251E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251ED8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x44340000u);  if (t) { goto L_00251ED8; } }
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00251ED8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251ED8u); st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x00251ED8u) [[unlikely]] return; }
L_00251ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00251EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00252148; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00251F60; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00251F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002521C8; } }
    c.budget -= 1;
L_00251F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251F40u);  if (depth < kMaxDepth) unit_0054(c, 267u, depth + 1u); else { c.pc = 0x00253770u; return; } if (c.pc != 0x00251F40u) [[unlikely]] return; }
L_00251F40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251F58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00251F58u) [[unlikely]] return; }
L_00251F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002521C8; } }
L_00251F60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251F78; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00251F78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00251F98; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251F90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x00251F90u) [[unlikely]] return; }
L_00251F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251FA8; } }
L_00251F98:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251FA8u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x00251FA8u) [[unlikely]] return; }
L_00251FA8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00252118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251FBCu);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x00251FBCu) [[unlikely]] return; }
L_00251FBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002521C8; } }
    c.f[1] = ld32((c.r[4].w[0] + 1088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002521C8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002521C8; } }
    st32((c.r[16].w[0] + 1920u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0025200C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0025200C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252030u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00252030u) [[unlikely]] return; }
L_00252030:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_0025203C:
    set32(c.r[3], c.r[3].w[0] - 512u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00252100; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18400u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00250000u < 16384u) { entry = entries_0054[(t - 0x00250000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00252078:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00252100; } }
    c.budget -= 1;
L_00252090:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 8192u);
    c.r[4].d[0] = c.r[4].d[0] | 8448ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252100; } }
L_002520A8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 1024u);
    c.r[4].d[0] = c.r[4].d[0] | 1280ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252100; } }
L_002520C0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 2048u);
    c.r[4].d[0] = c.r[4].d[0] | 2304ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252100; } }
L_002520D8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00252100; } }
    c.budget -= 1;
L_002520F0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00252100:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 45u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002521C8; } }
L_00252118:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 259u, depth + 1u); else { c.pc = 0x00253670u; return; } if (c.pc != 0x00252128u) [[unlikely]] return; }
L_00252128:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00252140u) [[unlikely]] return; }
L_00252140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002521C8; } }
L_00252148:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002521B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002521C8; } }
L_00252168:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252190; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002521C8; } }
L_00252190:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002521C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002521C8; } }
L_002521B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002521C8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002521C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002521F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002521DCu);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x002521DCu) [[unlikely]] return; }
L_002521DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_00252208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252208; } }
    c.budget -= 1;
L_002521F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00252208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00252220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00252230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_00252648; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002525D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002522B0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00252280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252290u);  if (depth < kMaxDepth) unit_0054(c, 272u, depth + 1u); else { c.pc = 0x00253880u; return; } if (c.pc != 0x00252290u) [[unlikely]] return; }
L_00252290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002522A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x002522A8u) [[unlikely]] return; }
L_002522A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252908; } }
L_002522B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002522C8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002522C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_002522E8; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002522E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x002522E0u) [[unlikely]] return; }
L_002522E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002522F8; } }
L_002522E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002522F4u); st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x002522F4u) [[unlikely]] return; }
L_002522F4:
    c.budget -= 1;
L_002522F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00252518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025230Cu);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x0025230Cu) [[unlikely]] return; }
L_0025230C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002523F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252350; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025233Cu); st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025233Cu) [[unlikely]] return; }
L_0025233C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252350:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002523B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002523A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252398; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00252388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002523C8; } }
    c.budget -= 1;
L_00252388:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002523C8; } }
L_00252398:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002523C8; } }
L_002523A8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4352ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002523C8; } }
L_002523B8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8448ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002523C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1813u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_002523F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00252908; } }
    c.f[1] = ld32((c.r[4].w[0] + 1088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252908; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252908; } }
    st32((c.r[18].w[0] + 1920u), c.r[4].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00252438:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_00252450; } }
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_00252450:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00252438u | kUnwind; return; } goto L_00252438; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0025247C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0025247C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524A0u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002524A0u) [[unlikely]] return; }
L_002524A0:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 384u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_002524D8; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252500; } }
    c.budget -= 1;
L_002524D8:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1808u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 45u);
    c.r[5].d[0] = c.r[5].d[0] | 512ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252500:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252518:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00252558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252534u);  if (depth < kMaxDepth) unit_0054(c, 259u, depth + 1u); else { c.pc = 0x00253670u; return; } if (c.pc != 0x00252534u) [[unlikely]] return; }
L_00252534:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025254Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x0025254Cu) [[unlikely]] return; }
L_0025254C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252558:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002525C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002525B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002525A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252908; } }
L_00252590:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002525A0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002525B0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4352ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002525C0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8448ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002525D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00252628; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002525F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252908; } }
L_002525F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252608; } }
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252908; } }
L_00252608:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00252908; } }
L_00252628:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252908; } }
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252648:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00252908; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18432u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00250000u < 16384u) { entry = entries_0054[(t - 0x00250000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00252670:
    set32(c.r[3], ld32((c.r[18].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002526B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002526A0; } }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002526A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_002526B0:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 60u);
    c.r[5].d[0] = c.r[5].d[0] | 768ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002526D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002526E8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002526E8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252908; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252710:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252908; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1813u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00252908; } }
L_00252740:
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252750:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_00252780; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252780; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_00252780:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_002527B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002527B0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002527B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_002527E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002527E0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002527E0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_00252810; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252810; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_00252810:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
    c.budget -= 1;
L_00252820:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_00252848; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252848; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002528A8; } }
    c.budget -= 1;
L_00252848:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_00252870; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252870; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002528A8; } }
    c.budget -= 1;
L_00252870:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_00252898; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252898; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002528A8; } }
    c.budget -= 1;
L_00252898:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002528A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252908; } }
L_002528B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002528C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002528D8; } }
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_002528D8:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002528C0u | kUnwind; return; } goto L_002528C0; } }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00252908; } }
    st8((c.r[18].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00252908:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00252930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025291Cu);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x0025291Cu) [[unlikely]] return; }
L_0025291C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_00252948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252948; } }
    c.budget -= 1;
L_00252930:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00252948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00252960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00252970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00252C58; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00252BE0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00252B48; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002529E8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002529B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252D08; } }
L_002529B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002529C8u);  if (depth < kMaxDepth) unit_0054(c, 267u, depth + 1u); else { c.pc = 0x00253770u; return; } if (c.pc != 0x002529C8u) [[unlikely]] return; }
L_002529C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002529E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x002529E0u) [[unlikely]] return; }
L_002529E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252D08; } }
L_002529E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252A00; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00252A00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00252A20; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x00252A18u) [[unlikely]] return; }
L_00252A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252A30; } }
L_00252A20:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A30u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x00252A30u) [[unlikely]] return; }
L_00252A30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00252B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A44u);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x00252A44u) [[unlikely]] return; }
L_00252A44:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252B20; } }
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252B20; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);  if (t) { goto L_00252B20; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 24576u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 99u, depth + 1u); else { c.pc = 0x00196000u; return; } if (c.pc != 0x00252A94u) [[unlikely]] return; }
L_00252A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252AB8; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00252B08; } }
    c.budget -= 1;
L_00252AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252AD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 99u, depth + 1u); else { c.pc = 0x00196000u; return; } if (c.pc != 0x00252AD0u) [[unlikely]] return; }
L_00252AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252AF0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00252B08; } }
L_00252AF0:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00252B08:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00252B20; } }
L_00252B18:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00252B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252B28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 259u, depth + 1u); else { c.pc = 0x00253670u; return; } if (c.pc != 0x00252B28u) [[unlikely]] return; }
L_00252B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252B40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00252B40u) [[unlikely]] return; }
L_00252B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252D08; } }
L_00252B48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00252BA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252D08; } }
L_00252B68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252B80; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252D08; } }
L_00252B80:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252D08; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252D08; } }
L_00252BA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252BD0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252D08; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252D08; } }
L_00252BD0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252D08; } }
    c.budget -= 1;
L_00252BE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00252C38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252D08; } }
L_00252C00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C18; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252D08; } }
L_00252C18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00252D08; } }
L_00252C38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252D08; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252D08; } }
    c.budget -= 1;
L_00252C58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00252CB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252D08; } }
L_00252C78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C90; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252D08; } }
L_00252C90:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252D08; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00252D08; } }
    c.budget -= 1;
L_00252CB8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252CD8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252D08; } }
    c.budget -= 1;
L_00252CD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252D00; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252D08; } }
    c.budget -= 1;
L_00252D00:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00252D08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00252D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252D1Cu);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x00252D1Cu) [[unlikely]] return; }
L_00252D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_00252D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252D48; } }
    c.budget -= 1;
L_00252D30:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00252D48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00252D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00252FC0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00252F48; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00252DD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00252DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253050; } }
L_00252DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DB0u);  if (depth < kMaxDepth) unit_0054(c, 267u, depth + 1u); else { c.pc = 0x00253770u; return; } if (c.pc != 0x00252DB0u) [[unlikely]] return; }
L_00252DB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00252DC8u) [[unlikely]] return; }
L_00252DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253050; } }
L_00252DD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252DE8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00252DE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00252E08; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x00252E00u) [[unlikely]] return; }
L_00252E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252E18; } }
L_00252E08:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E18u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x00252E18u) [[unlikely]] return; }
L_00252E18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00252F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E2Cu);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x00252E2Cu) [[unlikely]] return; }
L_00252E2C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00252F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E40u);  if (depth < kMaxDepth) unit_0053(c, 116u, depth + 1u); else { c.pc = 0x0024DEB0u; return; } if (c.pc != 0x00252E40u) [[unlikely]] return; }
L_00252E40:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00252F20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252F20; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_00252F20; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 99u, depth + 1u); else { c.pc = 0x00196000u; return; } if (c.pc != 0x00252E94u) [[unlikely]] return; }
L_00252E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252EB8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00252F08; } }
    c.budget -= 1;
L_00252EB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252ED0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 99u, depth + 1u); else { c.pc = 0x00196000u; return; } if (c.pc != 0x00252ED0u) [[unlikely]] return; }
L_00252ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252EF0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00252F08; } }
L_00252EF0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00252F08:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00252F20; } }
L_00252F18:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00252F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 259u, depth + 1u); else { c.pc = 0x00253670u; return; } if (c.pc != 0x00252F28u) [[unlikely]] return; }
L_00252F28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00252F40u) [[unlikely]] return; }
L_00252F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253050; } }
L_00252F48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00252FA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253050; } }
L_00252F68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252F80; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00253050; } }
L_00252F80:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00253050; } }
L_00252FA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253050; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00253050; } }
    c.budget -= 1;
L_00252FC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00253020; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253050; } }
L_00252FE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252FF8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00253050; } }
L_00252FF8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253050; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00253050; } }
L_00253020:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253048; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253050; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00253050; } }
L_00253048:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00253050:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00253078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253064u);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x00253064u) [[unlikely]] return; }
L_00253064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_00253090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00253090; } }
    c.budget -= 1;
L_00253078:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00253090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002530A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002530B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002530C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002532C0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00253130; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00253100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253330; } }
    c.budget -= 1;
L_00253100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253110u);  if (depth < kMaxDepth) unit_0054(c, 267u, depth + 1u); else { c.pc = 0x00253770u; return; } if (c.pc != 0x00253110u) [[unlikely]] return; }
L_00253110:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00253128u) [[unlikely]] return; }
L_00253128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253330; } }
L_00253130:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253148; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00253148:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00253168; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253160u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x00253160u) [[unlikely]] return; }
L_00253160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253178; } }
L_00253168:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253178u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x00253178u) [[unlikely]] return; }
L_00253178:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00253290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025318Cu);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x0025318Cu) [[unlikely]] return; }
L_0025318C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253298; } }
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00253298; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);  if (t) { goto L_00253298; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002531DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 99u, depth + 1u); else { c.pc = 0x00196000u; return; } if (c.pc != 0x002531DCu) [[unlikely]] return; }
L_002531DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253298; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_002531F8; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_002531F8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025321Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025321Cu) [[unlikely]] return; }
L_0025321C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00253268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253278; } }
L_00253258:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00253278; } }
L_00253268:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00253278:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00253298; } }
L_00253290:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00253298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 259u, depth + 1u); else { c.pc = 0x00253670u; return; } if (c.pc != 0x002532A0u) [[unlikely]] return; }
L_002532A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x002532B8u) [[unlikely]] return; }
L_002532B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253330; } }
L_002532C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00253318; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002532E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253330; } }
L_002532E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002532F8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00253330; } }
L_002532F8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00253330; } }
L_00253318:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253330; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00253330:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00253358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253344u);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x00253344u) [[unlikely]] return; }
L_00253344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_00253370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00253370; } }
    c.budget -= 1;
L_00253358:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00253370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00253390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002533A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002535A0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00253410; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002533E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253610; } }
    c.budget -= 1;
L_002533E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002533F0u);  if (depth < kMaxDepth) unit_0054(c, 267u, depth + 1u); else { c.pc = 0x00253770u; return; } if (c.pc != 0x002533F0u) [[unlikely]] return; }
L_002533F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00253408u) [[unlikely]] return; }
L_00253408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253610; } }
L_00253410:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253428; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00253428:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00253448; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 126u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x00253440u) [[unlikely]] return; }
L_00253440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253458; } }
L_00253448:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253458u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x00253458u) [[unlikely]] return; }
L_00253458:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00253570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025346Cu);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x0025346Cu) [[unlikely]] return; }
L_0025346C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253578; } }
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00253578; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);  if (t) { goto L_00253578; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 99u, depth + 1u); else { c.pc = 0x00196000u; return; } if (c.pc != 0x002534BCu) [[unlikely]] return; }
L_002534BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253578; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_002534D8; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_002534D8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534FCu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002534FCu) [[unlikely]] return; }
L_002534FC:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 128u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00253548; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253558; } }
L_00253538:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00253558; } }
L_00253548:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00253558:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00253578; } }
L_00253570:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00253578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253580u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 259u, depth + 1u); else { c.pc = 0x00253670u; return; } if (c.pc != 0x00253580u) [[unlikely]] return; }
L_00253580:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 277u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00253598u) [[unlikely]] return; }
L_00253598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253610; } }
L_002535A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002535F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002535C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253610; } }
L_002535C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002535D8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00253610; } }
L_002535D8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00253610; } }
L_002535F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253610; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00253610:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00253638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253624u);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x00253624u) [[unlikely]] return; }
L_00253624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_00253650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00253650; } }
    c.budget -= 1;
L_00253638:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00253650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00253670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1920u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253688u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 283u, depth + 1u); else { c.pc = 0x00253B30u; return; } if (c.pc != 0x00253688u) [[unlikely]] return; }
L_00253688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 321u, depth + 1u); else { c.pc = 0x0024FC20u; return; } if (c.pc != 0x00253690u) [[unlikely]] return; }
L_00253690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253698u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00253698u) [[unlikely]] return; }
L_00253698:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x002536A8u) [[unlikely]] return; }
L_002536A8:
    set32(c.r[4], c.r[16].w[0] + 1856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536B4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002536B4u) [[unlikely]] return; }
L_002536B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536BCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x002536BCu) [[unlikely]] return; }
L_002536BC:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536C8u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002536C8u) [[unlikely]] return; }
L_002536C8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 61440ull;  if (t) { goto L_002536F0; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253728; } }
    c.budget -= 1;
L_002536F0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00253758; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 30u);  if (t) { goto L_00253758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00253758; } }
    c.budget -= 1;
L_00253728:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00253748; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00253758; } }
L_00253748:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00253758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00253770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1816u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_00253838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537A0u);  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194800u; return; } if (c.pc != 0x002537A0u) [[unlikely]] return; }
L_002537A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253828; } }
    st32((c.r[16].w[0] + 1920u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 300u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 1920u)));
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537F0u); st32((c.r[16].w[0] + 1824u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002537F0u) [[unlikely]] return; }
L_002537F0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1832u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253818u); st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0054(c, 283u, depth + 1u); else { c.pc = 0x00253B30u; return; } if (c.pc != 0x00253818u) [[unlikely]] return; }
L_00253818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 321u, depth + 1u); else { c.pc = 0x0024FC20u; return; } if (c.pc != 0x00253820u) [[unlikely]] return; }
L_00253820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253860; } }
L_00253828:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00253860; } }
    c.budget -= 1;
L_00253838:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1816u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00253860; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00253860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00253880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1816u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_00253948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002538B0u);  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194800u; return; } if (c.pc != 0x002538B0u) [[unlikely]] return; }
L_002538B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253938; } }
    st32((c.r[16].w[0] + 1920u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 300u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 1920u)));
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253900u); st32((c.r[16].w[0] + 1824u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00253900u) [[unlikely]] return; }
L_00253900:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1832u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253928u); st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0054(c, 283u, depth + 1u); else { c.pc = 0x00253B30u; return; } if (c.pc != 0x00253928u) [[unlikely]] return; }
L_00253928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 321u, depth + 1u); else { c.pc = 0x0024FC20u; return; } if (c.pc != 0x00253930u) [[unlikely]] return; }
L_00253930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253970; } }
L_00253938:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00253970; } }
    c.budget -= 1;
L_00253948:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1816u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00253970; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00253970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00253990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1810u)));
    c.f[21] = c.f[12];
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[13];  if (t) { goto L_00253A78; } }
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[4], c.r[19].w[0] + 8592u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002539ECu);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002539ECu) [[unlikely]] return; }
L_002539EC:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.budget -= 3;
L_002539F8:
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[17].w[0]), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A10u); st32((c.r[16].w[0]), c.f[21]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00253A10u) [[unlikely]] return; }
L_00253A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A18u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x00253A18u) [[unlikely]] return; }
L_00253A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253A68; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A2Cu); st16((c.r[19].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00253A2Cu) [[unlikely]] return; }
L_00253A2C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00253A48; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00253A68; } }
L_00253A48:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2048u);  if (t) { goto L_00253A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00253A68; } }
    c.budget -= 1;
L_00253A60:
    set32(c.r[2], 0u + 1024u);
    st16((c.r[19].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00253A68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::add(c.f[21], c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002539F8u | kUnwind; return; } goto L_002539F8; } }
L_00253A78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_00253AF8; } }
    st16((c.r[19].w[0] + 1810u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 4096u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1952u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253AB0; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 1808u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] | 4096ull;  if (t) { goto L_00253AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00253AF0; } }
L_00253AB0:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253AD8; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 1808u));
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] | 2048ull;  if (t) { goto L_00253AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00253AF0; } }
    c.budget -= 1;
L_00253AD8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 1808u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] | 1024ull;  if (t) { goto L_00253AF0; } }
    st16((c.r[19].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00253AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00253B00; } }
L_00253AF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00253B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00253B30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1940u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29024u);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00253BC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B84u); st32((c.r[17].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00253B84u) [[unlikely]] return; }
L_00253B84:
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[18], c.r[29].w[0] + 68u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 1824u));
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BA8u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00253BA8u) [[unlikely]] return; }
L_00253BA8:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1864u), c.f[0]);  if (t) { goto L_00253C50; } }
    c.budget -= 1;
L_00253BC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 144u);  if (t) { goto L_00253C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BD8u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00253BD8u) [[unlikely]] return; }
L_00253BD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BE8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00253BE8u) [[unlikely]] return; }
L_00253BE8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BF4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00253BF4u) [[unlikely]] return; }
L_00253BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BFCu); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00253BFCu) [[unlikely]] return; }
L_00253BFC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[14] = ld32((c.r[16].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C14u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00253C14u) [[unlikely]] return; }
L_00253C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C1Cu); set32(c.r[4], ld32((c.r[17].w[0] + 1832u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00253C1Cu) [[unlikely]] return; }
L_00253C1C:
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0]), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 1824u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C38u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00253C38u) [[unlikely]] return; }
L_00253C38:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 1864u), c.f[0]);
    c.budget -= 6;
L_00253C50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00253C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00253C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253D48; } }
L_00253C90:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253CA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253D48; } }
L_00253CA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253D48; } }
    c.budget -= 1;
L_00253CC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00253CE8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253D48; } }
    c.budget -= 1;
L_00253CE8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] & 4160ull;  if (t) { goto L_00253D08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253D48; } }
L_00253D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 1u, depth + 1u); else { c.pc = 0x00254000u; return; } if (c.pc != 0x00253D10u) [[unlikely]] return; }
L_00253D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00253D48; } }
L_00253D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 301u, depth + 1u); else { c.pc = 0x00253EB0u; return; } if (c.pc != 0x00253D28u) [[unlikely]] return; }
L_00253D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00253D48; } }
L_00253D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 297u, depth + 1u); else { c.pc = 0x00253D60u; return; } if (c.pc != 0x00253D40u) [[unlikely]] return; }
L_00253D40:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00253D48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00253D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00253D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253E98; } }
    c.budget -= 1;
L_00253D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 96u, depth + 1u); else { c.pc = 0x001F0BA0u; return; } if (c.pc != 0x00253D90u) [[unlikely]] return; }
L_00253D90:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00253DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253E98; } }
    c.budget -= 1;
L_00253DA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253E20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8677u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253E08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253DE0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253DE8; } }
L_00253DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253E98; } }
L_00253DE8:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_00253E98; } }
    c.budget -= 1;
L_00253E08:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253E98; } }
    c.budget -= 1;
L_00253E20:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253E40; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_00253E58; } }
L_00253E40:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253E98; } }
L_00253E58:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 753u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + 12944u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8677u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00253E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 5u, depth + 1u); else { c.pc = 0x00254150u; return; } if (c.pc != 0x00253E88u) [[unlikely]] return; }
L_00253E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253E98; } }
L_00253E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 9u, depth + 1u); else { c.pc = 0x00254260u; return; } if (c.pc != 0x00253E98u) [[unlikely]] return; }
L_00253E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00253EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00253ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253FF0; } }
    c.budget -= 1;
L_00253ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253EE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 96u, depth + 1u); else { c.pc = 0x001F0BA0u; return; } if (c.pc != 0x00253EE0u) [[unlikely]] return; }
L_00253EE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00253EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253FF0; } }
    c.budget -= 1;
L_00253EF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253F70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8678u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253F58; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253F30; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253F38; } }
L_00253F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253FF0; } }
L_00253F38:
    c.r[2].d[0] = c.r[3].d[0] & 18ull;
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 64u);
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_00253FF0; } }
L_00253F58:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253FF0; } }
    c.budget -= 1;
L_00253F70:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253F90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_00253FA8; } }
L_00253F90:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00253FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253FF0; } }
L_00253FA8:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 753u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 13008u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8678u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00253FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 5u, depth + 1u); else { c.pc = 0x00254150u; return; } if (c.pc != 0x00253FDCu) [[unlikely]] return; }
L_00253FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253FF0; } }
    c.budget -= 1;
L_00253FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 9u, depth + 1u); else { c.pc = 0x00254260u; return; } if (c.pc != 0x00253FF0u) [[unlikely]] return; }
L_00253FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
}

}
